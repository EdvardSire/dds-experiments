/****************************************************************

  Generated by Eclipse Cyclone DDS IDL to C Translator
  File name: dds-fmu.h
  Source: /dds-fmu.idl
  Cyclone DDS: V0.11.0

*****************************************************************/
#ifndef DDSC_DDS_FMU_H_FDEE5CD2625E717B32C7C978CF419354
#define DDSC_DDS_FMU_H_FDEE5CD2625E717B32C7C978CF419354

#include "dds/ddsc/dds_public_impl.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct idl_Signal
{
  bool is_pos;
} idl_Signal;

extern const dds_topic_descriptor_t idl_Signal_desc;

#define idl_Signal__alloc() \
((idl_Signal*) dds_alloc (sizeof (idl_Signal)));

#define idl_Signal_free(d,o) \
dds_sample_free ((d), &idl_Signal_desc, (o))

#ifdef __cplusplus
}
#endif

#endif /* DDSC_DDS_FMU_H_FDEE5CD2625E717B32C7C978CF419354 */
