// this file is automatically generated with SourceGear Bridge

#include <stdint.h>

#ifndef INCLUDE_System_Security_Cryptography_Primitives
#define INCLUDE_System_Security_Cryptography_Primitives

#ifdef __cplusplus
extern "C" {
#endif

typedef const void* _Nonnull SG_HNDL_NONNULL;
typedef const void* _Nullable SG_HNDL_NULLABLE;
typedef const void* _Nonnull TYP;
typedef uint64_t GVAL;

TYP System_Security_Cryptography_AsymmetricAlgorithm_get_type_handle(void);

void System_Security_Cryptography_AsymmetricAlgorithm_void__Clear_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL System_Security_Cryptography_AsymmetricAlgorithm_AsymmetricAlgorithm__Create_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NULLABLE System_Security_Cryptography_AsymmetricAlgorithm_AsymmetricAlgorithm__Create_0__1__String(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL algName);

void System_Security_Cryptography_AsymmetricAlgorithm_void__Dispose_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL System_Security_Cryptography_AsymmetricAlgorithm_u8Array__ExportEncryptedPkcs8PrivateKey_0__2__rospanu8_PbeParameters(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, const void* _Nonnull __passwordBytes_spanptr, SG_HNDL_NONNULL pbeParameters);

SG_HNDL_NONNULL System_Security_Cryptography_AsymmetricAlgorithm_u8Array__ExportEncryptedPkcs8PrivateKey_0__2__rospanChar_PbeParameters(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, const void* _Nonnull __password_spanptr, SG_HNDL_NONNULL pbeParameters);

SG_HNDL_NONNULL System_Security_Cryptography_AsymmetricAlgorithm_u8Array__ExportPkcs8PrivateKey_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL System_Security_Cryptography_AsymmetricAlgorithm_u8Array__ExportSubjectPublicKeyInfo_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

void System_Security_Cryptography_AsymmetricAlgorithm_void__FromXmlString_0__1__String(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL xmlString);

void System_Security_Cryptography_AsymmetricAlgorithm_void__ImportEncryptedPkcs8PrivateKey_0__3__rospanu8_rospanu8_outi32(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, const void* _Nonnull __passwordBytes_spanptr, const void* _Nonnull __source_spanptr, int32_t* _Nonnull __bytesRead_out_ptr);

void System_Security_Cryptography_AsymmetricAlgorithm_void__ImportEncryptedPkcs8PrivateKey_0__3__rospanChar_rospanu8_outi32(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, const void* _Nonnull __password_spanptr, const void* _Nonnull __source_spanptr, int32_t* _Nonnull __bytesRead_out_ptr);

void System_Security_Cryptography_AsymmetricAlgorithm_void__ImportFromEncryptedPem_0__2__rospanChar_rospanu8(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, const void* _Nonnull __input_spanptr, const void* _Nonnull __passwordBytes_spanptr);

void System_Security_Cryptography_AsymmetricAlgorithm_void__ImportFromEncryptedPem_0__2__rospanChar_rospanChar(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, const void* _Nonnull __input_spanptr, const void* _Nonnull __password_spanptr);

void System_Security_Cryptography_AsymmetricAlgorithm_void__ImportFromPem_0__1__rospanChar(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, const void* _Nonnull __input_spanptr);

void System_Security_Cryptography_AsymmetricAlgorithm_void__ImportPkcs8PrivateKey_0__2__rospanu8_outi32(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, const void* _Nonnull __source_spanptr, int32_t* _Nonnull __bytesRead_out_ptr);

void System_Security_Cryptography_AsymmetricAlgorithm_void__ImportSubjectPublicKeyInfo_0__2__rospanu8_outi32(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, const void* _Nonnull __source_spanptr, int32_t* _Nonnull __bytesRead_out_ptr);

SG_HNDL_NONNULL System_Security_Cryptography_AsymmetricAlgorithm_String__ToXmlString_0__1__bool(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, int32_t includePrivateParameters);

int32_t System_Security_Cryptography_AsymmetricAlgorithm_bool__TryExportEncryptedPkcs8PrivateKey_0__4__rospanu8_PbeParameters_spanu8_outi32(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, const void* _Nonnull __passwordBytes_spanptr, SG_HNDL_NONNULL pbeParameters, const void* _Nonnull __destination_spanptr, int32_t* _Nonnull __bytesWritten_out_ptr);

int32_t System_Security_Cryptography_AsymmetricAlgorithm_bool__TryExportEncryptedPkcs8PrivateKey_0__4__rospanChar_PbeParameters_spanu8_outi32(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, const void* _Nonnull __password_spanptr, SG_HNDL_NONNULL pbeParameters, const void* _Nonnull __destination_spanptr, int32_t* _Nonnull __bytesWritten_out_ptr);

int32_t System_Security_Cryptography_AsymmetricAlgorithm_bool__TryExportPkcs8PrivateKey_0__2__spanu8_outi32(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, const void* _Nonnull __destination_spanptr, int32_t* _Nonnull __bytesWritten_out_ptr);

int32_t System_Security_Cryptography_AsymmetricAlgorithm_bool__TryExportSubjectPublicKeyInfo_0__2__spanu8_outi32(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, const void* _Nonnull __destination_spanptr, int32_t* _Nonnull __bytesWritten_out_ptr);

SG_HNDL_NULLABLE System_Security_Cryptography_AsymmetricAlgorithm_String__get_KeyExchangeAlgorithm_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

int32_t System_Security_Cryptography_AsymmetricAlgorithm_i32__get_KeySize_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

void System_Security_Cryptography_AsymmetricAlgorithm_void__set_KeySize_0__1__i32(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, int32_t value);

SG_HNDL_NONNULL System_Security_Cryptography_AsymmetricAlgorithm_KeySizesArray__get_LegalKeySizes_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NULLABLE System_Security_Cryptography_AsymmetricAlgorithm_String__get_SignatureAlgorithm_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL System_Security_Cryptography_AsymmetricAlgorithm_cast(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __h);

TYP System_Security_Cryptography_CipherMode_get_type_handle(void);

int32_t System_Security_Cryptography_CipherMode_get_CBC(void);

int32_t System_Security_Cryptography_CipherMode_get_ECB(void);

int32_t System_Security_Cryptography_CipherMode_get_OFB(void);

int32_t System_Security_Cryptography_CipherMode_get_CFB(void);

int32_t System_Security_Cryptography_CipherMode_get_CTS(void);

TYP System_Security_Cryptography_CryptoStream_get_type_handle(void);

SG_HNDL_NONNULL System_Security_Cryptography_CryptoStream_ctor_0__3__Stream_ICryptoTransform_CryptoStreamMode(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL stream, SG_HNDL_NONNULL transform, int32_t mode);

SG_HNDL_NONNULL System_Security_Cryptography_CryptoStream_ctor_0__4__Stream_ICryptoTransform_CryptoStreamMode_bool(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL stream, SG_HNDL_NONNULL transform, int32_t mode, int32_t leaveOpen);

SG_HNDL_NONNULL System_Security_Cryptography_CryptoStream_IAsyncResult__BeginRead_0__5__u8Array_i32_i32_AsyncCallback_Object(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL buffer, int32_t offset, int32_t count, SG_HNDL_NULLABLE callback, SG_HNDL_NULLABLE state);

SG_HNDL_NONNULL System_Security_Cryptography_CryptoStream_IAsyncResult__BeginWrite_0__5__u8Array_i32_i32_AsyncCallback_Object(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL buffer, int32_t offset, int32_t count, SG_HNDL_NULLABLE callback, SG_HNDL_NULLABLE state);

void System_Security_Cryptography_CryptoStream_void__Clear_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

void System_Security_Cryptography_CryptoStream_void__CopyTo_0__2__Stream_i32(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL destination, int32_t bufferSize);

SG_HNDL_NONNULL System_Security_Cryptography_CryptoStream_Task__CopyToAsync_0__3__Stream_i32_CancellationToken(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL destination, int32_t bufferSize, SG_HNDL_NONNULL cancellationToken);

SG_HNDL_NONNULL System_Security_Cryptography_CryptoStream_ValueTask__DisposeAsync_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

int32_t System_Security_Cryptography_CryptoStream_i32__EndRead_0__1__IAsyncResult(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL asyncResult);

void System_Security_Cryptography_CryptoStream_void__EndWrite_0__1__IAsyncResult(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL asyncResult);

void System_Security_Cryptography_CryptoStream_void__Flush_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL System_Security_Cryptography_CryptoStream_Task__FlushAsync_0__1__CancellationToken(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL cancellationToken);

void System_Security_Cryptography_CryptoStream_void__FlushFinalBlock_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL System_Security_Cryptography_CryptoStream_ValueTask__FlushFinalBlockAsync_0__1__CancellationToken(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL cancellationToken);

int32_t System_Security_Cryptography_CryptoStream_i32__Read_0__3__u8Array_i32_i32(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL buffer, int32_t offset, int32_t count);

SG_HNDL_NONNULL System_Security_Cryptography_CryptoStream_System_Threading_Tasks_Task_i32___ReadAsync_0__4__u8Array_i32_i32_CancellationToken(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL buffer, int32_t offset, int32_t count, SG_HNDL_NONNULL cancellationToken);

SG_HNDL_NONNULL System_Security_Cryptography_CryptoStream_System_Threading_Tasks_ValueTask_i32___ReadAsync_0__2__System_Memory_u8__CancellationToken(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL buffer, SG_HNDL_NONNULL cancellationToken);

int32_t System_Security_Cryptography_CryptoStream_i32__ReadByte_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

int64_t System_Security_Cryptography_CryptoStream_i64__Seek_0__2__i64_SeekOrigin(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, int64_t offset, int32_t origin);

void System_Security_Cryptography_CryptoStream_void__SetLength_0__1__i64(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, int64_t value);

void System_Security_Cryptography_CryptoStream_void__Write_0__3__u8Array_i32_i32(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL buffer, int32_t offset, int32_t count);

SG_HNDL_NONNULL System_Security_Cryptography_CryptoStream_Task__WriteAsync_0__4__u8Array_i32_i32_CancellationToken(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL buffer, int32_t offset, int32_t count, SG_HNDL_NONNULL cancellationToken);

SG_HNDL_NONNULL System_Security_Cryptography_CryptoStream_ValueTask__WriteAsync_0__2__System_ReadOnlyMemory_u8__CancellationToken(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL buffer, SG_HNDL_NONNULL cancellationToken);

void System_Security_Cryptography_CryptoStream_void__WriteByte_0__1__u8(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, uint8_t value);

int32_t System_Security_Cryptography_CryptoStream_bool__get_CanRead_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

int32_t System_Security_Cryptography_CryptoStream_bool__get_CanSeek_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

int32_t System_Security_Cryptography_CryptoStream_bool__get_CanWrite_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

int32_t System_Security_Cryptography_CryptoStream_bool__get_HasFlushedFinalBlock_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

int64_t System_Security_Cryptography_CryptoStream_i64__get_Length_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

int64_t System_Security_Cryptography_CryptoStream_i64__get_Position_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

void System_Security_Cryptography_CryptoStream_void__set_Position_0__1__i64(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, int64_t value);

SG_HNDL_NONNULL System_Security_Cryptography_CryptoStream_cast(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __h);

TYP System_Security_Cryptography_CryptoStreamMode_get_type_handle(void);

int32_t System_Security_Cryptography_CryptoStreamMode_get_Read(void);

int32_t System_Security_Cryptography_CryptoStreamMode_get_Write(void);

int32_t System_Security_Cryptography_CryptographicOperations_bool__FixedTimeEquals_0__2__rospanu8_rospanu8(SG_HNDL_NULLABLE * _Nonnull __thrown, const void* _Nonnull __left_spanptr, const void* _Nonnull __right_spanptr);

void System_Security_Cryptography_CryptographicOperations_void__ZeroMemory_0__1__spanu8(SG_HNDL_NULLABLE * _Nonnull __thrown, const void* _Nonnull __buffer_spanptr);

TYP System_Security_Cryptography_CryptographicUnexpectedOperationException_get_type_handle(void);

SG_HNDL_NONNULL System_Security_Cryptography_CryptographicUnexpectedOperationException_ctor_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Security_Cryptography_CryptographicUnexpectedOperationException_ctor_0__1__String(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NULLABLE message);

SG_HNDL_NONNULL System_Security_Cryptography_CryptographicUnexpectedOperationException_ctor_0__2__String_Exception(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NULLABLE message, SG_HNDL_NULLABLE inner);

SG_HNDL_NONNULL System_Security_Cryptography_CryptographicUnexpectedOperationException_ctor_0__2__String_String(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL format, SG_HNDL_NULLABLE insert);

SG_HNDL_NONNULL System_Security_Cryptography_CryptographicUnexpectedOperationException_cast(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __h);

TYP System_Security_Cryptography_HMAC_get_type_handle(void);

SG_HNDL_NONNULL System_Security_Cryptography_HMAC_HMAC__Create_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NULLABLE System_Security_Cryptography_HMAC_HMAC__Create_0__1__String(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL algorithmName);

void System_Security_Cryptography_HMAC_void__Initialize_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL System_Security_Cryptography_HMAC_String__get_HashName_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

void System_Security_Cryptography_HMAC_void__set_HashName_0__1__String(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL value);

SG_HNDL_NONNULL System_Security_Cryptography_HMAC_u8Array__get_Key_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

void System_Security_Cryptography_HMAC_void__set_Key_0__1__u8Array(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL value);

SG_HNDL_NONNULL System_Security_Cryptography_HMAC_cast(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __h);

TYP System_Security_Cryptography_HashAlgorithm_get_type_handle(void);

void System_Security_Cryptography_HashAlgorithm_void__Clear_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL System_Security_Cryptography_HashAlgorithm_u8Array__ComputeHash_0__1__u8Array(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL buffer);

SG_HNDL_NONNULL System_Security_Cryptography_HashAlgorithm_u8Array__ComputeHash_0__3__u8Array_i32_i32(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL buffer, int32_t offset, int32_t count);

SG_HNDL_NONNULL System_Security_Cryptography_HashAlgorithm_u8Array__ComputeHash_0__1__Stream(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL inputStream);

SG_HNDL_NONNULL System_Security_Cryptography_HashAlgorithm_System_Threading_Tasks_Task_u8Array___ComputeHashAsync_0__2__Stream_CancellationToken(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL inputStream, SG_HNDL_NONNULL cancellationToken);

SG_HNDL_NONNULL System_Security_Cryptography_HashAlgorithm_HashAlgorithm__Create_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NULLABLE System_Security_Cryptography_HashAlgorithm_HashAlgorithm__Create_0__1__String(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL hashName);

void System_Security_Cryptography_HashAlgorithm_void__Dispose_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

void System_Security_Cryptography_HashAlgorithm_void__Initialize_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

int32_t System_Security_Cryptography_HashAlgorithm_i32__TransformBlock_0__5__u8Array_i32_i32_u8Array_i32(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL inputBuffer, int32_t inputOffset, int32_t inputCount, SG_HNDL_NULLABLE outputBuffer, int32_t outputOffset);

SG_HNDL_NONNULL System_Security_Cryptography_HashAlgorithm_u8Array__TransformFinalBlock_0__3__u8Array_i32_i32(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL inputBuffer, int32_t inputOffset, int32_t inputCount);

int32_t System_Security_Cryptography_HashAlgorithm_bool__TryComputeHash_0__3__rospanu8_spanu8_outi32(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, const void* _Nonnull __source_spanptr, const void* _Nonnull __destination_spanptr, int32_t* _Nonnull __bytesWritten_out_ptr);

int32_t System_Security_Cryptography_HashAlgorithm_bool__get_CanReuseTransform_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

int32_t System_Security_Cryptography_HashAlgorithm_bool__get_CanTransformMultipleBlocks_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NULLABLE System_Security_Cryptography_HashAlgorithm_u8Array__get_Hash_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

int32_t System_Security_Cryptography_HashAlgorithm_i32__get_HashSize_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

int32_t System_Security_Cryptography_HashAlgorithm_i32__get_InputBlockSize_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

int32_t System_Security_Cryptography_HashAlgorithm_i32__get_OutputBlockSize_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL System_Security_Cryptography_HashAlgorithm_cast(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __h);

TYP System_Security_Cryptography_HashAlgorithmName_get_type_handle(void);

SG_HNDL_NONNULL System_Security_Cryptography_HashAlgorithmName_ctor_0__1__String(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NULLABLE name);

int32_t System_Security_Cryptography_HashAlgorithmName_bool__Equals_0__1__Object(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NULLABLE obj);

int32_t System_Security_Cryptography_HashAlgorithmName_bool__Equals_0__1__HashAlgorithmName(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL other);

SG_HNDL_NONNULL System_Security_Cryptography_HashAlgorithmName_HashAlgorithmName__FromOid_0__1__String(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL oidValue);

int32_t System_Security_Cryptography_HashAlgorithmName_i32__GetHashCode_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

int32_t System_Security_Cryptography_HashAlgorithmName_bool__op_Equality_0__2__HashAlgorithmName_HashAlgorithmName(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL left, SG_HNDL_NONNULL right);

int32_t System_Security_Cryptography_HashAlgorithmName_bool__op_Inequality_0__2__HashAlgorithmName_HashAlgorithmName(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL left, SG_HNDL_NONNULL right);

SG_HNDL_NONNULL System_Security_Cryptography_HashAlgorithmName_String__ToString_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

int32_t System_Security_Cryptography_HashAlgorithmName_bool__TryFromOid_0__2__String_outHashAlgorithmName(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL oidValue, SG_HNDL_NONNULL* _Nonnull __value_out_ptr);

SG_HNDL_NONNULL System_Security_Cryptography_HashAlgorithmName_HashAlgorithmName__get_MD5_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NULLABLE System_Security_Cryptography_HashAlgorithmName_String__get_Name_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL System_Security_Cryptography_HashAlgorithmName_HashAlgorithmName__get_SHA1_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Security_Cryptography_HashAlgorithmName_HashAlgorithmName__get_SHA256_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Security_Cryptography_HashAlgorithmName_HashAlgorithmName__get_SHA384_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Security_Cryptography_HashAlgorithmName_HashAlgorithmName__get_SHA512_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Security_Cryptography_HashAlgorithmName_implicit_ctor(void);

TYP System_Security_Cryptography_ICryptoTransform_get_type_handle(void);

int32_t System_Security_Cryptography_ICryptoTransform_i32__TransformBlock_0__5__u8Array_i32_i32_u8Array_i32(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL inputBuffer, int32_t inputOffset, int32_t inputCount, SG_HNDL_NONNULL outputBuffer, int32_t outputOffset);

SG_HNDL_NONNULL System_Security_Cryptography_ICryptoTransform_u8Array__TransformFinalBlock_0__3__u8Array_i32_i32(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL inputBuffer, int32_t inputOffset, int32_t inputCount);

int32_t System_Security_Cryptography_ICryptoTransform_bool__get_CanReuseTransform_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

int32_t System_Security_Cryptography_ICryptoTransform_bool__get_CanTransformMultipleBlocks_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

int32_t System_Security_Cryptography_ICryptoTransform_i32__get_InputBlockSize_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

int32_t System_Security_Cryptography_ICryptoTransform_i32__get_OutputBlockSize_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL System_Security_Cryptography_ICryptoTransform_cast(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __h);

TYP System_Security_Cryptography_KeySizes_get_type_handle(void);

SG_HNDL_NONNULL System_Security_Cryptography_KeySizes_ctor_0__3__i32_i32_i32(SG_HNDL_NULLABLE * _Nonnull __thrown, int32_t minSize, int32_t maxSize, int32_t skipSize);

int32_t System_Security_Cryptography_KeySizes_i32__get_MaxSize_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

int32_t System_Security_Cryptography_KeySizes_i32__get_MinSize_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

int32_t System_Security_Cryptography_KeySizes_i32__get_SkipSize_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL System_Security_Cryptography_KeySizes_cast(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __h);

TYP System_Security_Cryptography_KeyedHashAlgorithm_get_type_handle(void);

SG_HNDL_NONNULL System_Security_Cryptography_KeyedHashAlgorithm_KeyedHashAlgorithm__Create_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NULLABLE System_Security_Cryptography_KeyedHashAlgorithm_KeyedHashAlgorithm__Create_0__1__String(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL algName);

SG_HNDL_NONNULL System_Security_Cryptography_KeyedHashAlgorithm_u8Array__get_Key_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

void System_Security_Cryptography_KeyedHashAlgorithm_void__set_Key_0__1__u8Array(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL value);

SG_HNDL_NONNULL System_Security_Cryptography_KeyedHashAlgorithm_cast(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __h);

TYP System_Security_Cryptography_PaddingMode_get_type_handle(void);

int32_t System_Security_Cryptography_PaddingMode_get_None(void);

int32_t System_Security_Cryptography_PaddingMode_get_PKCS7(void);

int32_t System_Security_Cryptography_PaddingMode_get_Zeros(void);

int32_t System_Security_Cryptography_PaddingMode_get_ANSIX923(void);

int32_t System_Security_Cryptography_PaddingMode_get_ISO10126(void);

TYP System_Security_Cryptography_PbeEncryptionAlgorithm_get_type_handle(void);

int32_t System_Security_Cryptography_PbeEncryptionAlgorithm_get_Unknown(void);

int32_t System_Security_Cryptography_PbeEncryptionAlgorithm_get_Aes128Cbc(void);

int32_t System_Security_Cryptography_PbeEncryptionAlgorithm_get_Aes192Cbc(void);

int32_t System_Security_Cryptography_PbeEncryptionAlgorithm_get_Aes256Cbc(void);

int32_t System_Security_Cryptography_PbeEncryptionAlgorithm_get_TripleDes3KeyPkcs12(void);

TYP System_Security_Cryptography_PbeParameters_get_type_handle(void);

SG_HNDL_NONNULL System_Security_Cryptography_PbeParameters_ctor_0__3__PbeEncryptionAlgorithm_HashAlgorithmName_i32(SG_HNDL_NULLABLE * _Nonnull __thrown, int32_t encryptionAlgorithm, SG_HNDL_NONNULL hashAlgorithm, int32_t iterationCount);

int32_t System_Security_Cryptography_PbeParameters_PbeEncryptionAlgorithm__get_EncryptionAlgorithm_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL System_Security_Cryptography_PbeParameters_HashAlgorithmName__get_HashAlgorithm_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

int32_t System_Security_Cryptography_PbeParameters_i32__get_IterationCount_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL System_Security_Cryptography_PbeParameters_cast(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __h);

TYP System_Security_Cryptography_SymmetricAlgorithm_get_type_handle(void);

void System_Security_Cryptography_SymmetricAlgorithm_void__Clear_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL System_Security_Cryptography_SymmetricAlgorithm_SymmetricAlgorithm__Create_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NULLABLE System_Security_Cryptography_SymmetricAlgorithm_SymmetricAlgorithm__Create_0__1__String(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL algName);

SG_HNDL_NONNULL System_Security_Cryptography_SymmetricAlgorithm_ICryptoTransform__CreateDecryptor_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL System_Security_Cryptography_SymmetricAlgorithm_ICryptoTransform__CreateDecryptor_0__2__u8Array_u8Array(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL rgbKey, SG_HNDL_NULLABLE rgbIV);

SG_HNDL_NONNULL System_Security_Cryptography_SymmetricAlgorithm_ICryptoTransform__CreateEncryptor_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL System_Security_Cryptography_SymmetricAlgorithm_ICryptoTransform__CreateEncryptor_0__2__u8Array_u8Array(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL rgbKey, SG_HNDL_NULLABLE rgbIV);

SG_HNDL_NONNULL System_Security_Cryptography_SymmetricAlgorithm_u8Array__DecryptCbc_0__3__u8Array_u8Array_PaddingMode(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL ciphertext, SG_HNDL_NONNULL iv, int32_t paddingMode);

SG_HNDL_NONNULL System_Security_Cryptography_SymmetricAlgorithm_u8Array__DecryptCbc_0__3__rospanu8_rospanu8_PaddingMode(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, const void* _Nonnull __ciphertext_spanptr, const void* _Nonnull __iv_spanptr, int32_t paddingMode);

int32_t System_Security_Cryptography_SymmetricAlgorithm_i32__DecryptCbc_0__4__rospanu8_rospanu8_spanu8_PaddingMode(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, const void* _Nonnull __ciphertext_spanptr, const void* _Nonnull __iv_spanptr, const void* _Nonnull __destination_spanptr, int32_t paddingMode);

SG_HNDL_NONNULL System_Security_Cryptography_SymmetricAlgorithm_u8Array__DecryptCfb_0__4__u8Array_u8Array_PaddingMode_i32(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL ciphertext, SG_HNDL_NONNULL iv, int32_t paddingMode, int32_t feedbackSizeInBits);

SG_HNDL_NONNULL System_Security_Cryptography_SymmetricAlgorithm_u8Array__DecryptCfb_0__4__rospanu8_rospanu8_PaddingMode_i32(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, const void* _Nonnull __ciphertext_spanptr, const void* _Nonnull __iv_spanptr, int32_t paddingMode, int32_t feedbackSizeInBits);

int32_t System_Security_Cryptography_SymmetricAlgorithm_i32__DecryptCfb_0__5__rospanu8_rospanu8_spanu8_PaddingMode_i32(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, const void* _Nonnull __ciphertext_spanptr, const void* _Nonnull __iv_spanptr, const void* _Nonnull __destination_spanptr, int32_t paddingMode, int32_t feedbackSizeInBits);

SG_HNDL_NONNULL System_Security_Cryptography_SymmetricAlgorithm_u8Array__DecryptEcb_0__2__u8Array_PaddingMode(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL ciphertext, int32_t paddingMode);

SG_HNDL_NONNULL System_Security_Cryptography_SymmetricAlgorithm_u8Array__DecryptEcb_0__2__rospanu8_PaddingMode(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, const void* _Nonnull __ciphertext_spanptr, int32_t paddingMode);

int32_t System_Security_Cryptography_SymmetricAlgorithm_i32__DecryptEcb_0__3__rospanu8_spanu8_PaddingMode(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, const void* _Nonnull __ciphertext_spanptr, const void* _Nonnull __destination_spanptr, int32_t paddingMode);

void System_Security_Cryptography_SymmetricAlgorithm_void__Dispose_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL System_Security_Cryptography_SymmetricAlgorithm_u8Array__EncryptCbc_0__3__u8Array_u8Array_PaddingMode(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL plaintext, SG_HNDL_NONNULL iv, int32_t paddingMode);

SG_HNDL_NONNULL System_Security_Cryptography_SymmetricAlgorithm_u8Array__EncryptCbc_0__3__rospanu8_rospanu8_PaddingMode(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, const void* _Nonnull __plaintext_spanptr, const void* _Nonnull __iv_spanptr, int32_t paddingMode);

int32_t System_Security_Cryptography_SymmetricAlgorithm_i32__EncryptCbc_0__4__rospanu8_rospanu8_spanu8_PaddingMode(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, const void* _Nonnull __plaintext_spanptr, const void* _Nonnull __iv_spanptr, const void* _Nonnull __destination_spanptr, int32_t paddingMode);

SG_HNDL_NONNULL System_Security_Cryptography_SymmetricAlgorithm_u8Array__EncryptCfb_0__4__u8Array_u8Array_PaddingMode_i32(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL plaintext, SG_HNDL_NONNULL iv, int32_t paddingMode, int32_t feedbackSizeInBits);

SG_HNDL_NONNULL System_Security_Cryptography_SymmetricAlgorithm_u8Array__EncryptCfb_0__4__rospanu8_rospanu8_PaddingMode_i32(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, const void* _Nonnull __plaintext_spanptr, const void* _Nonnull __iv_spanptr, int32_t paddingMode, int32_t feedbackSizeInBits);

int32_t System_Security_Cryptography_SymmetricAlgorithm_i32__EncryptCfb_0__5__rospanu8_rospanu8_spanu8_PaddingMode_i32(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, const void* _Nonnull __plaintext_spanptr, const void* _Nonnull __iv_spanptr, const void* _Nonnull __destination_spanptr, int32_t paddingMode, int32_t feedbackSizeInBits);

SG_HNDL_NONNULL System_Security_Cryptography_SymmetricAlgorithm_u8Array__EncryptEcb_0__2__u8Array_PaddingMode(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL plaintext, int32_t paddingMode);

SG_HNDL_NONNULL System_Security_Cryptography_SymmetricAlgorithm_u8Array__EncryptEcb_0__2__rospanu8_PaddingMode(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, const void* _Nonnull __plaintext_spanptr, int32_t paddingMode);

int32_t System_Security_Cryptography_SymmetricAlgorithm_i32__EncryptEcb_0__3__rospanu8_spanu8_PaddingMode(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, const void* _Nonnull __plaintext_spanptr, const void* _Nonnull __destination_spanptr, int32_t paddingMode);

void System_Security_Cryptography_SymmetricAlgorithm_void__GenerateIV_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

void System_Security_Cryptography_SymmetricAlgorithm_void__GenerateKey_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

int32_t System_Security_Cryptography_SymmetricAlgorithm_i32__GetCiphertextLengthCbc_0__2__i32_PaddingMode(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, int32_t plaintextLength, int32_t paddingMode);

int32_t System_Security_Cryptography_SymmetricAlgorithm_i32__GetCiphertextLengthCfb_0__3__i32_PaddingMode_i32(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, int32_t plaintextLength, int32_t paddingMode, int32_t feedbackSizeInBits);

int32_t System_Security_Cryptography_SymmetricAlgorithm_i32__GetCiphertextLengthEcb_0__2__i32_PaddingMode(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, int32_t plaintextLength, int32_t paddingMode);

int32_t System_Security_Cryptography_SymmetricAlgorithm_bool__TryDecryptCbc_0__5__rospanu8_rospanu8_spanu8_outi32_PaddingMode(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, const void* _Nonnull __ciphertext_spanptr, const void* _Nonnull __iv_spanptr, const void* _Nonnull __destination_spanptr, int32_t* _Nonnull __bytesWritten_out_ptr, int32_t paddingMode);

int32_t System_Security_Cryptography_SymmetricAlgorithm_bool__TryDecryptCfb_0__6__rospanu8_rospanu8_spanu8_outi32_PaddingMode_i32(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, const void* _Nonnull __ciphertext_spanptr, const void* _Nonnull __iv_spanptr, const void* _Nonnull __destination_spanptr, int32_t* _Nonnull __bytesWritten_out_ptr, int32_t paddingMode, int32_t feedbackSizeInBits);

int32_t System_Security_Cryptography_SymmetricAlgorithm_bool__TryDecryptEcb_0__4__rospanu8_spanu8_PaddingMode_outi32(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, const void* _Nonnull __ciphertext_spanptr, const void* _Nonnull __destination_spanptr, int32_t paddingMode, int32_t* _Nonnull __bytesWritten_out_ptr);

int32_t System_Security_Cryptography_SymmetricAlgorithm_bool__TryEncryptCbc_0__5__rospanu8_rospanu8_spanu8_outi32_PaddingMode(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, const void* _Nonnull __plaintext_spanptr, const void* _Nonnull __iv_spanptr, const void* _Nonnull __destination_spanptr, int32_t* _Nonnull __bytesWritten_out_ptr, int32_t paddingMode);

int32_t System_Security_Cryptography_SymmetricAlgorithm_bool__TryEncryptCfb_0__6__rospanu8_rospanu8_spanu8_outi32_PaddingMode_i32(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, const void* _Nonnull __plaintext_spanptr, const void* _Nonnull __iv_spanptr, const void* _Nonnull __destination_spanptr, int32_t* _Nonnull __bytesWritten_out_ptr, int32_t paddingMode, int32_t feedbackSizeInBits);

int32_t System_Security_Cryptography_SymmetricAlgorithm_bool__TryEncryptEcb_0__4__rospanu8_spanu8_PaddingMode_outi32(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, const void* _Nonnull __plaintext_spanptr, const void* _Nonnull __destination_spanptr, int32_t paddingMode, int32_t* _Nonnull __bytesWritten_out_ptr);

int32_t System_Security_Cryptography_SymmetricAlgorithm_bool__ValidKeySize_0__1__i32(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, int32_t bitLength);

int32_t System_Security_Cryptography_SymmetricAlgorithm_i32__get_BlockSize_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

void System_Security_Cryptography_SymmetricAlgorithm_void__set_BlockSize_0__1__i32(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, int32_t value);

int32_t System_Security_Cryptography_SymmetricAlgorithm_i32__get_FeedbackSize_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

void System_Security_Cryptography_SymmetricAlgorithm_void__set_FeedbackSize_0__1__i32(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, int32_t value);

SG_HNDL_NONNULL System_Security_Cryptography_SymmetricAlgorithm_u8Array__get_IV_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

void System_Security_Cryptography_SymmetricAlgorithm_void__set_IV_0__1__u8Array(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL value);

SG_HNDL_NONNULL System_Security_Cryptography_SymmetricAlgorithm_u8Array__get_Key_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

void System_Security_Cryptography_SymmetricAlgorithm_void__set_Key_0__1__u8Array(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL value);

int32_t System_Security_Cryptography_SymmetricAlgorithm_i32__get_KeySize_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

void System_Security_Cryptography_SymmetricAlgorithm_void__set_KeySize_0__1__i32(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, int32_t value);

SG_HNDL_NONNULL System_Security_Cryptography_SymmetricAlgorithm_KeySizesArray__get_LegalBlockSizes_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL System_Security_Cryptography_SymmetricAlgorithm_KeySizesArray__get_LegalKeySizes_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

int32_t System_Security_Cryptography_SymmetricAlgorithm_CipherMode__get_Mode_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

void System_Security_Cryptography_SymmetricAlgorithm_void__set_Mode_0__1__CipherMode(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, int32_t value);

int32_t System_Security_Cryptography_SymmetricAlgorithm_PaddingMode__get_Padding_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

void System_Security_Cryptography_SymmetricAlgorithm_void__set_Padding_0__1__PaddingMode(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, int32_t value);

SG_HNDL_NONNULL System_Security_Cryptography_SymmetricAlgorithm_cast(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __h);


#ifdef __cplusplus
}
#endif

#endif // INCLUDE_System_Security_Cryptography_Primitives
