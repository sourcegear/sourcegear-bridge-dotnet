// this file is automatically generated with SourceGear Bridge

#include <stdint.h>

#ifndef INCLUDE_Microsoft_Win32_Registry
#define INCLUDE_Microsoft_Win32_Registry

#ifdef __cplusplus
extern "C" {
#endif

typedef const void* _Nonnull SG_HNDL_NONNULL;
typedef const void* _Nullable SG_HNDL_NULLABLE;
typedef const void* _Nonnull TYP;
typedef uint64_t GVAL;

SG_HNDL_NONNULL Microsoft_Win32_Registry_get_ClassesRoot(void);

void Microsoft_Win32_Registry_set_ClassesRoot(SG_HNDL_NONNULL __v);

SG_HNDL_NONNULL Microsoft_Win32_Registry_get_CurrentConfig(void);

void Microsoft_Win32_Registry_set_CurrentConfig(SG_HNDL_NONNULL __v);

SG_HNDL_NONNULL Microsoft_Win32_Registry_get_CurrentUser(void);

void Microsoft_Win32_Registry_set_CurrentUser(SG_HNDL_NONNULL __v);

SG_HNDL_NONNULL Microsoft_Win32_Registry_get_LocalMachine(void);

void Microsoft_Win32_Registry_set_LocalMachine(SG_HNDL_NONNULL __v);

SG_HNDL_NONNULL Microsoft_Win32_Registry_get_PerformanceData(void);

void Microsoft_Win32_Registry_set_PerformanceData(SG_HNDL_NONNULL __v);

SG_HNDL_NONNULL Microsoft_Win32_Registry_get_Users(void);

void Microsoft_Win32_Registry_set_Users(SG_HNDL_NONNULL __v);

SG_HNDL_NULLABLE Microsoft_Win32_Registry_Object__GetValue_0__3__String_String_Object(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL keyName, SG_HNDL_NULLABLE valueName, SG_HNDL_NULLABLE defaultValue);

void Microsoft_Win32_Registry_void__SetValue_0__3__String_String_Object(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL keyName, SG_HNDL_NULLABLE valueName, SG_HNDL_NONNULL value);

void Microsoft_Win32_Registry_void__SetValue_0__4__String_String_Object_RegistryValueKind(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL keyName, SG_HNDL_NULLABLE valueName, SG_HNDL_NONNULL value, int32_t valueKind);

TYP Microsoft_Win32_RegistryHive_get_type_handle(void);

int32_t Microsoft_Win32_RegistryHive_get_ClassesRoot(void);

int32_t Microsoft_Win32_RegistryHive_get_CurrentUser(void);

int32_t Microsoft_Win32_RegistryHive_get_LocalMachine(void);

int32_t Microsoft_Win32_RegistryHive_get_Users(void);

int32_t Microsoft_Win32_RegistryHive_get_PerformanceData(void);

int32_t Microsoft_Win32_RegistryHive_get_CurrentConfig(void);

TYP Microsoft_Win32_RegistryKey_get_type_handle(void);

void Microsoft_Win32_RegistryKey_void__Close_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL Microsoft_Win32_RegistryKey_RegistryKey__CreateSubKey_0__1__String(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL subkey);

SG_HNDL_NONNULL Microsoft_Win32_RegistryKey_RegistryKey__CreateSubKey_0__2__String_RegistryKeyPermissionCheck(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL subkey, int32_t permissionCheck);

SG_HNDL_NONNULL Microsoft_Win32_RegistryKey_RegistryKey__CreateSubKey_0__3__String_RegistryKeyPermissionCheck_RegistryOptions(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL subkey, int32_t permissionCheck, int32_t registryOptions);

SG_HNDL_NONNULL Microsoft_Win32_RegistryKey_RegistryKey__CreateSubKey_0__4__String_RegistryKeyPermissionCheck_RegistryOptions_RegistrySecurity(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL subkey, int32_t permissionCheck, int32_t registryOptions, SG_HNDL_NULLABLE registrySecurity);

SG_HNDL_NONNULL Microsoft_Win32_RegistryKey_RegistryKey__CreateSubKey_0__3__String_RegistryKeyPermissionCheck_RegistrySecurity(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL subkey, int32_t permissionCheck, SG_HNDL_NULLABLE registrySecurity);

SG_HNDL_NONNULL Microsoft_Win32_RegistryKey_RegistryKey__CreateSubKey_0__2__String_bool(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL subkey, int32_t writable);

SG_HNDL_NONNULL Microsoft_Win32_RegistryKey_RegistryKey__CreateSubKey_0__3__String_bool_RegistryOptions(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL subkey, int32_t writable, int32_t options);

void Microsoft_Win32_RegistryKey_void__DeleteSubKey_0__1__String(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL subkey);

void Microsoft_Win32_RegistryKey_void__DeleteSubKey_0__2__String_bool(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL subkey, int32_t throwOnMissingSubKey);

void Microsoft_Win32_RegistryKey_void__DeleteSubKeyTree_0__1__String(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL subkey);

void Microsoft_Win32_RegistryKey_void__DeleteSubKeyTree_0__2__String_bool(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL subkey, int32_t throwOnMissingSubKey);

void Microsoft_Win32_RegistryKey_void__DeleteValue_0__1__String(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL name);

void Microsoft_Win32_RegistryKey_void__DeleteValue_0__2__String_bool(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL name, int32_t throwOnMissingValue);

void Microsoft_Win32_RegistryKey_void__Dispose_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

void Microsoft_Win32_RegistryKey_void__Flush_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL Microsoft_Win32_RegistryKey_RegistryKey__FromHandle_0__1__SafeRegistryHandle(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL handle);

SG_HNDL_NONNULL Microsoft_Win32_RegistryKey_RegistryKey__FromHandle_0__2__SafeRegistryHandle_RegistryView(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL handle, int32_t view);

SG_HNDL_NONNULL Microsoft_Win32_RegistryKey_RegistrySecurity__GetAccessControl_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL Microsoft_Win32_RegistryKey_RegistrySecurity__GetAccessControl_0__1__AccessControlSections(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, int32_t includeSections);

SG_HNDL_NONNULL Microsoft_Win32_RegistryKey_StringArray__GetSubKeyNames_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NULLABLE Microsoft_Win32_RegistryKey_Object__GetValue_0__1__String(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NULLABLE name);

SG_HNDL_NULLABLE Microsoft_Win32_RegistryKey_Object__GetValue_0__2__String_Object(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NULLABLE name, SG_HNDL_NULLABLE defaultValue);

SG_HNDL_NULLABLE Microsoft_Win32_RegistryKey_Object__GetValue_0__3__String_Object_RegistryValueOptions(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NULLABLE name, SG_HNDL_NULLABLE defaultValue, int32_t options);

int32_t Microsoft_Win32_RegistryKey_RegistryValueKind__GetValueKind_0__1__String(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NULLABLE name);

SG_HNDL_NONNULL Microsoft_Win32_RegistryKey_StringArray__GetValueNames_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL Microsoft_Win32_RegistryKey_RegistryKey__OpenBaseKey_0__2__RegistryHive_RegistryView(SG_HNDL_NULLABLE * _Nonnull __thrown, int32_t hKey, int32_t view);

SG_HNDL_NONNULL Microsoft_Win32_RegistryKey_RegistryKey__OpenRemoteBaseKey_0__2__RegistryHive_String(SG_HNDL_NULLABLE * _Nonnull __thrown, int32_t hKey, SG_HNDL_NONNULL machineName);

SG_HNDL_NONNULL Microsoft_Win32_RegistryKey_RegistryKey__OpenRemoteBaseKey_0__3__RegistryHive_String_RegistryView(SG_HNDL_NULLABLE * _Nonnull __thrown, int32_t hKey, SG_HNDL_NONNULL machineName, int32_t view);

SG_HNDL_NULLABLE Microsoft_Win32_RegistryKey_RegistryKey__OpenSubKey_0__1__String(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL name);

SG_HNDL_NULLABLE Microsoft_Win32_RegistryKey_RegistryKey__OpenSubKey_0__2__String_RegistryKeyPermissionCheck(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL name, int32_t permissionCheck);

SG_HNDL_NULLABLE Microsoft_Win32_RegistryKey_RegistryKey__OpenSubKey_0__3__String_RegistryKeyPermissionCheck_RegistryRights(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL name, int32_t permissionCheck, int32_t rights);

SG_HNDL_NULLABLE Microsoft_Win32_RegistryKey_RegistryKey__OpenSubKey_0__2__String_bool(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL name, int32_t writable);

SG_HNDL_NULLABLE Microsoft_Win32_RegistryKey_RegistryKey__OpenSubKey_0__2__String_RegistryRights(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL name, int32_t rights);

void Microsoft_Win32_RegistryKey_void__SetAccessControl_0__1__RegistrySecurity(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL registrySecurity);

void Microsoft_Win32_RegistryKey_void__SetValue_0__2__String_Object(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NULLABLE name, SG_HNDL_NONNULL value);

void Microsoft_Win32_RegistryKey_void__SetValue_0__3__String_Object_RegistryValueKind(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NULLABLE name, SG_HNDL_NONNULL value, int32_t valueKind);

SG_HNDL_NONNULL Microsoft_Win32_RegistryKey_String__ToString_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL Microsoft_Win32_RegistryKey_SafeRegistryHandle__get_Handle_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL Microsoft_Win32_RegistryKey_String__get_Name_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

int32_t Microsoft_Win32_RegistryKey_i32__get_SubKeyCount_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

int32_t Microsoft_Win32_RegistryKey_i32__get_ValueCount_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

int32_t Microsoft_Win32_RegistryKey_RegistryView__get_View_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL Microsoft_Win32_RegistryKey_cast(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __h);

TYP Microsoft_Win32_RegistryKeyPermissionCheck_get_type_handle(void);

int32_t Microsoft_Win32_RegistryKeyPermissionCheck_get_Default(void);

int32_t Microsoft_Win32_RegistryKeyPermissionCheck_get_ReadSubTree(void);

int32_t Microsoft_Win32_RegistryKeyPermissionCheck_get_ReadWriteSubTree(void);

TYP Microsoft_Win32_RegistryOptions_get_type_handle(void);

int32_t Microsoft_Win32_RegistryOptions_get_None(void);

int32_t Microsoft_Win32_RegistryOptions_get_Volatile(void);

TYP Microsoft_Win32_RegistryValueKind_get_type_handle(void);

int32_t Microsoft_Win32_RegistryValueKind_get_None(void);

int32_t Microsoft_Win32_RegistryValueKind_get_Unknown(void);

int32_t Microsoft_Win32_RegistryValueKind_get_String(void);

int32_t Microsoft_Win32_RegistryValueKind_get_ExpandString(void);

int32_t Microsoft_Win32_RegistryValueKind_get_Binary(void);

int32_t Microsoft_Win32_RegistryValueKind_get_DWord(void);

int32_t Microsoft_Win32_RegistryValueKind_get_MultiString(void);

int32_t Microsoft_Win32_RegistryValueKind_get_QWord(void);

TYP Microsoft_Win32_RegistryValueOptions_get_type_handle(void);

int32_t Microsoft_Win32_RegistryValueOptions_get_None(void);

int32_t Microsoft_Win32_RegistryValueOptions_get_DoNotExpandEnvironmentNames(void);

TYP Microsoft_Win32_RegistryView_get_type_handle(void);

int32_t Microsoft_Win32_RegistryView_get_Default(void);

int32_t Microsoft_Win32_RegistryView_get_Registry64(void);

int32_t Microsoft_Win32_RegistryView_get_Registry32(void);

TYP Microsoft_Win32_SafeHandles_SafeRegistryHandle_get_type_handle(void);

SG_HNDL_NONNULL Microsoft_Win32_SafeHandles_SafeRegistryHandle_ctor_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL Microsoft_Win32_SafeHandles_SafeRegistryHandle_ctor_0__2__IntPtr_bool(SG_HNDL_NULLABLE * _Nonnull __thrown, intptr_t preexistingHandle, int32_t ownsHandle);

SG_HNDL_NONNULL Microsoft_Win32_SafeHandles_SafeRegistryHandle_cast(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __h);

TYP System_Security_AccessControl_RegistryAccessRule_get_type_handle(void);

SG_HNDL_NONNULL System_Security_AccessControl_RegistryAccessRule_ctor_0__3__IdentityReference_RegistryRights_AccessControlType(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL identity, int32_t registryRights, int32_t type);

SG_HNDL_NONNULL System_Security_AccessControl_RegistryAccessRule_ctor_0__5__IdentityReference_RegistryRights_InheritanceFlags_PropagationFlags_AccessControlType(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL identity, int32_t registryRights, int32_t inheritanceFlags, int32_t propagationFlags, int32_t type);

SG_HNDL_NONNULL System_Security_AccessControl_RegistryAccessRule_ctor_0__3__String_RegistryRights_AccessControlType(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL identity, int32_t registryRights, int32_t type);

SG_HNDL_NONNULL System_Security_AccessControl_RegistryAccessRule_ctor_0__5__String_RegistryRights_InheritanceFlags_PropagationFlags_AccessControlType(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL identity, int32_t registryRights, int32_t inheritanceFlags, int32_t propagationFlags, int32_t type);

int32_t System_Security_AccessControl_RegistryAccessRule_RegistryRights__get_RegistryRights_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL System_Security_AccessControl_RegistryAccessRule_cast(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __h);

TYP System_Security_AccessControl_RegistryAuditRule_get_type_handle(void);

SG_HNDL_NONNULL System_Security_AccessControl_RegistryAuditRule_ctor_0__5__IdentityReference_RegistryRights_InheritanceFlags_PropagationFlags_AuditFlags(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL identity, int32_t registryRights, int32_t inheritanceFlags, int32_t propagationFlags, int32_t flags);

SG_HNDL_NONNULL System_Security_AccessControl_RegistryAuditRule_ctor_0__5__String_RegistryRights_InheritanceFlags_PropagationFlags_AuditFlags(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL identity, int32_t registryRights, int32_t inheritanceFlags, int32_t propagationFlags, int32_t flags);

int32_t System_Security_AccessControl_RegistryAuditRule_RegistryRights__get_RegistryRights_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL System_Security_AccessControl_RegistryAuditRule_cast(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __h);

TYP System_Security_AccessControl_RegistryRights_get_type_handle(void);

int32_t System_Security_AccessControl_RegistryRights_get_QueryValues(void);

int32_t System_Security_AccessControl_RegistryRights_get_SetValue(void);

int32_t System_Security_AccessControl_RegistryRights_get_CreateSubKey(void);

int32_t System_Security_AccessControl_RegistryRights_get_EnumerateSubKeys(void);

int32_t System_Security_AccessControl_RegistryRights_get_Notify(void);

int32_t System_Security_AccessControl_RegistryRights_get_CreateLink(void);

int32_t System_Security_AccessControl_RegistryRights_get_Delete(void);

int32_t System_Security_AccessControl_RegistryRights_get_ReadPermissions(void);

int32_t System_Security_AccessControl_RegistryRights_get_WriteKey(void);

int32_t System_Security_AccessControl_RegistryRights_get_ExecuteKey(void);

int32_t System_Security_AccessControl_RegistryRights_get_ReadKey(void);

int32_t System_Security_AccessControl_RegistryRights_get_ChangePermissions(void);

int32_t System_Security_AccessControl_RegistryRights_get_TakeOwnership(void);

int32_t System_Security_AccessControl_RegistryRights_get_FullControl(void);

TYP System_Security_AccessControl_RegistrySecurity_get_type_handle(void);

SG_HNDL_NONNULL System_Security_AccessControl_RegistrySecurity_ctor_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Security_AccessControl_RegistrySecurity_AccessRule__AccessRuleFactory_0__6__IdentityReference_i32_bool_InheritanceFlags_PropagationFlags_AccessControlType(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL identityReference, int32_t accessMask, int32_t isInherited, int32_t inheritanceFlags, int32_t propagationFlags, int32_t type);

void System_Security_AccessControl_RegistrySecurity_void__AddAccessRule_0__1__RegistryAccessRule(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL rule);

void System_Security_AccessControl_RegistrySecurity_void__AddAuditRule_0__1__RegistryAuditRule(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL rule);

SG_HNDL_NONNULL System_Security_AccessControl_RegistrySecurity_AuditRule__AuditRuleFactory_0__6__IdentityReference_i32_bool_InheritanceFlags_PropagationFlags_AuditFlags(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL identityReference, int32_t accessMask, int32_t isInherited, int32_t inheritanceFlags, int32_t propagationFlags, int32_t flags);

int32_t System_Security_AccessControl_RegistrySecurity_bool__RemoveAccessRule_0__1__RegistryAccessRule(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL rule);

void System_Security_AccessControl_RegistrySecurity_void__RemoveAccessRuleAll_0__1__RegistryAccessRule(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL rule);

void System_Security_AccessControl_RegistrySecurity_void__RemoveAccessRuleSpecific_0__1__RegistryAccessRule(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL rule);

int32_t System_Security_AccessControl_RegistrySecurity_bool__RemoveAuditRule_0__1__RegistryAuditRule(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL rule);

void System_Security_AccessControl_RegistrySecurity_void__RemoveAuditRuleAll_0__1__RegistryAuditRule(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL rule);

void System_Security_AccessControl_RegistrySecurity_void__RemoveAuditRuleSpecific_0__1__RegistryAuditRule(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL rule);

void System_Security_AccessControl_RegistrySecurity_void__ResetAccessRule_0__1__RegistryAccessRule(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL rule);

void System_Security_AccessControl_RegistrySecurity_void__SetAccessRule_0__1__RegistryAccessRule(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL rule);

void System_Security_AccessControl_RegistrySecurity_void__SetAuditRule_0__1__RegistryAuditRule(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL rule);

SG_HNDL_NONNULL System_Security_AccessControl_RegistrySecurity_Type__get_AccessRightType_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL System_Security_AccessControl_RegistrySecurity_Type__get_AccessRuleType_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL System_Security_AccessControl_RegistrySecurity_Type__get_AuditRuleType_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL System_Security_AccessControl_RegistrySecurity_cast(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __h);


#ifdef __cplusplus
}
#endif

#endif // INCLUDE_Microsoft_Win32_Registry

