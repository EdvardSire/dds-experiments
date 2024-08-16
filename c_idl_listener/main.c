#include <dds/dds.h>
#include <dds/ddsc/dds_public_qos.h>
#include "dds-fmu.h"


int main() {
    dds_entity_t participant = dds_create_participant(DDS_DOMAIN_DEFAULT, NULL, NULL);
    dds_qos_t *qos = dds_create_qos();
    dds_qset_reliability(qos, DDS_RELIABILITY_RELIABLE, 3);
    dds_entity_t topic = dds_create_topic(participant, &idl_Signal_desc, "Roundtrip", qos, NULL);
    dds_entity_t reader = dds_create_reader(participant, topic, NULL, NULL);

    idl_Signal msg;
    void* samples[1];
    dds_sample_info_t infos[1];
    samples[0] = &msg;

    while (true) {
        dds_return_t rc = dds_read(reader, samples, infos, 1, 1);
        if (rc > 0 && (infos[0].valid_data)) {
          printf("Received data: %d \n", msg.is_pos);
        } else {
            printf("No data received or invalid data.\n");
        }
    }

    dds_delete(participant);

    return 0;

}
