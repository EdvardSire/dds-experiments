/****************************************************************

  Generated by Eclipse Cyclone DDS IDL to C Translator
  File name: dds-fmu.c
  Source: /dds-fmu.idl
  Cyclone DDS: V0.11.0

*****************************************************************/
#include "dds-fmu.h"

static const uint32_t idl_Signal_ops [] =
{
  /* Signal */
  DDS_OP_ADR | DDS_OP_TYPE_BLN, offsetof (idl_Signal, is_pos),
  DDS_OP_RTS
};

/* Type Information:
  [MINIMAL 097e8aa72a1f0049c13674863476] (#deps: 0)
  [COMPLETE 6415ee30d30fb82b416782e81097] (#deps: 0)
*/
#define TYPE_INFO_CDR_idl_Signal (const unsigned char []){ \
  0x60, 0x00, 0x00, 0x00, 0x01, 0x10, 0x00, 0x40, 0x28, 0x00, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00, \
  0x14, 0x00, 0x00, 0x00, 0xf1, 0x09, 0x7e, 0x8a, 0xa7, 0x2a, 0x1f, 0x00, 0x49, 0xc1, 0x36, 0x74, \
  0x86, 0x34, 0x76, 0x00, 0x27, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, \
  0x00, 0x00, 0x00, 0x00, 0x02, 0x10, 0x00, 0x40, 0x28, 0x00, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00, \
  0x14, 0x00, 0x00, 0x00, 0xf2, 0x64, 0x15, 0xee, 0x30, 0xd3, 0x0f, 0xb8, 0x2b, 0x41, 0x67, 0x82, \
  0xe8, 0x10, 0x97, 0x00, 0x41, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, \
  0x00, 0x00, 0x00, 0x00\
}
#define TYPE_INFO_CDR_SZ_idl_Signal 100u
#define TYPE_MAP_CDR_idl_Signal (const unsigned char []){ \
  0x3b, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xf1, 0x09, 0x7e, 0x8a, 0xa7, 0x2a, 0x1f, 0x00, \
  0x49, 0xc1, 0x36, 0x74, 0x86, 0x34, 0x76, 0x00, 0x23, 0x00, 0x00, 0x00, 0xf1, 0x51, 0x01, 0x00, \
  0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x13, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, \
  0x0b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x01, 0xe1, 0xd6, 0xf5, 0x03, 0x00, \
  0x55, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xf2, 0x64, 0x15, 0xee, 0x30, 0xd3, 0x0f, 0xb8, \
  0x2b, 0x41, 0x67, 0x82, 0xe8, 0x10, 0x97, 0x00, 0x3d, 0x00, 0x00, 0x00, 0xf2, 0x51, 0x01, 0x00, \
  0x14, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x69, 0x64, 0x6c, 0x3a, \
  0x3a, 0x53, 0x69, 0x67, 0x6e, 0x61, 0x6c, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, \
  0x15, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x01, 0x00, 0x07, 0x00, 0x00, 0x00, \
  0x69, 0x73, 0x5f, 0x70, 0x6f, 0x73, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x22, 0x00, 0x00, 0x00, \
  0x01, 0x00, 0x00, 0x00, 0xf2, 0x64, 0x15, 0xee, 0x30, 0xd3, 0x0f, 0xb8, 0x2b, 0x41, 0x67, 0x82, \
  0xe8, 0x10, 0x97, 0xf1, 0x09, 0x7e, 0x8a, 0xa7, 0x2a, 0x1f, 0x00, 0x49, 0xc1, 0x36, 0x74, 0x86, \
  0x34, 0x76\
}
#define TYPE_MAP_CDR_SZ_idl_Signal 194u
const dds_topic_descriptor_t idl_Signal_desc =
{
  .m_size = sizeof (idl_Signal),
  .m_align = dds_alignof (idl_Signal),
  .m_flagset = DDS_TOPIC_FIXED_SIZE | DDS_TOPIC_XTYPES_METADATA,
  .m_nkeys = 0u,
  .m_typename = "idl::Signal",
  .m_keys = NULL,
  .m_nops = 2,
  .m_ops = idl_Signal_ops,
  .m_meta = "",
  .type_information = { .data = TYPE_INFO_CDR_idl_Signal, .sz = TYPE_INFO_CDR_SZ_idl_Signal },
  .type_mapping = { .data = TYPE_MAP_CDR_idl_Signal, .sz = TYPE_MAP_CDR_SZ_idl_Signal }
};

