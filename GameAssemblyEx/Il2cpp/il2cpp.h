#pragma once
#define IL2CPP

#pragma region FUNCTIONS
#define FUNCTIONS \
API_FUNC(void, il2cpp_init, (intptr_t domain_name));\
API_FUNC(void, il2cpp_init_utf16, (intptr_t domain_name));\
API_FUNC(void, il2cpp_shutdown, ());\
API_FUNC(void, il2cpp_set_config_dir, (intptr_t config_path));\
API_FUNC(void, il2cpp_set_data_dir, (intptr_t data_path));\
API_FUNC(void, il2cpp_set_temp_dir, (intptr_t temp_path));\
API_FUNC(void, il2cpp_set_commandline_arguments, (int argc, intptr_t argv, intptr_t basedir));\
API_FUNC(void, il2cpp_set_commandline_arguments_utf16, (int argc, intptr_t argv, intptr_t basedir));\
API_FUNC(void, il2cpp_set_config_utf16, (intptr_t executablePath));\
API_FUNC(void, il2cpp_set_config, (intptr_t executablePath));\
API_FUNC(void, il2cpp_set_memory_callbacks, (intptr_t callbacks));\
API_FUNC(intptr_t, il2cpp_get_corlib, ());\
API_FUNC(void, il2cpp_add_internal_call, (intptr_t name, intptr_t method));\
API_FUNC(intptr_t, il2cpp_resolve_icall, (const char* name));\
API_FUNC(intptr_t, il2cpp_alloc, (int size));\
API_FUNC(void, il2cpp_free, (intptr_t ptr));\
API_FUNC(intptr_t, il2cpp_array_class_get, (intptr_t element_class, int rank));\
API_FUNC(int, il2cpp_array_length, (intptr_t array));\
API_FUNC(int, il2cpp_array_get_byte_length, (intptr_t array));\
API_FUNC(intptr_t, il2cpp_array_new, (intptr_t elementTypeInfo, long length));\
API_FUNC(intptr_t, il2cpp_array_new_specific, (intptr_t arrayTypeInfo, long length));\
API_FUNC(intptr_t, il2cpp_array_new_full, (intptr_t array_class, long& lengths, long& lower_bounds));\
API_FUNC(intptr_t, il2cpp_bounded_array_class_get, (intptr_t element_class, int rank, bool bounded));\
API_FUNC(int, il2cpp_array_element_size, (intptr_t array_class));\
API_FUNC(intptr_t, il2cpp_assembly_get_image, (intptr_t assembly));\
API_FUNC(intptr_t, il2cpp_class_enum_basetype, (intptr_t klass));\
API_FUNC(bool, il2cpp_class_is_generic, (intptr_t klass));\
API_FUNC(bool, il2cpp_class_is_inflated, (intptr_t klass));\
API_FUNC(bool, il2cpp_class_is_assignable_from, (intptr_t klass, intptr_t oklass));\
API_FUNC(bool, il2cpp_class_is_subclass_of, (intptr_t klass, intptr_t klassc, bool check_interfaces));\
API_FUNC(bool, il2cpp_class_has_parent, (intptr_t klass, intptr_t klassc));\
API_FUNC(intptr_t, il2cpp_class_from_il2cpp_type, (intptr_t type));\
API_FUNC(intptr_t, il2cpp_class_from_name, (intptr_t image, const char* namespaze, const char* name));\
API_FUNC(intptr_t, il2cpp_class_from_system_type, (intptr_t type));\
API_FUNC(intptr_t, il2cpp_class_get_element_class, (intptr_t klass));\
API_FUNC(intptr_t, il2cpp_class_get_events, (intptr_t klass, intptr_t& iter));\
API_FUNC(intptr_t, il2cpp_class_get_fields, (intptr_t klass, intptr_t& iter));\
API_FUNC(intptr_t, il2cpp_class_get_nested_types, (intptr_t klass, intptr_t& iter));\
API_FUNC(intptr_t, il2cpp_class_get_interfaces, (intptr_t klass, intptr_t& iter));\
API_FUNC(intptr_t, il2cpp_class_get_properties, (intptr_t klass, intptr_t& iter));\
API_FUNC(intptr_t, il2cpp_class_get_property_from_name, (intptr_t klass, const char* name));\
API_FUNC(intptr_t, il2cpp_class_get_field_from_name, (intptr_t klass, const char* name));\
API_FUNC(intptr_t, il2cpp_class_get_methods, (intptr_t klass, intptr_t& iter));\
API_FUNC(intptr_t, il2cpp_class_get_method_from_name, (intptr_t klass, const char* name, int argsCount));\
API_FUNC(char*, il2cpp_class_get_name, (intptr_t klass));\
API_FUNC(char*, il2cpp_class_get_namespace, (intptr_t klass));\
API_FUNC(intptr_t, il2cpp_class_get_parent, (intptr_t klass));\
API_FUNC(intptr_t, il2cpp_class_get_declaring_type, (intptr_t klass));\
API_FUNC(int, il2cpp_class_instance_size, (intptr_t klass));\
API_FUNC(int, il2cpp_class_num_fields, (intptr_t enumKlass));\
API_FUNC(bool, il2cpp_class_is_valuetype, (intptr_t klass));\
API_FUNC(int, il2cpp_class_value_size, (intptr_t klass, int& align));\
API_FUNC(bool, il2cpp_class_is_blittable, (intptr_t klass));\
API_FUNC(int, il2cpp_class_get_flags, (intptr_t klass));\
API_FUNC(bool, il2cpp_class_is_abstract, (intptr_t klass));\
API_FUNC(bool, il2cpp_class_is_interface, (intptr_t klass));\
API_FUNC(int, il2cpp_class_array_element_size, (intptr_t klass));\
API_FUNC(intptr_t, il2cpp_class_from_type, (intptr_t type));\
API_FUNC(intptr_t, il2cpp_class_get_type, (intptr_t klass));\
API_FUNC(int, il2cpp_class_get_type_token, (intptr_t klass));\
API_FUNC(bool, il2cpp_class_has_attribute, (intptr_t klass, intptr_t attr_class));\
API_FUNC(bool, il2cpp_class_has_references, (intptr_t klass));\
API_FUNC(bool, il2cpp_class_is_enum, (intptr_t klass));\
API_FUNC(intptr_t, il2cpp_class_get_image, (intptr_t klass));\
API_FUNC(char*, il2cpp_class_get_assemblyname, (intptr_t klass));\
API_FUNC(int, il2cpp_class_get_rank, (intptr_t klass));\
API_FUNC(int, il2cpp_class_get_bitmap_size, (intptr_t klass));\
API_FUNC(void, il2cpp_class_get_bitmap, (intptr_t klass, int& bitmap));\
API_FUNC(intptr_t, il2cpp_get_meta_data_pool_memory, ());\
API_FUNC(bool, il2cpp_stats_dump_to_file, (intptr_t path));\
/*API_FUNC(long, il2cpp_stats_get_value, (IL2CPP_Stat stat));\*/ \
API_FUNC(intptr_t, il2cpp_domain_get, ());\
API_FUNC(intptr_t, il2cpp_domain_assembly_open, (intptr_t domain, const char* name));\
API_FUNC(intptr_t*, il2cpp_domain_get_assemblies, (intptr_t domain, int& size));\
API_FUNC(intptr_t, il2cpp_exception_from_name_msg, (intptr_t image, intptr_t name_space, intptr_t name, intptr_t msg));\
API_FUNC(intptr_t, il2cpp_get_exception_argument_null, (intptr_t arg));\
API_FUNC(void, il2cpp_format_exception, (intptr_t ex, void* message, int message_size));\
API_FUNC(void, il2cpp_format_stack_trace, (intptr_t ex, void* output, int output_size));\
API_FUNC(void, il2cpp_unhandled_exception, (intptr_t ex));\
API_FUNC(int, il2cpp_field_get_flags, (intptr_t field));\
API_FUNC(char*, il2cpp_field_get_name, (intptr_t field));\
API_FUNC(intptr_t, il2cpp_field_get_parent, (intptr_t field));\
API_FUNC(int, il2cpp_field_get_offset, (intptr_t field));\
API_FUNC(intptr_t, il2cpp_field_get_type, (intptr_t field));\
API_FUNC(void, il2cpp_field_get_value, (intptr_t obj, intptr_t field, void* value));\
API_FUNC(intptr_t, il2cpp_field_get_value_object, (intptr_t field, intptr_t obj));\
API_FUNC(bool, il2cpp_field_has_attribute, (intptr_t field, intptr_t attr_class));\
API_FUNC(void, il2cpp_field_set_value, (intptr_t obj, intptr_t field, void* value));\
API_FUNC(void, il2cpp_field_static_get_value, (intptr_t field, void* value));\
API_FUNC(void, il2cpp_field_static_set_value, (intptr_t field, void* value));\
API_FUNC(void, il2cpp_field_set_value_object, (intptr_t instance, intptr_t field, intptr_t value));\
API_FUNC(void, il2cpp_gc_collect, (int maxGenerations));\
API_FUNC(int, il2cpp_gc_collect_a_little, ());\
API_FUNC(void, il2cpp_gc_disable, ());\
API_FUNC(void, il2cpp_gc_enable, ());\
API_FUNC(bool, il2cpp_gc_is_disabled, ());\
API_FUNC(long, il2cpp_gc_get_used_size, ());\
API_FUNC(long, il2cpp_gc_get_heap_size, ());\
API_FUNC(void, il2cpp_gc_wbarrier_set_field, (intptr_t obj, intptr_t& targetAddress, intptr_t gcObj));\
API_FUNC(int, il2cpp_gchandle_new, (intptr_t obj, bool pinned));\
API_FUNC(int, il2cpp_gchandle_new_weakref, (intptr_t obj, bool track_resurrection));\
API_FUNC(intptr_t, il2cpp_gchandle_get_target, (int gchandle));\
API_FUNC(void, il2cpp_gchandle_free, (int gchandle));\
API_FUNC(intptr_t, il2cpp_unity_liveness_calculation_begin, (intptr_t filter, int max_object_count, intptr_t callback, intptr_t userdata, intptr_t onWorldStarted, intptr_t onWorldStopped));\
API_FUNC(void, il2cpp_unity_liveness_calculation_end, (intptr_t state));\
API_FUNC(void, il2cpp_unity_liveness_calculation_from_root, (intptr_t root, intptr_t state));\
API_FUNC(void, il2cpp_unity_liveness_calculation_from_statics, (intptr_t state));\
API_FUNC(intptr_t, il2cpp_method_get_return_type, (intptr_t method));\
API_FUNC(intptr_t, il2cpp_method_get_declaring_type, (intptr_t method));\
API_FUNC(char*, il2cpp_method_get_name, (intptr_t method));\
API_FUNC(intptr_t, il2cpp_method_get_from_reflection, (intptr_t method));\
API_FUNC(intptr_t, il2cpp_method_get_object, (intptr_t method, intptr_t refclass));\
API_FUNC(bool, il2cpp_method_is_generic, (intptr_t method));\
API_FUNC(bool, il2cpp_method_is_inflated, (intptr_t method));\
API_FUNC(bool, il2cpp_method_is_instance, (intptr_t method));\
API_FUNC(int, il2cpp_method_get_param_count, (intptr_t method));\
API_FUNC(intptr_t, il2cpp_method_get_param, (intptr_t method, int index));\
API_FUNC(intptr_t, il2cpp_method_get_class, (intptr_t method));\
API_FUNC(bool, il2cpp_method_has_attribute, (intptr_t method, intptr_t attr_class));\
API_FUNC(int, il2cpp_method_get_flags, (intptr_t method, int& iflags));\
API_FUNC(int, il2cpp_method_get_token, (intptr_t method));\
API_FUNC(char*, il2cpp_method_get_param_name, (intptr_t method, int index));\
API_FUNC(void, il2cpp_profiler_install, (intptr_t prof, intptr_t shutdown_callback));\
API_FUNC(void, il2cpp_profiler_install_enter_leave, (intptr_t enter, intptr_t fleave));\
API_FUNC(void, il2cpp_profiler_install_allocation, (intptr_t callback));\
API_FUNC(void, il2cpp_profiler_install_gc, (intptr_t callback, intptr_t heap_resize_callback));\
API_FUNC(void, il2cpp_profiler_install_fileio, (intptr_t callback));\
API_FUNC(void, il2cpp_profiler_install_thread, (intptr_t start, intptr_t end));\
API_FUNC(int, il2cpp_property_get_flags, (intptr_t prop));\
API_FUNC(intptr_t, il2cpp_property_get_get_method, (intptr_t prop));\
API_FUNC(intptr_t, il2cpp_property_get_set_method, (intptr_t prop));\
API_FUNC(char*, il2cpp_property_get_name, (intptr_t prop));\
API_FUNC(intptr_t, il2cpp_property_get_parent, (intptr_t prop));\
API_FUNC(intptr_t, il2cpp_object_get_class, (intptr_t obj));\
API_FUNC(int, il2cpp_object_get_size, (intptr_t obj));\
API_FUNC(intptr_t, il2cpp_object_get_virtual_method, (intptr_t obj, intptr_t method));\
API_FUNC(intptr_t, il2cpp_object_new, (intptr_t klass));\
API_FUNC(intptr_t, il2cpp_object_unbox, (intptr_t obj));\
API_FUNC(intptr_t, il2cpp_value_box, (intptr_t klass, intptr_t data));\
API_FUNC(void, il2cpp_monitor_enter, (intptr_t obj));\
API_FUNC(bool, il2cpp_monitor_try_enter, (intptr_t obj, int timeout));\
API_FUNC(void, il2cpp_monitor_exit, (intptr_t obj));\
API_FUNC(void, il2cpp_monitor_pulse, (intptr_t obj));\
API_FUNC(void, il2cpp_monitor_pulse_all, (intptr_t obj));\
API_FUNC(void, il2cpp_monitor_wait, (intptr_t obj));\
API_FUNC(bool, il2cpp_monitor_try_wait, (intptr_t obj, int timeout));\
API_FUNC(intptr_t, il2cpp_runtime_invoke, (intptr_t method, intptr_t obj, void** param, intptr_t& exc));\
API_FUNC(intptr_t, il2cpp_runtime_invoke_convert_args, (intptr_t method, intptr_t obj, void** param, int paramCount, intptr_t& exc));\
API_FUNC(void, il2cpp_runtime_class_init, (intptr_t klass));\
API_FUNC(void, il2cpp_runtime_object_init, (intptr_t obj));\
API_FUNC(void, il2cpp_runtime_object_init_exception, (intptr_t obj, intptr_t& exc));\
API_FUNC(int, il2cpp_string_length, (intptr_t str));\
API_FUNC(char*, il2cpp_string_chars, (intptr_t str));\
API_FUNC(intptr_t, il2cpp_string_new, (const char* str));\
API_FUNC(intptr_t, il2cpp_string_new_len, (const char* str, int length));\
API_FUNC(intptr_t, il2cpp_string_new_utf16, (const char* text, int len));\
API_FUNC(intptr_t, il2cpp_string_new_wrapper, (char* str));\
API_FUNC(intptr_t, il2cpp_string_intern, (const char* str));\
API_FUNC(intptr_t, il2cpp_string_is_interned, (const char* str));\
API_FUNC(intptr_t, il2cpp_thread_current, ());\
API_FUNC(intptr_t, il2cpp_thread_attach, (intptr_t domain));\
API_FUNC(void, il2cpp_thread_detach, (intptr_t thread));\
API_FUNC(void**, il2cpp_thread_get_all_attached_threads, (int& size));\
API_FUNC(bool, il2cpp_is_vm_thread, (intptr_t thread));\
API_FUNC(void, il2cpp_current_thread_walk_frame_stack, (intptr_t func, intptr_t user_data));\
API_FUNC(void, il2cpp_thread_walk_frame_stack, (intptr_t thread, intptr_t func, intptr_t user_data));\
API_FUNC(bool, il2cpp_current_thread_get_top_frame, (intptr_t frame));\
API_FUNC(bool, il2cpp_thread_get_top_frame, (intptr_t thread, intptr_t frame));\
API_FUNC(bool, il2cpp_current_thread_get_frame_at, (int offset, intptr_t frame));\
API_FUNC(bool, il2cpp_thread_get_frame_at, (intptr_t thread, int offset, intptr_t frame));\
API_FUNC(int, il2cpp_current_thread_get_stack_depth, ());\
API_FUNC(int, il2cpp_thread_get_stack_depth, (intptr_t thread));\
API_FUNC(intptr_t, il2cpp_type_get_object, (intptr_t type));\
API_FUNC(int, il2cpp_type_get_type, (intptr_t type));\
API_FUNC(intptr_t, il2cpp_type_get_class_or_element_class, (intptr_t type));\
API_FUNC(char*, il2cpp_type_get_name, (intptr_t type));\
API_FUNC(bool, il2cpp_type_is_byref, (intptr_t type));\
API_FUNC(int, il2cpp_type_get_attrs, (intptr_t type));\
API_FUNC(bool, il2cpp_type_equals, (intptr_t type, intptr_t otherType));\
API_FUNC(char*, il2cpp_type_get_assembly_qualified_name, (intptr_t type));\
API_FUNC(intptr_t, il2cpp_image_get_assembly, (intptr_t image));\
API_FUNC(char*, il2cpp_image_get_name, (intptr_t image));\
API_FUNC(char*, il2cpp_image_get_filename, (intptr_t image));\
API_FUNC(intptr_t, il2cpp_image_get_entry_point, (intptr_t image));\
API_FUNC(int, il2cpp_image_get_class_count, (intptr_t image));\
API_FUNC(intptr_t, il2cpp_image_get_class, (intptr_t image, int index));\
API_FUNC(intptr_t, il2cpp_capture_memory_snapshot, ());\
API_FUNC(void, il2cpp_free_captured_memory_snapshot, (intptr_t snapshot));\
API_FUNC(void, il2cpp_set_find_plugin_callback, (intptr_t method));\
API_FUNC(void, il2cpp_register_log_callback, (intptr_t method));\
API_FUNC(void, il2cpp_debugger_set_agent_options, (intptr_t options));\
API_FUNC(bool, il2cpp_is_debugger_attached, ());\
API_FUNC(void, il2cpp_unity_install_unitytls_interface, (void* unitytlsInterfaceStruct));\
API_FUNC(intptr_t, il2cpp_custom_attrs_from_class, (intptr_t klass));\
API_FUNC(intptr_t, il2cpp_custom_attrs_from_method, (intptr_t method));\
API_FUNC(intptr_t, il2cpp_custom_attrs_get_attr, (intptr_t ainfo, intptr_t attr_klass));\
API_FUNC(bool, il2cpp_custom_attrs_has_attr, (intptr_t ainfo, intptr_t attr_klass));\
API_FUNC(intptr_t, il2cpp_custom_attrs_construct, (intptr_t cinfo));\
API_FUNC(void, il2cpp_custom_attrs_free, (intptr_t ainfo));
#pragma endregion

#define API_FUNC(rt, n, p) rt (*n) p
FUNCTIONS
#undef API_FUNC

void il2cpp_header_AllocConsole()
{
    AllocConsole();
    freopen_s((FILE**)stdin, "CONIN$", "r", stdin);
    freopen_s((FILE**)stdout, "CONOUT$", "w", stdout);
    freopen_s((FILE**)stderr, "CONOUT$", "w", stderr);
};
bool il2cpp_header_isInit = false;
void il2cpp_header_init()
{
    if (il2cpp_header_isInit) { return; }
    il2cpp_header_isInit = true;
    HMODULE GameAssembly = LoadLibraryA("GameAssembly.dll");
    if (!GameAssembly)
        return;
#define API_FUNC(r, n, p) n = (r (*) p)(GetProcAddress(GameAssembly, #n))
    FUNCTIONS
#undef API_FUNC
};
#undef FUNCTIONS