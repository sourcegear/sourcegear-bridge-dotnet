// this file is automatically generated with SourceGear Bridge

#include <stdint.h>

#ifndef INCLUDE_System_IO_Pipes
#define INCLUDE_System_IO_Pipes

#ifdef __cplusplus
extern "C" {
#endif

typedef const void* _Nonnull SG_HNDL_NONNULL;
typedef const void* _Nullable SG_HNDL_NULLABLE;
typedef const void* _Nonnull TYP;
typedef uint64_t GVAL;

TYP Microsoft_Win32_SafeHandles_SafePipeHandle_get_type_handle(void);

SG_HNDL_NONNULL Microsoft_Win32_SafeHandles_SafePipeHandle_ctor_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL Microsoft_Win32_SafeHandles_SafePipeHandle_ctor_0__2__IntPtr_bool(SG_HNDL_NULLABLE * _Nonnull __thrown, intptr_t preexistingHandle, int32_t ownsHandle);

int32_t Microsoft_Win32_SafeHandles_SafePipeHandle_bool__get_IsInvalid_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL Microsoft_Win32_SafeHandles_SafePipeHandle_cast(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __h);

TYP System_IO_Pipes_AnonymousPipeClientStream_get_type_handle(void);

SG_HNDL_NONNULL System_IO_Pipes_AnonymousPipeClientStream_ctor_0__2__PipeDirection_SafePipeHandle(SG_HNDL_NULLABLE * _Nonnull __thrown, int32_t direction, SG_HNDL_NONNULL safePipeHandle);

SG_HNDL_NONNULL System_IO_Pipes_AnonymousPipeClientStream_ctor_0__2__PipeDirection_String(SG_HNDL_NULLABLE * _Nonnull __thrown, int32_t direction, SG_HNDL_NONNULL pipeHandleAsString);

SG_HNDL_NONNULL System_IO_Pipes_AnonymousPipeClientStream_ctor_0__1__String(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL pipeHandleAsString);

void System_IO_Pipes_AnonymousPipeClientStream_void__set_ReadMode_0__1__PipeTransmissionMode(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, int32_t value);

int32_t System_IO_Pipes_AnonymousPipeClientStream_PipeTransmissionMode__get_TransmissionMode_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL System_IO_Pipes_AnonymousPipeClientStream_cast(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __h);

TYP System_IO_Pipes_AnonymousPipeServerStream_get_type_handle(void);

SG_HNDL_NONNULL System_IO_Pipes_AnonymousPipeServerStream_ctor_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_IO_Pipes_AnonymousPipeServerStream_ctor_0__1__PipeDirection(SG_HNDL_NULLABLE * _Nonnull __thrown, int32_t direction);

SG_HNDL_NONNULL System_IO_Pipes_AnonymousPipeServerStream_ctor_0__3__PipeDirection_SafePipeHandle_SafePipeHandle(SG_HNDL_NULLABLE * _Nonnull __thrown, int32_t direction, SG_HNDL_NONNULL serverSafePipeHandle, SG_HNDL_NONNULL clientSafePipeHandle);

SG_HNDL_NONNULL System_IO_Pipes_AnonymousPipeServerStream_ctor_0__2__PipeDirection_HandleInheritability(SG_HNDL_NULLABLE * _Nonnull __thrown, int32_t direction, int32_t inheritability);

SG_HNDL_NONNULL System_IO_Pipes_AnonymousPipeServerStream_ctor_0__3__PipeDirection_HandleInheritability_i32(SG_HNDL_NULLABLE * _Nonnull __thrown, int32_t direction, int32_t inheritability, int32_t bufferSize);

void System_IO_Pipes_AnonymousPipeServerStream_void__DisposeLocalCopyOfClientHandle_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL System_IO_Pipes_AnonymousPipeServerStream_String__GetClientHandleAsString_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL System_IO_Pipes_AnonymousPipeServerStream_SafePipeHandle__get_ClientSafePipeHandle_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

void System_IO_Pipes_AnonymousPipeServerStream_void__set_ReadMode_0__1__PipeTransmissionMode(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, int32_t value);

int32_t System_IO_Pipes_AnonymousPipeServerStream_PipeTransmissionMode__get_TransmissionMode_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL System_IO_Pipes_AnonymousPipeServerStream_cast(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __h);

TYP System_IO_Pipes_NamedPipeClientStream_get_type_handle(void);

SG_HNDL_NONNULL System_IO_Pipes_NamedPipeClientStream_ctor_0__4__PipeDirection_bool_bool_SafePipeHandle(SG_HNDL_NULLABLE * _Nonnull __thrown, int32_t direction, int32_t isAsync, int32_t isConnected, SG_HNDL_NONNULL safePipeHandle);

SG_HNDL_NONNULL System_IO_Pipes_NamedPipeClientStream_ctor_0__1__String(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL pipeName);

SG_HNDL_NONNULL System_IO_Pipes_NamedPipeClientStream_ctor_0__2__String_String(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL serverName, SG_HNDL_NONNULL pipeName);

SG_HNDL_NONNULL System_IO_Pipes_NamedPipeClientStream_ctor_0__3__String_String_PipeDirection(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL serverName, SG_HNDL_NONNULL pipeName, int32_t direction);

SG_HNDL_NONNULL System_IO_Pipes_NamedPipeClientStream_ctor_0__4__String_String_PipeDirection_PipeOptions(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL serverName, SG_HNDL_NONNULL pipeName, int32_t direction, int32_t options);

SG_HNDL_NONNULL System_IO_Pipes_NamedPipeClientStream_ctor_0__5__String_String_PipeDirection_PipeOptions_TokenImpersonationLevel(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL serverName, SG_HNDL_NONNULL pipeName, int32_t direction, int32_t options, int32_t impersonationLevel);

SG_HNDL_NONNULL System_IO_Pipes_NamedPipeClientStream_ctor_0__6__String_String_PipeDirection_PipeOptions_TokenImpersonationLevel_HandleInheritability(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL serverName, SG_HNDL_NONNULL pipeName, int32_t direction, int32_t options, int32_t impersonationLevel, int32_t inheritability);

void System_IO_Pipes_NamedPipeClientStream_void__Connect_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

void System_IO_Pipes_NamedPipeClientStream_void__Connect_0__1__i32(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, int32_t timeout);

SG_HNDL_NONNULL System_IO_Pipes_NamedPipeClientStream_Task__ConnectAsync_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL System_IO_Pipes_NamedPipeClientStream_Task__ConnectAsync_0__1__i32(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, int32_t timeout);

SG_HNDL_NONNULL System_IO_Pipes_NamedPipeClientStream_Task__ConnectAsync_0__2__i32_CancellationToken(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, int32_t timeout, SG_HNDL_NONNULL cancellationToken);

SG_HNDL_NONNULL System_IO_Pipes_NamedPipeClientStream_Task__ConnectAsync_0__1__CancellationToken(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL cancellationToken);

int32_t System_IO_Pipes_NamedPipeClientStream_i32__get_NumberOfServerInstances_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL System_IO_Pipes_NamedPipeClientStream_cast(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __h);

TYP System_IO_Pipes_NamedPipeServerStream_get_type_handle(void);

int32_t System_IO_Pipes_NamedPipeServerStream_get_MaxAllowedServerInstances(void);

SG_HNDL_NONNULL System_IO_Pipes_NamedPipeServerStream_ctor_0__4__PipeDirection_bool_bool_SafePipeHandle(SG_HNDL_NULLABLE * _Nonnull __thrown, int32_t direction, int32_t isAsync, int32_t isConnected, SG_HNDL_NONNULL safePipeHandle);

SG_HNDL_NONNULL System_IO_Pipes_NamedPipeServerStream_ctor_0__1__String(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL pipeName);

SG_HNDL_NONNULL System_IO_Pipes_NamedPipeServerStream_ctor_0__2__String_PipeDirection(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL pipeName, int32_t direction);

SG_HNDL_NONNULL System_IO_Pipes_NamedPipeServerStream_ctor_0__3__String_PipeDirection_i32(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL pipeName, int32_t direction, int32_t maxNumberOfServerInstances);

SG_HNDL_NONNULL System_IO_Pipes_NamedPipeServerStream_ctor_0__4__String_PipeDirection_i32_PipeTransmissionMode(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL pipeName, int32_t direction, int32_t maxNumberOfServerInstances, int32_t transmissionMode);

SG_HNDL_NONNULL System_IO_Pipes_NamedPipeServerStream_ctor_0__5__String_PipeDirection_i32_PipeTransmissionMode_PipeOptions(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL pipeName, int32_t direction, int32_t maxNumberOfServerInstances, int32_t transmissionMode, int32_t options);

SG_HNDL_NONNULL System_IO_Pipes_NamedPipeServerStream_ctor_0__7__String_PipeDirection_i32_PipeTransmissionMode_PipeOptions_i32_i32(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL pipeName, int32_t direction, int32_t maxNumberOfServerInstances, int32_t transmissionMode, int32_t options, int32_t inBufferSize, int32_t outBufferSize);

SG_HNDL_NONNULL System_IO_Pipes_NamedPipeServerStream_IAsyncResult__BeginWaitForConnection_0__2__AsyncCallback_Object(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NULLABLE callback, SG_HNDL_NULLABLE state);

void System_IO_Pipes_NamedPipeServerStream_void__Disconnect_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

void System_IO_Pipes_NamedPipeServerStream_void__EndWaitForConnection_0__1__IAsyncResult(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL asyncResult);

SG_HNDL_NONNULL System_IO_Pipes_NamedPipeServerStream_String__GetImpersonationUserName_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

void System_IO_Pipes_NamedPipeServerStream_void__RunAsClient_0__1__PipeStreamImpersonationWorker(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL impersonationWorker);

void System_IO_Pipes_NamedPipeServerStream_void__WaitForConnection_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL System_IO_Pipes_NamedPipeServerStream_Task__WaitForConnectionAsync_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL System_IO_Pipes_NamedPipeServerStream_Task__WaitForConnectionAsync_0__1__CancellationToken(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL cancellationToken);

SG_HNDL_NONNULL System_IO_Pipes_NamedPipeServerStream_cast(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __h);

TYP System_IO_Pipes_PipeDirection_get_type_handle(void);

int32_t System_IO_Pipes_PipeDirection_get_In(void);

int32_t System_IO_Pipes_PipeDirection_get_Out(void);

int32_t System_IO_Pipes_PipeDirection_get_InOut(void);

TYP System_IO_Pipes_PipeOptions_get_type_handle(void);

int32_t System_IO_Pipes_PipeOptions_get_WriteThrough(void);

int32_t System_IO_Pipes_PipeOptions_get_None(void);

int32_t System_IO_Pipes_PipeOptions_get_CurrentUserOnly(void);

int32_t System_IO_Pipes_PipeOptions_get_Asynchronous(void);

TYP System_IO_Pipes_PipeStream_get_type_handle(void);

SG_HNDL_NONNULL System_IO_Pipes_PipeStream_IAsyncResult__BeginRead_0__5__u8Array_i32_i32_AsyncCallback_Object(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL buffer, int32_t offset, int32_t count, SG_HNDL_NULLABLE callback, SG_HNDL_NULLABLE state);

SG_HNDL_NONNULL System_IO_Pipes_PipeStream_IAsyncResult__BeginWrite_0__5__u8Array_i32_i32_AsyncCallback_Object(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL buffer, int32_t offset, int32_t count, SG_HNDL_NULLABLE callback, SG_HNDL_NULLABLE state);

int32_t System_IO_Pipes_PipeStream_i32__EndRead_0__1__IAsyncResult(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL asyncResult);

void System_IO_Pipes_PipeStream_void__EndWrite_0__1__IAsyncResult(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL asyncResult);

void System_IO_Pipes_PipeStream_void__Flush_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL System_IO_Pipes_PipeStream_Task__FlushAsync_0__1__CancellationToken(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL cancellationToken);

int32_t System_IO_Pipes_PipeStream_i32__Read_0__3__u8Array_i32_i32(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL buffer, int32_t offset, int32_t count);

int32_t System_IO_Pipes_PipeStream_i32__Read_0__1__spanu8(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, const void* _Nonnull __buffer_spanptr);

SG_HNDL_NONNULL System_IO_Pipes_PipeStream_System_Threading_Tasks_Task_i32___ReadAsync_0__4__u8Array_i32_i32_CancellationToken(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL buffer, int32_t offset, int32_t count, SG_HNDL_NONNULL cancellationToken);

SG_HNDL_NONNULL System_IO_Pipes_PipeStream_System_Threading_Tasks_ValueTask_i32___ReadAsync_0__2__System_Memory_u8__CancellationToken(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL buffer, SG_HNDL_NONNULL cancellationToken);

int32_t System_IO_Pipes_PipeStream_i32__ReadByte_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

int64_t System_IO_Pipes_PipeStream_i64__Seek_0__2__i64_SeekOrigin(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, int64_t offset, int32_t origin);

void System_IO_Pipes_PipeStream_void__SetLength_0__1__i64(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, int64_t value);

void System_IO_Pipes_PipeStream_void__WaitForPipeDrain_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

void System_IO_Pipes_PipeStream_void__Write_0__3__u8Array_i32_i32(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL buffer, int32_t offset, int32_t count);

void System_IO_Pipes_PipeStream_void__Write_0__1__rospanu8(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, const void* _Nonnull __buffer_spanptr);

SG_HNDL_NONNULL System_IO_Pipes_PipeStream_Task__WriteAsync_0__4__u8Array_i32_i32_CancellationToken(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL buffer, int32_t offset, int32_t count, SG_HNDL_NONNULL cancellationToken);

SG_HNDL_NONNULL System_IO_Pipes_PipeStream_ValueTask__WriteAsync_0__2__System_ReadOnlyMemory_u8__CancellationToken(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL buffer, SG_HNDL_NONNULL cancellationToken);

void System_IO_Pipes_PipeStream_void__WriteByte_0__1__u8(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, uint8_t value);

int32_t System_IO_Pipes_PipeStream_bool__get_CanRead_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

int32_t System_IO_Pipes_PipeStream_bool__get_CanSeek_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

int32_t System_IO_Pipes_PipeStream_bool__get_CanWrite_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

int32_t System_IO_Pipes_PipeStream_i32__get_InBufferSize_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

int32_t System_IO_Pipes_PipeStream_bool__get_IsAsync_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

int32_t System_IO_Pipes_PipeStream_bool__get_IsConnected_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

void System_IO_Pipes_PipeStream_void__set_IsConnected_0__1__bool(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, int32_t value);

int32_t System_IO_Pipes_PipeStream_bool__get_IsMessageComplete_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

int64_t System_IO_Pipes_PipeStream_i64__get_Length_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

int32_t System_IO_Pipes_PipeStream_i32__get_OutBufferSize_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

int64_t System_IO_Pipes_PipeStream_i64__get_Position_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

void System_IO_Pipes_PipeStream_void__set_Position_0__1__i64(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, int64_t value);

int32_t System_IO_Pipes_PipeStream_PipeTransmissionMode__get_ReadMode_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

void System_IO_Pipes_PipeStream_void__set_ReadMode_0__1__PipeTransmissionMode(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, int32_t value);

SG_HNDL_NONNULL System_IO_Pipes_PipeStream_SafePipeHandle__get_SafePipeHandle_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

int32_t System_IO_Pipes_PipeStream_PipeTransmissionMode__get_TransmissionMode_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL System_IO_Pipes_PipeStream_cast(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __h);

TYP System_IO_Pipes_PipeStreamImpersonationWorker_get_type_handle(void);

void System_IO_Pipes_PipeStreamImpersonationWorker_void__Invoke_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NULLABLE System_IO_Pipes_PipeStreamImpersonationWorker_IAsyncResult__BeginInvoke_0__2__AsyncCallback_Object(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NULLABLE callback, SG_HNDL_NULLABLE object_);

void System_IO_Pipes_PipeStreamImpersonationWorker_void__EndInvoke_0__1__IAsyncResult(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NULLABLE result);

SG_HNDL_NONNULL System_IO_Pipes_PipeStreamImpersonationWorker_create(SG_HNDL_NULLABLE * _Nonnull __thrown, void (* _Nonnull  __cb)(const void* _Nonnull __pdata, SG_HNDL_NULLABLE * _Nonnull __thrown), const void* _Nonnull __pdata, void (* _Nullable __deinit)(const void* _Nonnull __pdata));

TYP System_IO_Pipes_PipeTransmissionMode_get_type_handle(void);

int32_t System_IO_Pipes_PipeTransmissionMode_get_Byte(void);

int32_t System_IO_Pipes_PipeTransmissionMode_get_Message(void);


#ifdef __cplusplus
}
#endif

#endif // INCLUDE_System_IO_Pipes

