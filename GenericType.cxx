

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GenericType.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#ifndef dds_c_log_impl_h              
#include "dds_c/dds_c_log_impl.h"                                
#endif        

#ifndef cdr_type_h
#include "cdr/cdr_type.h"
#endif    

#ifndef osapi_heap_h
#include "osapi/osapi_heap.h" 
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "GenericType.h"

#include <new>

/* ========================================================================= */
const char *GenericTypeTYPENAME = "GenericType";

DDS_TypeCode* GenericType_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode GenericType_g_tc_key_hash_array =DDS_INITIALIZE_ARRAY_TYPECODE(1,(KEY_HASH_LENGTH_16), NULL,NULL);
    static DDS_TypeCode GenericType_g_tc_serialized_key_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE((100),NULL);
    static DDS_TypeCode GenericType_g_tc_serialized_data_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE((100),NULL);
    static DDS_TypeCode_Member GenericType_g_tc_members[3]=
    {

        {
            (char *)"key_hash",/* Member name */
            {
                0,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_KEY_MEMBER , /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"serialized_key",/* Member name */
            {
                1,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"serialized_data",/* Member name */
            {
                2,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }
    };

    static DDS_TypeCode GenericType_g_tc =
    {{
            DDS_TK_STRUCT,/* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"GenericType", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            3, /* Number of members */
            GenericType_g_tc_members, /* Members */
            DDS_VM_NONE  /* Ignored */         
        }}; /* Type code for GenericType*/

    if (is_initialized) {
        return &GenericType_g_tc;
    }

    GenericType_g_tc_key_hash_array._data._typeCode =(RTICdrTypeCode *)&DDS_g_tc_octet;

    GenericType_g_tc_serialized_key_sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;

    GenericType_g_tc_serialized_data_sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;

    GenericType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)& GenericType_g_tc_key_hash_array;
    GenericType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)& GenericType_g_tc_serialized_key_sequence;
    GenericType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)& GenericType_g_tc_serialized_data_sequence;

    is_initialized = RTI_TRUE;

    return &GenericType_g_tc;
}

RTIBool GenericType_initialize(
    GenericType* sample) {
    return GenericType_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool GenericType_initialize_ex(
    GenericType* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return GenericType_initialize_w_params(
        sample,&allocParams);

}

RTIBool GenericType_initialize_w_params(
    GenericType* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    void* buffer = NULL;
    if (buffer) {} /* To avoid warnings */

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initArray(
        sample->key_hash, ((KEY_HASH_LENGTH_16)), RTI_CDR_OCTET_SIZE)) {
        return RTI_FALSE;
    }
    if (allocParams->allocate_memory) {
        DDS_OctetSeq_initialize(&sample->serialized_key  );
        DDS_OctetSeq_set_absolute_maximum(&sample->serialized_key , (100));
        if (!DDS_OctetSeq_set_maximum(&sample->serialized_key , (100))) {
            return RTI_FALSE;
        }
    } else { 
        DDS_OctetSeq_set_length(&sample->serialized_key, 0);
    }
    if (allocParams->allocate_memory) {
        DDS_OctetSeq_initialize(&sample->serialized_data  );
        DDS_OctetSeq_set_absolute_maximum(&sample->serialized_data , (100));
        if (!DDS_OctetSeq_set_maximum(&sample->serialized_data , (100))) {
            return RTI_FALSE;
        }
    } else { 
        DDS_OctetSeq_set_length(&sample->serialized_data, 0);
    }
    return RTI_TRUE;
}

void GenericType_finalize(
    GenericType* sample)
{

    GenericType_finalize_ex(sample,RTI_TRUE);
}

void GenericType_finalize_ex(
    GenericType* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    GenericType_finalize_w_params(
        sample,&deallocParams);
}

void GenericType_finalize_w_params(
    GenericType* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

    DDS_OctetSeq_finalize(&sample->serialized_key);

    DDS_OctetSeq_finalize(&sample->serialized_data);

}

void GenericType_finalize_optional_members(
    GenericType* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
    &deallocParamsTmp;

    if (sample==NULL) {
        return;
    } 
    if (deallocParams) {} /* To avoid warnings */

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

}

RTIBool GenericType_copy(
    GenericType* dst,
    const GenericType* src)
{
    try {

        if (dst == NULL || src == NULL) {
            return RTI_FALSE;
        }

        if (!RTICdrType_copyArray(
            dst->key_hash ,src->key_hash,((KEY_HASH_LENGTH_16)), RTI_CDR_OCTET_SIZE)) {
            return RTI_FALSE;
        }
        if (!DDS_OctetSeq_copy(&dst->serialized_key ,
        &src->serialized_key )) {
            return RTI_FALSE;
        }
        if (!DDS_OctetSeq_copy(&dst->serialized_data ,
        &src->serialized_data )) {
            return RTI_FALSE;
        }

        return RTI_TRUE;

    } catch (std::bad_alloc&) {
        return RTI_FALSE;
    }
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'GenericType' sequence class.
*/
#define T GenericType
#define TSeq GenericTypeSeq

#define T_initialize_w_params GenericType_initialize_w_params

#define T_finalize_w_params   GenericType_finalize_w_params
#define T_copy       GenericType_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
#else
#include "dds_c_sequence_TSeq.gen"
#include "dds_cpp_sequence_TSeq.gen"
#endif

#undef T_copy
#undef T_finalize_w_params

#undef T_initialize_w_params

#undef TSeq
#undef T

