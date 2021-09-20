// this file is automatically generated with SourceGear Bridge

#include <stdint.h>

#ifndef INCLUDE_System_Diagnostics_TraceSource
#define INCLUDE_System_Diagnostics_TraceSource

#ifdef __cplusplus
extern "C" {
#endif

typedef const void* _Nonnull SG_HNDL_NONNULL;
typedef const void* _Nullable SG_HNDL_NULLABLE;
typedef const void* _Nonnull TYP;
typedef uint64_t GVAL;

TYP System_Diagnostics_BooleanSwitch_get_type_handle(void);

SG_HNDL_NONNULL System_Diagnostics_BooleanSwitch_ctor_0__2__String_String(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL displayName, SG_HNDL_NULLABLE description);

SG_HNDL_NONNULL System_Diagnostics_BooleanSwitch_ctor_0__3__String_String_String(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL displayName, SG_HNDL_NULLABLE description, SG_HNDL_NONNULL defaultSwitchValue);

int32_t System_Diagnostics_BooleanSwitch_bool__get_Enabled_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

void System_Diagnostics_BooleanSwitch_void__set_Enabled_0__1__bool(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, int32_t value);

SG_HNDL_NONNULL System_Diagnostics_BooleanSwitch_cast(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __h);

TYP System_Diagnostics_CorrelationManager_get_type_handle(void);

void System_Diagnostics_CorrelationManager_void__StartLogicalOperation_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

void System_Diagnostics_CorrelationManager_void__StartLogicalOperation_0__1__Object(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL operationId);

void System_Diagnostics_CorrelationManager_void__StopLogicalOperation_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL System_Diagnostics_CorrelationManager_Guid__get_ActivityId_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

void System_Diagnostics_CorrelationManager_void__set_ActivityId_0__1__Guid(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL value);

SG_HNDL_NONNULL System_Diagnostics_CorrelationManager_Stack__get_LogicalOperationStack_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL System_Diagnostics_CorrelationManager_cast(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __h);

TYP System_Diagnostics_DefaultTraceListener_get_type_handle(void);

SG_HNDL_NONNULL System_Diagnostics_DefaultTraceListener_ctor_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

void System_Diagnostics_DefaultTraceListener_void__Fail_0__1__String(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NULLABLE message);

void System_Diagnostics_DefaultTraceListener_void__Fail_0__2__String_String(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NULLABLE message, SG_HNDL_NULLABLE detailMessage);

void System_Diagnostics_DefaultTraceListener_void__Write_0__1__String(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NULLABLE message);

void System_Diagnostics_DefaultTraceListener_void__WriteLine_0__1__String(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NULLABLE message);

int32_t System_Diagnostics_DefaultTraceListener_bool__get_AssertUiEnabled_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

void System_Diagnostics_DefaultTraceListener_void__set_AssertUiEnabled_0__1__bool(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, int32_t value);

SG_HNDL_NULLABLE System_Diagnostics_DefaultTraceListener_String__get_LogFileName_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

void System_Diagnostics_DefaultTraceListener_void__set_LogFileName_0__1__String(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NULLABLE value);

SG_HNDL_NONNULL System_Diagnostics_DefaultTraceListener_cast(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __h);

TYP System_Diagnostics_EventTypeFilter_get_type_handle(void);

SG_HNDL_NONNULL System_Diagnostics_EventTypeFilter_ctor_0__1__SourceLevels(SG_HNDL_NULLABLE * _Nonnull __thrown, int32_t level);

int32_t System_Diagnostics_EventTypeFilter_bool__ShouldTrace_0__8__TraceEventCache_String_TraceEventType_i32_String_ObjectArray_Object_ObjectArray(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NULLABLE cache, SG_HNDL_NONNULL source, int32_t eventType, int32_t id, SG_HNDL_NULLABLE formatOrMessage, SG_HNDL_NULLABLE args, SG_HNDL_NULLABLE data1, SG_HNDL_NULLABLE data);

int32_t System_Diagnostics_EventTypeFilter_SourceLevels__get_EventType_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

void System_Diagnostics_EventTypeFilter_void__set_EventType_0__1__SourceLevels(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, int32_t value);

SG_HNDL_NONNULL System_Diagnostics_EventTypeFilter_cast(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __h);

TYP System_Diagnostics_SourceFilter_get_type_handle(void);

SG_HNDL_NONNULL System_Diagnostics_SourceFilter_ctor_0__1__String(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL source);

int32_t System_Diagnostics_SourceFilter_bool__ShouldTrace_0__8__TraceEventCache_String_TraceEventType_i32_String_ObjectArray_Object_ObjectArray(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NULLABLE cache, SG_HNDL_NONNULL source, int32_t eventType, int32_t id, SG_HNDL_NULLABLE formatOrMessage, SG_HNDL_NULLABLE args, SG_HNDL_NULLABLE data1, SG_HNDL_NULLABLE data);

SG_HNDL_NONNULL System_Diagnostics_SourceFilter_String__get_Source_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

void System_Diagnostics_SourceFilter_void__set_Source_0__1__String(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL value);

SG_HNDL_NONNULL System_Diagnostics_SourceFilter_cast(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __h);

TYP System_Diagnostics_SourceLevels_get_type_handle(void);

int32_t System_Diagnostics_SourceLevels_get_All(void);

int32_t System_Diagnostics_SourceLevels_get_Off(void);

int32_t System_Diagnostics_SourceLevels_get_Critical(void);

int32_t System_Diagnostics_SourceLevels_get_Error(void);

int32_t System_Diagnostics_SourceLevels_get_Warning(void);

int32_t System_Diagnostics_SourceLevels_get_Information(void);

int32_t System_Diagnostics_SourceLevels_get_Verbose(void);

int32_t System_Diagnostics_SourceLevels_get_ActivityTracing(void);

TYP System_Diagnostics_SourceSwitch_get_type_handle(void);

SG_HNDL_NONNULL System_Diagnostics_SourceSwitch_ctor_0__1__String(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL name);

SG_HNDL_NONNULL System_Diagnostics_SourceSwitch_ctor_0__2__String_String(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL displayName, SG_HNDL_NONNULL defaultSwitchValue);

int32_t System_Diagnostics_SourceSwitch_bool__ShouldTrace_0__1__TraceEventType(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, int32_t eventType);

int32_t System_Diagnostics_SourceSwitch_SourceLevels__get_Level_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

void System_Diagnostics_SourceSwitch_void__set_Level_0__1__SourceLevels(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, int32_t value);

SG_HNDL_NONNULL System_Diagnostics_SourceSwitch_cast(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __h);

TYP System_Diagnostics_Switch_get_type_handle(void);

SG_HNDL_NONNULL System_Diagnostics_Switch_StringDictionary__get_Attributes_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL System_Diagnostics_Switch_String__get_Description_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL System_Diagnostics_Switch_String__get_DisplayName_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL System_Diagnostics_Switch_cast(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __h);

TYP System_Diagnostics_SwitchAttribute_get_type_handle(void);

SG_HNDL_NONNULL System_Diagnostics_SwitchAttribute_ctor_0__2__String_Type(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL switchName, SG_HNDL_NONNULL switchType);

SG_HNDL_NONNULL System_Diagnostics_SwitchAttribute_SwitchAttributeArray__GetAll_0__1__Assembly(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL assembly);

SG_HNDL_NULLABLE System_Diagnostics_SwitchAttribute_String__get_SwitchDescription_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

void System_Diagnostics_SwitchAttribute_void__set_SwitchDescription_0__1__String(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NULLABLE value);

SG_HNDL_NONNULL System_Diagnostics_SwitchAttribute_String__get_SwitchName_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

void System_Diagnostics_SwitchAttribute_void__set_SwitchName_0__1__String(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL value);

SG_HNDL_NONNULL System_Diagnostics_SwitchAttribute_Type__get_SwitchType_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

void System_Diagnostics_SwitchAttribute_void__set_SwitchType_0__1__Type(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL value);

SG_HNDL_NONNULL System_Diagnostics_SwitchAttribute_cast(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __h);

TYP System_Diagnostics_SwitchLevelAttribute_get_type_handle(void);

SG_HNDL_NONNULL System_Diagnostics_SwitchLevelAttribute_ctor_0__1__Type(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL switchLevelType);

SG_HNDL_NONNULL System_Diagnostics_SwitchLevelAttribute_Type__get_SwitchLevelType_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

void System_Diagnostics_SwitchLevelAttribute_void__set_SwitchLevelType_0__1__Type(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL value);

SG_HNDL_NONNULL System_Diagnostics_SwitchLevelAttribute_cast(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __h);

TYP System_Diagnostics_Trace_get_type_handle(void);

void System_Diagnostics_Trace_void__Assert_0__1__bool(SG_HNDL_NULLABLE * _Nonnull __thrown, int32_t condition);

void System_Diagnostics_Trace_void__Assert_0__2__bool_String(SG_HNDL_NULLABLE * _Nonnull __thrown, int32_t condition, SG_HNDL_NULLABLE message);

void System_Diagnostics_Trace_void__Assert_0__3__bool_String_String(SG_HNDL_NULLABLE * _Nonnull __thrown, int32_t condition, SG_HNDL_NULLABLE message, SG_HNDL_NULLABLE detailMessage);

void System_Diagnostics_Trace_void__Close_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

void System_Diagnostics_Trace_void__Fail_0__1__String(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NULLABLE message);

void System_Diagnostics_Trace_void__Fail_0__2__String_String(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NULLABLE message, SG_HNDL_NULLABLE detailMessage);

void System_Diagnostics_Trace_void__Flush_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

void System_Diagnostics_Trace_void__Indent_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

void System_Diagnostics_Trace_void__Refresh_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

void System_Diagnostics_Trace_void__TraceError_0__1__String(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NULLABLE message);

void System_Diagnostics_Trace_void__TraceError_0__2__String_ObjectArray(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL format, SG_HNDL_NULLABLE args);

void System_Diagnostics_Trace_void__TraceInformation_0__1__String(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NULLABLE message);

void System_Diagnostics_Trace_void__TraceInformation_0__2__String_ObjectArray(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL format, SG_HNDL_NULLABLE args);

void System_Diagnostics_Trace_void__TraceWarning_0__1__String(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NULLABLE message);

void System_Diagnostics_Trace_void__TraceWarning_0__2__String_ObjectArray(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL format, SG_HNDL_NULLABLE args);

void System_Diagnostics_Trace_void__Unindent_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

void System_Diagnostics_Trace_void__Write_0__1__Object(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NULLABLE value);

void System_Diagnostics_Trace_void__Write_0__2__Object_String(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NULLABLE value, SG_HNDL_NULLABLE category);

void System_Diagnostics_Trace_void__Write_0__1__String(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NULLABLE message);

void System_Diagnostics_Trace_void__Write_0__2__String_String(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NULLABLE message, SG_HNDL_NULLABLE category);

void System_Diagnostics_Trace_void__WriteIf_0__2__bool_Object(SG_HNDL_NULLABLE * _Nonnull __thrown, int32_t condition, SG_HNDL_NULLABLE value);

void System_Diagnostics_Trace_void__WriteIf_0__3__bool_Object_String(SG_HNDL_NULLABLE * _Nonnull __thrown, int32_t condition, SG_HNDL_NULLABLE value, SG_HNDL_NULLABLE category);

void System_Diagnostics_Trace_void__WriteIf_0__2__bool_String(SG_HNDL_NULLABLE * _Nonnull __thrown, int32_t condition, SG_HNDL_NULLABLE message);

void System_Diagnostics_Trace_void__WriteIf_0__3__bool_String_String(SG_HNDL_NULLABLE * _Nonnull __thrown, int32_t condition, SG_HNDL_NULLABLE message, SG_HNDL_NULLABLE category);

void System_Diagnostics_Trace_void__WriteLine_0__1__Object(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NULLABLE value);

void System_Diagnostics_Trace_void__WriteLine_0__2__Object_String(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NULLABLE value, SG_HNDL_NULLABLE category);

void System_Diagnostics_Trace_void__WriteLine_0__1__String(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NULLABLE message);

void System_Diagnostics_Trace_void__WriteLine_0__2__String_String(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NULLABLE message, SG_HNDL_NULLABLE category);

void System_Diagnostics_Trace_void__WriteLineIf_0__2__bool_Object(SG_HNDL_NULLABLE * _Nonnull __thrown, int32_t condition, SG_HNDL_NULLABLE value);

void System_Diagnostics_Trace_void__WriteLineIf_0__3__bool_Object_String(SG_HNDL_NULLABLE * _Nonnull __thrown, int32_t condition, SG_HNDL_NULLABLE value, SG_HNDL_NULLABLE category);

void System_Diagnostics_Trace_void__WriteLineIf_0__2__bool_String(SG_HNDL_NULLABLE * _Nonnull __thrown, int32_t condition, SG_HNDL_NULLABLE message);

void System_Diagnostics_Trace_void__WriteLineIf_0__3__bool_String_String(SG_HNDL_NULLABLE * _Nonnull __thrown, int32_t condition, SG_HNDL_NULLABLE message, SG_HNDL_NULLABLE category);

int32_t System_Diagnostics_Trace_bool__get_AutoFlush_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

void System_Diagnostics_Trace_void__set_AutoFlush_0__1__bool(SG_HNDL_NULLABLE * _Nonnull __thrown, int32_t value);

SG_HNDL_NONNULL System_Diagnostics_Trace_CorrelationManager__get_CorrelationManager_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

int32_t System_Diagnostics_Trace_i32__get_IndentLevel_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

void System_Diagnostics_Trace_void__set_IndentLevel_0__1__i32(SG_HNDL_NULLABLE * _Nonnull __thrown, int32_t value);

int32_t System_Diagnostics_Trace_i32__get_IndentSize_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

void System_Diagnostics_Trace_void__set_IndentSize_0__1__i32(SG_HNDL_NULLABLE * _Nonnull __thrown, int32_t value);

SG_HNDL_NONNULL System_Diagnostics_Trace_TraceListenerCollection__get_Listeners_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

int32_t System_Diagnostics_Trace_bool__get_UseGlobalLock_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

void System_Diagnostics_Trace_void__set_UseGlobalLock_0__1__bool(SG_HNDL_NULLABLE * _Nonnull __thrown, int32_t value);

SG_HNDL_NONNULL System_Diagnostics_Trace_cast(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __h);

TYP System_Diagnostics_TraceEventCache_get_type_handle(void);

SG_HNDL_NONNULL System_Diagnostics_TraceEventCache_ctor_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Diagnostics_TraceEventCache_String__get_Callstack_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL System_Diagnostics_TraceEventCache_DateTime__get_DateTime_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL System_Diagnostics_TraceEventCache_Stack__get_LogicalOperationStack_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

int32_t System_Diagnostics_TraceEventCache_i32__get_ProcessId_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL System_Diagnostics_TraceEventCache_String__get_ThreadId_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

int64_t System_Diagnostics_TraceEventCache_i64__get_Timestamp_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL System_Diagnostics_TraceEventCache_cast(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __h);

TYP System_Diagnostics_TraceEventType_get_type_handle(void);

int32_t System_Diagnostics_TraceEventType_get_Critical(void);

int32_t System_Diagnostics_TraceEventType_get_Error(void);

int32_t System_Diagnostics_TraceEventType_get_Warning(void);

int32_t System_Diagnostics_TraceEventType_get_Information(void);

int32_t System_Diagnostics_TraceEventType_get_Verbose(void);

int32_t System_Diagnostics_TraceEventType_get_Start(void);

int32_t System_Diagnostics_TraceEventType_get_Stop(void);

int32_t System_Diagnostics_TraceEventType_get_Suspend(void);

int32_t System_Diagnostics_TraceEventType_get_Resume(void);

int32_t System_Diagnostics_TraceEventType_get_Transfer(void);

TYP System_Diagnostics_TraceFilter_get_type_handle(void);

int32_t System_Diagnostics_TraceFilter_bool__ShouldTrace_0__8__TraceEventCache_String_TraceEventType_i32_String_ObjectArray_Object_ObjectArray(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NULLABLE cache, SG_HNDL_NONNULL source, int32_t eventType, int32_t id, SG_HNDL_NULLABLE formatOrMessage, SG_HNDL_NULLABLE args, SG_HNDL_NULLABLE data1, SG_HNDL_NULLABLE data);

SG_HNDL_NONNULL System_Diagnostics_TraceFilter_cast(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __h);

TYP System_Diagnostics_TraceLevel_get_type_handle(void);

int32_t System_Diagnostics_TraceLevel_get_Off(void);

int32_t System_Diagnostics_TraceLevel_get_Error(void);

int32_t System_Diagnostics_TraceLevel_get_Warning(void);

int32_t System_Diagnostics_TraceLevel_get_Info(void);

int32_t System_Diagnostics_TraceLevel_get_Verbose(void);

TYP System_Diagnostics_TraceListener_get_type_handle(void);

void System_Diagnostics_TraceListener_void__Close_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

void System_Diagnostics_TraceListener_void__Dispose_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

void System_Diagnostics_TraceListener_void__Fail_0__1__String(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NULLABLE message);

void System_Diagnostics_TraceListener_void__Fail_0__2__String_String(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NULLABLE message, SG_HNDL_NULLABLE detailMessage);

void System_Diagnostics_TraceListener_void__Flush_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

void System_Diagnostics_TraceListener_void__TraceData_0__5__TraceEventCache_String_TraceEventType_i32_Object(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NULLABLE eventCache, SG_HNDL_NONNULL source, int32_t eventType, int32_t id, SG_HNDL_NULLABLE data);

void System_Diagnostics_TraceListener_void__TraceData_0__5__TraceEventCache_String_TraceEventType_i32_ObjectArray(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NULLABLE eventCache, SG_HNDL_NONNULL source, int32_t eventType, int32_t id, SG_HNDL_NULLABLE data);

void System_Diagnostics_TraceListener_void__TraceEvent_0__4__TraceEventCache_String_TraceEventType_i32(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NULLABLE eventCache, SG_HNDL_NONNULL source, int32_t eventType, int32_t id);

void System_Diagnostics_TraceListener_void__TraceEvent_0__5__TraceEventCache_String_TraceEventType_i32_String(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NULLABLE eventCache, SG_HNDL_NONNULL source, int32_t eventType, int32_t id, SG_HNDL_NULLABLE message);

void System_Diagnostics_TraceListener_void__TraceEvent_0__6__TraceEventCache_String_TraceEventType_i32_String_ObjectArray(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NULLABLE eventCache, SG_HNDL_NONNULL source, int32_t eventType, int32_t id, SG_HNDL_NULLABLE format, SG_HNDL_NULLABLE args);

void System_Diagnostics_TraceListener_void__TraceTransfer_0__5__TraceEventCache_String_i32_String_Guid(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NULLABLE eventCache, SG_HNDL_NONNULL source, int32_t id, SG_HNDL_NULLABLE message, SG_HNDL_NONNULL relatedActivityId);

void System_Diagnostics_TraceListener_void__Write_0__1__Object(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NULLABLE o);

void System_Diagnostics_TraceListener_void__Write_0__2__Object_String(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NULLABLE o, SG_HNDL_NULLABLE category);

void System_Diagnostics_TraceListener_void__Write_0__1__String(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NULLABLE message);

void System_Diagnostics_TraceListener_void__Write_0__2__String_String(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NULLABLE message, SG_HNDL_NULLABLE category);

void System_Diagnostics_TraceListener_void__WriteLine_0__1__Object(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NULLABLE o);

void System_Diagnostics_TraceListener_void__WriteLine_0__2__Object_String(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NULLABLE o, SG_HNDL_NULLABLE category);

void System_Diagnostics_TraceListener_void__WriteLine_0__1__String(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NULLABLE message);

void System_Diagnostics_TraceListener_void__WriteLine_0__2__String_String(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NULLABLE message, SG_HNDL_NULLABLE category);

SG_HNDL_NONNULL System_Diagnostics_TraceListener_StringDictionary__get_Attributes_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NULLABLE System_Diagnostics_TraceListener_TraceFilter__get_Filter_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

void System_Diagnostics_TraceListener_void__set_Filter_0__1__TraceFilter(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NULLABLE value);

int32_t System_Diagnostics_TraceListener_i32__get_IndentLevel_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

void System_Diagnostics_TraceListener_void__set_IndentLevel_0__1__i32(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, int32_t value);

int32_t System_Diagnostics_TraceListener_i32__get_IndentSize_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

void System_Diagnostics_TraceListener_void__set_IndentSize_0__1__i32(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, int32_t value);

int32_t System_Diagnostics_TraceListener_bool__get_IsThreadSafe_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL System_Diagnostics_TraceListener_String__get_Name_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

void System_Diagnostics_TraceListener_void__set_Name_0__1__String(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL value);

int32_t System_Diagnostics_TraceListener_TraceOptions__get_TraceOutputOptions_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

void System_Diagnostics_TraceListener_void__set_TraceOutputOptions_0__1__TraceOptions(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, int32_t value);

SG_HNDL_NONNULL System_Diagnostics_TraceListener_cast(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __h);

TYP System_Diagnostics_TraceListenerCollection_get_type_handle(void);

int32_t System_Diagnostics_TraceListenerCollection_i32__Add_0__1__TraceListener(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL listener);

void System_Diagnostics_TraceListenerCollection_void__AddRange_0__1__TraceListenerCollection(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL value);

void System_Diagnostics_TraceListenerCollection_void__AddRange_0__1__TraceListenerArray(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL value);

void System_Diagnostics_TraceListenerCollection_void__Clear_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

int32_t System_Diagnostics_TraceListenerCollection_bool__Contains_0__1__TraceListener(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NULLABLE listener);

void System_Diagnostics_TraceListenerCollection_void__CopyTo_0__2__TraceListenerArray_i32(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL listeners, int32_t index);

SG_HNDL_NONNULL System_Diagnostics_TraceListenerCollection_IEnumerator__GetEnumerator_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

int32_t System_Diagnostics_TraceListenerCollection_i32__IndexOf_0__1__TraceListener(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NULLABLE listener);

void System_Diagnostics_TraceListenerCollection_void__Insert_0__2__i32_TraceListener(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, int32_t index, SG_HNDL_NONNULL listener);

void System_Diagnostics_TraceListenerCollection_void__Remove_0__1__TraceListener(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NULLABLE listener);

void System_Diagnostics_TraceListenerCollection_void__Remove_0__1__String(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL name);

void System_Diagnostics_TraceListenerCollection_void__RemoveAt_0__1__i32(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, int32_t index);

int32_t System_Diagnostics_TraceListenerCollection_i32__get_Count_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL System_Diagnostics_TraceListenerCollection_TraceListener__get_Item_0__1__i32(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, int32_t i);

void System_Diagnostics_TraceListenerCollection_void__set_Item_0__2__i32_TraceListener(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, int32_t i, SG_HNDL_NONNULL value);

SG_HNDL_NULLABLE System_Diagnostics_TraceListenerCollection_TraceListener__get_Item_0__1__String(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL name);

SG_HNDL_NONNULL System_Diagnostics_TraceListenerCollection_cast(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __h);

TYP System_Diagnostics_TraceOptions_get_type_handle(void);

int32_t System_Diagnostics_TraceOptions_get_None(void);

int32_t System_Diagnostics_TraceOptions_get_LogicalOperationStack(void);

int32_t System_Diagnostics_TraceOptions_get_DateTime(void);

int32_t System_Diagnostics_TraceOptions_get_Timestamp(void);

int32_t System_Diagnostics_TraceOptions_get_ProcessId(void);

int32_t System_Diagnostics_TraceOptions_get_ThreadId(void);

int32_t System_Diagnostics_TraceOptions_get_Callstack(void);

TYP System_Diagnostics_TraceSource_get_type_handle(void);

SG_HNDL_NONNULL System_Diagnostics_TraceSource_ctor_0__1__String(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL name);

SG_HNDL_NONNULL System_Diagnostics_TraceSource_ctor_0__2__String_SourceLevels(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL name, int32_t defaultLevel);

void System_Diagnostics_TraceSource_void__Close_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

void System_Diagnostics_TraceSource_void__Flush_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

void System_Diagnostics_TraceSource_void__TraceData_0__3__TraceEventType_i32_Object(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, int32_t eventType, int32_t id, SG_HNDL_NULLABLE data);

void System_Diagnostics_TraceSource_void__TraceData_0__3__TraceEventType_i32_ObjectArray(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, int32_t eventType, int32_t id, SG_HNDL_NULLABLE data);

void System_Diagnostics_TraceSource_void__TraceEvent_0__2__TraceEventType_i32(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, int32_t eventType, int32_t id);

void System_Diagnostics_TraceSource_void__TraceEvent_0__3__TraceEventType_i32_String(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, int32_t eventType, int32_t id, SG_HNDL_NULLABLE message);

void System_Diagnostics_TraceSource_void__TraceEvent_0__4__TraceEventType_i32_String_ObjectArray(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, int32_t eventType, int32_t id, SG_HNDL_NULLABLE format, SG_HNDL_NULLABLE args);

void System_Diagnostics_TraceSource_void__TraceInformation_0__1__String(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NULLABLE message);

void System_Diagnostics_TraceSource_void__TraceInformation_0__2__String_ObjectArray(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NULLABLE format, SG_HNDL_NULLABLE args);

void System_Diagnostics_TraceSource_void__TraceTransfer_0__3__i32_String_Guid(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, int32_t id, SG_HNDL_NULLABLE message, SG_HNDL_NONNULL relatedActivityId);

SG_HNDL_NONNULL System_Diagnostics_TraceSource_StringDictionary__get_Attributes_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL System_Diagnostics_TraceSource_TraceListenerCollection__get_Listeners_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL System_Diagnostics_TraceSource_String__get_Name_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL System_Diagnostics_TraceSource_SourceSwitch__get_Switch_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

void System_Diagnostics_TraceSource_void__set_Switch_0__1__SourceSwitch(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL value);

SG_HNDL_NONNULL System_Diagnostics_TraceSource_cast(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __h);

TYP System_Diagnostics_TraceSwitch_get_type_handle(void);

SG_HNDL_NONNULL System_Diagnostics_TraceSwitch_ctor_0__2__String_String(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL displayName, SG_HNDL_NULLABLE description);

SG_HNDL_NONNULL System_Diagnostics_TraceSwitch_ctor_0__3__String_String_String(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL displayName, SG_HNDL_NULLABLE description, SG_HNDL_NONNULL defaultSwitchValue);

int32_t System_Diagnostics_TraceSwitch_TraceLevel__get_Level_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

void System_Diagnostics_TraceSwitch_void__set_Level_0__1__TraceLevel(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, int32_t value);

int32_t System_Diagnostics_TraceSwitch_bool__get_TraceError_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

int32_t System_Diagnostics_TraceSwitch_bool__get_TraceInfo_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

int32_t System_Diagnostics_TraceSwitch_bool__get_TraceVerbose_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

int32_t System_Diagnostics_TraceSwitch_bool__get_TraceWarning_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL System_Diagnostics_TraceSwitch_cast(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __h);


#ifdef __cplusplus
}
#endif

#endif // INCLUDE_System_Diagnostics_TraceSource

