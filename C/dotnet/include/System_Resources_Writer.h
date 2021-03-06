// this file is automatically generated with SourceGear Bridge

#include <stdint.h>

#ifndef INCLUDE_System_Resources_Writer
#define INCLUDE_System_Resources_Writer

#ifdef __cplusplus
extern "C" {
#endif

typedef const void* _Nonnull SG_HNDL_NONNULL;
typedef const void* _Nullable SG_HNDL_NULLABLE;
typedef const void* _Nonnull TYP;
typedef uint64_t GVAL;

TYP System_Resources_IResourceWriter_get_type_handle(void);

void System_Resources_IResourceWriter_void__AddResource_0__2__String_u8Array(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL name, SG_HNDL_NULLABLE value);

void System_Resources_IResourceWriter_void__AddResource_0__2__String_Object(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL name, SG_HNDL_NULLABLE value);

void System_Resources_IResourceWriter_void__AddResource_0__2__String_String(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL name, SG_HNDL_NULLABLE value);

void System_Resources_IResourceWriter_void__Close_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

void System_Resources_IResourceWriter_void__Generate_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL System_Resources_IResourceWriter_cast(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __h);

SG_HNDL_NONNULL System_Resources_IResourceWriter_create(SG_HNDL_NULLABLE * _Nonnull __thrown, void (* _Nonnull  __cb_System_Resources_IResourceWriter_void__AddResource_0__2__String_u8Array)(const void* _Nonnull __pdata, SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL name, SG_HNDL_NULLABLE value), const void* _Nonnull __pdata_System_Resources_IResourceWriter_void__AddResource_0__2__String_u8Array, void (* _Nonnull  __cb_System_Resources_IResourceWriter_void__AddResource_0__2__String_Object)(const void* _Nonnull __pdata, SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL name, SG_HNDL_NULLABLE value), const void* _Nonnull __pdata_System_Resources_IResourceWriter_void__AddResource_0__2__String_Object, void (* _Nonnull  __cb_System_Resources_IResourceWriter_void__AddResource_0__2__String_String)(const void* _Nonnull __pdata, SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL name, SG_HNDL_NULLABLE value), const void* _Nonnull __pdata_System_Resources_IResourceWriter_void__AddResource_0__2__String_String, void (* _Nonnull  __cb_System_Resources_IResourceWriter_void__Close_0__0)(const void* _Nonnull __pdata, SG_HNDL_NULLABLE * _Nonnull __thrown), const void* _Nonnull __pdata_System_Resources_IResourceWriter_void__Close_0__0, void (* _Nonnull  __cb_System_Resources_IResourceWriter_void__Generate_0__0)(const void* _Nonnull __pdata, SG_HNDL_NULLABLE * _Nonnull __thrown), const void* _Nonnull __pdata_System_Resources_IResourceWriter_void__Generate_0__0, void (* _Nonnull  __cb_System_IDisposable_void__Dispose_0__0)(const void* _Nonnull __pdata, SG_HNDL_NULLABLE * _Nonnull __thrown), const void* _Nonnull __pdata_System_IDisposable_void__Dispose_0__0, void (* _Nullable __deinit)(const void* _Nonnull __pdata));

TYP System_Resources_ResourceWriter_get_type_handle(void);

SG_HNDL_NONNULL System_Resources_ResourceWriter_ctor_0__1__Stream(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL stream);

SG_HNDL_NONNULL System_Resources_ResourceWriter_ctor_0__1__String(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL fileName);

void System_Resources_ResourceWriter_void__AddResource_0__2__String_u8Array(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL name, SG_HNDL_NULLABLE value);

void System_Resources_ResourceWriter_void__AddResource_0__2__String_Stream(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL name, SG_HNDL_NULLABLE value);

void System_Resources_ResourceWriter_void__AddResource_0__3__String_Stream_bool(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL name, SG_HNDL_NULLABLE value, int32_t closeAfterWrite);

void System_Resources_ResourceWriter_void__AddResource_0__2__String_Object(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL name, SG_HNDL_NULLABLE value);

void System_Resources_ResourceWriter_void__AddResource_0__2__String_String(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL name, SG_HNDL_NULLABLE value);

void System_Resources_ResourceWriter_void__AddResourceData_0__3__String_String_u8Array(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL name, SG_HNDL_NONNULL typeName, SG_HNDL_NONNULL serializedData);

void System_Resources_ResourceWriter_void__Close_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

void System_Resources_ResourceWriter_void__Dispose_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

void System_Resources_ResourceWriter_void__Generate_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NULLABLE System_Resources_ResourceWriter_System_Func_System_Type_string___get_TypeNameConverter_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

void System_Resources_ResourceWriter_void__set_TypeNameConverter_0__1__System_Func_System_Type_string_(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NULLABLE value);

SG_HNDL_NONNULL System_Resources_ResourceWriter_cast(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __h);


#ifdef __cplusplus
}
#endif

#endif // INCLUDE_System_Resources_Writer

