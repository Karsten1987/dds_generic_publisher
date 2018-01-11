

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GenericType.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef GenericTypePlugin_1067794822_h
#define GenericTypePlugin_1067794822_h

#include "GenericType.h"

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
    * By default, this type is struct GenericType
    * itself. However, if for some reason this choice is not practical for your
    * system (e.g. if sizeof(struct GenericType)
    * is very large), you may redefine this typedef in terms of another type of
    * your choosing. HOWEVER, if you define the KeyHolder type to be something
    * other than struct AnotherSimple, the
    * following restriction applies: the key of struct
    * GenericType must consist of a
    * single field of your redefined KeyHolder type and that field must be the
    * first field in struct GenericType.
    */
    typedef  class GenericType GenericTypeKeyHolder;

    #define GenericTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
    #define GenericTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define GenericTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

    #define GenericTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
    #define GenericTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

    #define GenericTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define GenericTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern GenericType*
    GenericTypePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern GenericType*
    GenericTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern GenericType*
    GenericTypePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    GenericTypePluginSupport_copy_data(
        GenericType *out,
        const GenericType *in);

    NDDSUSERDllExport extern void 
    GenericTypePluginSupport_destroy_data_w_params(
        GenericType *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    GenericTypePluginSupport_destroy_data_ex(
        GenericType *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    GenericTypePluginSupport_destroy_data(
        GenericType *sample);

    NDDSUSERDllExport extern void 
    GenericTypePluginSupport_print_data(
        const GenericType *sample,
        const char *desc,
        unsigned int indent);

    NDDSUSERDllExport extern GenericType*
    GenericTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern GenericType*
    GenericTypePluginSupport_create_key(void);

    NDDSUSERDllExport extern void 
    GenericTypePluginSupport_destroy_key_ex(
        GenericTypeKeyHolder *key,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    GenericTypePluginSupport_destroy_key(
        GenericTypeKeyHolder *key);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    GenericTypePlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    GenericTypePlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    GenericTypePlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    GenericTypePlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    GenericTypePlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        GenericType *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    GenericTypePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        GenericType *out,
        const GenericType *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    GenericTypePlugin_serialize(
        PRESTypePluginEndpointData endpoint_data,
        const GenericType *sample,
        struct RTICdrStream *stream, 
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    GenericTypePlugin_deserialize_sample(
        PRESTypePluginEndpointData endpoint_data,
        GenericType *sample, 
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    GenericTypePlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const GenericType *sample); 

    NDDSUSERDllExport extern RTIBool 
    GenericTypePlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        GenericType **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    GenericTypePlugin_deserialize_from_cdr_buffer(
        GenericType *sample,
        const char * buffer,
        unsigned int length);    
    NDDSUSERDllExport extern DDS_ReturnCode_t
    GenericTypePlugin_data_to_string(
        const GenericType *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    

    NDDSUSERDllExport extern RTIBool
    GenericTypePlugin_skip(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        RTIBool skip_encapsulation,  
        RTIBool skip_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern unsigned int 
    GenericTypePlugin_get_serialized_sample_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);    

    NDDSUSERDllExport extern unsigned int 
    GenericTypePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    GenericTypePlugin_get_serialized_sample_min_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int
    GenericTypePlugin_get_serialized_sample_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment,
        const GenericType * sample);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    GenericTypePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    GenericTypePlugin_get_serialized_key_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    GenericTypePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    GenericTypePlugin_serialize_key(
        PRESTypePluginEndpointData endpoint_data,
        const GenericType *sample,
        struct RTICdrStream *stream,
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    GenericTypePlugin_deserialize_key_sample(
        PRESTypePluginEndpointData endpoint_data,
        GenericType * sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    GenericTypePlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        GenericType ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    GenericTypePlugin_serialized_sample_to_key(
        PRESTypePluginEndpointData endpoint_data,
        GenericType *sample,
        struct RTICdrStream *stream, 
        RTIBool deserialize_encapsulation,  
        RTIBool deserialize_key, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    GenericTypePlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        GenericTypeKeyHolder *key, 
        const GenericType *instance);

    NDDSUSERDllExport extern RTIBool 
    GenericTypePlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        GenericType *instance, 
        const GenericTypeKeyHolder *key);

    NDDSUSERDllExport extern RTIBool 
    GenericTypePlugin_instance_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        DDS_KeyHash_t *keyhash,
        const GenericType *instance);

    NDDSUSERDllExport extern RTIBool 
    GenericTypePlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos); 

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    GenericTypePlugin_new(void);

    NDDSUSERDllExport
    extern struct PRESTypePlugin *
    GenericTypePlugin_new_external(struct DDS_TypeCode * external_type_code);

    NDDSUSERDllExport extern void
    GenericTypePlugin_delete(struct PRESTypePlugin *);

}

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* GenericTypePlugin_1067794822_h */

