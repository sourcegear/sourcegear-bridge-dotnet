// this file is automatically generated with SourceGear Bridge

#include <stdint.h>

#ifndef INCLUDE_System_Net_NameResolution
#define INCLUDE_System_Net_NameResolution

#ifdef __cplusplus
extern "C" {
#endif

typedef const void* _Nonnull SG_HNDL_NONNULL;
typedef const void* _Nullable SG_HNDL_NULLABLE;
typedef const void* _Nonnull TYP;
typedef uint64_t GVAL;

SG_HNDL_NONNULL System_Net_Dns_IAsyncResult__BeginGetHostAddresses_0__3__String_AsyncCallback_Object(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL hostNameOrAddress, SG_HNDL_NULLABLE requestCallback, SG_HNDL_NULLABLE state);

SG_HNDL_NONNULL System_Net_Dns_IAsyncResult__BeginGetHostByName_0__3__String_AsyncCallback_Object(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL hostName, SG_HNDL_NULLABLE requestCallback, SG_HNDL_NULLABLE stateObject);

SG_HNDL_NONNULL System_Net_Dns_IAsyncResult__BeginGetHostEntry_0__3__IPAddress_AsyncCallback_Object(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL address, SG_HNDL_NULLABLE requestCallback, SG_HNDL_NULLABLE stateObject);

SG_HNDL_NONNULL System_Net_Dns_IAsyncResult__BeginGetHostEntry_0__3__String_AsyncCallback_Object(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL hostNameOrAddress, SG_HNDL_NULLABLE requestCallback, SG_HNDL_NULLABLE stateObject);

SG_HNDL_NONNULL System_Net_Dns_IAsyncResult__BeginResolve_0__3__String_AsyncCallback_Object(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL hostName, SG_HNDL_NULLABLE requestCallback, SG_HNDL_NULLABLE stateObject);

SG_HNDL_NONNULL System_Net_Dns_IPAddressArray__EndGetHostAddresses_0__1__IAsyncResult(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL asyncResult);

SG_HNDL_NONNULL System_Net_Dns_IPHostEntry__EndGetHostByName_0__1__IAsyncResult(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL asyncResult);

SG_HNDL_NONNULL System_Net_Dns_IPHostEntry__EndGetHostEntry_0__1__IAsyncResult(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL asyncResult);

SG_HNDL_NONNULL System_Net_Dns_IPHostEntry__EndResolve_0__1__IAsyncResult(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL asyncResult);

SG_HNDL_NONNULL System_Net_Dns_IPAddressArray__GetHostAddresses_0__1__String(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL hostNameOrAddress);

SG_HNDL_NONNULL System_Net_Dns_IPAddressArray__GetHostAddresses_0__2__String_AddressFamily(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL hostNameOrAddress, int32_t family);

SG_HNDL_NONNULL System_Net_Dns_System_Threading_Tasks_Task_System_Net_IPAddressArray___GetHostAddressesAsync_0__1__String(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL hostNameOrAddress);

SG_HNDL_NONNULL System_Net_Dns_System_Threading_Tasks_Task_System_Net_IPAddressArray___GetHostAddressesAsync_0__3__String_AddressFamily_CancellationToken(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL hostNameOrAddress, int32_t family, SG_HNDL_NONNULL cancellationToken);

SG_HNDL_NONNULL System_Net_Dns_System_Threading_Tasks_Task_System_Net_IPAddressArray___GetHostAddressesAsync_0__2__String_CancellationToken(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL hostNameOrAddress, SG_HNDL_NONNULL cancellationToken);

SG_HNDL_NONNULL System_Net_Dns_IPHostEntry__GetHostByAddress_0__1__IPAddress(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL address);

SG_HNDL_NONNULL System_Net_Dns_IPHostEntry__GetHostByAddress_0__1__String(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL address);

SG_HNDL_NONNULL System_Net_Dns_IPHostEntry__GetHostByName_0__1__String(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL hostName);

SG_HNDL_NONNULL System_Net_Dns_IPHostEntry__GetHostEntry_0__1__IPAddress(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL address);

SG_HNDL_NONNULL System_Net_Dns_IPHostEntry__GetHostEntry_0__1__String(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL hostNameOrAddress);

SG_HNDL_NONNULL System_Net_Dns_IPHostEntry__GetHostEntry_0__2__String_AddressFamily(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL hostNameOrAddress, int32_t family);

SG_HNDL_NONNULL System_Net_Dns_System_Threading_Tasks_Task_System_Net_IPHostEntry___GetHostEntryAsync_0__1__IPAddress(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL address);

SG_HNDL_NONNULL System_Net_Dns_System_Threading_Tasks_Task_System_Net_IPHostEntry___GetHostEntryAsync_0__1__String(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL hostNameOrAddress);

SG_HNDL_NONNULL System_Net_Dns_System_Threading_Tasks_Task_System_Net_IPHostEntry___GetHostEntryAsync_0__3__String_AddressFamily_CancellationToken(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL hostNameOrAddress, int32_t family, SG_HNDL_NONNULL cancellationToken);

SG_HNDL_NONNULL System_Net_Dns_System_Threading_Tasks_Task_System_Net_IPHostEntry___GetHostEntryAsync_0__2__String_CancellationToken(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL hostNameOrAddress, SG_HNDL_NONNULL cancellationToken);

SG_HNDL_NONNULL System_Net_Dns_String__GetHostName_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Net_Dns_IPHostEntry__Resolve_0__1__String(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL hostName);

TYP System_Net_IPHostEntry_get_type_handle(void);

SG_HNDL_NONNULL System_Net_IPHostEntry_ctor_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Net_IPHostEntry_IPAddressArray__get_AddressList_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

void System_Net_IPHostEntry_void__set_AddressList_0__1__IPAddressArray(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL value);

SG_HNDL_NONNULL System_Net_IPHostEntry_StringArray__get_Aliases_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

void System_Net_IPHostEntry_void__set_Aliases_0__1__StringArray(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL value);

SG_HNDL_NONNULL System_Net_IPHostEntry_String__get_HostName_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

void System_Net_IPHostEntry_void__set_HostName_0__1__String(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL value);

SG_HNDL_NONNULL System_Net_IPHostEntry_cast(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __h);


#ifdef __cplusplus
}
#endif

#endif // INCLUDE_System_Net_NameResolution

