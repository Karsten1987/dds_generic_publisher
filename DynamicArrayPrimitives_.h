

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from DynamicArrayPrimitives_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef DynamicArrayPrimitives__67051174_h
#define DynamicArrayPrimitives__67051174_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

extern "C" {

    extern const char *test_msgs_msg_dds__DynamicArrayPrimitives_TYPENAME;

}

struct test_msgs_msg_dds__DynamicArrayPrimitives_Seq;
#ifndef NDDS_STANDALONE_TYPE
class test_msgs_msg_dds__DynamicArrayPrimitives_TypeSupport;
class test_msgs_msg_dds__DynamicArrayPrimitives_DataWriter;
class test_msgs_msg_dds__DynamicArrayPrimitives_DataReader;
#endif

class test_msgs_msg_dds__DynamicArrayPrimitives_ 
{
  public:
    typedef struct test_msgs_msg_dds__DynamicArrayPrimitives_Seq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef test_msgs_msg_dds__DynamicArrayPrimitives_TypeSupport TypeSupport;
    typedef test_msgs_msg_dds__DynamicArrayPrimitives_DataWriter DataWriter;
    typedef test_msgs_msg_dds__DynamicArrayPrimitives_DataReader DataReader;
    #endif

    DDS_Char *   my_key ;
    DDS_BooleanSeq  bool_values_ ;
    DDS_OctetSeq  byte_values_ ;
    DDS_CharSeq  char_values_ ;
    DDS_FloatSeq  float32_values_ ;
    DDS_DoubleSeq  float64_values_ ;
    DDS_OctetSeq  int8_values_ ;
    DDS_OctetSeq  uint8_values_ ;
    DDS_ShortSeq  int16_values_ ;
    DDS_UnsignedShortSeq  uint16_values_ ;
    DDS_LongSeq  int32_values_ ;
    DDS_UnsignedLongSeq  uint32_values_ ;
    DDS_LongLongSeq  int64_values_ ;
    DDS_UnsignedLongLongSeq  uint64_values_ ;
    DDS_StringSeq  string_values_ ;
    DDS_Long   check_ ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

NDDSUSERDllExport DDS_TypeCode* test_msgs_msg_dds__DynamicArrayPrimitives__get_typecode(void); /* Type code */

DDS_SEQUENCE(test_msgs_msg_dds__DynamicArrayPrimitives_Seq, test_msgs_msg_dds__DynamicArrayPrimitives_);

NDDSUSERDllExport
RTIBool test_msgs_msg_dds__DynamicArrayPrimitives__initialize(
    test_msgs_msg_dds__DynamicArrayPrimitives_* self);

NDDSUSERDllExport
RTIBool test_msgs_msg_dds__DynamicArrayPrimitives__initialize_ex(
    test_msgs_msg_dds__DynamicArrayPrimitives_* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool test_msgs_msg_dds__DynamicArrayPrimitives__initialize_w_params(
    test_msgs_msg_dds__DynamicArrayPrimitives_* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
void test_msgs_msg_dds__DynamicArrayPrimitives__finalize(
    test_msgs_msg_dds__DynamicArrayPrimitives_* self);

NDDSUSERDllExport
void test_msgs_msg_dds__DynamicArrayPrimitives__finalize_ex(
    test_msgs_msg_dds__DynamicArrayPrimitives_* self,RTIBool deletePointers);

NDDSUSERDllExport
void test_msgs_msg_dds__DynamicArrayPrimitives__finalize_w_params(
    test_msgs_msg_dds__DynamicArrayPrimitives_* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void test_msgs_msg_dds__DynamicArrayPrimitives__finalize_optional_members(
    test_msgs_msg_dds__DynamicArrayPrimitives_* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool test_msgs_msg_dds__DynamicArrayPrimitives__copy(
    test_msgs_msg_dds__DynamicArrayPrimitives_* dst,
    const test_msgs_msg_dds__DynamicArrayPrimitives_* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* DynamicArrayPrimitives_ */

