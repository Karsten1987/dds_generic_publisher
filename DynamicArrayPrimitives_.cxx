

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from DynamicArrayPrimitives_.idl using "rtiddsgen".
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

#include "DynamicArrayPrimitives_.h"

#include <new>

/* ========================================================================= */
const char *test_msgs_msg_dds__DynamicArrayPrimitives_TYPENAME = "test_msgs::msg::dds_::DynamicArrayPrimitives_";

DDS_TypeCode* test_msgs_msg_dds__DynamicArrayPrimitives__get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode test_msgs_msg_dds__DynamicArrayPrimitives__g_tc_my_key_string = DDS_INITIALIZE_STRING_TYPECODE((32));
    static DDS_TypeCode test_msgs_msg_dds__DynamicArrayPrimitives__g_tc_bool_values__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE((100),NULL);
    static DDS_TypeCode test_msgs_msg_dds__DynamicArrayPrimitives__g_tc_byte_values__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE((100),NULL);
    static DDS_TypeCode test_msgs_msg_dds__DynamicArrayPrimitives__g_tc_char_values__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE((100),NULL);
    static DDS_TypeCode test_msgs_msg_dds__DynamicArrayPrimitives__g_tc_float32_values__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE((100),NULL);
    static DDS_TypeCode test_msgs_msg_dds__DynamicArrayPrimitives__g_tc_float64_values__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE((100),NULL);
    static DDS_TypeCode test_msgs_msg_dds__DynamicArrayPrimitives__g_tc_int8_values__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE((100),NULL);
    static DDS_TypeCode test_msgs_msg_dds__DynamicArrayPrimitives__g_tc_uint8_values__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE((100),NULL);
    static DDS_TypeCode test_msgs_msg_dds__DynamicArrayPrimitives__g_tc_int16_values__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE((100),NULL);
    static DDS_TypeCode test_msgs_msg_dds__DynamicArrayPrimitives__g_tc_uint16_values__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE((100),NULL);
    static DDS_TypeCode test_msgs_msg_dds__DynamicArrayPrimitives__g_tc_int32_values__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE((100),NULL);
    static DDS_TypeCode test_msgs_msg_dds__DynamicArrayPrimitives__g_tc_uint32_values__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE((100),NULL);
    static DDS_TypeCode test_msgs_msg_dds__DynamicArrayPrimitives__g_tc_int64_values__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE((100),NULL);
    static DDS_TypeCode test_msgs_msg_dds__DynamicArrayPrimitives__g_tc_uint64_values__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE((100),NULL);
    static DDS_TypeCode test_msgs_msg_dds__DynamicArrayPrimitives__g_tc_string_values__string = DDS_INITIALIZE_STRING_TYPECODE((255));
    static DDS_TypeCode test_msgs_msg_dds__DynamicArrayPrimitives__g_tc_string_values__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE((100),NULL);
    static DDS_TypeCode_Member test_msgs_msg_dds__DynamicArrayPrimitives__g_tc_members[16]=
    {

        {
            (char *)"my_key",/* Member name */
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
            (char *)"bool_values_",/* Member name */
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
            (char *)"byte_values_",/* Member name */
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
        }, 
        {
            (char *)"char_values_",/* Member name */
            {
                3,/* Representation ID */          
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
            (char *)"float32_values_",/* Member name */
            {
                4,/* Representation ID */          
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
            (char *)"float64_values_",/* Member name */
            {
                5,/* Representation ID */          
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
            (char *)"int8_values_",/* Member name */
            {
                6,/* Representation ID */          
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
            (char *)"uint8_values_",/* Member name */
            {
                7,/* Representation ID */          
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
            (char *)"int16_values_",/* Member name */
            {
                8,/* Representation ID */          
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
            (char *)"uint16_values_",/* Member name */
            {
                9,/* Representation ID */          
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
            (char *)"int32_values_",/* Member name */
            {
                10,/* Representation ID */          
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
            (char *)"uint32_values_",/* Member name */
            {
                11,/* Representation ID */          
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
            (char *)"int64_values_",/* Member name */
            {
                12,/* Representation ID */          
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
            (char *)"uint64_values_",/* Member name */
            {
                13,/* Representation ID */          
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
            (char *)"string_values_",/* Member name */
            {
                14,/* Representation ID */          
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
            (char *)"check_",/* Member name */
            {
                15,/* Representation ID */          
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

    static DDS_TypeCode test_msgs_msg_dds__DynamicArrayPrimitives__g_tc =
    {{
            DDS_TK_STRUCT,/* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"test_msgs::msg::dds_::DynamicArrayPrimitives_", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            16, /* Number of members */
            test_msgs_msg_dds__DynamicArrayPrimitives__g_tc_members, /* Members */
            DDS_VM_NONE  /* Ignored */         
        }}; /* Type code for test_msgs_msg_dds__DynamicArrayPrimitives_*/

    if (is_initialized) {
        return &test_msgs_msg_dds__DynamicArrayPrimitives__g_tc;
    }

    test_msgs_msg_dds__DynamicArrayPrimitives__g_tc_bool_values__sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;

    test_msgs_msg_dds__DynamicArrayPrimitives__g_tc_byte_values__sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;

    test_msgs_msg_dds__DynamicArrayPrimitives__g_tc_char_values__sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_char;

    test_msgs_msg_dds__DynamicArrayPrimitives__g_tc_float32_values__sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;

    test_msgs_msg_dds__DynamicArrayPrimitives__g_tc_float64_values__sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    test_msgs_msg_dds__DynamicArrayPrimitives__g_tc_int8_values__sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;

    test_msgs_msg_dds__DynamicArrayPrimitives__g_tc_uint8_values__sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;

    test_msgs_msg_dds__DynamicArrayPrimitives__g_tc_int16_values__sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_short;

    test_msgs_msg_dds__DynamicArrayPrimitives__g_tc_uint16_values__sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ushort;

    test_msgs_msg_dds__DynamicArrayPrimitives__g_tc_int32_values__sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

    test_msgs_msg_dds__DynamicArrayPrimitives__g_tc_uint32_values__sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;

    test_msgs_msg_dds__DynamicArrayPrimitives__g_tc_int64_values__sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_longlong;

    test_msgs_msg_dds__DynamicArrayPrimitives__g_tc_uint64_values__sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulonglong;

    test_msgs_msg_dds__DynamicArrayPrimitives__g_tc_string_values__sequence._data._typeCode = (RTICdrTypeCode *)&test_msgs_msg_dds__DynamicArrayPrimitives__g_tc_string_values__string;

    test_msgs_msg_dds__DynamicArrayPrimitives__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&test_msgs_msg_dds__DynamicArrayPrimitives__g_tc_my_key_string;

    test_msgs_msg_dds__DynamicArrayPrimitives__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)& test_msgs_msg_dds__DynamicArrayPrimitives__g_tc_bool_values__sequence;
    test_msgs_msg_dds__DynamicArrayPrimitives__g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)& test_msgs_msg_dds__DynamicArrayPrimitives__g_tc_byte_values__sequence;
    test_msgs_msg_dds__DynamicArrayPrimitives__g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)& test_msgs_msg_dds__DynamicArrayPrimitives__g_tc_char_values__sequence;
    test_msgs_msg_dds__DynamicArrayPrimitives__g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)& test_msgs_msg_dds__DynamicArrayPrimitives__g_tc_float32_values__sequence;
    test_msgs_msg_dds__DynamicArrayPrimitives__g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)& test_msgs_msg_dds__DynamicArrayPrimitives__g_tc_float64_values__sequence;
    test_msgs_msg_dds__DynamicArrayPrimitives__g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)& test_msgs_msg_dds__DynamicArrayPrimitives__g_tc_int8_values__sequence;
    test_msgs_msg_dds__DynamicArrayPrimitives__g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)& test_msgs_msg_dds__DynamicArrayPrimitives__g_tc_uint8_values__sequence;
    test_msgs_msg_dds__DynamicArrayPrimitives__g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)& test_msgs_msg_dds__DynamicArrayPrimitives__g_tc_int16_values__sequence;
    test_msgs_msg_dds__DynamicArrayPrimitives__g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)& test_msgs_msg_dds__DynamicArrayPrimitives__g_tc_uint16_values__sequence;
    test_msgs_msg_dds__DynamicArrayPrimitives__g_tc_members[10]._representation._typeCode = (RTICdrTypeCode *)& test_msgs_msg_dds__DynamicArrayPrimitives__g_tc_int32_values__sequence;
    test_msgs_msg_dds__DynamicArrayPrimitives__g_tc_members[11]._representation._typeCode = (RTICdrTypeCode *)& test_msgs_msg_dds__DynamicArrayPrimitives__g_tc_uint32_values__sequence;
    test_msgs_msg_dds__DynamicArrayPrimitives__g_tc_members[12]._representation._typeCode = (RTICdrTypeCode *)& test_msgs_msg_dds__DynamicArrayPrimitives__g_tc_int64_values__sequence;
    test_msgs_msg_dds__DynamicArrayPrimitives__g_tc_members[13]._representation._typeCode = (RTICdrTypeCode *)& test_msgs_msg_dds__DynamicArrayPrimitives__g_tc_uint64_values__sequence;
    test_msgs_msg_dds__DynamicArrayPrimitives__g_tc_members[14]._representation._typeCode = (RTICdrTypeCode *)& test_msgs_msg_dds__DynamicArrayPrimitives__g_tc_string_values__sequence;
    test_msgs_msg_dds__DynamicArrayPrimitives__g_tc_members[15]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

    is_initialized = RTI_TRUE;

    return &test_msgs_msg_dds__DynamicArrayPrimitives__g_tc;
}

RTIBool test_msgs_msg_dds__DynamicArrayPrimitives__initialize(
    test_msgs_msg_dds__DynamicArrayPrimitives_* sample) {
    return test_msgs_msg_dds__DynamicArrayPrimitives__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool test_msgs_msg_dds__DynamicArrayPrimitives__initialize_ex(
    test_msgs_msg_dds__DynamicArrayPrimitives_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return test_msgs_msg_dds__DynamicArrayPrimitives__initialize_w_params(
        sample,&allocParams);

}

RTIBool test_msgs_msg_dds__DynamicArrayPrimitives__initialize_w_params(
    test_msgs_msg_dds__DynamicArrayPrimitives_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    void* buffer = NULL;
    if (buffer) {} /* To avoid warnings */

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }

    if (allocParams->allocate_memory){
        sample->my_key= DDS_String_alloc ((32));
        if (sample->my_key == NULL) {
            return RTI_FALSE;
        }

    } else {
        if (sample->my_key!= NULL) { 
            sample->my_key[0] = '\0';
        }
    }

    if (allocParams->allocate_memory) {
        DDS_BooleanSeq_initialize(&sample->bool_values_  );
        DDS_BooleanSeq_set_absolute_maximum(&sample->bool_values_ , (100));
        if (!DDS_BooleanSeq_set_maximum(&sample->bool_values_ , (100))) {
            return RTI_FALSE;
        }
    } else { 
        DDS_BooleanSeq_set_length(&sample->bool_values_, 0);
    }
    if (allocParams->allocate_memory) {
        DDS_OctetSeq_initialize(&sample->byte_values_  );
        DDS_OctetSeq_set_absolute_maximum(&sample->byte_values_ , (100));
        if (!DDS_OctetSeq_set_maximum(&sample->byte_values_ , (100))) {
            return RTI_FALSE;
        }
    } else { 
        DDS_OctetSeq_set_length(&sample->byte_values_, 0);
    }
    if (allocParams->allocate_memory) {
        DDS_CharSeq_initialize(&sample->char_values_  );
        DDS_CharSeq_set_absolute_maximum(&sample->char_values_ , (100));
        if (!DDS_CharSeq_set_maximum(&sample->char_values_ , (100))) {
            return RTI_FALSE;
        }
    } else { 
        DDS_CharSeq_set_length(&sample->char_values_, 0);
    }
    if (allocParams->allocate_memory) {
        DDS_FloatSeq_initialize(&sample->float32_values_  );
        DDS_FloatSeq_set_absolute_maximum(&sample->float32_values_ , (100));
        if (!DDS_FloatSeq_set_maximum(&sample->float32_values_ , (100))) {
            return RTI_FALSE;
        }
    } else { 
        DDS_FloatSeq_set_length(&sample->float32_values_, 0);
    }
    if (allocParams->allocate_memory) {
        DDS_DoubleSeq_initialize(&sample->float64_values_  );
        DDS_DoubleSeq_set_absolute_maximum(&sample->float64_values_ , (100));
        if (!DDS_DoubleSeq_set_maximum(&sample->float64_values_ , (100))) {
            return RTI_FALSE;
        }
    } else { 
        DDS_DoubleSeq_set_length(&sample->float64_values_, 0);
    }
    if (allocParams->allocate_memory) {
        DDS_OctetSeq_initialize(&sample->int8_values_  );
        DDS_OctetSeq_set_absolute_maximum(&sample->int8_values_ , (100));
        if (!DDS_OctetSeq_set_maximum(&sample->int8_values_ , (100))) {
            return RTI_FALSE;
        }
    } else { 
        DDS_OctetSeq_set_length(&sample->int8_values_, 0);
    }
    if (allocParams->allocate_memory) {
        DDS_OctetSeq_initialize(&sample->uint8_values_  );
        DDS_OctetSeq_set_absolute_maximum(&sample->uint8_values_ , (100));
        if (!DDS_OctetSeq_set_maximum(&sample->uint8_values_ , (100))) {
            return RTI_FALSE;
        }
    } else { 
        DDS_OctetSeq_set_length(&sample->uint8_values_, 0);
    }
    if (allocParams->allocate_memory) {
        DDS_ShortSeq_initialize(&sample->int16_values_  );
        DDS_ShortSeq_set_absolute_maximum(&sample->int16_values_ , (100));
        if (!DDS_ShortSeq_set_maximum(&sample->int16_values_ , (100))) {
            return RTI_FALSE;
        }
    } else { 
        DDS_ShortSeq_set_length(&sample->int16_values_, 0);
    }
    if (allocParams->allocate_memory) {
        DDS_UnsignedShortSeq_initialize(&sample->uint16_values_  );
        DDS_UnsignedShortSeq_set_absolute_maximum(&sample->uint16_values_ , (100));
        if (!DDS_UnsignedShortSeq_set_maximum(&sample->uint16_values_ , (100))) {
            return RTI_FALSE;
        }
    } else { 
        DDS_UnsignedShortSeq_set_length(&sample->uint16_values_, 0);
    }
    if (allocParams->allocate_memory) {
        DDS_LongSeq_initialize(&sample->int32_values_  );
        DDS_LongSeq_set_absolute_maximum(&sample->int32_values_ , (100));
        if (!DDS_LongSeq_set_maximum(&sample->int32_values_ , (100))) {
            return RTI_FALSE;
        }
    } else { 
        DDS_LongSeq_set_length(&sample->int32_values_, 0);
    }
    if (allocParams->allocate_memory) {
        DDS_UnsignedLongSeq_initialize(&sample->uint32_values_  );
        DDS_UnsignedLongSeq_set_absolute_maximum(&sample->uint32_values_ , (100));
        if (!DDS_UnsignedLongSeq_set_maximum(&sample->uint32_values_ , (100))) {
            return RTI_FALSE;
        }
    } else { 
        DDS_UnsignedLongSeq_set_length(&sample->uint32_values_, 0);
    }
    if (allocParams->allocate_memory) {
        DDS_LongLongSeq_initialize(&sample->int64_values_  );
        DDS_LongLongSeq_set_absolute_maximum(&sample->int64_values_ , (100));
        if (!DDS_LongLongSeq_set_maximum(&sample->int64_values_ , (100))) {
            return RTI_FALSE;
        }
    } else { 
        DDS_LongLongSeq_set_length(&sample->int64_values_, 0);
    }
    if (allocParams->allocate_memory) {
        DDS_UnsignedLongLongSeq_initialize(&sample->uint64_values_  );
        DDS_UnsignedLongLongSeq_set_absolute_maximum(&sample->uint64_values_ , (100));
        if (!DDS_UnsignedLongLongSeq_set_maximum(&sample->uint64_values_ , (100))) {
            return RTI_FALSE;
        }
    } else { 
        DDS_UnsignedLongLongSeq_set_length(&sample->uint64_values_, 0);
    }
    if (allocParams->allocate_memory) {
        DDS_StringSeq_initialize(&sample->string_values_  );
        DDS_StringSeq_set_absolute_maximum(&sample->string_values_ , (100));
        if (!DDS_StringSeq_set_maximum(&sample->string_values_ , (100))) {
            return RTI_FALSE;
        }
        buffer = DDS_StringSeq_get_contiguous_bufferI(
            &sample->string_values_ );

        if (buffer != NULL) {
            if (!RTICdrType_initStringArray(buffer, 
            (100),
            (255)+1,
            RTI_CDR_CHAR_TYPE)) {
                return RTI_FALSE;
            } 
        }
    } else { 
        DDS_StringSeq_set_length(&sample->string_values_, 0);
    }

    if (!RTICdrType_initLong(&sample->check_)) {
        return RTI_FALSE;
    }

    return RTI_TRUE;
}

void test_msgs_msg_dds__DynamicArrayPrimitives__finalize(
    test_msgs_msg_dds__DynamicArrayPrimitives_* sample)
{

    test_msgs_msg_dds__DynamicArrayPrimitives__finalize_ex(sample,RTI_TRUE);
}

void test_msgs_msg_dds__DynamicArrayPrimitives__finalize_ex(
    test_msgs_msg_dds__DynamicArrayPrimitives_* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    test_msgs_msg_dds__DynamicArrayPrimitives__finalize_w_params(
        sample,&deallocParams);
}

void test_msgs_msg_dds__DynamicArrayPrimitives__finalize_w_params(
    test_msgs_msg_dds__DynamicArrayPrimitives_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

    if (sample->my_key != NULL) {
        DDS_String_free(sample->my_key);
        sample->my_key=NULL;

    }
    DDS_BooleanSeq_finalize(&sample->bool_values_);

    DDS_OctetSeq_finalize(&sample->byte_values_);

    DDS_CharSeq_finalize(&sample->char_values_);

    DDS_FloatSeq_finalize(&sample->float32_values_);

    DDS_DoubleSeq_finalize(&sample->float64_values_);

    DDS_OctetSeq_finalize(&sample->int8_values_);

    DDS_OctetSeq_finalize(&sample->uint8_values_);

    DDS_ShortSeq_finalize(&sample->int16_values_);

    DDS_UnsignedShortSeq_finalize(&sample->uint16_values_);

    DDS_LongSeq_finalize(&sample->int32_values_);

    DDS_UnsignedLongSeq_finalize(&sample->uint32_values_);

    DDS_LongLongSeq_finalize(&sample->int64_values_);

    DDS_UnsignedLongLongSeq_finalize(&sample->uint64_values_);

    DDS_StringSeq_finalize(&sample->string_values_);

}

void test_msgs_msg_dds__DynamicArrayPrimitives__finalize_optional_members(
    test_msgs_msg_dds__DynamicArrayPrimitives_* sample, RTIBool deletePointers)
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

RTIBool test_msgs_msg_dds__DynamicArrayPrimitives__copy(
    test_msgs_msg_dds__DynamicArrayPrimitives_* dst,
    const test_msgs_msg_dds__DynamicArrayPrimitives_* src)
{
    try {

        if (dst == NULL || src == NULL) {
            return RTI_FALSE;
        }

        if (!RTICdrType_copyStringEx (
            &dst->my_key, src->my_key, 
            (32) + 1, RTI_FALSE)){
            return RTI_FALSE;
        }
        if (!DDS_BooleanSeq_copy(&dst->bool_values_ ,
        &src->bool_values_ )) {
            return RTI_FALSE;
        }
        if (!DDS_OctetSeq_copy(&dst->byte_values_ ,
        &src->byte_values_ )) {
            return RTI_FALSE;
        }
        if (!DDS_CharSeq_copy(&dst->char_values_ ,
        &src->char_values_ )) {
            return RTI_FALSE;
        }
        if (!DDS_FloatSeq_copy(&dst->float32_values_ ,
        &src->float32_values_ )) {
            return RTI_FALSE;
        }
        if (!DDS_DoubleSeq_copy(&dst->float64_values_ ,
        &src->float64_values_ )) {
            return RTI_FALSE;
        }
        if (!DDS_OctetSeq_copy(&dst->int8_values_ ,
        &src->int8_values_ )) {
            return RTI_FALSE;
        }
        if (!DDS_OctetSeq_copy(&dst->uint8_values_ ,
        &src->uint8_values_ )) {
            return RTI_FALSE;
        }
        if (!DDS_ShortSeq_copy(&dst->int16_values_ ,
        &src->int16_values_ )) {
            return RTI_FALSE;
        }
        if (!DDS_UnsignedShortSeq_copy(&dst->uint16_values_ ,
        &src->uint16_values_ )) {
            return RTI_FALSE;
        }
        if (!DDS_LongSeq_copy(&dst->int32_values_ ,
        &src->int32_values_ )) {
            return RTI_FALSE;
        }
        if (!DDS_UnsignedLongSeq_copy(&dst->uint32_values_ ,
        &src->uint32_values_ )) {
            return RTI_FALSE;
        }
        if (!DDS_LongLongSeq_copy(&dst->int64_values_ ,
        &src->int64_values_ )) {
            return RTI_FALSE;
        }
        if (!DDS_UnsignedLongLongSeq_copy(&dst->uint64_values_ ,
        &src->uint64_values_ )) {
            return RTI_FALSE;
        }
        if (!DDS_StringSeq_copy(&dst->string_values_ ,
        &src->string_values_ )) {
            return RTI_FALSE;
        }
        if (!RTICdrType_copyLong (
            &dst->check_, &src->check_)) { 
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
* Configure and implement 'test_msgs_msg_dds__DynamicArrayPrimitives_' sequence class.
*/
#define T test_msgs_msg_dds__DynamicArrayPrimitives_
#define TSeq test_msgs_msg_dds__DynamicArrayPrimitives_Seq

#define T_initialize_w_params test_msgs_msg_dds__DynamicArrayPrimitives__initialize_w_params

#define T_finalize_w_params   test_msgs_msg_dds__DynamicArrayPrimitives__finalize_w_params
#define T_copy       test_msgs_msg_dds__DynamicArrayPrimitives__copy

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

