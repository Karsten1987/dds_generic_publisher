
/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from DynamicArrayPrimitives_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#include "DynamicArrayPrimitives_Support.h"
#include "DynamicArrayPrimitives_Plugin.h"

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

Configure and implement 'test_msgs_msg_dds__DynamicArrayPrimitives_' support classes.

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
#define TTYPENAME   test_msgs_msg_dds__DynamicArrayPrimitives_TYPENAME

/* Defines */
#define TDataWriter test_msgs_msg_dds__DynamicArrayPrimitives_DataWriter
#define TData       test_msgs_msg_dds__DynamicArrayPrimitives_

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
#define TTYPENAME   test_msgs_msg_dds__DynamicArrayPrimitives_TYPENAME

/* Defines */
#define TDataReader test_msgs_msg_dds__DynamicArrayPrimitives_DataReader
#define TDataSeq    test_msgs_msg_dds__DynamicArrayPrimitives_Seq
#define TData       test_msgs_msg_dds__DynamicArrayPrimitives_

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
#define TTYPENAME    test_msgs_msg_dds__DynamicArrayPrimitives_TYPENAME
#define TPlugin_new  test_msgs_msg_dds__DynamicArrayPrimitives_Plugin_new
#define TPlugin_delete  test_msgs_msg_dds__DynamicArrayPrimitives_Plugin_delete

/* Defines */
#define TTypeSupport test_msgs_msg_dds__DynamicArrayPrimitives_TypeSupport
#define TData        test_msgs_msg_dds__DynamicArrayPrimitives_
#define TDataReader  test_msgs_msg_dds__DynamicArrayPrimitives_DataReader
#define TDataWriter  test_msgs_msg_dds__DynamicArrayPrimitives_DataWriter
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

