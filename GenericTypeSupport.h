
/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GenericType.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef GenericTypeSupport_1067794822_h
#define GenericTypeSupport_1067794822_h

/* Uses */
#include "GenericType.h"

#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)

class __declspec(dllimport) DDSTypeSupport;
class __declspec(dllimport) DDSDataWriter;
class __declspec(dllimport) DDSDataReader;

#endif

/* ========================================================================= */
/**
Uses:     T

Defines:  TTypeSupport, TDataWriter, TDataReader

Organized using the well-documented "Generics Pattern" for
implementing generics in C and C++.
*/

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)

#endif

// TODO(Karsten1987): This has to be disabled as it generates a class def
//DDS_TYPESUPPORT_CPP(
//    GenericTypeTypeSupport,
//    GenericType);

class NDDSUSERDllExport DDSCPPDllExport GenericTypeTypeSupport : public ::DDSTypeSupport
{
public:
  GenericTypeTypeSupport(bool osrf) {};

  ~GenericTypeTypeSupport();

  static DDS_ReturnCode_t register_type(
      DDSDomainParticipant* participant,
      const char* type_name = "GenericType");

  static DDS_ReturnCode_t unregister_type(
      DDSDomainParticipant* participant,
      const char* type_name = "GenericType");

  static const char* get_type_name();

  static GenericType* create_data_ex(DDS_Boolean allocatePointers);

  static GenericType* create_data(
      const DDS_TypeAllocationParams_t & alloc_params =
      DDS_TYPE_ALLOCATION_PARAMS_DEFAULT);

  static DDS_ReturnCode_t delete_data_ex(GenericType* a_data,
      DDS_Boolean deletePointers);

  static DDS_ReturnCode_t delete_data(
      GenericType* a_data,
      const DDS_TypeDeallocationParams_t & dealloc_params =
      DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT);

  static void print_data(const GenericType* a_data);

  static DDS_ReturnCode_t copy_data(GenericType* dst_data, const GenericType* src_data);

  static DDS_ReturnCode_t initialize_data_ex(GenericType* a_data,
      DDS_Boolean allocatePointers);

  static DDS_ReturnCode_t initialize_data(
      GenericType* a_data,
      const DDS_TypeAllocationParams_t & alloc_params =
      DDS_TYPE_ALLOCATION_PARAMS_DEFAULT);

  static DDS_ReturnCode_t finalize_data_ex(GenericType* a_data,
      DDS_Boolean deletePointers);
  static DDS_ReturnCode_t finalize_data(
      GenericType* a_data,
      const DDS_TypeDeallocationParams_t & dealloc_params =
      DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT);

  DDSDataReader* create_datareaderI(DDSDataReader* dataReader);
  DDS_ReturnCode_t destroy_datareaderI(DDSDataReader* dataReader);
  DDSDataWriter* create_datawriterI(DDSDataWriter* dataWriter);
  DDS_ReturnCode_t destroy_datawriterI(DDSDataWriter* dataWriter);

  static DDS_TypeCode* get_typecode();

  static DDS_ReturnCode_t serialize_data_to_cdr_buffer(
      char * buffer,
      unsigned int & length,
      const GenericType *a_data);

  static DDS_ReturnCode_t deserialize_data_from_cdr_buffer(
      GenericType *a_data,
      const char * buffer,
      unsigned int length);

  static DDS_ReturnCode_t data_to_string(
      GenericType *sample,
      char *str,
      DDS_UnsignedLong& str_size,
      const DDS_PrintFormatProperty& property);

  static void finalize();

private:
  GenericTypeTypeSupport();
};


DDS_DATAWRITER_CPP(GenericTypeDataWriter, GenericType);
DDS_DATAREADER_CPP(GenericTypeDataReader, GenericTypeSeq, GenericType);

NDDSUSERDllExport
DDS_ReturnCode_t
GenericTypeSupport_register_external_type(
  DDSDomainParticipant * participant,
  const char * type_name,
  struct DDS_TypeCode * type_code);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif  /* GenericTypeSupport_1067794822_h */

