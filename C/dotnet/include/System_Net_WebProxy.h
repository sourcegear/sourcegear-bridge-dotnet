// this file is automatically generated with SourceGear Bridge

#include <stdint.h>

#ifndef INCLUDE_System_Net_WebProxy
#define INCLUDE_System_Net_WebProxy

#ifdef __cplusplus
extern "C" {
#endif

typedef const void* _Nonnull SG_HNDL_NONNULL;
typedef const void* _Nullable SG_HNDL_NULLABLE;
typedef const void* _Nonnull TYP;
typedef uint64_t GVAL;

TYP System_Net_IWebProxyScript_get_type_handle(void);

void System_Net_IWebProxyScript_void__Close_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

int32_t System_Net_IWebProxyScript_bool__Load_0__3__Uri_String_Type(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL scriptLocation, SG_HNDL_NONNULL script, SG_HNDL_NONNULL helperType);

SG_HNDL_NONNULL System_Net_IWebProxyScript_String__Run_0__2__String_String(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL url, SG_HNDL_NONNULL host);

SG_HNDL_NONNULL System_Net_IWebProxyScript_cast(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __h);

SG_HNDL_NONNULL System_Net_IWebProxyScript_create(SG_HNDL_NULLABLE * _Nonnull __thrown, void (* _Nonnull  __cb_System_Net_IWebProxyScript_void__Close_0__0)(const void* _Nonnull __pdata, SG_HNDL_NULLABLE * _Nonnull __thrown), const void* _Nonnull __pdata_System_Net_IWebProxyScript_void__Close_0__0, int32_t (* _Nonnull  __cb_System_Net_IWebProxyScript_bool__Load_0__3__Uri_String_Type)(const void* _Nonnull __pdata, SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL scriptLocation, SG_HNDL_NONNULL script, SG_HNDL_NONNULL helperType), const void* _Nonnull __pdata_System_Net_IWebProxyScript_bool__Load_0__3__Uri_String_Type, SG_HNDL_NONNULL (* _Nonnull  __cb_System_Net_IWebProxyScript_String__Run_0__2__String_String)(const void* _Nonnull __pdata, SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL url, SG_HNDL_NONNULL host), const void* _Nonnull __pdata_System_Net_IWebProxyScript_String__Run_0__2__String_String, void (* _Nullable __deinit)(const void* _Nonnull __pdata));

TYP System_Net_WebProxy_get_type_handle(void);

SG_HNDL_NONNULL System_Net_WebProxy_ctor_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Net_WebProxy_ctor_0__1__String(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NULLABLE Address);

SG_HNDL_NONNULL System_Net_WebProxy_ctor_0__2__String_bool(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NULLABLE Address, int32_t BypassOnLocal);

SG_HNDL_NONNULL System_Net_WebProxy_ctor_0__3__String_bool_StringArray(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NULLABLE Address, int32_t BypassOnLocal, SG_HNDL_NULLABLE BypassList);

SG_HNDL_NONNULL System_Net_WebProxy_ctor_0__4__String_bool_StringArray_ICredentials(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NULLABLE Address, int32_t BypassOnLocal, SG_HNDL_NULLABLE BypassList, SG_HNDL_NULLABLE Credentials);

SG_HNDL_NONNULL System_Net_WebProxy_ctor_0__2__String_i32(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL Host, int32_t Port);

SG_HNDL_NONNULL System_Net_WebProxy_ctor_0__1__Uri(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NULLABLE Address);

SG_HNDL_NONNULL System_Net_WebProxy_ctor_0__2__Uri_bool(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NULLABLE Address, int32_t BypassOnLocal);

SG_HNDL_NONNULL System_Net_WebProxy_ctor_0__3__Uri_bool_StringArray(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NULLABLE Address, int32_t BypassOnLocal, SG_HNDL_NULLABLE BypassList);

SG_HNDL_NONNULL System_Net_WebProxy_ctor_0__4__Uri_bool_StringArray_ICredentials(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NULLABLE Address, int32_t BypassOnLocal, SG_HNDL_NULLABLE BypassList, SG_HNDL_NULLABLE Credentials);

SG_HNDL_NONNULL System_Net_WebProxy_WebProxy__GetDefaultProxy_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NULLABLE System_Net_WebProxy_Uri__GetProxy_0__1__Uri(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL destination);

int32_t System_Net_WebProxy_bool__IsBypassed_0__1__Uri(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL host);

SG_HNDL_NULLABLE System_Net_WebProxy_Uri__get_Address_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

void System_Net_WebProxy_void__set_Address_0__1__Uri(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NULLABLE value);

SG_HNDL_NONNULL System_Net_WebProxy_ArrayList__get_BypassArrayList_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL System_Net_WebProxy_StringArray__get_BypassList_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

void System_Net_WebProxy_void__set_BypassList_0__1__StringArray(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL value);

int32_t System_Net_WebProxy_bool__get_BypassProxyOnLocal_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

void System_Net_WebProxy_void__set_BypassProxyOnLocal_0__1__bool(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, int32_t value);

SG_HNDL_NULLABLE System_Net_WebProxy_ICredentials__get_Credentials_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

void System_Net_WebProxy_void__set_Credentials_0__1__ICredentials(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NULLABLE value);

int32_t System_Net_WebProxy_bool__get_UseDefaultCredentials_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

void System_Net_WebProxy_void__set_UseDefaultCredentials_0__1__bool(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, int32_t value);

SG_HNDL_NONNULL System_Net_WebProxy_cast(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __h);


#ifdef __cplusplus
}
#endif

#endif // INCLUDE_System_Net_WebProxy

