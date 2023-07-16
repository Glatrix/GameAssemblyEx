#define IL2CPPLIB

#ifndef IL2CPP
#include "il2cpp.h"
#endif

// Predefined Structs
struct Thread;
struct Domain;
struct Assembly;
struct Image;
struct Class;
struct Type;
struct Field;
struct Method;
struct Paramater;
struct Property;
struct String;
struct Object;
struct Event;

// Structures

struct Thread{

	static Thread* Attach(Domain* domain) {
		return (Thread*)il2cpp_thread_attach((intptr_t)domain);
	}

	bool IsVmThread() {
		return il2cpp_is_vm_thread((intptr_t)this);
	}

	void Detatch() {
		il2cpp_thread_detach((intptr_t)this);
	}
};

struct Domain {
public:
	static Domain* get_main() {
		return (Domain*)il2cpp_domain_get();
	}

	Assembly* OpenAssembly(const char* name) {
		return (Assembly*)il2cpp_domain_assembly_open((intptr_t)this, name);
	}

	std::vector<Assembly*> GetAssemblies() {
		std::vector<Assembly*> assemblies{};
		int size = 0;
		Assembly** assembly = (Assembly**)il2cpp_domain_get_assemblies((intptr_t)this, size);
		for (int i = 0; i < size; i++) {
			assemblies.push_back(assembly[i]);
		}
		return assemblies;
	}

	static Image* GetCorlib() {
		return (Image*)il2cpp_get_corlib();
	}
	
};


struct Assembly {
public:
	Image* GetImage() {
		return (Image*)il2cpp_assembly_get_image((intptr_t)this);
	}
};

struct Image {
public:
	Assembly* GetAssembly() {
		return (Assembly*)il2cpp_image_get_assembly((intptr_t)this);
	}

	const char* GetFilename() {
		return il2cpp_image_get_filename((intptr_t)this);
	}

	const char* GetName() {
		return il2cpp_image_get_name((intptr_t)this);
	}

	int GetClassCount() {
		return il2cpp_image_get_class_count((intptr_t)this);
	}

	Class* GetClass(int index) {
		return (Class*)il2cpp_image_get_class((intptr_t)this, index);
	}

	Class* GetClassFromName(const char* namespaze, const char* name) {
		return (Class*)il2cpp_class_from_name((intptr_t)this, namespaze, name);
	}

	Method* GetEntryPoint() {
		return (Method*)il2cpp_image_get_entry_point((intptr_t)this);
	}

	std::vector<Class*> GetClasses() {
		std::vector<Class*> classes{};
		int classCount = this->GetClassCount();

		for (int i = 0; i < classCount; i++) {

			Class* _class = GetClass(i);
			if (!_class) {
				break;
			}
			classes.push_back(_class);
		}

		return classes;
	}
};

struct Class {
public:
	static Class* GetFromType(Type* type) {
		return (Class*)il2cpp_class_from_type((intptr_t)type);
	}

	static Class* GetFromSystemType(Type* type) {
		return (Class*)il2cpp_class_from_system_type((intptr_t)type);
	}

	static Class* GetFromIl2cppType(Type* type) {
		return (Class*)il2cpp_class_from_il2cpp_type((intptr_t)type);
	}


	Type* GetEnumBaseType() {
		return (Type*)il2cpp_class_enum_basetype((intptr_t)this);
	}

	bool IsGeneric() {
		return il2cpp_class_is_generic((intptr_t)this);
	}

	bool IsInflated() {
		return il2cpp_class_is_inflated((intptr_t)this);
	}

	// can other classes inherit from this one
	bool IsAssignableFrom(Class* oclass) {
		return il2cpp_class_is_assignable_from((intptr_t)this, (intptr_t)oclass);
	}

	bool IsSubclassOf(Class* oclass, bool check_interfaces) {
		return il2cpp_class_is_subclass_of((intptr_t)this, (intptr_t)oclass, check_interfaces);
	}

	bool HasParent(Class* oclass) {
		return il2cpp_class_has_parent((intptr_t)this, (intptr_t)oclass);
	}

	Class* GetElementClass() {
		return (Class*)il2cpp_class_get_element_class((intptr_t)this);
	}

	Property* GetPropertyFromName(const char* name) {
		return (Property*)il2cpp_class_get_property_from_name((intptr_t)this, name);
	}

	Field* GetFieldFromName(const char* name) {
		return (Field*)il2cpp_class_get_field_from_name((intptr_t)this, name);
	}

	Method* GetMethodFromName(const char* name, int argsCount) {
		return (Method*)il2cpp_class_get_method_from_name((intptr_t)this, name, argsCount);
	}

	const char* GetName() {
		return il2cpp_class_get_name((intptr_t)this);
	}

	const char* GetNamespace() {
		return il2cpp_class_get_namespace((intptr_t)this);
	}

	Class* GetParentClass() {
		return (Class*)il2cpp_class_get_parent((intptr_t)this);
	}

	Class* GetDeclaringType() {
		return (Class*)il2cpp_class_get_declaring_type((intptr_t)this);
	}

	int GetInstanceSize() {
		return il2cpp_class_instance_size((intptr_t)this);
	}

	int GetNumFields() {
		return il2cpp_class_num_fields((intptr_t)this);
	}

	bool IsValuetype() {
		return il2cpp_class_is_valuetype((intptr_t)this);
	}

	bool IsBlittable() {
		return il2cpp_class_is_blittable((intptr_t)this);
	}

	int GetValueSize(int align) {
		return il2cpp_class_value_size((intptr_t)this, align);
	}

	int GetFlags() {
		return il2cpp_class_get_flags((intptr_t)this);
	}

	bool IsAbstract() {
		return il2cpp_class_is_abstract((intptr_t)this);
	}

	bool IsInterface() {
		return il2cpp_class_is_interface((intptr_t)this);
	}

	int GetArrayElementSize() {
		return il2cpp_class_array_element_size((intptr_t)this);
	}

	Type* GetType() {
		return (Type*)il2cpp_class_get_type((intptr_t)this);
	}

	uint32_t GetTypeToken() {
		return (uint32_t)il2cpp_class_get_type_token((intptr_t)this);
	}

	bool HasAttribute(Class* attr_class) {
		return il2cpp_class_has_attribute((intptr_t)this, (intptr_t)attr_class);
	}

	bool HasReferences() {
		return il2cpp_class_has_references((intptr_t)this);
	}

	bool IsEnum() {
		return il2cpp_class_is_enum((intptr_t)this);
	}

	Image* GetImage() {
		return (Image*)il2cpp_class_get_image((intptr_t)this);
	}

	const char* GetAssemblyName() {
		return il2cpp_class_get_assemblyname((intptr_t)this);
	}

	int GetRank() {
		return il2cpp_class_get_rank((intptr_t)this);
	}

	std::vector<Class*> GetInterfaces() {
		std::vector<Class*> classes{};

		intptr_t _class = 0;
		intptr_t _class_iter = 0;
		while ((_class = il2cpp_class_get_interfaces((intptr_t)this, _class_iter)) != 0)
		{
			classes.push_back((Class*)_class);
		}

		return classes;
	}

	std::vector<Class*> GetNestedTypes() {
		std::vector<Class*> classes{};

		intptr_t _class = 0;
		intptr_t _class_iter = 0;
		while ((_class = il2cpp_class_get_nested_types((intptr_t)this, _class_iter)) != 0)
		{
			classes.push_back((Class*)_class);
		}

		return classes;
	}

	std::vector<Event*> GetEvents() {
		std::vector<Event*> events{};

		intptr_t event = 0;
		intptr_t event_iter = 0;
		while ((event = il2cpp_class_get_events((intptr_t)this, event_iter)) != 0)
		{
			events.push_back((Event*)event);
		}

		return events;
	}

	std::vector<Field*> GetFields() {
		std::vector<Field*> fields{};

		intptr_t field = 0;
		intptr_t field_iter = 0;
		while ((field = il2cpp_class_get_fields((intptr_t)this, field_iter)) != 0)
		{
			fields.push_back((Field*)field);
		}

		return fields;
	}

	std::vector<Method*> GetMethods() {
		std::vector<Method*> methods{};

		intptr_t method = 0;
		intptr_t method_iter = 0;
		while ((method = il2cpp_class_get_methods((intptr_t)this, method_iter)) != 0)
		{
			methods.push_back((Method*)method);
		}

		return methods;
	}

	std::vector<Property*> GetProperties() {
		std::vector<Property*> properties{};

		intptr_t property = 0;
		intptr_t property_iter = 0;
		while ((property = il2cpp_class_get_properties((intptr_t)this, property_iter)) != 0)
		{
			properties.push_back((Property*)property);
		}

		return properties;
	}

};

struct Type {
public:
	Class* GetClassOrElementClass() {
		return (Class*)il2cpp_type_get_class_or_element_class((intptr_t)this);
	}

	Object* GetTypeObject() {
		return (Object*)il2cpp_type_get_object((intptr_t)this);
	}

	bool IsEqualTo(Type* otherType) {
		return il2cpp_type_equals((intptr_t)this, (intptr_t)otherType);
	}

	int GetAttributes() {
		return il2cpp_type_get_attrs((intptr_t)this);
	}

	const char* GetName() {
		return il2cpp_type_get_name((intptr_t)this);
	}

	const char* GetAssemblyQualifiedName() {
		return il2cpp_type_get_assembly_qualified_name((intptr_t)this);
	}

	bool IsByref() {
		return il2cpp_type_is_byref((intptr_t)this);
	}
};

struct Field {
public:
	int GetFlags() {
		return il2cpp_field_get_flags((intptr_t)this);
	}

	const char* GetName() {
		return il2cpp_field_get_name((intptr_t)this);
	}

	int GetOffset() {
		return il2cpp_field_get_offset((intptr_t)this);
	}

	Class* GetParent() {
		return (Class*)il2cpp_field_get_parent((intptr_t)this);
	}

	Type* GetType() {
		return (Type*)il2cpp_field_get_type((intptr_t)this);
	}

	void GetValue(Object* obj, void* value_out) {
		il2cpp_field_get_value((intptr_t)obj, (intptr_t)this, value_out);
	}

	Object* GetValueObject(Object* obj, void* value_out) {
		return (Object*)il2cpp_field_get_value_object((intptr_t)obj, (intptr_t)this);
	}

	bool HasAttribute(Class* attrclass) {
		return il2cpp_field_has_attribute((intptr_t)this, (intptr_t)attrclass);
	}

	void SetValue(Object* obj, void* value) {
		il2cpp_field_set_value((intptr_t)obj, (intptr_t)this, value);
	}

	void SetValueObject(Object* obj, Object* value) {
		il2cpp_field_set_value_object((intptr_t)obj, (intptr_t)this, (intptr_t)value);
	}

	void GetStaticValue(void* value) {
		il2cpp_field_static_get_value((intptr_t)this, value);
	}

	void SetStaticValue(void* value) {
		il2cpp_field_static_set_value((intptr_t)this, value);
	}
};

struct Paramater {
public:
	Paramater(int index, Type* type, const char* name) {
		this->index = index;
		this->type = type;
		this->name = name;
	}

	int GetIndex() {
		return this->index;
	}

	const char* GetName() {
		return this->name;
	}

	Type* GetType() {
		return this->type;
	}

private:
	Type* type;
	int index;
	const char* name;
};

struct Method {
public:

	template<typename T>
	T Invoke(Object* obj, std::vector<void*> params, bool throwOnErr = true) {

		void** paramaters = params.data();

		intptr_t exception = 0;
		T ret = (T)il2cpp_runtime_invoke((intptr_t)this, (intptr_t)obj, paramaters, exception);
		return ret;
	}

	const char* GetName() {
		return il2cpp_method_get_name((intptr_t)this);
	}

	int GetParamatercount() {
		return il2cpp_method_get_param_count((intptr_t)this);
	}

	Type* GetReturnType() {
		return (Type*)il2cpp_method_get_return_type((intptr_t)this);
	}

	Paramater* GetParamater(int index) {
		return (Paramater*)il2cpp_method_get_param((intptr_t)this, index);
	}

	Class* GetDeclaringType() {
		return (Class*)il2cpp_method_get_declaring_type((intptr_t)this);
	}

	bool IsGeneric() {
		return il2cpp_method_is_generic((intptr_t)this);
	}

	bool IsInflated() {
		return il2cpp_method_is_inflated((intptr_t)this);
	}

	bool IsStatic() {
		return !il2cpp_method_is_instance((intptr_t)this);
	}

	Class* GetClass() {
		return (Class*)il2cpp_method_get_class((intptr_t)this);
	}

	bool HasAttribute(Class* attr_class) {
		return il2cpp_method_has_attribute((intptr_t)this, (intptr_t)attr_class);
	}

	int GetFlags() {
		int iflags = 0;
		return il2cpp_method_get_flags((intptr_t)this, iflags);
	}

	int GetIFlags() {
		int iflags = 0;
		il2cpp_method_get_flags((intptr_t)this, iflags);
		return iflags;
	}

	int GetToken() {
		return il2cpp_method_get_token((intptr_t)this);
	}

	std::vector<Paramater*> GetParamaters() {
		std::vector<Paramater*> paramaters{};

		int paramCount = this->GetParamatercount();
		for (int i = 0; i < paramCount; i++) {
			Type* type = (Type*)il2cpp_method_get_param((intptr_t)this, i);
			const char* name = il2cpp_method_get_param_name((intptr_t)this, i);
			paramaters.push_back(new Paramater(i, type, name));
		}

		return paramaters;
	}

	const char* GenerateSignature()
	{
		std::string sig = GetReturnType()->GetName(); // int
		sig += ' ';
		sig += this->GetName(); // int Foo
		sig += '('; // int Foo(

		bool firstParamater = true;
		for (auto param : this->GetParamaters()) {
			if (firstParamater) {
				firstParamater = false;
			}
			else {
				sig += ", ";
			}
			sig += param->GetType()->GetName();
			sig += ' ';
			sig += param->GetName();
		}
		sig += ");";
		return sig.c_str();
	}
};

struct Property {
	const char* GetName() {
		return il2cpp_property_get_name((intptr_t)this);
	}

	Method* GetGetter() {
		return (Method*)il2cpp_property_get_get_method((intptr_t)this);
	}

	Method* GetSetter() {
		return (Method*)il2cpp_property_get_set_method((intptr_t)this);
	}

	int GetFlags() {
		return il2cpp_property_get_flags((intptr_t)this);
	}

	Class* GetParent() {
		return (Class*)il2cpp_property_get_parent((intptr_t)this);
	}
};


struct Object {
	union
	{
		Class* klass;
		Class* vtable;
	};
	void* monitor;
	void* m_cachedPtr;

	template<typename T>
	T GetMemberValue(const char* name) {
		auto field = this->klass->GetFieldFromName(name);
		if (!field) {
			return NULL;
		}
		T* outValue = NULL;
		field->GetValue((Object*)this, outValue);
		return outValue;
	}

	template<typename T>
	void SetMemberValue(const char* name, T value) {
		auto field = this->klass->GetFieldFromName(name);
		if (!field) {
			return NULL;
		}
		T* outValue = NULL;
		field->SetValue((Object*)this, value);
	}
};

//String is WIP
struct String
{
	Object object;
	int32_t length;
	const char* chars;
};

struct Event {
	char* name;
	Type* eventType;
	Class* parent;
	Method* add;
	Method* remove;
	Method* raise;
	uint32_t token;
};
