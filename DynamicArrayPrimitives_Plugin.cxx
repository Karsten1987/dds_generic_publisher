
/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from DynamicArrayPrimitives_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#include <string.h>

#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif

#ifndef osapi_type_h
#include "osapi/osapi_type.h"
#endif
#ifndef osapi_heap_h
#include "osapi/osapi_heap.h"
#endif

#ifndef osapi_utility_h
#include "osapi/osapi_utility.h"
#endif

#ifndef cdr_type_h
#include "cdr/cdr_type.h"
#endif

#ifndef cdr_type_object_h
#include "cdr/cdr_typeObject.h"
#endif

#ifndef cdr_encapsulation_h
#include "cdr/cdr_encapsulation.h"
#endif

#ifndef cdr_stream_h
#include "cdr/cdr_stream.h"
#endif

#ifndef cdr_log_h
#include "cdr/cdr_log.h"
#endif

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#define RTI_CDR_CURRENT_SUBMODULE RTI_CDR_SUBMODULE_MASK_STREAM

#include <new>

#include "DynamicArrayPrimitives_Plugin.h"

/* ----------------------------------------------------------------------------
*  Type test_msgs_msg_dds__DynamicArrayPrimitives_
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

test_msgs_msg_dds__DynamicArrayPrimitives_*
test_msgs_msg_dds__DynamicArrayPrimitives_PluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params) 
{
    test_msgs_msg_dds__DynamicArrayPrimitives_ *sample = NULL;

    sample = new (std::nothrow) test_msgs_msg_dds__DynamicArrayPrimitives_ ;
    if (sample == NULL) {
        return NULL;
    }

    if (!test_msgs_msg_dds__DynamicArrayPrimitives__initialize_w_params(sample,alloc_params)) {
        delete  sample;
        sample=NULL;
    }
    return sample; 
} 

test_msgs_msg_dds__DynamicArrayPrimitives_ *
test_msgs_msg_dds__DynamicArrayPrimitives_PluginSupport_create_data_ex(RTIBool allocate_pointers) 
{
    test_msgs_msg_dds__DynamicArrayPrimitives_ *sample = NULL;

    sample = new (std::nothrow) test_msgs_msg_dds__DynamicArrayPrimitives_ ;

    if(sample == NULL) {
        return NULL;
    }

    if (!test_msgs_msg_dds__DynamicArrayPrimitives__initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
        delete  sample;
        sample=NULL;
    }

    return sample; 
}

test_msgs_msg_dds__DynamicArrayPrimitives_ *
test_msgs_msg_dds__DynamicArrayPrimitives_PluginSupport_create_data(void)
{
    return test_msgs_msg_dds__DynamicArrayPrimitives_PluginSupport_create_data_ex(RTI_TRUE);
}

void 
test_msgs_msg_dds__DynamicArrayPrimitives_PluginSupport_destroy_data_w_params(
    test_msgs_msg_dds__DynamicArrayPrimitives_ *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {

    test_msgs_msg_dds__DynamicArrayPrimitives__finalize_w_params(sample,dealloc_params);

    delete  sample;
    sample=NULL;
}

void 
test_msgs_msg_dds__DynamicArrayPrimitives_PluginSupport_destroy_data_ex(
    test_msgs_msg_dds__DynamicArrayPrimitives_ *sample,RTIBool deallocate_pointers) {

    test_msgs_msg_dds__DynamicArrayPrimitives__finalize_ex(sample,deallocate_pointers);

    delete  sample;
    sample=NULL;
}

void 
test_msgs_msg_dds__DynamicArrayPrimitives_PluginSupport_destroy_data(
    test_msgs_msg_dds__DynamicArrayPrimitives_ *sample) {

    test_msgs_msg_dds__DynamicArrayPrimitives_PluginSupport_destroy_data_ex(sample,RTI_TRUE);

}

RTIBool 
test_msgs_msg_dds__DynamicArrayPrimitives_PluginSupport_copy_data(
    test_msgs_msg_dds__DynamicArrayPrimitives_ *dst,
    const test_msgs_msg_dds__DynamicArrayPrimitives_ *src)
{
    return test_msgs_msg_dds__DynamicArrayPrimitives__copy(dst,(const test_msgs_msg_dds__DynamicArrayPrimitives_*) src);
}

void 
test_msgs_msg_dds__DynamicArrayPrimitives_PluginSupport_print_data(
    const test_msgs_msg_dds__DynamicArrayPrimitives_ *sample,
    const char *desc,
    unsigned int indent_level)
{

    RTICdrType_printIndent(indent_level);

    if (desc != NULL) {
        RTILog_debug("%s:\n", desc);
    } else {
        RTILog_debug("\n");
    }

    if (sample == NULL) {
        RTILog_debug("NULL\n");
        return;
    }

    if (sample->my_key==NULL) {
        RTICdrType_printString(
            NULL,"my_key", indent_level + 1);
    } else {
        RTICdrType_printString(
            sample->my_key,"my_key", indent_level + 1);    
    }

    if (DDS_BooleanSeq_get_contiguous_bufferI(&sample->bool_values_) != NULL) {
        RTICdrType_printArray(
            DDS_BooleanSeq_get_contiguous_bufferI(&sample->bool_values_),
            DDS_BooleanSeq_get_length(&sample->bool_values_),
            RTI_CDR_BOOLEAN_SIZE,
            (RTICdrTypePrintFunction)RTICdrType_printBoolean,
            "bool_values_", indent_level + 1);
    } else {
        RTICdrType_printPointerArray(
            DDS_BooleanSeq_get_discontiguous_bufferI(&sample->bool_values_),
            DDS_BooleanSeq_get_length(&sample->bool_values_ ),
            (RTICdrTypePrintFunction)RTICdrType_printBoolean,
            "bool_values_", indent_level + 1);
    }

    if (DDS_OctetSeq_get_contiguous_bufferI(&sample->byte_values_) != NULL) {
        RTICdrType_printArray(
            DDS_OctetSeq_get_contiguous_bufferI(&sample->byte_values_),
            DDS_OctetSeq_get_length(&sample->byte_values_),
            RTI_CDR_OCTET_SIZE,
            (RTICdrTypePrintFunction)RTICdrType_printOctet,
            "byte_values_", indent_level + 1);
    } else {
        RTICdrType_printPointerArray(
            DDS_OctetSeq_get_discontiguous_bufferI(&sample->byte_values_),
            DDS_OctetSeq_get_length(&sample->byte_values_ ),
            (RTICdrTypePrintFunction)RTICdrType_printOctet,
            "byte_values_", indent_level + 1);
    }

    if (DDS_CharSeq_get_contiguous_bufferI(&sample->char_values_) != NULL) {
        RTICdrType_printArray(
            DDS_CharSeq_get_contiguous_bufferI(&sample->char_values_),
            DDS_CharSeq_get_length(&sample->char_values_),
            RTI_CDR_CHAR_SIZE,
            (RTICdrTypePrintFunction)RTICdrType_printChar,
            "char_values_", indent_level + 1);
    } else {
        RTICdrType_printPointerArray(
            DDS_CharSeq_get_discontiguous_bufferI(&sample->char_values_),
            DDS_CharSeq_get_length(&sample->char_values_ ),
            (RTICdrTypePrintFunction)RTICdrType_printChar,
            "char_values_", indent_level + 1);
    }

    if (DDS_FloatSeq_get_contiguous_bufferI(&sample->float32_values_) != NULL) {
        RTICdrType_printArray(
            DDS_FloatSeq_get_contiguous_bufferI(&sample->float32_values_),
            DDS_FloatSeq_get_length(&sample->float32_values_),
            RTI_CDR_FLOAT_SIZE,
            (RTICdrTypePrintFunction)RTICdrType_printFloat,
            "float32_values_", indent_level + 1);
    } else {
        RTICdrType_printPointerArray(
            DDS_FloatSeq_get_discontiguous_bufferI(&sample->float32_values_),
            DDS_FloatSeq_get_length(&sample->float32_values_ ),
            (RTICdrTypePrintFunction)RTICdrType_printFloat,
            "float32_values_", indent_level + 1);
    }

    if (DDS_DoubleSeq_get_contiguous_bufferI(&sample->float64_values_) != NULL) {
        RTICdrType_printArray(
            DDS_DoubleSeq_get_contiguous_bufferI(&sample->float64_values_),
            DDS_DoubleSeq_get_length(&sample->float64_values_),
            RTI_CDR_DOUBLE_SIZE,
            (RTICdrTypePrintFunction)RTICdrType_printDouble,
            "float64_values_", indent_level + 1);
    } else {
        RTICdrType_printPointerArray(
            DDS_DoubleSeq_get_discontiguous_bufferI(&sample->float64_values_),
            DDS_DoubleSeq_get_length(&sample->float64_values_ ),
            (RTICdrTypePrintFunction)RTICdrType_printDouble,
            "float64_values_", indent_level + 1);
    }

    if (DDS_OctetSeq_get_contiguous_bufferI(&sample->int8_values_) != NULL) {
        RTICdrType_printArray(
            DDS_OctetSeq_get_contiguous_bufferI(&sample->int8_values_),
            DDS_OctetSeq_get_length(&sample->int8_values_),
            RTI_CDR_OCTET_SIZE,
            (RTICdrTypePrintFunction)RTICdrType_printOctet,
            "int8_values_", indent_level + 1);
    } else {
        RTICdrType_printPointerArray(
            DDS_OctetSeq_get_discontiguous_bufferI(&sample->int8_values_),
            DDS_OctetSeq_get_length(&sample->int8_values_ ),
            (RTICdrTypePrintFunction)RTICdrType_printOctet,
            "int8_values_", indent_level + 1);
    }

    if (DDS_OctetSeq_get_contiguous_bufferI(&sample->uint8_values_) != NULL) {
        RTICdrType_printArray(
            DDS_OctetSeq_get_contiguous_bufferI(&sample->uint8_values_),
            DDS_OctetSeq_get_length(&sample->uint8_values_),
            RTI_CDR_OCTET_SIZE,
            (RTICdrTypePrintFunction)RTICdrType_printOctet,
            "uint8_values_", indent_level + 1);
    } else {
        RTICdrType_printPointerArray(
            DDS_OctetSeq_get_discontiguous_bufferI(&sample->uint8_values_),
            DDS_OctetSeq_get_length(&sample->uint8_values_ ),
            (RTICdrTypePrintFunction)RTICdrType_printOctet,
            "uint8_values_", indent_level + 1);
    }

    if (DDS_ShortSeq_get_contiguous_bufferI(&sample->int16_values_) != NULL) {
        RTICdrType_printArray(
            DDS_ShortSeq_get_contiguous_bufferI(&sample->int16_values_),
            DDS_ShortSeq_get_length(&sample->int16_values_),
            RTI_CDR_SHORT_SIZE,
            (RTICdrTypePrintFunction)RTICdrType_printShort,
            "int16_values_", indent_level + 1);
    } else {
        RTICdrType_printPointerArray(
            DDS_ShortSeq_get_discontiguous_bufferI(&sample->int16_values_),
            DDS_ShortSeq_get_length(&sample->int16_values_ ),
            (RTICdrTypePrintFunction)RTICdrType_printShort,
            "int16_values_", indent_level + 1);
    }

    if (DDS_UnsignedShortSeq_get_contiguous_bufferI(&sample->uint16_values_) != NULL) {
        RTICdrType_printArray(
            DDS_UnsignedShortSeq_get_contiguous_bufferI(&sample->uint16_values_),
            DDS_UnsignedShortSeq_get_length(&sample->uint16_values_),
            RTI_CDR_UNSIGNED_SHORT_SIZE,
            (RTICdrTypePrintFunction)RTICdrType_printUnsignedShort,
            "uint16_values_", indent_level + 1);
    } else {
        RTICdrType_printPointerArray(
            DDS_UnsignedShortSeq_get_discontiguous_bufferI(&sample->uint16_values_),
            DDS_UnsignedShortSeq_get_length(&sample->uint16_values_ ),
            (RTICdrTypePrintFunction)RTICdrType_printUnsignedShort,
            "uint16_values_", indent_level + 1);
    }

    if (DDS_LongSeq_get_contiguous_bufferI(&sample->int32_values_) != NULL) {
        RTICdrType_printArray(
            DDS_LongSeq_get_contiguous_bufferI(&sample->int32_values_),
            DDS_LongSeq_get_length(&sample->int32_values_),
            RTI_CDR_LONG_SIZE,
            (RTICdrTypePrintFunction)RTICdrType_printLong,
            "int32_values_", indent_level + 1);
    } else {
        RTICdrType_printPointerArray(
            DDS_LongSeq_get_discontiguous_bufferI(&sample->int32_values_),
            DDS_LongSeq_get_length(&sample->int32_values_ ),
            (RTICdrTypePrintFunction)RTICdrType_printLong,
            "int32_values_", indent_level + 1);
    }

    if (DDS_UnsignedLongSeq_get_contiguous_bufferI(&sample->uint32_values_) != NULL) {
        RTICdrType_printArray(
            DDS_UnsignedLongSeq_get_contiguous_bufferI(&sample->uint32_values_),
            DDS_UnsignedLongSeq_get_length(&sample->uint32_values_),
            RTI_CDR_UNSIGNED_LONG_SIZE,
            (RTICdrTypePrintFunction)RTICdrType_printUnsignedLong,
            "uint32_values_", indent_level + 1);
    } else {
        RTICdrType_printPointerArray(
            DDS_UnsignedLongSeq_get_discontiguous_bufferI(&sample->uint32_values_),
            DDS_UnsignedLongSeq_get_length(&sample->uint32_values_ ),
            (RTICdrTypePrintFunction)RTICdrType_printUnsignedLong,
            "uint32_values_", indent_level + 1);
    }

    if (DDS_LongLongSeq_get_contiguous_bufferI(&sample->int64_values_) != NULL) {
        RTICdrType_printArray(
            DDS_LongLongSeq_get_contiguous_bufferI(&sample->int64_values_),
            DDS_LongLongSeq_get_length(&sample->int64_values_),
            RTI_CDR_LONG_LONG_SIZE,
            (RTICdrTypePrintFunction)RTICdrType_printLongLong,
            "int64_values_", indent_level + 1);
    } else {
        RTICdrType_printPointerArray(
            DDS_LongLongSeq_get_discontiguous_bufferI(&sample->int64_values_),
            DDS_LongLongSeq_get_length(&sample->int64_values_ ),
            (RTICdrTypePrintFunction)RTICdrType_printLongLong,
            "int64_values_", indent_level + 1);
    }

    if (DDS_UnsignedLongLongSeq_get_contiguous_bufferI(&sample->uint64_values_) != NULL) {
        RTICdrType_printArray(
            DDS_UnsignedLongLongSeq_get_contiguous_bufferI(&sample->uint64_values_),
            DDS_UnsignedLongLongSeq_get_length(&sample->uint64_values_),
            RTI_CDR_UNSIGNED_LONG_LONG_SIZE,
            (RTICdrTypePrintFunction)RTICdrType_printUnsignedLongLong,
            "uint64_values_", indent_level + 1);
    } else {
        RTICdrType_printPointerArray(
            DDS_UnsignedLongLongSeq_get_discontiguous_bufferI(&sample->uint64_values_),
            DDS_UnsignedLongLongSeq_get_length(&sample->uint64_values_ ),
            (RTICdrTypePrintFunction)RTICdrType_printUnsignedLongLong,
            "uint64_values_", indent_level + 1);
    }

    if (DDS_StringSeq_get_contiguous_bufferI(&sample->string_values_) != NULL) {
        RTICdrType_printStringArray(
            DDS_StringSeq_get_contiguous_bufferI(&sample->string_values_),
            DDS_StringSeq_get_length(&sample->string_values_),
            "string_values_", indent_level + 1,
            RTI_CDR_CHAR_TYPE);
    } else {
        RTICdrType_printStringPointerArray(
            DDS_StringSeq_get_discontiguous_bufferI(&sample->string_values_),
            DDS_StringSeq_get_length(&sample->string_values_),
            "string_values_", indent_level + 1,
            RTI_CDR_CHAR_TYPE);
    }

    RTICdrType_printLong(
        &sample->check_, "check_", indent_level + 1);    

}
test_msgs_msg_dds__DynamicArrayPrimitives_ *
test_msgs_msg_dds__DynamicArrayPrimitives_PluginSupport_create_key_ex(RTIBool allocate_pointers){
    test_msgs_msg_dds__DynamicArrayPrimitives_ *key = NULL;

    key = new (std::nothrow) test_msgs_msg_dds__DynamicArrayPrimitives_KeyHolder ;

    test_msgs_msg_dds__DynamicArrayPrimitives__initialize_ex(key,allocate_pointers, RTI_TRUE);

    return key;
}

test_msgs_msg_dds__DynamicArrayPrimitives_ *
test_msgs_msg_dds__DynamicArrayPrimitives_PluginSupport_create_key(void)
{
    return  test_msgs_msg_dds__DynamicArrayPrimitives_PluginSupport_create_key_ex(RTI_TRUE);
}

void 
test_msgs_msg_dds__DynamicArrayPrimitives_PluginSupport_destroy_key_ex(
    test_msgs_msg_dds__DynamicArrayPrimitives_KeyHolder *key,RTIBool deallocate_pointers)
{
    test_msgs_msg_dds__DynamicArrayPrimitives__finalize_ex(key,deallocate_pointers);

    delete  key;
    key=NULL;

}

void 
test_msgs_msg_dds__DynamicArrayPrimitives_PluginSupport_destroy_key(
    test_msgs_msg_dds__DynamicArrayPrimitives_KeyHolder *key) {

    test_msgs_msg_dds__DynamicArrayPrimitives_PluginSupport_destroy_key_ex(key,RTI_TRUE);

}

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

PRESTypePluginParticipantData 
test_msgs_msg_dds__DynamicArrayPrimitives_Plugin_on_participant_attached(
    void *registration_data,
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration,
    void *container_plugin_context,
    RTICdrTypeCode *type_code)
{
    if (registration_data) {} /* To avoid warnings */
    if (participant_info) {} /* To avoid warnings */
    if (top_level_registration) {} /* To avoid warnings */
    if (container_plugin_context) {} /* To avoid warnings */
    if (type_code) {} /* To avoid warnings */

    return PRESTypePluginDefaultParticipantData_new(participant_info);

}

void 
test_msgs_msg_dds__DynamicArrayPrimitives_Plugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data)
{

    PRESTypePluginDefaultParticipantData_delete(participant_data);
}

PRESTypePluginEndpointData
test_msgs_msg_dds__DynamicArrayPrimitives_Plugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *containerPluginContext)
{
    PRESTypePluginEndpointData epd = NULL;

    unsigned int serializedSampleMaxSize;

    unsigned int serializedKeyMaxSize;

    if (top_level_registration) {} /* To avoid warnings */
    if (containerPluginContext) {} /* To avoid warnings */

    epd = PRESTypePluginDefaultEndpointData_new(
        participant_data,
        endpoint_info,
        (PRESTypePluginDefaultEndpointDataCreateSampleFunction)
        test_msgs_msg_dds__DynamicArrayPrimitives_PluginSupport_create_data,
        (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
        test_msgs_msg_dds__DynamicArrayPrimitives_PluginSupport_destroy_data,
        (PRESTypePluginDefaultEndpointDataCreateKeyFunction)
        test_msgs_msg_dds__DynamicArrayPrimitives_PluginSupport_create_key ,            
        (PRESTypePluginDefaultEndpointDataDestroyKeyFunction)
        test_msgs_msg_dds__DynamicArrayPrimitives_PluginSupport_destroy_key);

    if (epd == NULL) {
        return NULL;
    } 
    serializedKeyMaxSize =  test_msgs_msg_dds__DynamicArrayPrimitives_Plugin_get_serialized_key_max_size(
        epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);

    if(!PRESTypePluginDefaultEndpointData_createMD5StreamWithInfo(
        epd,endpoint_info,serializedKeyMaxSize))  
    {
        PRESTypePluginDefaultEndpointData_delete(epd);
        return NULL;
    }

    if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER) {
        serializedSampleMaxSize = test_msgs_msg_dds__DynamicArrayPrimitives_Plugin_get_serialized_sample_max_size(
            epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);

        PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

        if (PRESTypePluginDefaultEndpointData_createWriterPool(
            epd,
            endpoint_info,
            (PRESTypePluginGetSerializedSampleMaxSizeFunction)
            test_msgs_msg_dds__DynamicArrayPrimitives_Plugin_get_serialized_sample_max_size, epd,
            (PRESTypePluginGetSerializedSampleSizeFunction)
            test_msgs_msg_dds__DynamicArrayPrimitives_Plugin_get_serialized_sample_size,
            epd) == RTI_FALSE) {
            PRESTypePluginDefaultEndpointData_delete(epd);
            return NULL;
        }
    }

    return epd;    
}

void 
test_msgs_msg_dds__DynamicArrayPrimitives_Plugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data)
{  

    PRESTypePluginDefaultEndpointData_delete(endpoint_data);
}

void    
test_msgs_msg_dds__DynamicArrayPrimitives_Plugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    test_msgs_msg_dds__DynamicArrayPrimitives_ *sample,
    void *handle)
{

    test_msgs_msg_dds__DynamicArrayPrimitives__finalize_optional_members(sample, RTI_TRUE);

    PRESTypePluginDefaultEndpointData_returnSample(
        endpoint_data, sample, handle);
}

RTIBool 
test_msgs_msg_dds__DynamicArrayPrimitives_Plugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    test_msgs_msg_dds__DynamicArrayPrimitives_ *dst,
    const test_msgs_msg_dds__DynamicArrayPrimitives_ *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return test_msgs_msg_dds__DynamicArrayPrimitives_PluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
test_msgs_msg_dds__DynamicArrayPrimitives_Plugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

RTIBool 
test_msgs_msg_dds__DynamicArrayPrimitives_Plugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const test_msgs_msg_dds__DynamicArrayPrimitives_ *sample, 
    struct RTICdrStream *stream,    
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;
    RTIBool retval = RTI_TRUE;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */

    if(serialize_encapsulation) {
        if (!RTICdrStream_serializeAndSetCdrEncapsulation(stream , encapsulation_id)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }

    if(serialize_sample) {

        if (!RTICdrStream_serializeString(
            stream, sample->my_key, (32) + 1)) {
            return RTI_FALSE;
        }

        if (DDS_BooleanSeq_get_contiguous_bufferI(&sample->bool_values_) != NULL) {
            if (!RTICdrStream_serializePrimitiveSequence(
                stream,
                DDS_BooleanSeq_get_contiguous_bufferI(&sample->bool_values_),
                DDS_BooleanSeq_get_length(&sample->bool_values_),
                (100),
                RTI_CDR_BOOLEAN_TYPE)) {
                return RTI_FALSE;
            } 
        } else {
            if (!RTICdrStream_serializePrimitivePointerSequence(
                stream,
                (const void **) DDS_BooleanSeq_get_discontiguous_bufferI(&sample->bool_values_),
                DDS_BooleanSeq_get_length(&sample->bool_values_),
                (100), 
                RTI_CDR_BOOLEAN_TYPE)) {
                return RTI_FALSE;
            } 
        }

        if (DDS_OctetSeq_get_contiguous_bufferI(&sample->byte_values_) != NULL) {
            if (!RTICdrStream_serializePrimitiveSequence(
                stream,
                DDS_OctetSeq_get_contiguous_bufferI(&sample->byte_values_),
                DDS_OctetSeq_get_length(&sample->byte_values_),
                (100),
                RTI_CDR_OCTET_TYPE)) {
                return RTI_FALSE;
            } 
        } else {
            if (!RTICdrStream_serializePrimitivePointerSequence(
                stream,
                (const void **) DDS_OctetSeq_get_discontiguous_bufferI(&sample->byte_values_),
                DDS_OctetSeq_get_length(&sample->byte_values_),
                (100), 
                RTI_CDR_OCTET_TYPE)) {
                return RTI_FALSE;
            } 
        }

        if (DDS_CharSeq_get_contiguous_bufferI(&sample->char_values_) != NULL) {
            if (!RTICdrStream_serializePrimitiveSequence(
                stream,
                DDS_CharSeq_get_contiguous_bufferI(&sample->char_values_),
                DDS_CharSeq_get_length(&sample->char_values_),
                (100),
                RTI_CDR_CHAR_TYPE)) {
                return RTI_FALSE;
            } 
        } else {
            if (!RTICdrStream_serializePrimitivePointerSequence(
                stream,
                (const void **) DDS_CharSeq_get_discontiguous_bufferI(&sample->char_values_),
                DDS_CharSeq_get_length(&sample->char_values_),
                (100), 
                RTI_CDR_CHAR_TYPE)) {
                return RTI_FALSE;
            } 
        }

        if (DDS_FloatSeq_get_contiguous_bufferI(&sample->float32_values_) != NULL) {
            if (!RTICdrStream_serializePrimitiveSequence(
                stream,
                DDS_FloatSeq_get_contiguous_bufferI(&sample->float32_values_),
                DDS_FloatSeq_get_length(&sample->float32_values_),
                (100),
                RTI_CDR_FLOAT_TYPE)) {
                return RTI_FALSE;
            } 
        } else {
            if (!RTICdrStream_serializePrimitivePointerSequence(
                stream,
                (const void **) DDS_FloatSeq_get_discontiguous_bufferI(&sample->float32_values_),
                DDS_FloatSeq_get_length(&sample->float32_values_),
                (100), 
                RTI_CDR_FLOAT_TYPE)) {
                return RTI_FALSE;
            } 
        }

        if (DDS_DoubleSeq_get_contiguous_bufferI(&sample->float64_values_) != NULL) {
            if (!RTICdrStream_serializePrimitiveSequence(
                stream,
                DDS_DoubleSeq_get_contiguous_bufferI(&sample->float64_values_),
                DDS_DoubleSeq_get_length(&sample->float64_values_),
                (100),
                RTI_CDR_DOUBLE_TYPE)) {
                return RTI_FALSE;
            } 
        } else {
            if (!RTICdrStream_serializePrimitivePointerSequence(
                stream,
                (const void **) DDS_DoubleSeq_get_discontiguous_bufferI(&sample->float64_values_),
                DDS_DoubleSeq_get_length(&sample->float64_values_),
                (100), 
                RTI_CDR_DOUBLE_TYPE)) {
                return RTI_FALSE;
            } 
        }

        if (DDS_OctetSeq_get_contiguous_bufferI(&sample->int8_values_) != NULL) {
            if (!RTICdrStream_serializePrimitiveSequence(
                stream,
                DDS_OctetSeq_get_contiguous_bufferI(&sample->int8_values_),
                DDS_OctetSeq_get_length(&sample->int8_values_),
                (100),
                RTI_CDR_OCTET_TYPE)) {
                return RTI_FALSE;
            } 
        } else {
            if (!RTICdrStream_serializePrimitivePointerSequence(
                stream,
                (const void **) DDS_OctetSeq_get_discontiguous_bufferI(&sample->int8_values_),
                DDS_OctetSeq_get_length(&sample->int8_values_),
                (100), 
                RTI_CDR_OCTET_TYPE)) {
                return RTI_FALSE;
            } 
        }

        if (DDS_OctetSeq_get_contiguous_bufferI(&sample->uint8_values_) != NULL) {
            if (!RTICdrStream_serializePrimitiveSequence(
                stream,
                DDS_OctetSeq_get_contiguous_bufferI(&sample->uint8_values_),
                DDS_OctetSeq_get_length(&sample->uint8_values_),
                (100),
                RTI_CDR_OCTET_TYPE)) {
                return RTI_FALSE;
            } 
        } else {
            if (!RTICdrStream_serializePrimitivePointerSequence(
                stream,
                (const void **) DDS_OctetSeq_get_discontiguous_bufferI(&sample->uint8_values_),
                DDS_OctetSeq_get_length(&sample->uint8_values_),
                (100), 
                RTI_CDR_OCTET_TYPE)) {
                return RTI_FALSE;
            } 
        }

        if (DDS_ShortSeq_get_contiguous_bufferI(&sample->int16_values_) != NULL) {
            if (!RTICdrStream_serializePrimitiveSequence(
                stream,
                DDS_ShortSeq_get_contiguous_bufferI(&sample->int16_values_),
                DDS_ShortSeq_get_length(&sample->int16_values_),
                (100),
                RTI_CDR_SHORT_TYPE)) {
                return RTI_FALSE;
            } 
        } else {
            if (!RTICdrStream_serializePrimitivePointerSequence(
                stream,
                (const void **) DDS_ShortSeq_get_discontiguous_bufferI(&sample->int16_values_),
                DDS_ShortSeq_get_length(&sample->int16_values_),
                (100), 
                RTI_CDR_SHORT_TYPE)) {
                return RTI_FALSE;
            } 
        }

        if (DDS_UnsignedShortSeq_get_contiguous_bufferI(&sample->uint16_values_) != NULL) {
            if (!RTICdrStream_serializePrimitiveSequence(
                stream,
                DDS_UnsignedShortSeq_get_contiguous_bufferI(&sample->uint16_values_),
                DDS_UnsignedShortSeq_get_length(&sample->uint16_values_),
                (100),
                RTI_CDR_UNSIGNED_SHORT_TYPE)) {
                return RTI_FALSE;
            } 
        } else {
            if (!RTICdrStream_serializePrimitivePointerSequence(
                stream,
                (const void **) DDS_UnsignedShortSeq_get_discontiguous_bufferI(&sample->uint16_values_),
                DDS_UnsignedShortSeq_get_length(&sample->uint16_values_),
                (100), 
                RTI_CDR_UNSIGNED_SHORT_TYPE)) {
                return RTI_FALSE;
            } 
        }

        if (DDS_LongSeq_get_contiguous_bufferI(&sample->int32_values_) != NULL) {
            if (!RTICdrStream_serializePrimitiveSequence(
                stream,
                DDS_LongSeq_get_contiguous_bufferI(&sample->int32_values_),
                DDS_LongSeq_get_length(&sample->int32_values_),
                (100),
                RTI_CDR_LONG_TYPE)) {
                return RTI_FALSE;
            } 
        } else {
            if (!RTICdrStream_serializePrimitivePointerSequence(
                stream,
                (const void **) DDS_LongSeq_get_discontiguous_bufferI(&sample->int32_values_),
                DDS_LongSeq_get_length(&sample->int32_values_),
                (100), 
                RTI_CDR_LONG_TYPE)) {
                return RTI_FALSE;
            } 
        }

        if (DDS_UnsignedLongSeq_get_contiguous_bufferI(&sample->uint32_values_) != NULL) {
            if (!RTICdrStream_serializePrimitiveSequence(
                stream,
                DDS_UnsignedLongSeq_get_contiguous_bufferI(&sample->uint32_values_),
                DDS_UnsignedLongSeq_get_length(&sample->uint32_values_),
                (100),
                RTI_CDR_UNSIGNED_LONG_TYPE)) {
                return RTI_FALSE;
            } 
        } else {
            if (!RTICdrStream_serializePrimitivePointerSequence(
                stream,
                (const void **) DDS_UnsignedLongSeq_get_discontiguous_bufferI(&sample->uint32_values_),
                DDS_UnsignedLongSeq_get_length(&sample->uint32_values_),
                (100), 
                RTI_CDR_UNSIGNED_LONG_TYPE)) {
                return RTI_FALSE;
            } 
        }

        if (DDS_LongLongSeq_get_contiguous_bufferI(&sample->int64_values_) != NULL) {
            if (!RTICdrStream_serializePrimitiveSequence(
                stream,
                DDS_LongLongSeq_get_contiguous_bufferI(&sample->int64_values_),
                DDS_LongLongSeq_get_length(&sample->int64_values_),
                (100),
                RTI_CDR_LONG_LONG_TYPE)) {
                return RTI_FALSE;
            } 
        } else {
            if (!RTICdrStream_serializePrimitivePointerSequence(
                stream,
                (const void **) DDS_LongLongSeq_get_discontiguous_bufferI(&sample->int64_values_),
                DDS_LongLongSeq_get_length(&sample->int64_values_),
                (100), 
                RTI_CDR_LONG_LONG_TYPE)) {
                return RTI_FALSE;
            } 
        }

        if (DDS_UnsignedLongLongSeq_get_contiguous_bufferI(&sample->uint64_values_) != NULL) {
            if (!RTICdrStream_serializePrimitiveSequence(
                stream,
                DDS_UnsignedLongLongSeq_get_contiguous_bufferI(&sample->uint64_values_),
                DDS_UnsignedLongLongSeq_get_length(&sample->uint64_values_),
                (100),
                RTI_CDR_UNSIGNED_LONG_LONG_TYPE)) {
                return RTI_FALSE;
            } 
        } else {
            if (!RTICdrStream_serializePrimitivePointerSequence(
                stream,
                (const void **) DDS_UnsignedLongLongSeq_get_discontiguous_bufferI(&sample->uint64_values_),
                DDS_UnsignedLongLongSeq_get_length(&sample->uint64_values_),
                (100), 
                RTI_CDR_UNSIGNED_LONG_LONG_TYPE)) {
                return RTI_FALSE;
            } 
        }

        if (DDS_StringSeq_get_contiguous_bufferI(&sample->string_values_) != NULL) {
            if (!RTICdrStream_serializeStringSequence(
                stream,
                DDS_StringSeq_get_contiguous_bufferI(&sample->string_values_),
                DDS_StringSeq_get_length(&sample->string_values_),
                (100),
                (255) +1,
                RTI_CDR_CHAR_TYPE)) {
                return RTI_FALSE;
            } 
        } else {
            if (!RTICdrStream_serializeStringPointerSequence(
                stream,
                (const void **) DDS_StringSeq_get_discontiguous_bufferI(&sample->string_values_),
                DDS_StringSeq_get_length(&sample->string_values_),
                (100), 
                (255) +1,
                RTI_CDR_CHAR_TYPE)) {
                return RTI_FALSE;
            } 
        }

        if (!RTICdrStream_serializeLong(
            stream, &sample->check_)) {
            return RTI_FALSE;
        }

    }

    if(serialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return retval;
}

RTIBool 
test_msgs_msg_dds__DynamicArrayPrimitives_Plugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    test_msgs_msg_dds__DynamicArrayPrimitives_ *sample,
    struct RTICdrStream *stream,   
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos)
{

    char * position = NULL;

    RTIBool done = RTI_FALSE;

    try {

        if (endpoint_data) {} /* To avoid warnings */
        if (endpoint_plugin_qos) {} /* To avoid warnings */
        if(deserialize_encapsulation) {

            if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
                return RTI_FALSE;
            }

            position = RTICdrStream_resetAlignment(stream);
        }
        if(deserialize_sample) {

            test_msgs_msg_dds__DynamicArrayPrimitives__initialize_ex(sample, RTI_FALSE, RTI_FALSE);

            if (!RTICdrStream_deserializeStringEx(
                stream,&sample->my_key, (32) + 1, RTI_FALSE)) {
                goto fin; 
            }
            {
                RTICdrUnsignedLong sequence_length;
                if (DDS_BooleanSeq_get_contiguous_bufferI(&sample->bool_values_) != NULL) {
                    if (!RTICdrStream_deserializePrimitiveSequence(
                        stream,
                        DDS_BooleanSeq_get_contiguous_bufferI(&sample->bool_values_),
                        &sequence_length,
                        DDS_BooleanSeq_get_maximum(&sample->bool_values_),
                        RTI_CDR_BOOLEAN_TYPE)){
                        goto fin; 
                    }
                } else {
                    if (!RTICdrStream_deserializePrimitivePointerSequence(
                        stream,
                        (void **) DDS_BooleanSeq_get_discontiguous_bufferI(&sample->bool_values_),
                        &sequence_length,
                        DDS_BooleanSeq_get_maximum(&sample->bool_values_),
                        RTI_CDR_BOOLEAN_TYPE)){
                        goto fin; 
                    }
                }
                if (!DDS_BooleanSeq_set_length(&sample->bool_values_, sequence_length)) {
                    return RTI_FALSE;
                }

            }
            {
                RTICdrUnsignedLong sequence_length;
                if (DDS_OctetSeq_get_contiguous_bufferI(&sample->byte_values_) != NULL) {
                    if (!RTICdrStream_deserializePrimitiveSequence(
                        stream,
                        DDS_OctetSeq_get_contiguous_bufferI(&sample->byte_values_),
                        &sequence_length,
                        DDS_OctetSeq_get_maximum(&sample->byte_values_),
                        RTI_CDR_OCTET_TYPE)){
                        goto fin; 
                    }
                } else {
                    if (!RTICdrStream_deserializePrimitivePointerSequence(
                        stream,
                        (void **) DDS_OctetSeq_get_discontiguous_bufferI(&sample->byte_values_),
                        &sequence_length,
                        DDS_OctetSeq_get_maximum(&sample->byte_values_),
                        RTI_CDR_OCTET_TYPE)){
                        goto fin; 
                    }
                }
                if (!DDS_OctetSeq_set_length(&sample->byte_values_, sequence_length)) {
                    return RTI_FALSE;
                }

            }
            {
                RTICdrUnsignedLong sequence_length;
                if (DDS_CharSeq_get_contiguous_bufferI(&sample->char_values_) != NULL) {
                    if (!RTICdrStream_deserializePrimitiveSequence(
                        stream,
                        DDS_CharSeq_get_contiguous_bufferI(&sample->char_values_),
                        &sequence_length,
                        DDS_CharSeq_get_maximum(&sample->char_values_),
                        RTI_CDR_CHAR_TYPE)){
                        goto fin; 
                    }
                } else {
                    if (!RTICdrStream_deserializePrimitivePointerSequence(
                        stream,
                        (void **) DDS_CharSeq_get_discontiguous_bufferI(&sample->char_values_),
                        &sequence_length,
                        DDS_CharSeq_get_maximum(&sample->char_values_),
                        RTI_CDR_CHAR_TYPE)){
                        goto fin; 
                    }
                }
                if (!DDS_CharSeq_set_length(&sample->char_values_, sequence_length)) {
                    return RTI_FALSE;
                }

            }
            {
                RTICdrUnsignedLong sequence_length;
                if (DDS_FloatSeq_get_contiguous_bufferI(&sample->float32_values_) != NULL) {
                    if (!RTICdrStream_deserializePrimitiveSequence(
                        stream,
                        DDS_FloatSeq_get_contiguous_bufferI(&sample->float32_values_),
                        &sequence_length,
                        DDS_FloatSeq_get_maximum(&sample->float32_values_),
                        RTI_CDR_FLOAT_TYPE)){
                        goto fin; 
                    }
                } else {
                    if (!RTICdrStream_deserializePrimitivePointerSequence(
                        stream,
                        (void **) DDS_FloatSeq_get_discontiguous_bufferI(&sample->float32_values_),
                        &sequence_length,
                        DDS_FloatSeq_get_maximum(&sample->float32_values_),
                        RTI_CDR_FLOAT_TYPE)){
                        goto fin; 
                    }
                }
                if (!DDS_FloatSeq_set_length(&sample->float32_values_, sequence_length)) {
                    return RTI_FALSE;
                }

            }
            {
                RTICdrUnsignedLong sequence_length;
                if (DDS_DoubleSeq_get_contiguous_bufferI(&sample->float64_values_) != NULL) {
                    if (!RTICdrStream_deserializePrimitiveSequence(
                        stream,
                        DDS_DoubleSeq_get_contiguous_bufferI(&sample->float64_values_),
                        &sequence_length,
                        DDS_DoubleSeq_get_maximum(&sample->float64_values_),
                        RTI_CDR_DOUBLE_TYPE)){
                        goto fin; 
                    }
                } else {
                    if (!RTICdrStream_deserializePrimitivePointerSequence(
                        stream,
                        (void **) DDS_DoubleSeq_get_discontiguous_bufferI(&sample->float64_values_),
                        &sequence_length,
                        DDS_DoubleSeq_get_maximum(&sample->float64_values_),
                        RTI_CDR_DOUBLE_TYPE)){
                        goto fin; 
                    }
                }
                if (!DDS_DoubleSeq_set_length(&sample->float64_values_, sequence_length)) {
                    return RTI_FALSE;
                }

            }
            {
                RTICdrUnsignedLong sequence_length;
                if (DDS_OctetSeq_get_contiguous_bufferI(&sample->int8_values_) != NULL) {
                    if (!RTICdrStream_deserializePrimitiveSequence(
                        stream,
                        DDS_OctetSeq_get_contiguous_bufferI(&sample->int8_values_),
                        &sequence_length,
                        DDS_OctetSeq_get_maximum(&sample->int8_values_),
                        RTI_CDR_OCTET_TYPE)){
                        goto fin; 
                    }
                } else {
                    if (!RTICdrStream_deserializePrimitivePointerSequence(
                        stream,
                        (void **) DDS_OctetSeq_get_discontiguous_bufferI(&sample->int8_values_),
                        &sequence_length,
                        DDS_OctetSeq_get_maximum(&sample->int8_values_),
                        RTI_CDR_OCTET_TYPE)){
                        goto fin; 
                    }
                }
                if (!DDS_OctetSeq_set_length(&sample->int8_values_, sequence_length)) {
                    return RTI_FALSE;
                }

            }
            {
                RTICdrUnsignedLong sequence_length;
                if (DDS_OctetSeq_get_contiguous_bufferI(&sample->uint8_values_) != NULL) {
                    if (!RTICdrStream_deserializePrimitiveSequence(
                        stream,
                        DDS_OctetSeq_get_contiguous_bufferI(&sample->uint8_values_),
                        &sequence_length,
                        DDS_OctetSeq_get_maximum(&sample->uint8_values_),
                        RTI_CDR_OCTET_TYPE)){
                        goto fin; 
                    }
                } else {
                    if (!RTICdrStream_deserializePrimitivePointerSequence(
                        stream,
                        (void **) DDS_OctetSeq_get_discontiguous_bufferI(&sample->uint8_values_),
                        &sequence_length,
                        DDS_OctetSeq_get_maximum(&sample->uint8_values_),
                        RTI_CDR_OCTET_TYPE)){
                        goto fin; 
                    }
                }
                if (!DDS_OctetSeq_set_length(&sample->uint8_values_, sequence_length)) {
                    return RTI_FALSE;
                }

            }
            {
                RTICdrUnsignedLong sequence_length;
                if (DDS_ShortSeq_get_contiguous_bufferI(&sample->int16_values_) != NULL) {
                    if (!RTICdrStream_deserializePrimitiveSequence(
                        stream,
                        DDS_ShortSeq_get_contiguous_bufferI(&sample->int16_values_),
                        &sequence_length,
                        DDS_ShortSeq_get_maximum(&sample->int16_values_),
                        RTI_CDR_SHORT_TYPE)){
                        goto fin; 
                    }
                } else {
                    if (!RTICdrStream_deserializePrimitivePointerSequence(
                        stream,
                        (void **) DDS_ShortSeq_get_discontiguous_bufferI(&sample->int16_values_),
                        &sequence_length,
                        DDS_ShortSeq_get_maximum(&sample->int16_values_),
                        RTI_CDR_SHORT_TYPE)){
                        goto fin; 
                    }
                }
                if (!DDS_ShortSeq_set_length(&sample->int16_values_, sequence_length)) {
                    return RTI_FALSE;
                }

            }
            {
                RTICdrUnsignedLong sequence_length;
                if (DDS_UnsignedShortSeq_get_contiguous_bufferI(&sample->uint16_values_) != NULL) {
                    if (!RTICdrStream_deserializePrimitiveSequence(
                        stream,
                        DDS_UnsignedShortSeq_get_contiguous_bufferI(&sample->uint16_values_),
                        &sequence_length,
                        DDS_UnsignedShortSeq_get_maximum(&sample->uint16_values_),
                        RTI_CDR_UNSIGNED_SHORT_TYPE)){
                        goto fin; 
                    }
                } else {
                    if (!RTICdrStream_deserializePrimitivePointerSequence(
                        stream,
                        (void **) DDS_UnsignedShortSeq_get_discontiguous_bufferI(&sample->uint16_values_),
                        &sequence_length,
                        DDS_UnsignedShortSeq_get_maximum(&sample->uint16_values_),
                        RTI_CDR_UNSIGNED_SHORT_TYPE)){
                        goto fin; 
                    }
                }
                if (!DDS_UnsignedShortSeq_set_length(&sample->uint16_values_, sequence_length)) {
                    return RTI_FALSE;
                }

            }
            {
                RTICdrUnsignedLong sequence_length;
                if (DDS_LongSeq_get_contiguous_bufferI(&sample->int32_values_) != NULL) {
                    if (!RTICdrStream_deserializePrimitiveSequence(
                        stream,
                        DDS_LongSeq_get_contiguous_bufferI(&sample->int32_values_),
                        &sequence_length,
                        DDS_LongSeq_get_maximum(&sample->int32_values_),
                        RTI_CDR_LONG_TYPE)){
                        goto fin; 
                    }
                } else {
                    if (!RTICdrStream_deserializePrimitivePointerSequence(
                        stream,
                        (void **) DDS_LongSeq_get_discontiguous_bufferI(&sample->int32_values_),
                        &sequence_length,
                        DDS_LongSeq_get_maximum(&sample->int32_values_),
                        RTI_CDR_LONG_TYPE)){
                        goto fin; 
                    }
                }
                if (!DDS_LongSeq_set_length(&sample->int32_values_, sequence_length)) {
                    return RTI_FALSE;
                }

            }
            {
                RTICdrUnsignedLong sequence_length;
                if (DDS_UnsignedLongSeq_get_contiguous_bufferI(&sample->uint32_values_) != NULL) {
                    if (!RTICdrStream_deserializePrimitiveSequence(
                        stream,
                        DDS_UnsignedLongSeq_get_contiguous_bufferI(&sample->uint32_values_),
                        &sequence_length,
                        DDS_UnsignedLongSeq_get_maximum(&sample->uint32_values_),
                        RTI_CDR_UNSIGNED_LONG_TYPE)){
                        goto fin; 
                    }
                } else {
                    if (!RTICdrStream_deserializePrimitivePointerSequence(
                        stream,
                        (void **) DDS_UnsignedLongSeq_get_discontiguous_bufferI(&sample->uint32_values_),
                        &sequence_length,
                        DDS_UnsignedLongSeq_get_maximum(&sample->uint32_values_),
                        RTI_CDR_UNSIGNED_LONG_TYPE)){
                        goto fin; 
                    }
                }
                if (!DDS_UnsignedLongSeq_set_length(&sample->uint32_values_, sequence_length)) {
                    return RTI_FALSE;
                }

            }
            {
                RTICdrUnsignedLong sequence_length;
                if (DDS_LongLongSeq_get_contiguous_bufferI(&sample->int64_values_) != NULL) {
                    if (!RTICdrStream_deserializePrimitiveSequence(
                        stream,
                        DDS_LongLongSeq_get_contiguous_bufferI(&sample->int64_values_),
                        &sequence_length,
                        DDS_LongLongSeq_get_maximum(&sample->int64_values_),
                        RTI_CDR_LONG_LONG_TYPE)){
                        goto fin; 
                    }
                } else {
                    if (!RTICdrStream_deserializePrimitivePointerSequence(
                        stream,
                        (void **) DDS_LongLongSeq_get_discontiguous_bufferI(&sample->int64_values_),
                        &sequence_length,
                        DDS_LongLongSeq_get_maximum(&sample->int64_values_),
                        RTI_CDR_LONG_LONG_TYPE)){
                        goto fin; 
                    }
                }
                if (!DDS_LongLongSeq_set_length(&sample->int64_values_, sequence_length)) {
                    return RTI_FALSE;
                }

            }
            {
                RTICdrUnsignedLong sequence_length;
                if (DDS_UnsignedLongLongSeq_get_contiguous_bufferI(&sample->uint64_values_) != NULL) {
                    if (!RTICdrStream_deserializePrimitiveSequence(
                        stream,
                        DDS_UnsignedLongLongSeq_get_contiguous_bufferI(&sample->uint64_values_),
                        &sequence_length,
                        DDS_UnsignedLongLongSeq_get_maximum(&sample->uint64_values_),
                        RTI_CDR_UNSIGNED_LONG_LONG_TYPE)){
                        goto fin; 
                    }
                } else {
                    if (!RTICdrStream_deserializePrimitivePointerSequence(
                        stream,
                        (void **) DDS_UnsignedLongLongSeq_get_discontiguous_bufferI(&sample->uint64_values_),
                        &sequence_length,
                        DDS_UnsignedLongLongSeq_get_maximum(&sample->uint64_values_),
                        RTI_CDR_UNSIGNED_LONG_LONG_TYPE)){
                        goto fin; 
                    }
                }
                if (!DDS_UnsignedLongLongSeq_set_length(&sample->uint64_values_, sequence_length)) {
                    return RTI_FALSE;
                }

            }
            {
                RTICdrUnsignedLong sequence_length;
                if (DDS_StringSeq_get_contiguous_bufferI(&sample->string_values_) != NULL) {
                    if (!RTICdrStream_deserializeStringSequenceEx(
                        stream,
                        DDS_StringSeq_get_contiguous_bufferI(&sample->string_values_),
                        &sequence_length,
                        DDS_StringSeq_get_maximum(&sample->string_values_),
                        (255) +1,RTI_CDR_CHAR_TYPE, RTI_FALSE)){
                        goto fin; 
                    }
                } else {
                    if (!RTICdrStream_deserializeStringPointerSequenceEx(
                        stream,
                        (void **) DDS_StringSeq_get_discontiguous_bufferI(&sample->string_values_),
                        &sequence_length,
                        DDS_StringSeq_get_maximum(&sample->string_values_),
                        (255) +1,RTI_CDR_CHAR_TYPE, RTI_FALSE)){
                        goto fin; 
                    }
                }
                if (!DDS_StringSeq_set_length(&sample->string_values_, sequence_length)) {
                    return RTI_FALSE;
                }

            }
            if (!RTICdrStream_deserializeLong(
                stream, &sample->check_)) {
                goto fin; 
            }
        }

        done = RTI_TRUE;
      fin:
        if (done != RTI_TRUE && 
        RTICdrStream_getRemainder(stream) >=
        RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
            return RTI_FALSE;   
        }
        if(deserialize_encapsulation) {
            RTICdrStream_restoreAlignment(stream,position);
        }

        return RTI_TRUE;

    } catch (std::bad_alloc&) {
        return RTI_FALSE;
    }
}

RTIBool
test_msgs_msg_dds__DynamicArrayPrimitives_Plugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const test_msgs_msg_dds__DynamicArrayPrimitives_ *sample)
{
    struct RTICdrStream stream;
    struct PRESTypePluginDefaultEndpointData epd;
    RTIBool result;

    if (length == NULL) {
        return RTI_FALSE;
    }

    epd._maxSizeSerializedSample =
    test_msgs_msg_dds__DynamicArrayPrimitives_Plugin_get_serialized_sample_max_size(
        NULL, RTI_TRUE, RTICdrEncapsulation_getNativeCdrEncapsulationId(), 0);

    if (buffer == NULL) {
        *length = 
        test_msgs_msg_dds__DynamicArrayPrimitives_Plugin_get_serialized_sample_size(
            (PRESTypePluginEndpointData)&epd,
            RTI_TRUE,
            RTICdrEncapsulation_getNativeCdrEncapsulationId(),
            0,
            sample);

        if (*length == 0) {
            return RTI_FALSE;
        }

        return RTI_TRUE;
    }    

    RTICdrStream_init(&stream);
    RTICdrStream_set(&stream, (char *)buffer, *length);

    result = test_msgs_msg_dds__DynamicArrayPrimitives_Plugin_serialize(
        (PRESTypePluginEndpointData)&epd, sample, &stream, 
        RTI_TRUE, RTICdrEncapsulation_getNativeCdrEncapsulationId(), 
        RTI_TRUE, NULL);  

    *length = RTICdrStream_getCurrentPositionOffset(&stream);
    return result;     
}

RTIBool
test_msgs_msg_dds__DynamicArrayPrimitives_Plugin_deserialize_from_cdr_buffer(
    test_msgs_msg_dds__DynamicArrayPrimitives_ *sample,
    const char * buffer,
    unsigned int length)
{
    struct RTICdrStream stream;

    RTICdrStream_init(&stream);
    RTICdrStream_set(&stream, (char *)buffer, length);

    test_msgs_msg_dds__DynamicArrayPrimitives__finalize_optional_members(sample, RTI_TRUE);
    return test_msgs_msg_dds__DynamicArrayPrimitives_Plugin_deserialize_sample( 
        NULL, sample,
        &stream, RTI_TRUE, RTI_TRUE, 
        NULL);
}

DDS_ReturnCode_t
test_msgs_msg_dds__DynamicArrayPrimitives_Plugin_data_to_string(
    const test_msgs_msg_dds__DynamicArrayPrimitives_ *sample,
    char *str,
    DDS_UnsignedLong *str_size, 
    const struct DDS_PrintFormatProperty *property)
{
    DDS_DynamicData *data = NULL;
    char *buffer = NULL;
    unsigned int length = 0;
    struct DDS_PrintFormat printFormat;
    DDS_ReturnCode_t retCode = DDS_RETCODE_ERROR;

    if (sample == NULL) {
        return DDS_RETCODE_BAD_PARAMETER;
    }

    if (str_size == NULL) {
        return DDS_RETCODE_BAD_PARAMETER;
    }

    if (property == NULL) {
        return DDS_RETCODE_BAD_PARAMETER;
    }

    if (!test_msgs_msg_dds__DynamicArrayPrimitives_Plugin_serialize_to_cdr_buffer(
        NULL, 
        &length, 
        sample)) {
        return DDS_RETCODE_ERROR;
    }

    RTIOsapiHeap_allocateBuffer(&buffer, length, RTI_OSAPI_ALIGNMENT_DEFAULT);
    if (buffer == NULL) {
        return DDS_RETCODE_ERROR;
    }

    if (!test_msgs_msg_dds__DynamicArrayPrimitives_Plugin_serialize_to_cdr_buffer(
        buffer, 
        &length, 
        sample)) {
        RTIOsapiHeap_freeBuffer(buffer);
        return DDS_RETCODE_ERROR;
    }

    data = DDS_DynamicData_new(
        test_msgs_msg_dds__DynamicArrayPrimitives__get_typecode(), 
        &DDS_DYNAMIC_DATA_PROPERTY_DEFAULT);
    if (data == NULL) {
        RTIOsapiHeap_freeBuffer(buffer);
        return DDS_RETCODE_ERROR;
    }

    retCode = DDS_DynamicData_from_cdr_buffer(data, buffer, length);
    if (retCode != DDS_RETCODE_OK) {
        RTIOsapiHeap_freeBuffer(buffer);
        DDS_DynamicData_delete(data);
        return retCode;
    }

    retCode = DDS_PrintFormatProperty_to_print_format(
        property, 
        &printFormat);
    if (retCode != DDS_RETCODE_OK) {
        RTIOsapiHeap_freeBuffer(buffer);
        DDS_DynamicData_delete(data);
        return retCode;
    }

    retCode = DDS_DynamicDataFormatter_to_string_w_format(
        data, 
        str,
        str_size, 
        &printFormat);
    if (retCode != DDS_RETCODE_OK) {
        RTIOsapiHeap_freeBuffer(buffer);
        DDS_DynamicData_delete(data);
        return retCode;
    }

    RTIOsapiHeap_freeBuffer(buffer);
    DDS_DynamicData_delete(data);
    return DDS_RETCODE_OK;
}

RTIBool 
test_msgs_msg_dds__DynamicArrayPrimitives_Plugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    test_msgs_msg_dds__DynamicArrayPrimitives_ **sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,   
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos)
{

    RTIBool result;
    const char *METHOD_NAME = "test_msgs_msg_dds__DynamicArrayPrimitives_Plugin_deserialize";
    if (drop_sample) {} /* To avoid warnings */

    stream->_xTypesState.unassignable = RTI_FALSE;
    result= test_msgs_msg_dds__DynamicArrayPrimitives_Plugin_deserialize_sample( 
        endpoint_data, (sample != NULL)?*sample:NULL,
        stream, deserialize_encapsulation, deserialize_sample, 
        endpoint_plugin_qos);
    if (result) {
        if (stream->_xTypesState.unassignable) {
            result = RTI_FALSE;
        }
    }
    if (!result && stream->_xTypesState.unassignable ) {

        RTICdrLog_exception(
            METHOD_NAME, 
            &RTI_CDR_LOG_UNASSIGNABLE_SAMPLE_OF_TYPE_s, 
            "test_msgs_msg_dds__DynamicArrayPrimitives_");

    }

    return result;

}

RTIBool test_msgs_msg_dds__DynamicArrayPrimitives_Plugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream,   
    RTIBool skip_encapsulation,
    RTIBool skip_sample, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    RTIBool done = RTI_FALSE;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */

    if(skip_encapsulation) {
        if (!RTICdrStream_skipEncapsulation(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }

    if (skip_sample) {

        if (!RTICdrStream_skipString (stream, (32)+1)) {
            goto fin; 
        }
        {
            RTICdrUnsignedLong sequence_length;
            if (!RTICdrStream_skipPrimitiveSequence(
                stream,
                &sequence_length,
                RTI_CDR_BOOLEAN_TYPE)){
                goto fin; 
            }
        }
        {
            RTICdrUnsignedLong sequence_length;
            if (!RTICdrStream_skipPrimitiveSequence(
                stream,
                &sequence_length,
                RTI_CDR_OCTET_TYPE)){
                goto fin; 
            }
        }
        {
            RTICdrUnsignedLong sequence_length;
            if (!RTICdrStream_skipPrimitiveSequence(
                stream,
                &sequence_length,
                RTI_CDR_CHAR_TYPE)){
                goto fin; 
            }
        }
        {
            RTICdrUnsignedLong sequence_length;
            if (!RTICdrStream_skipPrimitiveSequence(
                stream,
                &sequence_length,
                RTI_CDR_FLOAT_TYPE)){
                goto fin; 
            }
        }
        {
            RTICdrUnsignedLong sequence_length;
            if (!RTICdrStream_skipPrimitiveSequence(
                stream,
                &sequence_length,
                RTI_CDR_DOUBLE_TYPE)){
                goto fin; 
            }
        }
        {
            RTICdrUnsignedLong sequence_length;
            if (!RTICdrStream_skipPrimitiveSequence(
                stream,
                &sequence_length,
                RTI_CDR_OCTET_TYPE)){
                goto fin; 
            }
        }
        {
            RTICdrUnsignedLong sequence_length;
            if (!RTICdrStream_skipPrimitiveSequence(
                stream,
                &sequence_length,
                RTI_CDR_OCTET_TYPE)){
                goto fin; 
            }
        }
        {
            RTICdrUnsignedLong sequence_length;
            if (!RTICdrStream_skipPrimitiveSequence(
                stream,
                &sequence_length,
                RTI_CDR_SHORT_TYPE)){
                goto fin; 
            }
        }
        {
            RTICdrUnsignedLong sequence_length;
            if (!RTICdrStream_skipPrimitiveSequence(
                stream,
                &sequence_length,
                RTI_CDR_UNSIGNED_SHORT_TYPE)){
                goto fin; 
            }
        }
        {
            RTICdrUnsignedLong sequence_length;
            if (!RTICdrStream_skipPrimitiveSequence(
                stream,
                &sequence_length,
                RTI_CDR_LONG_TYPE)){
                goto fin; 
            }
        }
        {
            RTICdrUnsignedLong sequence_length;
            if (!RTICdrStream_skipPrimitiveSequence(
                stream,
                &sequence_length,
                RTI_CDR_UNSIGNED_LONG_TYPE)){
                goto fin; 
            }
        }
        {
            RTICdrUnsignedLong sequence_length;
            if (!RTICdrStream_skipPrimitiveSequence(
                stream,
                &sequence_length,
                RTI_CDR_LONG_LONG_TYPE)){
                goto fin; 
            }
        }
        {
            RTICdrUnsignedLong sequence_length;
            if (!RTICdrStream_skipPrimitiveSequence(
                stream,
                &sequence_length,
                RTI_CDR_UNSIGNED_LONG_LONG_TYPE)){
                goto fin; 
            }
        }
        {
            RTICdrUnsignedLong sequence_length;
            if (!RTICdrStream_skipStringSequence(
                stream,
                &sequence_length,
                (255) + 1,     RTI_CDR_CHAR_TYPE)){
                goto fin; 
            }
        }
        if (!RTICdrStream_skipLong (stream)) {
            goto fin; 
        }
    }

    done = RTI_TRUE;
  fin:
    if (done != RTI_TRUE && 
    RTICdrStream_getRemainder(stream) >=
    RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
        return RTI_FALSE;   
    }
    if(skip_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;
}

unsigned int 
test_msgs_msg_dds__DynamicArrayPrimitives_Plugin_get_serialized_sample_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;

    if (endpoint_data) {} /* To avoid warnings */ 
    if (overflow) {} /* To avoid warnings */

    if (include_encapsulation) {

        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }
        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;
    }

    current_alignment +=RTICdrType_getStringMaxSizeSerialized(
        current_alignment, (32)+1);

    current_alignment +=RTICdrType_getPrimitiveSequenceMaxSizeSerialized(
        current_alignment,(100),RTI_CDR_BOOLEAN_TYPE) ;

    current_alignment +=RTICdrType_getPrimitiveSequenceMaxSizeSerialized(
        current_alignment,(100),RTI_CDR_OCTET_TYPE) ;

    current_alignment +=RTICdrType_getPrimitiveSequenceMaxSizeSerialized(
        current_alignment,(100),RTI_CDR_CHAR_TYPE) ;

    current_alignment +=RTICdrType_getPrimitiveSequenceMaxSizeSerialized(
        current_alignment,(100),RTI_CDR_FLOAT_TYPE) ;

    current_alignment +=RTICdrType_getPrimitiveSequenceMaxSizeSerialized(
        current_alignment,(100),RTI_CDR_DOUBLE_TYPE) ;

    current_alignment +=RTICdrType_getPrimitiveSequenceMaxSizeSerialized(
        current_alignment,(100),RTI_CDR_OCTET_TYPE) ;

    current_alignment +=RTICdrType_getPrimitiveSequenceMaxSizeSerialized(
        current_alignment,(100),RTI_CDR_OCTET_TYPE) ;

    current_alignment +=RTICdrType_getPrimitiveSequenceMaxSizeSerialized(
        current_alignment,(100),RTI_CDR_SHORT_TYPE) ;

    current_alignment +=RTICdrType_getPrimitiveSequenceMaxSizeSerialized(
        current_alignment,(100),RTI_CDR_UNSIGNED_SHORT_TYPE) ;

    current_alignment +=RTICdrType_getPrimitiveSequenceMaxSizeSerialized(
        current_alignment,(100),RTI_CDR_LONG_TYPE) ;

    current_alignment +=RTICdrType_getPrimitiveSequenceMaxSizeSerialized(
        current_alignment,(100),RTI_CDR_UNSIGNED_LONG_TYPE) ;

    current_alignment +=RTICdrType_getPrimitiveSequenceMaxSizeSerialized(
        current_alignment,(100),RTI_CDR_LONG_LONG_TYPE) ;

    current_alignment +=RTICdrType_getPrimitiveSequenceMaxSizeSerialized(
        current_alignment,(100),RTI_CDR_UNSIGNED_LONG_LONG_TYPE) ;

    current_alignment +=RTICdrType_getStringSequenceMaxSizeSerialized(
        current_alignment,(100),(255) + 1, RTI_CDR_CHAR_TYPE) ;

    current_alignment +=RTICdrType_getLongMaxSizeSerialized(
        current_alignment);

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }
    return  current_alignment - initial_alignment;
}

unsigned int 
test_msgs_msg_dds__DynamicArrayPrimitives_Plugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int size;
    RTIBool overflow = RTI_FALSE;

    size = test_msgs_msg_dds__DynamicArrayPrimitives_Plugin_get_serialized_sample_max_size_ex(
        endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

    if (overflow) {
        size = RTI_CDR_MAX_SERIALIZED_SIZE;
    }

    return size;
}

unsigned int 
test_msgs_msg_dds__DynamicArrayPrimitives_Plugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;

    if (endpoint_data) {} /* To avoid warnings */ 

    if (include_encapsulation) {

        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }
        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;
    }

    current_alignment +=RTICdrType_getStringMaxSizeSerialized(
        current_alignment, 1);
    current_alignment +=    RTICdrType_getPrimitiveSequenceMaxSizeSerialized(
        current_alignment,0, RTI_CDR_BOOLEAN_TYPE);
    current_alignment +=    RTICdrType_getPrimitiveSequenceMaxSizeSerialized(
        current_alignment,0, RTI_CDR_OCTET_TYPE);
    current_alignment +=    RTICdrType_getPrimitiveSequenceMaxSizeSerialized(
        current_alignment,0, RTI_CDR_CHAR_TYPE);
    current_alignment +=    RTICdrType_getPrimitiveSequenceMaxSizeSerialized(
        current_alignment,0, RTI_CDR_FLOAT_TYPE);
    current_alignment +=    RTICdrType_getPrimitiveSequenceMaxSizeSerialized(
        current_alignment,0, RTI_CDR_DOUBLE_TYPE);
    current_alignment +=    RTICdrType_getPrimitiveSequenceMaxSizeSerialized(
        current_alignment,0, RTI_CDR_OCTET_TYPE);
    current_alignment +=    RTICdrType_getPrimitiveSequenceMaxSizeSerialized(
        current_alignment,0, RTI_CDR_OCTET_TYPE);
    current_alignment +=    RTICdrType_getPrimitiveSequenceMaxSizeSerialized(
        current_alignment,0, RTI_CDR_SHORT_TYPE);
    current_alignment +=    RTICdrType_getPrimitiveSequenceMaxSizeSerialized(
        current_alignment,0, RTI_CDR_UNSIGNED_SHORT_TYPE);
    current_alignment +=    RTICdrType_getPrimitiveSequenceMaxSizeSerialized(
        current_alignment,0, RTI_CDR_LONG_TYPE);
    current_alignment +=    RTICdrType_getPrimitiveSequenceMaxSizeSerialized(
        current_alignment,0, RTI_CDR_UNSIGNED_LONG_TYPE);
    current_alignment +=    RTICdrType_getPrimitiveSequenceMaxSizeSerialized(
        current_alignment,0, RTI_CDR_LONG_LONG_TYPE);
    current_alignment +=    RTICdrType_getPrimitiveSequenceMaxSizeSerialized(
        current_alignment,0, RTI_CDR_UNSIGNED_LONG_LONG_TYPE);
    current_alignment +=    RTICdrType_getStringSequenceMaxSizeSerialized(
        current_alignment,0,1, RTI_CDR_CHAR_TYPE);
    current_alignment +=RTICdrType_getLongMaxSizeSerialized(
        current_alignment);

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }
    return  current_alignment - initial_alignment;
}

/* Returns the size of the sample in its serialized form (in bytes).
* It can also be an estimation in excess of the real buffer needed 
* during a call to the serialize() function.
* The value reported does not have to include the space for the
* encapsulation flags.
*/
unsigned int
test_msgs_msg_dds__DynamicArrayPrimitives_Plugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const test_msgs_msg_dds__DynamicArrayPrimitives_ * sample) 
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;
    struct PRESTypePluginDefaultEndpointData epd;   

    if (sample==NULL) {
        return 0;
    }
    if (endpoint_data == NULL) {
        endpoint_data = (PRESTypePluginEndpointData) &epd;
        PRESTypePluginDefaultEndpointData_setBaseAlignment(
            endpoint_data,
            current_alignment);        
    }

    if (include_encapsulation) {

        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }
        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;
        PRESTypePluginDefaultEndpointData_setBaseAlignment(
            endpoint_data,
            current_alignment);
    }

    current_alignment += RTICdrType_getStringSerializedSize(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment), sample->my_key);

    current_alignment += RTICdrType_getPrimitiveSequenceSerializedSize(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment), 
            DDS_BooleanSeq_get_length(&sample->bool_values_),
            RTI_CDR_BOOLEAN_TYPE);

    current_alignment += RTICdrType_getPrimitiveSequenceSerializedSize(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment), 
            DDS_OctetSeq_get_length(&sample->byte_values_),
            RTI_CDR_OCTET_TYPE);

    current_alignment += RTICdrType_getPrimitiveSequenceSerializedSize(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment), 
            DDS_CharSeq_get_length(&sample->char_values_),
            RTI_CDR_CHAR_TYPE);

    current_alignment += RTICdrType_getPrimitiveSequenceSerializedSize(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment), 
            DDS_FloatSeq_get_length(&sample->float32_values_),
            RTI_CDR_FLOAT_TYPE);

    current_alignment += RTICdrType_getPrimitiveSequenceSerializedSize(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment), 
            DDS_DoubleSeq_get_length(&sample->float64_values_),
            RTI_CDR_DOUBLE_TYPE);

    current_alignment += RTICdrType_getPrimitiveSequenceSerializedSize(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment), 
            DDS_OctetSeq_get_length(&sample->int8_values_),
            RTI_CDR_OCTET_TYPE);

    current_alignment += RTICdrType_getPrimitiveSequenceSerializedSize(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment), 
            DDS_OctetSeq_get_length(&sample->uint8_values_),
            RTI_CDR_OCTET_TYPE);

    current_alignment += RTICdrType_getPrimitiveSequenceSerializedSize(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment), 
            DDS_ShortSeq_get_length(&sample->int16_values_),
            RTI_CDR_SHORT_TYPE);

    current_alignment += RTICdrType_getPrimitiveSequenceSerializedSize(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment), 
            DDS_UnsignedShortSeq_get_length(&sample->uint16_values_),
            RTI_CDR_UNSIGNED_SHORT_TYPE);

    current_alignment += RTICdrType_getPrimitiveSequenceSerializedSize(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment), 
            DDS_LongSeq_get_length(&sample->int32_values_),
            RTI_CDR_LONG_TYPE);

    current_alignment += RTICdrType_getPrimitiveSequenceSerializedSize(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment), 
            DDS_UnsignedLongSeq_get_length(&sample->uint32_values_),
            RTI_CDR_UNSIGNED_LONG_TYPE);

    current_alignment += RTICdrType_getPrimitiveSequenceSerializedSize(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment), 
            DDS_LongLongSeq_get_length(&sample->int64_values_),
            RTI_CDR_LONG_LONG_TYPE);

    current_alignment += RTICdrType_getPrimitiveSequenceSerializedSize(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment), 
            DDS_UnsignedLongLongSeq_get_length(&sample->uint64_values_),
            RTI_CDR_UNSIGNED_LONG_LONG_TYPE);

    if (DDS_StringSeq_get_contiguous_bufferI(&sample->string_values_) != NULL) {
        current_alignment += RTICdrStream_getStringSequenceSerializedSize(
            PRESTypePluginDefaultEndpointData_getAlignment(
                endpoint_data, current_alignment),
                DDS_StringSeq_get_contiguous_bufferI(&sample->string_values_),
                DDS_StringSeq_get_length(&sample->string_values_),
                RTI_CDR_CHAR_TYPE);
    } else {
        current_alignment += RTICdrStream_getStringPointerSequenceSerializedSize(
            PRESTypePluginDefaultEndpointData_getAlignment(
                endpoint_data,current_alignment),
                (const void **)DDS_StringSeq_get_discontiguous_bufferI(&sample->string_values_),
                DDS_StringSeq_get_length(&sample->string_values_),
                RTI_CDR_CHAR_TYPE);
    }

    current_alignment += RTICdrType_getLongMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }
    return current_alignment - initial_alignment;
}

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */

PRESTypePluginKeyKind 
test_msgs_msg_dds__DynamicArrayPrimitives_Plugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_USER_KEY;
}

RTIBool 
test_msgs_msg_dds__DynamicArrayPrimitives_Plugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const test_msgs_msg_dds__DynamicArrayPrimitives_ *sample, 
    struct RTICdrStream *stream,    
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */

    if(serialize_encapsulation) {
        if (!RTICdrStream_serializeAndSetCdrEncapsulation(stream , encapsulation_id)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }

    if(serialize_key) {

        if (!RTICdrStream_serializeString(
            stream, sample->my_key, (32) + 1)) {
            return RTI_FALSE;
        }

    }

    if(serialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;
}

RTIBool test_msgs_msg_dds__DynamicArrayPrimitives_Plugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    test_msgs_msg_dds__DynamicArrayPrimitives_ *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos)
{
    try {

        char * position = NULL;

        if (endpoint_data) {} /* To avoid warnings */
        if (endpoint_plugin_qos) {} /* To avoid warnings */

        if(deserialize_encapsulation) {

            if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
                return RTI_FALSE;
            }

            position = RTICdrStream_resetAlignment(stream);
        }
        if (deserialize_key) {

            if (!RTICdrStream_deserializeStringEx(
                stream,&sample->my_key, (32) + 1, RTI_FALSE)) {
                return RTI_FALSE;
            }
        }

        if(deserialize_encapsulation) {
            RTICdrStream_restoreAlignment(stream,position);
        }

        return RTI_TRUE;

    } catch (std::bad_alloc&) {
        return RTI_FALSE;
    }
}

RTIBool test_msgs_msg_dds__DynamicArrayPrimitives_Plugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    test_msgs_msg_dds__DynamicArrayPrimitives_ **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos)
{
    RTIBool result;
    if (drop_sample) {} /* To avoid warnings */
    stream->_xTypesState.unassignable = RTI_FALSE;
    result= test_msgs_msg_dds__DynamicArrayPrimitives_Plugin_deserialize_key_sample(
        endpoint_data, (sample != NULL)?*sample:NULL, stream,
        deserialize_encapsulation, deserialize_key, endpoint_plugin_qos);
    if (result) {
        if (stream->_xTypesState.unassignable) {
            result = RTI_FALSE;
        }
    }

    return result;    

}

unsigned int
test_msgs_msg_dds__DynamicArrayPrimitives_Plugin_get_serialized_key_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;

    if (endpoint_data) {} /* To avoid warnings */
    if (overflow) {} /* To avoid warnings */

    if (include_encapsulation) {

        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }
        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;
    }

    current_alignment +=RTICdrType_getStringMaxSizeSerialized(
        current_alignment, (32)+1);

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }
    return current_alignment - initial_alignment;
}

unsigned int
test_msgs_msg_dds__DynamicArrayPrimitives_Plugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int size;
    RTIBool overflow = RTI_FALSE;

    size = test_msgs_msg_dds__DynamicArrayPrimitives_Plugin_get_serialized_key_max_size_ex(
        endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

    if (overflow) {
        size = RTI_CDR_MAX_SERIALIZED_SIZE;
    }

    return size;
}

RTIBool 
test_msgs_msg_dds__DynamicArrayPrimitives_Plugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    test_msgs_msg_dds__DynamicArrayPrimitives_ *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    RTIBool done = RTI_FALSE;
    RTIBool error = RTI_FALSE;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */

    if (stream == NULL) {
        error = RTI_TRUE;
        goto fin;
    }
    if(deserialize_encapsulation) {
        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;
        }
        position = RTICdrStream_resetAlignment(stream);
    }

    if (deserialize_key) {

        if (!RTICdrStream_deserializeStringEx(
            stream,&sample->my_key, (32) + 1, RTI_FALSE)) {
            return RTI_FALSE;
        }
        {
            RTICdrUnsignedLong sequence_length;
            if (!RTICdrStream_skipPrimitiveSequence(
                stream,
                &sequence_length,
                RTI_CDR_BOOLEAN_TYPE)){
                goto fin; 
            }
        }

        {
            RTICdrUnsignedLong sequence_length;
            if (!RTICdrStream_skipPrimitiveSequence(
                stream,
                &sequence_length,
                RTI_CDR_OCTET_TYPE)){
                goto fin; 
            }
        }

        {
            RTICdrUnsignedLong sequence_length;
            if (!RTICdrStream_skipPrimitiveSequence(
                stream,
                &sequence_length,
                RTI_CDR_CHAR_TYPE)){
                goto fin; 
            }
        }

        {
            RTICdrUnsignedLong sequence_length;
            if (!RTICdrStream_skipPrimitiveSequence(
                stream,
                &sequence_length,
                RTI_CDR_FLOAT_TYPE)){
                goto fin; 
            }
        }

        {
            RTICdrUnsignedLong sequence_length;
            if (!RTICdrStream_skipPrimitiveSequence(
                stream,
                &sequence_length,
                RTI_CDR_DOUBLE_TYPE)){
                goto fin; 
            }
        }

        {
            RTICdrUnsignedLong sequence_length;
            if (!RTICdrStream_skipPrimitiveSequence(
                stream,
                &sequence_length,
                RTI_CDR_OCTET_TYPE)){
                goto fin; 
            }
        }

        {
            RTICdrUnsignedLong sequence_length;
            if (!RTICdrStream_skipPrimitiveSequence(
                stream,
                &sequence_length,
                RTI_CDR_OCTET_TYPE)){
                goto fin; 
            }
        }

        {
            RTICdrUnsignedLong sequence_length;
            if (!RTICdrStream_skipPrimitiveSequence(
                stream,
                &sequence_length,
                RTI_CDR_SHORT_TYPE)){
                goto fin; 
            }
        }

        {
            RTICdrUnsignedLong sequence_length;
            if (!RTICdrStream_skipPrimitiveSequence(
                stream,
                &sequence_length,
                RTI_CDR_UNSIGNED_SHORT_TYPE)){
                goto fin; 
            }
        }

        {
            RTICdrUnsignedLong sequence_length;
            if (!RTICdrStream_skipPrimitiveSequence(
                stream,
                &sequence_length,
                RTI_CDR_LONG_TYPE)){
                goto fin; 
            }
        }

        {
            RTICdrUnsignedLong sequence_length;
            if (!RTICdrStream_skipPrimitiveSequence(
                stream,
                &sequence_length,
                RTI_CDR_UNSIGNED_LONG_TYPE)){
                goto fin; 
            }
        }

        {
            RTICdrUnsignedLong sequence_length;
            if (!RTICdrStream_skipPrimitiveSequence(
                stream,
                &sequence_length,
                RTI_CDR_LONG_LONG_TYPE)){
                goto fin; 
            }
        }

        {
            RTICdrUnsignedLong sequence_length;
            if (!RTICdrStream_skipPrimitiveSequence(
                stream,
                &sequence_length,
                RTI_CDR_UNSIGNED_LONG_LONG_TYPE)){
                goto fin; 
            }
        }

        {
            RTICdrUnsignedLong sequence_length;
            if (!RTICdrStream_skipStringSequence(
                stream,
                &sequence_length,
                (255) + 1,     RTI_CDR_CHAR_TYPE)){
                goto fin; 
            }
        }

        if (!RTICdrStream_skipLong (stream)) {
            goto fin; 
        }

    }

    done = RTI_TRUE;
  fin:
    if(!error) {
        if (done != RTI_TRUE && 
        RTICdrStream_getRemainder(stream) >=
        RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
            return RTI_FALSE;   
        }
    } else {
        return RTI_FALSE;
    }       

    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;
}

RTIBool 
test_msgs_msg_dds__DynamicArrayPrimitives_Plugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    test_msgs_msg_dds__DynamicArrayPrimitives_KeyHolder *dst, 
    const test_msgs_msg_dds__DynamicArrayPrimitives_ *src)
{

    if (endpoint_data) {} /* To avoid warnings */   

    if (!RTICdrType_copyStringEx (
        &dst->my_key, src->my_key, 
        (32) + 1, RTI_FALSE)){
        return RTI_FALSE;
    }
    return RTI_TRUE;
}

RTIBool 
test_msgs_msg_dds__DynamicArrayPrimitives_Plugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    test_msgs_msg_dds__DynamicArrayPrimitives_ *dst, const
    test_msgs_msg_dds__DynamicArrayPrimitives_KeyHolder *src)
{

    if (endpoint_data) {} /* To avoid warnings */   
    if (!RTICdrType_copyStringEx (
        &dst->my_key, src->my_key, 
        (32) + 1, RTI_FALSE)){
        return RTI_FALSE;
    }
    return RTI_TRUE;
}

RTIBool 
test_msgs_msg_dds__DynamicArrayPrimitives_Plugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const test_msgs_msg_dds__DynamicArrayPrimitives_ *instance)
{
    struct RTICdrStream * md5Stream = NULL;
    struct RTICdrStreamState cdrState;
    char * buffer = NULL;

    RTICdrStreamState_init(&cdrState);
    md5Stream = PRESTypePluginDefaultEndpointData_getMD5Stream(endpoint_data);

    if (md5Stream == NULL) {
        return RTI_FALSE;
    }

    RTICdrStream_resetPosition(md5Stream);
    RTICdrStream_setDirtyBit(md5Stream, RTI_TRUE);

    if (!test_msgs_msg_dds__DynamicArrayPrimitives_Plugin_serialize_key(
        endpoint_data,
        instance,
        md5Stream, 
        RTI_FALSE, 
        RTI_CDR_ENCAPSULATION_ID_CDR_BE, 
        RTI_TRUE,
        NULL)) 
    {
        int size;

        RTICdrStream_pushState(md5Stream, &cdrState, -1);

        size = (int)test_msgs_msg_dds__DynamicArrayPrimitives_Plugin_get_serialized_sample_size(
            endpoint_data,
            RTI_FALSE,
            RTI_CDR_ENCAPSULATION_ID_CDR_BE,
            0,
            instance);

        if (size <= RTICdrStream_getBufferLength(md5Stream)) {
            RTICdrStream_popState(md5Stream, &cdrState);        
            return RTI_FALSE;
        }   

        RTIOsapiHeap_allocateBuffer(&buffer,size,0);

        if (buffer == NULL) {
            RTICdrStream_popState(md5Stream, &cdrState);
            return RTI_FALSE;
        }

        RTICdrStream_set(md5Stream, buffer, size);
        RTIOsapiMemory_zero(
            RTICdrStream_getBuffer(md5Stream),
            RTICdrStream_getBufferLength(md5Stream));
        RTICdrStream_resetPosition(md5Stream);
        RTICdrStream_setDirtyBit(md5Stream, RTI_TRUE);
        if (!test_msgs_msg_dds__DynamicArrayPrimitives_Plugin_serialize_key(
            endpoint_data,
            instance,
            md5Stream, 
            RTI_FALSE, 
            RTI_CDR_ENCAPSULATION_ID_CDR_BE, 
            RTI_TRUE,
            NULL)) 
        {
            RTICdrStream_popState(md5Stream, &cdrState);
            RTIOsapiHeap_freeBuffer(buffer);
            return RTI_FALSE;
        }        
    }   

    if (PRESTypePluginDefaultEndpointData_getMaxSizeSerializedKey(endpoint_data) > 
    (unsigned int)(MIG_RTPS_KEY_HASH_MAX_LENGTH) ||
    PRESTypePluginDefaultEndpointData_forceMD5KeyHash(endpoint_data)) {
        RTICdrStream_computeMD5(md5Stream, keyhash->value);
    } else {
        RTIOsapiMemory_zero(keyhash->value,MIG_RTPS_KEY_HASH_MAX_LENGTH);
        RTIOsapiMemory_copy(
            keyhash->value, 
            RTICdrStream_getBuffer(md5Stream), 
            RTICdrStream_getCurrentPositionOffset(md5Stream));
    }

    keyhash->length = MIG_RTPS_KEY_HASH_MAX_LENGTH;

    if (buffer != NULL) {
        RTICdrStream_popState(md5Stream, &cdrState);
        RTIOsapiHeap_freeBuffer(buffer);
    }

    return RTI_TRUE;
}

RTIBool 
test_msgs_msg_dds__DynamicArrayPrimitives_Plugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos) 
{   
    char * position = NULL;

    RTIBool done = RTI_FALSE;
    RTIBool error = RTI_FALSE;
    test_msgs_msg_dds__DynamicArrayPrimitives_ * sample=NULL;

    if (endpoint_plugin_qos) {} /* To avoid warnings */
    if (stream == NULL) {
        error = RTI_TRUE;
        goto fin;
    }

    if(deserialize_encapsulation) {
        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }

    sample = (test_msgs_msg_dds__DynamicArrayPrimitives_ *)
    PRESTypePluginDefaultEndpointData_getTempSample(endpoint_data);

    if (sample == NULL) {
        return RTI_FALSE;
    }

    if (!RTICdrStream_deserializeStringEx(
        stream,&sample->my_key, (32) + 1, RTI_FALSE)) {
        return RTI_FALSE;
    }
    done = RTI_TRUE;
  fin:
    if(!error) {
        if (done != RTI_TRUE && 
        RTICdrStream_getRemainder(stream) >=
        RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
            return RTI_FALSE;   
        }
    } else {
        return RTI_FALSE;
    } 

    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    if (!test_msgs_msg_dds__DynamicArrayPrimitives_Plugin_instance_to_keyhash(
        endpoint_data, keyhash, sample)) {
        return RTI_FALSE;
    }

    return RTI_TRUE;
}

/* ------------------------------------------------------------------------
* Plug-in Installation Methods
* ------------------------------------------------------------------------ */
struct PRESTypePlugin *test_msgs_msg_dds__DynamicArrayPrimitives_Plugin_new(void) 
{ 
    struct PRESTypePlugin *plugin = NULL;
    const struct PRESTypePluginVersion PLUGIN_VERSION = 
    PRES_TYPE_PLUGIN_VERSION_2_0;

    RTIOsapiHeap_allocateStructure(
        &plugin, struct PRESTypePlugin);

    if (plugin == NULL) {
        return NULL;
    }

    plugin->version = PLUGIN_VERSION;

    /* set up parent's function pointers */
    plugin->onParticipantAttached =
    (PRESTypePluginOnParticipantAttachedCallback)
    test_msgs_msg_dds__DynamicArrayPrimitives_Plugin_on_participant_attached;
    plugin->onParticipantDetached =
    (PRESTypePluginOnParticipantDetachedCallback)
    test_msgs_msg_dds__DynamicArrayPrimitives_Plugin_on_participant_detached;
    plugin->onEndpointAttached =
    (PRESTypePluginOnEndpointAttachedCallback)
    test_msgs_msg_dds__DynamicArrayPrimitives_Plugin_on_endpoint_attached;
    plugin->onEndpointDetached =
    (PRESTypePluginOnEndpointDetachedCallback)
    test_msgs_msg_dds__DynamicArrayPrimitives_Plugin_on_endpoint_detached;

    plugin->copySampleFnc =
    (PRESTypePluginCopySampleFunction)
    test_msgs_msg_dds__DynamicArrayPrimitives_Plugin_copy_sample;
    plugin->createSampleFnc =
    (PRESTypePluginCreateSampleFunction)
    test_msgs_msg_dds__DynamicArrayPrimitives_Plugin_create_sample;
    plugin->destroySampleFnc =
    (PRESTypePluginDestroySampleFunction)
    test_msgs_msg_dds__DynamicArrayPrimitives_Plugin_destroy_sample;

    plugin->serializeFnc =
    (PRESTypePluginSerializeFunction)
    test_msgs_msg_dds__DynamicArrayPrimitives_Plugin_serialize;
    plugin->deserializeFnc =
    (PRESTypePluginDeserializeFunction)
    test_msgs_msg_dds__DynamicArrayPrimitives_Plugin_deserialize;
    plugin->getSerializedSampleMaxSizeFnc =
    (PRESTypePluginGetSerializedSampleMaxSizeFunction)
    test_msgs_msg_dds__DynamicArrayPrimitives_Plugin_get_serialized_sample_max_size;
    plugin->getSerializedSampleMinSizeFnc =
    (PRESTypePluginGetSerializedSampleMinSizeFunction)
    test_msgs_msg_dds__DynamicArrayPrimitives_Plugin_get_serialized_sample_min_size;

    plugin->getSampleFnc =
    (PRESTypePluginGetSampleFunction)
    test_msgs_msg_dds__DynamicArrayPrimitives_Plugin_get_sample;
    plugin->returnSampleFnc =
    (PRESTypePluginReturnSampleFunction)
    test_msgs_msg_dds__DynamicArrayPrimitives_Plugin_return_sample;

    plugin->getKeyKindFnc =
    (PRESTypePluginGetKeyKindFunction)
    test_msgs_msg_dds__DynamicArrayPrimitives_Plugin_get_key_kind;

    plugin->getSerializedKeyMaxSizeFnc =   
    (PRESTypePluginGetSerializedKeyMaxSizeFunction)
    test_msgs_msg_dds__DynamicArrayPrimitives_Plugin_get_serialized_key_max_size;
    plugin->serializeKeyFnc =
    (PRESTypePluginSerializeKeyFunction)
    test_msgs_msg_dds__DynamicArrayPrimitives_Plugin_serialize_key;
    plugin->deserializeKeyFnc =
    (PRESTypePluginDeserializeKeyFunction)
    test_msgs_msg_dds__DynamicArrayPrimitives_Plugin_deserialize_key;
    plugin->deserializeKeySampleFnc =
    (PRESTypePluginDeserializeKeySampleFunction)
    test_msgs_msg_dds__DynamicArrayPrimitives_Plugin_deserialize_key_sample;

    plugin-> instanceToKeyHashFnc = 
    (PRESTypePluginInstanceToKeyHashFunction)
    test_msgs_msg_dds__DynamicArrayPrimitives_Plugin_instance_to_keyhash;
    plugin->serializedSampleToKeyHashFnc = 
    (PRESTypePluginSerializedSampleToKeyHashFunction)
    test_msgs_msg_dds__DynamicArrayPrimitives_Plugin_serialized_sample_to_keyhash;

    plugin->getKeyFnc =
    (PRESTypePluginGetKeyFunction)
    test_msgs_msg_dds__DynamicArrayPrimitives_Plugin_get_key;
    plugin->returnKeyFnc =
    (PRESTypePluginReturnKeyFunction)
    test_msgs_msg_dds__DynamicArrayPrimitives_Plugin_return_key;

    plugin->instanceToKeyFnc =
    (PRESTypePluginInstanceToKeyFunction)
    test_msgs_msg_dds__DynamicArrayPrimitives_Plugin_instance_to_key;
    plugin->keyToInstanceFnc =
    (PRESTypePluginKeyToInstanceFunction)
    test_msgs_msg_dds__DynamicArrayPrimitives_Plugin_key_to_instance;
    plugin->serializedKeyToKeyHashFnc = NULL; /* Not supported yet */
    plugin->typeCode =  (struct RTICdrTypeCode *)test_msgs_msg_dds__DynamicArrayPrimitives__get_typecode();

    plugin->languageKind = PRES_TYPEPLUGIN_CPP_LANG;

    /* Serialized buffer */
    plugin->getBuffer = 
    (PRESTypePluginGetBufferFunction)
    test_msgs_msg_dds__DynamicArrayPrimitives_Plugin_get_buffer;
    plugin->returnBuffer = 
    (PRESTypePluginReturnBufferFunction)
    test_msgs_msg_dds__DynamicArrayPrimitives_Plugin_return_buffer;
    plugin->getSerializedSampleSizeFnc =
    (PRESTypePluginGetSerializedSampleSizeFunction)
    test_msgs_msg_dds__DynamicArrayPrimitives_Plugin_get_serialized_sample_size;

    plugin->endpointTypeName = test_msgs_msg_dds__DynamicArrayPrimitives_TYPENAME;

    return plugin;
}

void
test_msgs_msg_dds__DynamicArrayPrimitives_Plugin_delete(struct PRESTypePlugin *plugin)
{
    RTIOsapiHeap_freeStructure(plugin);
} 
#undef RTI_CDR_CURRENT_SUBMODULE 
