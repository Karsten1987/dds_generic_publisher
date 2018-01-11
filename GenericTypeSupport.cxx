
/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GenericType.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#include "GenericTypeSupport.h"
#include "GenericTypePlugin.h"

#ifndef dds_c_log_impl_h              
#include "dds_c/dds_c_log_impl.h"                                
#endif        

/* ========================================================================= */
/**
<<IMPLEMENTATION>>

Defines:   TData,
TDataWriter,
TDataReader,
TTypeSupport

Configure and implement 'GenericType' support classes.

Note: Only the #defined classes get defined
*/

/* ----------------------------------------------------------------- */
/* DDSDataWriter
*/

/**
<<IMPLEMENTATION >>

Defines:   TDataWriter, TData
*/

/* Requires */
#define TTYPENAME   GenericTypeTYPENAME

/* Defines */
#define TDataWriter GenericTypeDataWriter
#define TData       GenericType

#include "dds_cpp/generic/dds_cpp_data_TDataWriter.gen"

#undef TDataWriter
#undef TData

#undef TTYPENAME

/* ----------------------------------------------------------------- */
/* DDSDataReader
*/

/**
<<IMPLEMENTATION >>

Defines:   TDataReader, TDataSeq, TData
*/

/* Requires */
#define TTYPENAME   GenericTypeTYPENAME

/* Defines */
#define TDataReader GenericTypeDataReader
#define TDataSeq    GenericTypeSeq
#define TData       GenericType

#include "dds_cpp/generic/dds_cpp_data_TDataReader.gen"

#undef TDataReader
#undef TDataSeq
#undef TData

#undef TTYPENAME

/* ----------------------------------------------------------------- */
/* TypeSupport

<<IMPLEMENTATION >>

Requires:  TTYPENAME,
TPlugin_new
TPlugin_delete
Defines:   TTypeSupport, TData, TDataReader, TDataWriter
*/

/* Requires */
#define TTYPENAME    GenericTypeTYPENAME
#define TPlugin_new  GenericTypePlugin_new
#define TPlugin_delete  GenericTypePlugin_delete

/* Defines */
#define TTypeSupport GenericTypeTypeSupport
#define TData        GenericType
#define TDataReader  GenericTypeDataReader
#define TDataWriter  GenericTypeDataWriter
#define TGENERATE_SER_CODE
#define TGENERATE_TYPECODE

#include "dds_cpp/generic/dds_cpp_data_TTypeSupport.gen"

#undef TTypeSupport
#undef TData
#undef TDataReader
#undef TDataWriter
#undef TGENERATE_TYPECODE
#undef TGENERATE_SER_CODE
#undef TTYPENAME
#undef TPlugin_new
#undef TPlugin_delete

DDS_ReturnCode_t
GenericTypeSupport_register_external_type(
  DDSDomainParticipant * participant,
  const char * type_name,
  struct DDS_TypeCode * type_code)
{
  struct PRESTypePlugin * presTypePlugin = NULL;
  DDS_ReturnCode_t retcode = DDS_RETCODE_ERROR;

  if (type_code == NULL) {
    goto finError;
  }

  if (participant == NULL) {
    goto finError;
  }

  /* TODO pass the type_code */
  presTypePlugin = GenericTypePlugin_new_external(type_code);
  if (presTypePlugin == NULL) {
    goto finError;
  }

  retcode = participant->register_type(type_name, presTypePlugin, NULL, RTI_TRUE);
  //retcode = DDS_DomainParticipant_register_type(
  //    participant,
  //    type_name,
  //    presTypePlugin,
  //    NULL /* registration_data */);
  if (retcode != DDS_RETCODE_OK) {
    goto finError;
  }
  return DDS_RETCODE_OK;

finError:
  if (presTypePlugin != NULL) {
    GenericTypePlugin_delete(presTypePlugin);
  }

  return retcode;
}
