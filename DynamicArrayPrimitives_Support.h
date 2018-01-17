
/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from DynamicArrayPrimitives_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef DynamicArrayPrimitives_Support_67051174_h
#define DynamicArrayPrimitives_Support_67051174_h

/* Uses */
#include "DynamicArrayPrimitives_.h"

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

DDS_TYPESUPPORT_CPP(
    test_msgs_msg_dds__DynamicArrayPrimitives_TypeSupport, 
    test_msgs_msg_dds__DynamicArrayPrimitives_);

DDS_DATAWRITER_CPP(test_msgs_msg_dds__DynamicArrayPrimitives_DataWriter, test_msgs_msg_dds__DynamicArrayPrimitives_);
DDS_DATAREADER_CPP(test_msgs_msg_dds__DynamicArrayPrimitives_DataReader, test_msgs_msg_dds__DynamicArrayPrimitives_Seq, test_msgs_msg_dds__DynamicArrayPrimitives_);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif  /* DynamicArrayPrimitives_Support_67051174_h */

