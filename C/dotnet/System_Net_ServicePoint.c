// this file is automatically generated with SourceGear Bridge

#include <stdint.h>

#include "System_Net_ServicePoint.h"

extern void (*_sg_resolve_jumptable)(const char*, int, void*);

struct {
    TYP (* _Nonnull  _fp_System_Net_BindIPEndPoint_get_type_handle)(void);
    SG_HNDL_NONNULL (* _Nonnull  _fp_System_Net_BindIPEndPoint_IPEndPoint__Invoke_0__3__ServicePoint_IPEndPoint_i32)(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL servicePoint, SG_HNDL_NONNULL remoteEndPoint, int32_t retryCount);
    SG_HNDL_NULLABLE (* _Nonnull  _fp_System_Net_BindIPEndPoint_IAsyncResult__BeginInvoke_0__5__ServicePoint_IPEndPoint_i32_AsyncCallback_Object)(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL servicePoint, SG_HNDL_NONNULL remoteEndPoint, int32_t retryCount, SG_HNDL_NULLABLE callback, SG_HNDL_NULLABLE object_);
    SG_HNDL_NONNULL (* _Nonnull  _fp_System_Net_BindIPEndPoint_IPEndPoint__EndInvoke_0__1__IAsyncResult)(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NULLABLE result);
    SG_HNDL_NONNULL (* _Nonnull  _fp_System_Net_BindIPEndPoint_create)(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL (* _Nonnull  __cb)(const void* _Nonnull __pdata, SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL servicePoint, SG_HNDL_NONNULL remoteEndPoint, int32_t retryCount), const void* _Nonnull __pdata, void (* _Nullable __deinit)(const void* _Nonnull __pdata));
    TYP (* _Nonnull  _fp_System_Net_SecurityProtocolType_get_type_handle)(void);
    int32_t (* _Nonnull  _fp_System_Net_SecurityProtocolType_get_SystemDefault)(void);
    int32_t (* _Nonnull  _fp_System_Net_SecurityProtocolType_get_Ssl3)(void);
    int32_t (* _Nonnull  _fp_System_Net_SecurityProtocolType_get_Tls)(void);
    int32_t (* _Nonnull  _fp_System_Net_SecurityProtocolType_get_Tls11)(void);
    int32_t (* _Nonnull  _fp_System_Net_SecurityProtocolType_get_Tls12)(void);
    int32_t (* _Nonnull  _fp_System_Net_SecurityProtocolType_get_Tls13)(void);
    TYP (* _Nonnull  _fp_System_Net_ServicePoint_get_type_handle)(void);
    int32_t (* _Nonnull  _fp_System_Net_ServicePoint_bool__CloseConnectionGroup_0__1__String)(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL connectionGroupName);
    void (* _Nonnull  _fp_System_Net_ServicePoint_void__SetTcpKeepAlive_0__3__bool_i32_i32)(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, int32_t enabled, int32_t keepAliveTime, int32_t keepAliveInterval);
    SG_HNDL_NONNULL (* _Nonnull  _fp_System_Net_ServicePoint_Uri__get_Address_0__0)(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);
    SG_HNDL_NULLABLE (* _Nonnull  _fp_System_Net_ServicePoint_BindIPEndPoint__get_BindIPEndPointDelegate_0__0)(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);
    void (* _Nonnull  _fp_System_Net_ServicePoint_void__set_BindIPEndPointDelegate_0__1__BindIPEndPoint)(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NULLABLE value);
    SG_HNDL_NULLABLE (* _Nonnull  _fp_System_Net_ServicePoint_X509Certificate__get_Certificate_0__0)(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);
    SG_HNDL_NULLABLE (* _Nonnull  _fp_System_Net_ServicePoint_X509Certificate__get_ClientCertificate_0__0)(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);
    int32_t (* _Nonnull  _fp_System_Net_ServicePoint_i32__get_ConnectionLeaseTimeout_0__0)(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);
    void (* _Nonnull  _fp_System_Net_ServicePoint_void__set_ConnectionLeaseTimeout_0__1__i32)(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, int32_t value);
    int32_t (* _Nonnull  _fp_System_Net_ServicePoint_i32__get_ConnectionLimit_0__0)(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);
    void (* _Nonnull  _fp_System_Net_ServicePoint_void__set_ConnectionLimit_0__1__i32)(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, int32_t value);
    SG_HNDL_NONNULL (* _Nonnull  _fp_System_Net_ServicePoint_String__get_ConnectionName_0__0)(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);
    int32_t (* _Nonnull  _fp_System_Net_ServicePoint_i32__get_CurrentConnections_0__0)(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);
    int32_t (* _Nonnull  _fp_System_Net_ServicePoint_bool__get_Expect100Continue_0__0)(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);
    void (* _Nonnull  _fp_System_Net_ServicePoint_void__set_Expect100Continue_0__1__bool)(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, int32_t value);
    SG_HNDL_NONNULL (* _Nonnull  _fp_System_Net_ServicePoint_DateTime__get_IdleSince_0__0)(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);
    int32_t (* _Nonnull  _fp_System_Net_ServicePoint_i32__get_MaxIdleTime_0__0)(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);
    void (* _Nonnull  _fp_System_Net_ServicePoint_void__set_MaxIdleTime_0__1__i32)(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, int32_t value);
    SG_HNDL_NONNULL (* _Nonnull  _fp_System_Net_ServicePoint_Version__get_ProtocolVersion_0__0)(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);
    int32_t (* _Nonnull  _fp_System_Net_ServicePoint_i32__get_ReceiveBufferSize_0__0)(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);
    void (* _Nonnull  _fp_System_Net_ServicePoint_void__set_ReceiveBufferSize_0__1__i32)(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, int32_t value);
    int32_t (* _Nonnull  _fp_System_Net_ServicePoint_bool__get_SupportsPipelining_0__0)(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);
    int32_t (* _Nonnull  _fp_System_Net_ServicePoint_bool__get_UseNagleAlgorithm_0__0)(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);
    void (* _Nonnull  _fp_System_Net_ServicePoint_void__set_UseNagleAlgorithm_0__1__bool)(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, int32_t value);
    SG_HNDL_NONNULL (* _Nonnull  _fp_System_Net_ServicePoint_cast)(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __h);
    TYP (* _Nonnull  _fp_System_Net_ServicePointManager_get_type_handle)(void);
    int32_t (* _Nonnull  _fp_System_Net_ServicePointManager_get_DefaultNonPersistentConnectionLimit)(void);
    int32_t (* _Nonnull  _fp_System_Net_ServicePointManager_get_DefaultPersistentConnectionLimit)(void);
    SG_HNDL_NONNULL (* _Nonnull  _fp_System_Net_ServicePointManager_ServicePoint__FindServicePoint_0__2__String_IWebProxy)(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL uriString, SG_HNDL_NULLABLE proxy);
    SG_HNDL_NONNULL (* _Nonnull  _fp_System_Net_ServicePointManager_ServicePoint__FindServicePoint_0__1__Uri)(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL address);
    SG_HNDL_NONNULL (* _Nonnull  _fp_System_Net_ServicePointManager_ServicePoint__FindServicePoint_0__2__Uri_IWebProxy)(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL address, SG_HNDL_NULLABLE proxy);
    void (* _Nonnull  _fp_System_Net_ServicePointManager_void__SetTcpKeepAlive_0__3__bool_i32_i32)(SG_HNDL_NULLABLE * _Nonnull __thrown, int32_t enabled, int32_t keepAliveTime, int32_t keepAliveInterval);
    int32_t (* _Nonnull  _fp_System_Net_ServicePointManager_bool__get_CheckCertificateRevocationList_0__0)(SG_HNDL_NULLABLE * _Nonnull __thrown);
    void (* _Nonnull  _fp_System_Net_ServicePointManager_void__set_CheckCertificateRevocationList_0__1__bool)(SG_HNDL_NULLABLE * _Nonnull __thrown, int32_t value);
    int32_t (* _Nonnull  _fp_System_Net_ServicePointManager_i32__get_DefaultConnectionLimit_0__0)(SG_HNDL_NULLABLE * _Nonnull __thrown);
    void (* _Nonnull  _fp_System_Net_ServicePointManager_void__set_DefaultConnectionLimit_0__1__i32)(SG_HNDL_NULLABLE * _Nonnull __thrown, int32_t value);
    int32_t (* _Nonnull  _fp_System_Net_ServicePointManager_i32__get_DnsRefreshTimeout_0__0)(SG_HNDL_NULLABLE * _Nonnull __thrown);
    void (* _Nonnull  _fp_System_Net_ServicePointManager_void__set_DnsRefreshTimeout_0__1__i32)(SG_HNDL_NULLABLE * _Nonnull __thrown, int32_t value);
    int32_t (* _Nonnull  _fp_System_Net_ServicePointManager_bool__get_EnableDnsRoundRobin_0__0)(SG_HNDL_NULLABLE * _Nonnull __thrown);
    void (* _Nonnull  _fp_System_Net_ServicePointManager_void__set_EnableDnsRoundRobin_0__1__bool)(SG_HNDL_NULLABLE * _Nonnull __thrown, int32_t value);
    int32_t (* _Nonnull  _fp_System_Net_ServicePointManager_EncryptionPolicy__get_EncryptionPolicy_0__0)(SG_HNDL_NULLABLE * _Nonnull __thrown);
    int32_t (* _Nonnull  _fp_System_Net_ServicePointManager_bool__get_Expect100Continue_0__0)(SG_HNDL_NULLABLE * _Nonnull __thrown);
    void (* _Nonnull  _fp_System_Net_ServicePointManager_void__set_Expect100Continue_0__1__bool)(SG_HNDL_NULLABLE * _Nonnull __thrown, int32_t value);
    int32_t (* _Nonnull  _fp_System_Net_ServicePointManager_i32__get_MaxServicePointIdleTime_0__0)(SG_HNDL_NULLABLE * _Nonnull __thrown);
    void (* _Nonnull  _fp_System_Net_ServicePointManager_void__set_MaxServicePointIdleTime_0__1__i32)(SG_HNDL_NULLABLE * _Nonnull __thrown, int32_t value);
    int32_t (* _Nonnull  _fp_System_Net_ServicePointManager_i32__get_MaxServicePoints_0__0)(SG_HNDL_NULLABLE * _Nonnull __thrown);
    void (* _Nonnull  _fp_System_Net_ServicePointManager_void__set_MaxServicePoints_0__1__i32)(SG_HNDL_NULLABLE * _Nonnull __thrown, int32_t value);
    int32_t (* _Nonnull  _fp_System_Net_ServicePointManager_bool__get_ReusePort_0__0)(SG_HNDL_NULLABLE * _Nonnull __thrown);
    void (* _Nonnull  _fp_System_Net_ServicePointManager_void__set_ReusePort_0__1__bool)(SG_HNDL_NULLABLE * _Nonnull __thrown, int32_t value);
    int32_t (* _Nonnull  _fp_System_Net_ServicePointManager_SecurityProtocolType__get_SecurityProtocol_0__0)(SG_HNDL_NULLABLE * _Nonnull __thrown);
    void (* _Nonnull  _fp_System_Net_ServicePointManager_void__set_SecurityProtocol_0__1__SecurityProtocolType)(SG_HNDL_NULLABLE * _Nonnull __thrown, int32_t value);
    SG_HNDL_NULLABLE (* _Nonnull  _fp_System_Net_ServicePointManager_RemoteCertificateValidationCallback__get_ServerCertificateValidationCallback_0__0)(SG_HNDL_NULLABLE * _Nonnull __thrown);
    void (* _Nonnull  _fp_System_Net_ServicePointManager_void__set_ServerCertificateValidationCallback_0__1__RemoteCertificateValidationCallback)(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NULLABLE value);
    int32_t (* _Nonnull  _fp_System_Net_ServicePointManager_bool__get_UseNagleAlgorithm_0__0)(SG_HNDL_NULLABLE * _Nonnull __thrown);
    void (* _Nonnull  _fp_System_Net_ServicePointManager_void__set_UseNagleAlgorithm_0__1__bool)(SG_HNDL_NULLABLE * _Nonnull __thrown, int32_t value);
    SG_HNDL_NONNULL (* _Nonnull  _fp_System_Net_ServicePointManager_cast)(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __h);
} _g_System_Net_ServicePoint;

static void my_init() {
    _sg_resolve_jumptable("System_Net_ServicePoint", 23, &_g_System_Net_ServicePoint);
}

TYP System_Net_BindIPEndPoint_get_type_handle(void) {
    if (!_g_System_Net_ServicePoint._fp_System_Net_BindIPEndPoint_get_type_handle) {
        my_init();
    }
    TYP ret = _g_System_Net_ServicePoint._fp_System_Net_BindIPEndPoint_get_type_handle();
    return ret;
}

SG_HNDL_NONNULL System_Net_BindIPEndPoint_IPEndPoint__Invoke_0__3__ServicePoint_IPEndPoint_i32(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL servicePoint, SG_HNDL_NONNULL remoteEndPoint, int32_t retryCount) {
    if (!_g_System_Net_ServicePoint._fp_System_Net_BindIPEndPoint_IPEndPoint__Invoke_0__3__ServicePoint_IPEndPoint_i32) {
        my_init();
    }
    SG_HNDL_NONNULL ret = _g_System_Net_ServicePoint._fp_System_Net_BindIPEndPoint_IPEndPoint__Invoke_0__3__ServicePoint_IPEndPoint_i32(__thrown, __self_h, servicePoint, remoteEndPoint, retryCount);
    return ret;
}

SG_HNDL_NULLABLE System_Net_BindIPEndPoint_IAsyncResult__BeginInvoke_0__5__ServicePoint_IPEndPoint_i32_AsyncCallback_Object(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL servicePoint, SG_HNDL_NONNULL remoteEndPoint, int32_t retryCount, SG_HNDL_NULLABLE callback, SG_HNDL_NULLABLE object_) {
    if (!_g_System_Net_ServicePoint._fp_System_Net_BindIPEndPoint_IAsyncResult__BeginInvoke_0__5__ServicePoint_IPEndPoint_i32_AsyncCallback_Object) {
        my_init();
    }
    SG_HNDL_NULLABLE ret = _g_System_Net_ServicePoint._fp_System_Net_BindIPEndPoint_IAsyncResult__BeginInvoke_0__5__ServicePoint_IPEndPoint_i32_AsyncCallback_Object(__thrown, __self_h, servicePoint, remoteEndPoint, retryCount, callback, object_);
    return ret;
}

SG_HNDL_NONNULL System_Net_BindIPEndPoint_IPEndPoint__EndInvoke_0__1__IAsyncResult(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NULLABLE result) {
    if (!_g_System_Net_ServicePoint._fp_System_Net_BindIPEndPoint_IPEndPoint__EndInvoke_0__1__IAsyncResult) {
        my_init();
    }
    SG_HNDL_NONNULL ret = _g_System_Net_ServicePoint._fp_System_Net_BindIPEndPoint_IPEndPoint__EndInvoke_0__1__IAsyncResult(__thrown, __self_h, result);
    return ret;
}

SG_HNDL_NONNULL System_Net_BindIPEndPoint_create(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL (* _Nonnull  __cb)(const void* _Nonnull __pdata, SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL servicePoint, SG_HNDL_NONNULL remoteEndPoint, int32_t retryCount), const void* _Nonnull __pdata, void (* _Nullable __deinit)(const void* _Nonnull __pdata)) {
    if (!_g_System_Net_ServicePoint._fp_System_Net_BindIPEndPoint_create) {
        my_init();
    }
    SG_HNDL_NONNULL ret = _g_System_Net_ServicePoint._fp_System_Net_BindIPEndPoint_create(__thrown, __cb, __pdata, __deinit);
    return ret;
}

TYP System_Net_SecurityProtocolType_get_type_handle(void) {
    if (!_g_System_Net_ServicePoint._fp_System_Net_SecurityProtocolType_get_type_handle) {
        my_init();
    }
    TYP ret = _g_System_Net_ServicePoint._fp_System_Net_SecurityProtocolType_get_type_handle();
    return ret;
}

int32_t System_Net_SecurityProtocolType_get_SystemDefault(void) {
    if (!_g_System_Net_ServicePoint._fp_System_Net_SecurityProtocolType_get_SystemDefault) {
        my_init();
    }
    int32_t ret = _g_System_Net_ServicePoint._fp_System_Net_SecurityProtocolType_get_SystemDefault();
    return ret;
}

int32_t System_Net_SecurityProtocolType_get_Ssl3(void) {
    if (!_g_System_Net_ServicePoint._fp_System_Net_SecurityProtocolType_get_Ssl3) {
        my_init();
    }
    int32_t ret = _g_System_Net_ServicePoint._fp_System_Net_SecurityProtocolType_get_Ssl3();
    return ret;
}

int32_t System_Net_SecurityProtocolType_get_Tls(void) {
    if (!_g_System_Net_ServicePoint._fp_System_Net_SecurityProtocolType_get_Tls) {
        my_init();
    }
    int32_t ret = _g_System_Net_ServicePoint._fp_System_Net_SecurityProtocolType_get_Tls();
    return ret;
}

int32_t System_Net_SecurityProtocolType_get_Tls11(void) {
    if (!_g_System_Net_ServicePoint._fp_System_Net_SecurityProtocolType_get_Tls11) {
        my_init();
    }
    int32_t ret = _g_System_Net_ServicePoint._fp_System_Net_SecurityProtocolType_get_Tls11();
    return ret;
}

int32_t System_Net_SecurityProtocolType_get_Tls12(void) {
    if (!_g_System_Net_ServicePoint._fp_System_Net_SecurityProtocolType_get_Tls12) {
        my_init();
    }
    int32_t ret = _g_System_Net_ServicePoint._fp_System_Net_SecurityProtocolType_get_Tls12();
    return ret;
}

int32_t System_Net_SecurityProtocolType_get_Tls13(void) {
    if (!_g_System_Net_ServicePoint._fp_System_Net_SecurityProtocolType_get_Tls13) {
        my_init();
    }
    int32_t ret = _g_System_Net_ServicePoint._fp_System_Net_SecurityProtocolType_get_Tls13();
    return ret;
}

TYP System_Net_ServicePoint_get_type_handle(void) {
    if (!_g_System_Net_ServicePoint._fp_System_Net_ServicePoint_get_type_handle) {
        my_init();
    }
    TYP ret = _g_System_Net_ServicePoint._fp_System_Net_ServicePoint_get_type_handle();
    return ret;
}

int32_t System_Net_ServicePoint_bool__CloseConnectionGroup_0__1__String(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL connectionGroupName) {
    if (!_g_System_Net_ServicePoint._fp_System_Net_ServicePoint_bool__CloseConnectionGroup_0__1__String) {
        my_init();
    }
    int32_t ret = _g_System_Net_ServicePoint._fp_System_Net_ServicePoint_bool__CloseConnectionGroup_0__1__String(__thrown, __self_h, connectionGroupName);
    return ret;
}

void System_Net_ServicePoint_void__SetTcpKeepAlive_0__3__bool_i32_i32(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, int32_t enabled, int32_t keepAliveTime, int32_t keepAliveInterval) {
    if (!_g_System_Net_ServicePoint._fp_System_Net_ServicePoint_void__SetTcpKeepAlive_0__3__bool_i32_i32) {
        my_init();
    }
    _g_System_Net_ServicePoint._fp_System_Net_ServicePoint_void__SetTcpKeepAlive_0__3__bool_i32_i32(__thrown, __self_h, enabled, keepAliveTime, keepAliveInterval);
}

SG_HNDL_NONNULL System_Net_ServicePoint_Uri__get_Address_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h) {
    if (!_g_System_Net_ServicePoint._fp_System_Net_ServicePoint_Uri__get_Address_0__0) {
        my_init();
    }
    SG_HNDL_NONNULL ret = _g_System_Net_ServicePoint._fp_System_Net_ServicePoint_Uri__get_Address_0__0(__thrown, __self_h);
    return ret;
}

SG_HNDL_NULLABLE System_Net_ServicePoint_BindIPEndPoint__get_BindIPEndPointDelegate_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h) {
    if (!_g_System_Net_ServicePoint._fp_System_Net_ServicePoint_BindIPEndPoint__get_BindIPEndPointDelegate_0__0) {
        my_init();
    }
    SG_HNDL_NULLABLE ret = _g_System_Net_ServicePoint._fp_System_Net_ServicePoint_BindIPEndPoint__get_BindIPEndPointDelegate_0__0(__thrown, __self_h);
    return ret;
}

void System_Net_ServicePoint_void__set_BindIPEndPointDelegate_0__1__BindIPEndPoint(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NULLABLE value) {
    if (!_g_System_Net_ServicePoint._fp_System_Net_ServicePoint_void__set_BindIPEndPointDelegate_0__1__BindIPEndPoint) {
        my_init();
    }
    _g_System_Net_ServicePoint._fp_System_Net_ServicePoint_void__set_BindIPEndPointDelegate_0__1__BindIPEndPoint(__thrown, __self_h, value);
}

SG_HNDL_NULLABLE System_Net_ServicePoint_X509Certificate__get_Certificate_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h) {
    if (!_g_System_Net_ServicePoint._fp_System_Net_ServicePoint_X509Certificate__get_Certificate_0__0) {
        my_init();
    }
    SG_HNDL_NULLABLE ret = _g_System_Net_ServicePoint._fp_System_Net_ServicePoint_X509Certificate__get_Certificate_0__0(__thrown, __self_h);
    return ret;
}

SG_HNDL_NULLABLE System_Net_ServicePoint_X509Certificate__get_ClientCertificate_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h) {
    if (!_g_System_Net_ServicePoint._fp_System_Net_ServicePoint_X509Certificate__get_ClientCertificate_0__0) {
        my_init();
    }
    SG_HNDL_NULLABLE ret = _g_System_Net_ServicePoint._fp_System_Net_ServicePoint_X509Certificate__get_ClientCertificate_0__0(__thrown, __self_h);
    return ret;
}

int32_t System_Net_ServicePoint_i32__get_ConnectionLeaseTimeout_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h) {
    if (!_g_System_Net_ServicePoint._fp_System_Net_ServicePoint_i32__get_ConnectionLeaseTimeout_0__0) {
        my_init();
    }
    int32_t ret = _g_System_Net_ServicePoint._fp_System_Net_ServicePoint_i32__get_ConnectionLeaseTimeout_0__0(__thrown, __self_h);
    return ret;
}

void System_Net_ServicePoint_void__set_ConnectionLeaseTimeout_0__1__i32(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, int32_t value) {
    if (!_g_System_Net_ServicePoint._fp_System_Net_ServicePoint_void__set_ConnectionLeaseTimeout_0__1__i32) {
        my_init();
    }
    _g_System_Net_ServicePoint._fp_System_Net_ServicePoint_void__set_ConnectionLeaseTimeout_0__1__i32(__thrown, __self_h, value);
}

int32_t System_Net_ServicePoint_i32__get_ConnectionLimit_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h) {
    if (!_g_System_Net_ServicePoint._fp_System_Net_ServicePoint_i32__get_ConnectionLimit_0__0) {
        my_init();
    }
    int32_t ret = _g_System_Net_ServicePoint._fp_System_Net_ServicePoint_i32__get_ConnectionLimit_0__0(__thrown, __self_h);
    return ret;
}

void System_Net_ServicePoint_void__set_ConnectionLimit_0__1__i32(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, int32_t value) {
    if (!_g_System_Net_ServicePoint._fp_System_Net_ServicePoint_void__set_ConnectionLimit_0__1__i32) {
        my_init();
    }
    _g_System_Net_ServicePoint._fp_System_Net_ServicePoint_void__set_ConnectionLimit_0__1__i32(__thrown, __self_h, value);
}

SG_HNDL_NONNULL System_Net_ServicePoint_String__get_ConnectionName_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h) {
    if (!_g_System_Net_ServicePoint._fp_System_Net_ServicePoint_String__get_ConnectionName_0__0) {
        my_init();
    }
    SG_HNDL_NONNULL ret = _g_System_Net_ServicePoint._fp_System_Net_ServicePoint_String__get_ConnectionName_0__0(__thrown, __self_h);
    return ret;
}

int32_t System_Net_ServicePoint_i32__get_CurrentConnections_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h) {
    if (!_g_System_Net_ServicePoint._fp_System_Net_ServicePoint_i32__get_CurrentConnections_0__0) {
        my_init();
    }
    int32_t ret = _g_System_Net_ServicePoint._fp_System_Net_ServicePoint_i32__get_CurrentConnections_0__0(__thrown, __self_h);
    return ret;
}

int32_t System_Net_ServicePoint_bool__get_Expect100Continue_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h) {
    if (!_g_System_Net_ServicePoint._fp_System_Net_ServicePoint_bool__get_Expect100Continue_0__0) {
        my_init();
    }
    int32_t ret = _g_System_Net_ServicePoint._fp_System_Net_ServicePoint_bool__get_Expect100Continue_0__0(__thrown, __self_h);
    return ret;
}

void System_Net_ServicePoint_void__set_Expect100Continue_0__1__bool(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, int32_t value) {
    if (!_g_System_Net_ServicePoint._fp_System_Net_ServicePoint_void__set_Expect100Continue_0__1__bool) {
        my_init();
    }
    _g_System_Net_ServicePoint._fp_System_Net_ServicePoint_void__set_Expect100Continue_0__1__bool(__thrown, __self_h, value);
}

SG_HNDL_NONNULL System_Net_ServicePoint_DateTime__get_IdleSince_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h) {
    if (!_g_System_Net_ServicePoint._fp_System_Net_ServicePoint_DateTime__get_IdleSince_0__0) {
        my_init();
    }
    SG_HNDL_NONNULL ret = _g_System_Net_ServicePoint._fp_System_Net_ServicePoint_DateTime__get_IdleSince_0__0(__thrown, __self_h);
    return ret;
}

int32_t System_Net_ServicePoint_i32__get_MaxIdleTime_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h) {
    if (!_g_System_Net_ServicePoint._fp_System_Net_ServicePoint_i32__get_MaxIdleTime_0__0) {
        my_init();
    }
    int32_t ret = _g_System_Net_ServicePoint._fp_System_Net_ServicePoint_i32__get_MaxIdleTime_0__0(__thrown, __self_h);
    return ret;
}

void System_Net_ServicePoint_void__set_MaxIdleTime_0__1__i32(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, int32_t value) {
    if (!_g_System_Net_ServicePoint._fp_System_Net_ServicePoint_void__set_MaxIdleTime_0__1__i32) {
        my_init();
    }
    _g_System_Net_ServicePoint._fp_System_Net_ServicePoint_void__set_MaxIdleTime_0__1__i32(__thrown, __self_h, value);
}

SG_HNDL_NONNULL System_Net_ServicePoint_Version__get_ProtocolVersion_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h) {
    if (!_g_System_Net_ServicePoint._fp_System_Net_ServicePoint_Version__get_ProtocolVersion_0__0) {
        my_init();
    }
    SG_HNDL_NONNULL ret = _g_System_Net_ServicePoint._fp_System_Net_ServicePoint_Version__get_ProtocolVersion_0__0(__thrown, __self_h);
    return ret;
}

int32_t System_Net_ServicePoint_i32__get_ReceiveBufferSize_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h) {
    if (!_g_System_Net_ServicePoint._fp_System_Net_ServicePoint_i32__get_ReceiveBufferSize_0__0) {
        my_init();
    }
    int32_t ret = _g_System_Net_ServicePoint._fp_System_Net_ServicePoint_i32__get_ReceiveBufferSize_0__0(__thrown, __self_h);
    return ret;
}

void System_Net_ServicePoint_void__set_ReceiveBufferSize_0__1__i32(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, int32_t value) {
    if (!_g_System_Net_ServicePoint._fp_System_Net_ServicePoint_void__set_ReceiveBufferSize_0__1__i32) {
        my_init();
    }
    _g_System_Net_ServicePoint._fp_System_Net_ServicePoint_void__set_ReceiveBufferSize_0__1__i32(__thrown, __self_h, value);
}

int32_t System_Net_ServicePoint_bool__get_SupportsPipelining_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h) {
    if (!_g_System_Net_ServicePoint._fp_System_Net_ServicePoint_bool__get_SupportsPipelining_0__0) {
        my_init();
    }
    int32_t ret = _g_System_Net_ServicePoint._fp_System_Net_ServicePoint_bool__get_SupportsPipelining_0__0(__thrown, __self_h);
    return ret;
}

int32_t System_Net_ServicePoint_bool__get_UseNagleAlgorithm_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h) {
    if (!_g_System_Net_ServicePoint._fp_System_Net_ServicePoint_bool__get_UseNagleAlgorithm_0__0) {
        my_init();
    }
    int32_t ret = _g_System_Net_ServicePoint._fp_System_Net_ServicePoint_bool__get_UseNagleAlgorithm_0__0(__thrown, __self_h);
    return ret;
}

void System_Net_ServicePoint_void__set_UseNagleAlgorithm_0__1__bool(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, int32_t value) {
    if (!_g_System_Net_ServicePoint._fp_System_Net_ServicePoint_void__set_UseNagleAlgorithm_0__1__bool) {
        my_init();
    }
    _g_System_Net_ServicePoint._fp_System_Net_ServicePoint_void__set_UseNagleAlgorithm_0__1__bool(__thrown, __self_h, value);
}

SG_HNDL_NONNULL System_Net_ServicePoint_cast(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __h) {
    if (!_g_System_Net_ServicePoint._fp_System_Net_ServicePoint_cast) {
        my_init();
    }
    SG_HNDL_NONNULL ret = _g_System_Net_ServicePoint._fp_System_Net_ServicePoint_cast(__thrown, __h);
    return ret;
}

TYP System_Net_ServicePointManager_get_type_handle(void) {
    if (!_g_System_Net_ServicePoint._fp_System_Net_ServicePointManager_get_type_handle) {
        my_init();
    }
    TYP ret = _g_System_Net_ServicePoint._fp_System_Net_ServicePointManager_get_type_handle();
    return ret;
}

int32_t System_Net_ServicePointManager_get_DefaultNonPersistentConnectionLimit(void) {
    if (!_g_System_Net_ServicePoint._fp_System_Net_ServicePointManager_get_DefaultNonPersistentConnectionLimit) {
        my_init();
    }
    int32_t ret = _g_System_Net_ServicePoint._fp_System_Net_ServicePointManager_get_DefaultNonPersistentConnectionLimit();
    return ret;
}

int32_t System_Net_ServicePointManager_get_DefaultPersistentConnectionLimit(void) {
    if (!_g_System_Net_ServicePoint._fp_System_Net_ServicePointManager_get_DefaultPersistentConnectionLimit) {
        my_init();
    }
    int32_t ret = _g_System_Net_ServicePoint._fp_System_Net_ServicePointManager_get_DefaultPersistentConnectionLimit();
    return ret;
}

SG_HNDL_NONNULL System_Net_ServicePointManager_ServicePoint__FindServicePoint_0__2__String_IWebProxy(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL uriString, SG_HNDL_NULLABLE proxy) {
    if (!_g_System_Net_ServicePoint._fp_System_Net_ServicePointManager_ServicePoint__FindServicePoint_0__2__String_IWebProxy) {
        my_init();
    }
    SG_HNDL_NONNULL ret = _g_System_Net_ServicePoint._fp_System_Net_ServicePointManager_ServicePoint__FindServicePoint_0__2__String_IWebProxy(__thrown, uriString, proxy);
    return ret;
}

SG_HNDL_NONNULL System_Net_ServicePointManager_ServicePoint__FindServicePoint_0__1__Uri(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL address) {
    if (!_g_System_Net_ServicePoint._fp_System_Net_ServicePointManager_ServicePoint__FindServicePoint_0__1__Uri) {
        my_init();
    }
    SG_HNDL_NONNULL ret = _g_System_Net_ServicePoint._fp_System_Net_ServicePointManager_ServicePoint__FindServicePoint_0__1__Uri(__thrown, address);
    return ret;
}

SG_HNDL_NONNULL System_Net_ServicePointManager_ServicePoint__FindServicePoint_0__2__Uri_IWebProxy(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL address, SG_HNDL_NULLABLE proxy) {
    if (!_g_System_Net_ServicePoint._fp_System_Net_ServicePointManager_ServicePoint__FindServicePoint_0__2__Uri_IWebProxy) {
        my_init();
    }
    SG_HNDL_NONNULL ret = _g_System_Net_ServicePoint._fp_System_Net_ServicePointManager_ServicePoint__FindServicePoint_0__2__Uri_IWebProxy(__thrown, address, proxy);
    return ret;
}

void System_Net_ServicePointManager_void__SetTcpKeepAlive_0__3__bool_i32_i32(SG_HNDL_NULLABLE * _Nonnull __thrown, int32_t enabled, int32_t keepAliveTime, int32_t keepAliveInterval) {
    if (!_g_System_Net_ServicePoint._fp_System_Net_ServicePointManager_void__SetTcpKeepAlive_0__3__bool_i32_i32) {
        my_init();
    }
    _g_System_Net_ServicePoint._fp_System_Net_ServicePointManager_void__SetTcpKeepAlive_0__3__bool_i32_i32(__thrown, enabled, keepAliveTime, keepAliveInterval);
}

int32_t System_Net_ServicePointManager_bool__get_CheckCertificateRevocationList_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown) {
    if (!_g_System_Net_ServicePoint._fp_System_Net_ServicePointManager_bool__get_CheckCertificateRevocationList_0__0) {
        my_init();
    }
    int32_t ret = _g_System_Net_ServicePoint._fp_System_Net_ServicePointManager_bool__get_CheckCertificateRevocationList_0__0(__thrown);
    return ret;
}

void System_Net_ServicePointManager_void__set_CheckCertificateRevocationList_0__1__bool(SG_HNDL_NULLABLE * _Nonnull __thrown, int32_t value) {
    if (!_g_System_Net_ServicePoint._fp_System_Net_ServicePointManager_void__set_CheckCertificateRevocationList_0__1__bool) {
        my_init();
    }
    _g_System_Net_ServicePoint._fp_System_Net_ServicePointManager_void__set_CheckCertificateRevocationList_0__1__bool(__thrown, value);
}

int32_t System_Net_ServicePointManager_i32__get_DefaultConnectionLimit_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown) {
    if (!_g_System_Net_ServicePoint._fp_System_Net_ServicePointManager_i32__get_DefaultConnectionLimit_0__0) {
        my_init();
    }
    int32_t ret = _g_System_Net_ServicePoint._fp_System_Net_ServicePointManager_i32__get_DefaultConnectionLimit_0__0(__thrown);
    return ret;
}

void System_Net_ServicePointManager_void__set_DefaultConnectionLimit_0__1__i32(SG_HNDL_NULLABLE * _Nonnull __thrown, int32_t value) {
    if (!_g_System_Net_ServicePoint._fp_System_Net_ServicePointManager_void__set_DefaultConnectionLimit_0__1__i32) {
        my_init();
    }
    _g_System_Net_ServicePoint._fp_System_Net_ServicePointManager_void__set_DefaultConnectionLimit_0__1__i32(__thrown, value);
}

int32_t System_Net_ServicePointManager_i32__get_DnsRefreshTimeout_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown) {
    if (!_g_System_Net_ServicePoint._fp_System_Net_ServicePointManager_i32__get_DnsRefreshTimeout_0__0) {
        my_init();
    }
    int32_t ret = _g_System_Net_ServicePoint._fp_System_Net_ServicePointManager_i32__get_DnsRefreshTimeout_0__0(__thrown);
    return ret;
}

void System_Net_ServicePointManager_void__set_DnsRefreshTimeout_0__1__i32(SG_HNDL_NULLABLE * _Nonnull __thrown, int32_t value) {
    if (!_g_System_Net_ServicePoint._fp_System_Net_ServicePointManager_void__set_DnsRefreshTimeout_0__1__i32) {
        my_init();
    }
    _g_System_Net_ServicePoint._fp_System_Net_ServicePointManager_void__set_DnsRefreshTimeout_0__1__i32(__thrown, value);
}

int32_t System_Net_ServicePointManager_bool__get_EnableDnsRoundRobin_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown) {
    if (!_g_System_Net_ServicePoint._fp_System_Net_ServicePointManager_bool__get_EnableDnsRoundRobin_0__0) {
        my_init();
    }
    int32_t ret = _g_System_Net_ServicePoint._fp_System_Net_ServicePointManager_bool__get_EnableDnsRoundRobin_0__0(__thrown);
    return ret;
}

void System_Net_ServicePointManager_void__set_EnableDnsRoundRobin_0__1__bool(SG_HNDL_NULLABLE * _Nonnull __thrown, int32_t value) {
    if (!_g_System_Net_ServicePoint._fp_System_Net_ServicePointManager_void__set_EnableDnsRoundRobin_0__1__bool) {
        my_init();
    }
    _g_System_Net_ServicePoint._fp_System_Net_ServicePointManager_void__set_EnableDnsRoundRobin_0__1__bool(__thrown, value);
}

int32_t System_Net_ServicePointManager_EncryptionPolicy__get_EncryptionPolicy_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown) {
    if (!_g_System_Net_ServicePoint._fp_System_Net_ServicePointManager_EncryptionPolicy__get_EncryptionPolicy_0__0) {
        my_init();
    }
    int32_t ret = _g_System_Net_ServicePoint._fp_System_Net_ServicePointManager_EncryptionPolicy__get_EncryptionPolicy_0__0(__thrown);
    return ret;
}

int32_t System_Net_ServicePointManager_bool__get_Expect100Continue_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown) {
    if (!_g_System_Net_ServicePoint._fp_System_Net_ServicePointManager_bool__get_Expect100Continue_0__0) {
        my_init();
    }
    int32_t ret = _g_System_Net_ServicePoint._fp_System_Net_ServicePointManager_bool__get_Expect100Continue_0__0(__thrown);
    return ret;
}

void System_Net_ServicePointManager_void__set_Expect100Continue_0__1__bool(SG_HNDL_NULLABLE * _Nonnull __thrown, int32_t value) {
    if (!_g_System_Net_ServicePoint._fp_System_Net_ServicePointManager_void__set_Expect100Continue_0__1__bool) {
        my_init();
    }
    _g_System_Net_ServicePoint._fp_System_Net_ServicePointManager_void__set_Expect100Continue_0__1__bool(__thrown, value);
}

int32_t System_Net_ServicePointManager_i32__get_MaxServicePointIdleTime_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown) {
    if (!_g_System_Net_ServicePoint._fp_System_Net_ServicePointManager_i32__get_MaxServicePointIdleTime_0__0) {
        my_init();
    }
    int32_t ret = _g_System_Net_ServicePoint._fp_System_Net_ServicePointManager_i32__get_MaxServicePointIdleTime_0__0(__thrown);
    return ret;
}

void System_Net_ServicePointManager_void__set_MaxServicePointIdleTime_0__1__i32(SG_HNDL_NULLABLE * _Nonnull __thrown, int32_t value) {
    if (!_g_System_Net_ServicePoint._fp_System_Net_ServicePointManager_void__set_MaxServicePointIdleTime_0__1__i32) {
        my_init();
    }
    _g_System_Net_ServicePoint._fp_System_Net_ServicePointManager_void__set_MaxServicePointIdleTime_0__1__i32(__thrown, value);
}

int32_t System_Net_ServicePointManager_i32__get_MaxServicePoints_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown) {
    if (!_g_System_Net_ServicePoint._fp_System_Net_ServicePointManager_i32__get_MaxServicePoints_0__0) {
        my_init();
    }
    int32_t ret = _g_System_Net_ServicePoint._fp_System_Net_ServicePointManager_i32__get_MaxServicePoints_0__0(__thrown);
    return ret;
}

void System_Net_ServicePointManager_void__set_MaxServicePoints_0__1__i32(SG_HNDL_NULLABLE * _Nonnull __thrown, int32_t value) {
    if (!_g_System_Net_ServicePoint._fp_System_Net_ServicePointManager_void__set_MaxServicePoints_0__1__i32) {
        my_init();
    }
    _g_System_Net_ServicePoint._fp_System_Net_ServicePointManager_void__set_MaxServicePoints_0__1__i32(__thrown, value);
}

int32_t System_Net_ServicePointManager_bool__get_ReusePort_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown) {
    if (!_g_System_Net_ServicePoint._fp_System_Net_ServicePointManager_bool__get_ReusePort_0__0) {
        my_init();
    }
    int32_t ret = _g_System_Net_ServicePoint._fp_System_Net_ServicePointManager_bool__get_ReusePort_0__0(__thrown);
    return ret;
}

void System_Net_ServicePointManager_void__set_ReusePort_0__1__bool(SG_HNDL_NULLABLE * _Nonnull __thrown, int32_t value) {
    if (!_g_System_Net_ServicePoint._fp_System_Net_ServicePointManager_void__set_ReusePort_0__1__bool) {
        my_init();
    }
    _g_System_Net_ServicePoint._fp_System_Net_ServicePointManager_void__set_ReusePort_0__1__bool(__thrown, value);
}

int32_t System_Net_ServicePointManager_SecurityProtocolType__get_SecurityProtocol_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown) {
    if (!_g_System_Net_ServicePoint._fp_System_Net_ServicePointManager_SecurityProtocolType__get_SecurityProtocol_0__0) {
        my_init();
    }
    int32_t ret = _g_System_Net_ServicePoint._fp_System_Net_ServicePointManager_SecurityProtocolType__get_SecurityProtocol_0__0(__thrown);
    return ret;
}

void System_Net_ServicePointManager_void__set_SecurityProtocol_0__1__SecurityProtocolType(SG_HNDL_NULLABLE * _Nonnull __thrown, int32_t value) {
    if (!_g_System_Net_ServicePoint._fp_System_Net_ServicePointManager_void__set_SecurityProtocol_0__1__SecurityProtocolType) {
        my_init();
    }
    _g_System_Net_ServicePoint._fp_System_Net_ServicePointManager_void__set_SecurityProtocol_0__1__SecurityProtocolType(__thrown, value);
}

SG_HNDL_NULLABLE System_Net_ServicePointManager_RemoteCertificateValidationCallback__get_ServerCertificateValidationCallback_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown) {
    if (!_g_System_Net_ServicePoint._fp_System_Net_ServicePointManager_RemoteCertificateValidationCallback__get_ServerCertificateValidationCallback_0__0) {
        my_init();
    }
    SG_HNDL_NULLABLE ret = _g_System_Net_ServicePoint._fp_System_Net_ServicePointManager_RemoteCertificateValidationCallback__get_ServerCertificateValidationCallback_0__0(__thrown);
    return ret;
}

void System_Net_ServicePointManager_void__set_ServerCertificateValidationCallback_0__1__RemoteCertificateValidationCallback(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NULLABLE value) {
    if (!_g_System_Net_ServicePoint._fp_System_Net_ServicePointManager_void__set_ServerCertificateValidationCallback_0__1__RemoteCertificateValidationCallback) {
        my_init();
    }
    _g_System_Net_ServicePoint._fp_System_Net_ServicePointManager_void__set_ServerCertificateValidationCallback_0__1__RemoteCertificateValidationCallback(__thrown, value);
}

int32_t System_Net_ServicePointManager_bool__get_UseNagleAlgorithm_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown) {
    if (!_g_System_Net_ServicePoint._fp_System_Net_ServicePointManager_bool__get_UseNagleAlgorithm_0__0) {
        my_init();
    }
    int32_t ret = _g_System_Net_ServicePoint._fp_System_Net_ServicePointManager_bool__get_UseNagleAlgorithm_0__0(__thrown);
    return ret;
}

void System_Net_ServicePointManager_void__set_UseNagleAlgorithm_0__1__bool(SG_HNDL_NULLABLE * _Nonnull __thrown, int32_t value) {
    if (!_g_System_Net_ServicePoint._fp_System_Net_ServicePointManager_void__set_UseNagleAlgorithm_0__1__bool) {
        my_init();
    }
    _g_System_Net_ServicePoint._fp_System_Net_ServicePointManager_void__set_UseNagleAlgorithm_0__1__bool(__thrown, value);
}

SG_HNDL_NONNULL System_Net_ServicePointManager_cast(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __h) {
    if (!_g_System_Net_ServicePoint._fp_System_Net_ServicePointManager_cast) {
        my_init();
    }
    SG_HNDL_NONNULL ret = _g_System_Net_ServicePoint._fp_System_Net_ServicePointManager_cast(__thrown, __h);
    return ret;
}

