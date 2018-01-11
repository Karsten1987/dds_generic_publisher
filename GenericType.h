

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GenericType.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef GenericType_1067794822_h
#define GenericType_1067794822_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

static const DDS_Long KEY_HASH_LENGTH_16= 16;
extern "C" {

    extern const char *GenericTypeTYPENAME;

}

struct GenericTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class GenericTypeTypeSupport;
class GenericTypeDataWriter;
class GenericTypeDataReader;
#endif

class GenericType 
{
  public:
    typedef struct GenericTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef GenericTypeTypeSupport TypeSupport;
    typedef GenericTypeDataWriter DataWriter;
    typedef GenericTypeDataReader DataReader;
    #endif

    DDS_Octet   key_hash [(KEY_HASH_LENGTH_16)];
    DDS_OctetSeq  serialized_key ;
    DDS_OctetSeq  serialized_data ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

NDDSUSERDllExport DDS_TypeCode* GenericType_get_typecode(void); /* Type code */

DDS_SEQUENCE(GenericTypeSeq, GenericType);

NDDSUSERDllExport
RTIBool GenericType_initialize(
    GenericType* self);

NDDSUSERDllExport
RTIBool GenericType_initialize_ex(
    GenericType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool GenericType_initialize_w_params(
    GenericType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
void GenericType_finalize(
    GenericType* self);

NDDSUSERDllExport
void GenericType_finalize_ex(
    GenericType* self,RTIBool deletePointers);

NDDSUSERDllExport
void GenericType_finalize_w_params(
    GenericType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void GenericType_finalize_optional_members(
    GenericType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool GenericType_copy(
    GenericType* dst,
    const GenericType* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* GenericType */

