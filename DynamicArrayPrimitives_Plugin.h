

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from DynamicArrayPrimitives_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef DynamicArrayPrimitives_Plugin_67051174_h
#define DynamicArrayPrimitives_Plugin_67051174_h

#include "DynamicArrayPrimitives_.h"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

extern "C" {

    /* The type used to store keys for instances of type struct
    * AnotherSimple.
    *
    * By default, this type is struct DynamicArrayPrimitives_
    * itself. However, if for some reason this choice is not practical for your
    * system (e.g. if sizeof(struct DynamicArrayPrimitives_)
    * is very large), you may redefine this typedef in terms of another type of
    * your choosing. HOWEVER, if you define the KeyHolder type to be something
    * other than struct AnotherSimple, the
    * following restriction applies: the key of struct
    * DynamicArrayPrimitives_ must consist of a
    * single field of your redefined KeyHolder type and that field must be the
    * first field in struct DynamicArrayPrimitives_.
    */
    typedef  class test_msgs_msg_dds__DynamicArrayPrimitives_ test_msgs_msg_dds__DynamicArrayPrimitives_KeyHolder;

    #define test_msgs_msg_dds__DynamicArrayPrimitives_Plugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
    #define test_msgs_msg_dds__DynamicArrayPrimitives_Plugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define test_msgs_msg_dds__DynamicArrayPrimitives_Plugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

    #define test_msgs_msg_dds__DynamicArrayPrimitives_Plugin_get_key PRESTypePluginDefaultEndpointData_getKey 
    #define test_msgs_msg_dds__DynamicArrayPrimitives_Plugin_return_key PRESTypePluginDefaultEndpointData_returnKey

    #define test_msgs_msg_dds__DynamicArrayPrimitives_Plugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define test_msgs_msg_dds__DynamicArrayPrimitives_Plugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern test_msgs_msg_dds__DynamicArrayPrimitives_*
    test_msgs_msg_dds__DynamicArrayPrimitives_PluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern test_msgs_msg_dds__DynamicArrayPrimitives_*
    test_msgs_msg_dds__DynamicArrayPrimitives_PluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern test_msgs_msg_dds__DynamicArrayPrimitives_*
    test_msgs_msg_dds__DynamicArrayPrimitives_PluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    test_msgs_msg_dds__DynamicArrayPrimitives_PluginSupport_copy_data(
        test_msgs_msg_dds__DynamicArrayPrimitives_ *out,
        const test_msgs_msg_dds__DynamicArrayPrimitives_ *in);

    NDDSUSERDllExport extern void 
    test_msgs_msg_dds__DynamicArrayPrimitives_PluginSupport_destroy_data_w_params(
        test_msgs_msg_dds__DynamicArrayPrimitives_ *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    test_msgs_msg_dds__DynamicArrayPrimitives_PluginSupport_destroy_data_ex(
        test_msgs_msg_dds__DynamicArrayPrimitives_ *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    test_msgs_msg_dds__DynamicArrayPrimitives_PluginSupport_destroy_data(
        test_msgs_msg_dds__DynamicArrayPrimitives_ *sample);

    NDDSUSERDllExport extern void 
    test_msgs_msg_dds__DynamicArrayPrimitives_PluginSupport_print_data(
        const test_msgs_msg_dds__DynamicArrayPrimitives_ *sample,
        const char *desc,
        unsigned int indent);

    NDDSUSERDllExport extern test_msgs_msg_dds__DynamicArrayPrimitives_*
    test_msgs_msg_dds__DynamicArrayPrimitives_PluginSupport_create_key_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern test_msgs_msg_dds__DynamicArrayPrimitives_*
    test_msgs_msg_dds__DynamicArrayPrimitives_PluginSupport_create_key(void);

    NDDSUSERDllExport extern void 
    test_msgs_msg_dds__DynamicArrayPrimitives_PluginSupport_destroy_key_ex(
        test_msgs_msg_dds__DynamicArrayPrimitives_KeyHolder *key,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    test_msgs_msg_dds__DynamicArrayPrimitives_PluginSupport_destroy_key(
        test_msgs_msg_dds__DynamicArrayPrimitives_KeyHolder *key);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    test_msgs_msg_dds__DynamicArrayPrimitives_Plugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    test_msgs_msg_dds__DynamicArrayPrimitives_Plugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    test_msgs_msg_dds__DynamicArrayPrimitives_Plugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    test_msgs_msg_dds__DynamicArrayPrimitives_Plugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    test_msgs_msg_dds__DynamicArrayPrimitives_Plugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        test_msgs_msg_dds__DynamicArrayPrimitives_ *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    test_msgs_msg_dds__DynamicArrayPrimitives_Plugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        test_msgs_msg_dds__DynamicArrayPrimitives_ *out,
        const test_msgs_msg_dds__DynamicArrayPrimitives_ *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    test_msgs_msg_dds__DynamicArrayPrimitives_Plugin_serialize(
        PRESTypePluginEndpointData endpoint_data,
        const test_msgs_msg_dds__DynamicArrayPrimitives_ *sample,
        struct RTICdrStream *stream, 
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    test_msgs_msg_dds__DynamicArrayPrimitives_Plugin_deserialize_sample(
        PRESTypePluginEndpointData endpoint_data,
        test_msgs_msg_dds__DynamicArrayPrimitives_ *sample, 
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    test_msgs_msg_dds__DynamicArrayPrimitives_Plugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const test_msgs_msg_dds__DynamicArrayPrimitives_ *sample); 

    NDDSUSERDllExport extern RTIBool 
    test_msgs_msg_dds__DynamicArrayPrimitives_Plugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        test_msgs_msg_dds__DynamicArrayPrimitives_ **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    test_msgs_msg_dds__DynamicArrayPrimitives_Plugin_deserialize_from_cdr_buffer(
        test_msgs_msg_dds__DynamicArrayPrimitives_ *sample,
        const char * buffer,
        unsigned int length);    
    NDDSUSERDllExport extern DDS_ReturnCode_t
    test_msgs_msg_dds__DynamicArrayPrimitives_Plugin_data_to_string(
        const test_msgs_msg_dds__DynamicArrayPrimitives_ *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    

    NDDSUSERDllExport extern RTIBool
    test_msgs_msg_dds__DynamicArrayPrimitives_Plugin_skip(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        RTIBool skip_encapsulation,  
        RTIBool skip_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern unsigned int 
    test_msgs_msg_dds__DynamicArrayPrimitives_Plugin_get_serialized_sample_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);    

    NDDSUSERDllExport extern unsigned int 
    test_msgs_msg_dds__DynamicArrayPrimitives_Plugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    test_msgs_msg_dds__DynamicArrayPrimitives_Plugin_get_serialized_sample_min_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int
    test_msgs_msg_dds__DynamicArrayPrimitives_Plugin_get_serialized_sample_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment,
        const test_msgs_msg_dds__DynamicArrayPrimitives_ * sample);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    test_msgs_msg_dds__DynamicArrayPrimitives_Plugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    test_msgs_msg_dds__DynamicArrayPrimitives_Plugin_get_serialized_key_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    test_msgs_msg_dds__DynamicArrayPrimitives_Plugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    test_msgs_msg_dds__DynamicArrayPrimitives_Plugin_serialize_key(
        PRESTypePluginEndpointData endpoint_data,
        const test_msgs_msg_dds__DynamicArrayPrimitives_ *sample,
        struct RTICdrStream *stream,
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    test_msgs_msg_dds__DynamicArrayPrimitives_Plugin_deserialize_key_sample(
        PRESTypePluginEndpointData endpoint_data,
        test_msgs_msg_dds__DynamicArrayPrimitives_ * sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    test_msgs_msg_dds__DynamicArrayPrimitives_Plugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        test_msgs_msg_dds__DynamicArrayPrimitives_ ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    test_msgs_msg_dds__DynamicArrayPrimitives_Plugin_serialized_sample_to_key(
        PRESTypePluginEndpointData endpoint_data,
        test_msgs_msg_dds__DynamicArrayPrimitives_ *sample,
        struct RTICdrStream *stream, 
        RTIBool deserialize_encapsulation,  
        RTIBool deserialize_key, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    test_msgs_msg_dds__DynamicArrayPrimitives_Plugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        test_msgs_msg_dds__DynamicArrayPrimitives_KeyHolder *key, 
        const test_msgs_msg_dds__DynamicArrayPrimitives_ *instance);

    NDDSUSERDllExport extern RTIBool 
    test_msgs_msg_dds__DynamicArrayPrimitives_Plugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        test_msgs_msg_dds__DynamicArrayPrimitives_ *instance, 
        const test_msgs_msg_dds__DynamicArrayPrimitives_KeyHolder *key);

    NDDSUSERDllExport extern RTIBool 
    test_msgs_msg_dds__DynamicArrayPrimitives_Plugin_instance_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        DDS_KeyHash_t *keyhash,
        const test_msgs_msg_dds__DynamicArrayPrimitives_ *instance);

    NDDSUSERDllExport extern RTIBool 
    test_msgs_msg_dds__DynamicArrayPrimitives_Plugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos); 

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    test_msgs_msg_dds__DynamicArrayPrimitives_Plugin_new(void);

    NDDSUSERDllExport extern void
    test_msgs_msg_dds__DynamicArrayPrimitives_Plugin_delete(struct PRESTypePlugin *);

}

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* DynamicArrayPrimitives_Plugin_67051174_h */

