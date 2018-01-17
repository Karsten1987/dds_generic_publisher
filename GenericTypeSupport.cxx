
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
  DDSTypeSupport * dds_data_type = NULL;
  struct PRESTypePlugin * presTypePlugin = NULL;
  DDS_ReturnCode_t retcode = DDS_RETCODE_ERROR;
  DDS_Boolean delete_data_type = DDS_BOOLEAN_FALSE;
  RTIBool already_registered = RTI_FALSE;

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

  dds_data_type = new GenericTypeTypeSupport(true);
  if (dds_data_type == NULL) {
    fprintf(stderr, "Error while registering external type\n");
    goto finError;
  }
  delete_data_type = RTI_TRUE;

  presTypePlugin->_userBuffer = (PRESWord *)dds_data_type;
  already_registered = participant->is_type_registered(type_name);

  retcode = participant->register_type(type_name, presTypePlugin, NULL, !already_registered);
  //retcode = DDS_DomainParticipant_register_type(
  //    participant,
  //    type_name,
  //    presTypePlugin,
  //    NULL /* registration_data */);
  if (retcode != DDS_RETCODE_OK) {
    fprintf(stderr, "error while registering external type\n");
    goto finError;
  }

  if (!already_registered) {
    delete_data_type = DDS_BOOLEAN_FALSE;
  }

  retcode = DDS_RETCODE_OK;

finError:
  if (presTypePlugin != NULL) {
    GenericTypePlugin_delete(presTypePlugin);
  }
  if (delete_data_type) {
    delete (GenericTypeTypeSupport *)dds_data_type;
    dds_data_type = NULL;
  }

  return retcode;
}
