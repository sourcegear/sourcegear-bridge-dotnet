// this file is automatically generated with SourceGear Bridge

import jumptable_dotnet;

// System
// System.IO
// System.IO.Compression
extension System.IO.Compression {
// type: System.IO.Compression.BrotliDecoder
// boxed value type
public final class BrotliDecoder
    :
    dotnet.System.Object,
    System_IDisposable
{
    public class override func get_type_handle() -> TypeHandle {
        return System_IO_Compression_BrotliDecoder_get_type_handle();
    }
    public class override func AsType() -> dotnet.System.Type_ {
        return dotnet.System.Type_(hndl: __copy_handle(get_type_handle()));
    }
    public required init(hndl: NonnullHandle) { super.init(hndl: hndl); }
    public required init(gval: GVal) { super.init(gval: gval); }
    public override init() {
        let h = System_IO_Compression_BrotliDecoder_implicit_ctor();
            super.init(hndl: h);
    }
// TODO COPE (write_all_methods) (span) System.Buffers.OperationStatus Decompress(System.ReadOnlySpan<System.Byte>, System.Span<System.Byte>, ref System.Int32, ref System.Int32)
    // void Dispose()
// docid: M:System.IO.Compression.BrotliDecoder.Dispose
    public func Dispose() throws {
        var __thrown : NullableHandle = nil;
        System_IO_Compression_BrotliDecoder_void__Dispose_0__0(&__thrown, self.get_handle());
        if let __ex =  __thrown {
            throw dotnet.System.Exception(hndl: __ex);
        } else {
            return;
        }
    }
// TODO COPE (write_all_methods) (span) bool TryDecompress(System.ReadOnlySpan<System.Byte>, System.Span<System.Byte>, ref System.Int32)
} // BrotliDecoder


// type: System.IO.Compression.BrotliEncoder
// boxed value type
public final class BrotliEncoder
    :
    dotnet.System.Object,
    System_IDisposable
{
    public class override func get_type_handle() -> TypeHandle {
        return System_IO_Compression_BrotliEncoder_get_type_handle();
    }
    public class override func AsType() -> dotnet.System.Type_ {
        return dotnet.System.Type_(hndl: __copy_handle(get_type_handle()));
    }
    public required init(hndl: NonnullHandle) { super.init(hndl: hndl); }
    public required init(gval: GVal) { super.init(gval: gval); }
    // .ctor(System.Int32, System.Int32)
// docid: M:System.IO.Compression.BrotliEncoder.#ctor(System.Int32,System.Int32)
    public init(quality : Swift.Int32, window : Swift.Int32) throws {
        var __thrown : NullableHandle = nil;
        let h = System_IO_Compression_BrotliEncoder_ctor_0__2__i32_i32(&__thrown, quality, window);
        if let __ex = __thrown {
            throw dotnet.System.Exception(hndl: __ex);
        } else {
            super.init(hndl: h);
        }
    }
    public override init() {
        let h = System_IO_Compression_BrotliEncoder_implicit_ctor();
            super.init(hndl: h);
    }
// TODO COPE (write_all_methods) (span) System.Buffers.OperationStatus Compress(System.ReadOnlySpan<System.Byte>, System.Span<System.Byte>, ref System.Int32, ref System.Int32, bool)
    // void Dispose()
// docid: M:System.IO.Compression.BrotliEncoder.Dispose
    public func Dispose() throws {
        var __thrown : NullableHandle = nil;
        System_IO_Compression_BrotliEncoder_void__Dispose_0__0(&__thrown, self.get_handle());
        if let __ex =  __thrown {
            throw dotnet.System.Exception(hndl: __ex);
        } else {
            return;
        }
    }
// TODO COPE (write_all_methods) (span) System.Buffers.OperationStatus Flush(System.Span<System.Byte>, ref System.Int32)
    // System.Int32 GetMaxCompressedLength(System.Int32)
// docid: M:System.IO.Compression.BrotliEncoder.GetMaxCompressedLength(System.Int32)
    public class func GetMaxCompressedLength(inputSize : Swift.Int32) throws -> Swift.Int32 {
        var __thrown : NullableHandle = nil;
        let __return = System_IO_Compression_BrotliEncoder_i32__GetMaxCompressedLength_0__1__i32(&__thrown, inputSize);
        if let __ex =  __thrown {
            throw dotnet.System.Exception(hndl: __ex);
        } else {
        return __return;
        }
    }
// TODO COPE (write_all_methods) (span) bool TryCompress(System.ReadOnlySpan<System.Byte>, System.Span<System.Byte>, ref System.Int32)
// TODO COPE (write_all_methods) (span) bool TryCompress(System.ReadOnlySpan<System.Byte>, System.Span<System.Byte>, ref System.Int32, System.Int32, System.Int32)
} // BrotliEncoder


// type: System.IO.Compression.BrotliStream
public final class BrotliStream
    :
    dotnet.System.IO.Stream
{
    public class override func get_type_handle() -> TypeHandle {
        return System_IO_Compression_BrotliStream_get_type_handle();
    }
    public class override func AsType() -> dotnet.System.Type_ {
        return dotnet.System.Type_(hndl: __copy_handle(get_type_handle()));
    }
    public required init(hndl: NonnullHandle) { super.init(hndl: hndl); }
    public required init(gval: GVal) { super.init(gval: gval); }
    // .ctor(System.IO.Stream, System.IO.Compression.CompressionLevel)
// docid: M:System.IO.Compression.BrotliStream.#ctor(System.IO.Stream,System.IO.Compression.CompressionLevel)
    public init(stream : dotnet.System.IO.Stream, compressionLevel : dotnet.System.IO.Compression.CompressionLevel) throws {
        var __thrown : NullableHandle = nil;
        let h = System_IO_Compression_BrotliStream_ctor_0__2__Stream_CompressionLevel(&__thrown, stream.get_handle(), compressionLevel.get_value());
        if let __ex = __thrown {
            throw dotnet.System.Exception(hndl: __ex);
        } else {
            super.init(hndl: h);
        }
    }
    // .ctor(System.IO.Stream, System.IO.Compression.CompressionLevel, bool)
// docid: M:System.IO.Compression.BrotliStream.#ctor(System.IO.Stream,System.IO.Compression.CompressionLevel,System.Boolean)
    public init(stream : dotnet.System.IO.Stream, compressionLevel : dotnet.System.IO.Compression.CompressionLevel, leaveOpen : Bool) throws {
        var __thrown : NullableHandle = nil;
        let h = System_IO_Compression_BrotliStream_ctor_0__3__Stream_CompressionLevel_bool(&__thrown, stream.get_handle(), compressionLevel.get_value(), Swift.Int32(leaveOpen ? 1 : 0));
        if let __ex = __thrown {
            throw dotnet.System.Exception(hndl: __ex);
        } else {
            super.init(hndl: h);
        }
    }
    // .ctor(System.IO.Stream, System.IO.Compression.CompressionMode)
// docid: M:System.IO.Compression.BrotliStream.#ctor(System.IO.Stream,System.IO.Compression.CompressionMode)
    public init(stream : dotnet.System.IO.Stream, mode : dotnet.System.IO.Compression.CompressionMode) throws {
        var __thrown : NullableHandle = nil;
        let h = System_IO_Compression_BrotliStream_ctor_0__2__Stream_CompressionMode(&__thrown, stream.get_handle(), mode.get_value());
        if let __ex = __thrown {
            throw dotnet.System.Exception(hndl: __ex);
        } else {
            super.init(hndl: h);
        }
    }
    // .ctor(System.IO.Stream, System.IO.Compression.CompressionMode, bool)
// docid: M:System.IO.Compression.BrotliStream.#ctor(System.IO.Stream,System.IO.Compression.CompressionMode,System.Boolean)
    public init(stream : dotnet.System.IO.Stream, mode : dotnet.System.IO.Compression.CompressionMode, leaveOpen : Bool) throws {
        var __thrown : NullableHandle = nil;
        let h = System_IO_Compression_BrotliStream_ctor_0__3__Stream_CompressionMode_bool(&__thrown, stream.get_handle(), mode.get_value(), Swift.Int32(leaveOpen ? 1 : 0));
        if let __ex = __thrown {
            throw dotnet.System.Exception(hndl: __ex);
        } else {
            super.init(hndl: h);
        }
    }
    // System.IAsyncResult BeginRead(System.Byte[], System.Int32, System.Int32, System.AsyncCallback, System.Object)
// docid: M:System.IO.Compression.BrotliStream.BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
    public func BeginRead(buffer : dotnet.System_Arr<Swift.UInt8>, offset : Swift.Int32, count : Swift.Int32, asyncCallback : Optional<dotnet.System.AsyncCallback>, asyncState : Optional<dotnet.System.Object>) throws -> dotnet.System.IAsyncResult {
        var __thrown : NullableHandle = nil;
        let __return = System_IO_Compression_BrotliStream_IAsyncResult__BeginRead_0__5__u8Array_i32_i32_AsyncCallback_Object(&__thrown, self.get_handle(), buffer.get_handle(), offset, count, asyncCallback?.get_handle() ?? nil, asyncState?.get_handle() ?? nil);
        if let __ex =  __thrown {
            throw dotnet.System.Exception(hndl: __ex);
        } else {
        return dotnet.System.IAsyncResult(hndl : __return);
        }
    }
    // delegate closure overload
    public func BeginRead(buffer : dotnet.System_Arr<Swift.UInt8>, offset : Swift.Int32, count : Swift.Int32, asyncCallback : @escaping (dotnet.System.IAsyncResult) throws -> Void, asyncState : Optional<dotnet.System.Object>) throws -> dotnet.System.IAsyncResult {
        let del_asyncCallback = try dotnet.System.AsyncCallback(asyncCallback);
        return try BeginRead(buffer: buffer, offset: offset, count: count, asyncCallback: del_asyncCallback, asyncState: asyncState);
    }
    // System.IAsyncResult BeginWrite(System.Byte[], System.Int32, System.Int32, System.AsyncCallback, System.Object)
// docid: M:System.IO.Compression.BrotliStream.BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
    public func BeginWrite(buffer : dotnet.System_Arr<Swift.UInt8>, offset : Swift.Int32, count : Swift.Int32, asyncCallback : Optional<dotnet.System.AsyncCallback>, asyncState : Optional<dotnet.System.Object>) throws -> dotnet.System.IAsyncResult {
        var __thrown : NullableHandle = nil;
        let __return = System_IO_Compression_BrotliStream_IAsyncResult__BeginWrite_0__5__u8Array_i32_i32_AsyncCallback_Object(&__thrown, self.get_handle(), buffer.get_handle(), offset, count, asyncCallback?.get_handle() ?? nil, asyncState?.get_handle() ?? nil);
        if let __ex =  __thrown {
            throw dotnet.System.Exception(hndl: __ex);
        } else {
        return dotnet.System.IAsyncResult(hndl : __return);
        }
    }
    // delegate closure overload
    public func BeginWrite(buffer : dotnet.System_Arr<Swift.UInt8>, offset : Swift.Int32, count : Swift.Int32, asyncCallback : @escaping (dotnet.System.IAsyncResult) throws -> Void, asyncState : Optional<dotnet.System.Object>) throws -> dotnet.System.IAsyncResult {
        let del_asyncCallback = try dotnet.System.AsyncCallback(asyncCallback);
        return try BeginWrite(buffer: buffer, offset: offset, count: count, asyncCallback: del_asyncCallback, asyncState: asyncState);
    }
    // System.Threading.Tasks.ValueTask DisposeAsync()
// docid: M:System.IO.Compression.BrotliStream.DisposeAsync
    public override func DisposeAsync() throws -> dotnet.System.Threading.Tasks.ValueTask {
        var __thrown : NullableHandle = nil;
        let __return = System_IO_Compression_BrotliStream_ValueTask__DisposeAsync_0__0(&__thrown, self.get_handle());
        if let __ex =  __thrown {
            throw dotnet.System.Exception(hndl: __ex);
        } else {
        return dotnet.System.Threading.Tasks.ValueTask(hndl : __return);
        }
    }
    // System.Int32 EndRead(System.IAsyncResult)
// docid: M:System.IO.Compression.BrotliStream.EndRead(System.IAsyncResult)
    public override func EndRead(asyncResult : dotnet.System.IAsyncResult) throws -> Swift.Int32 {
        var __thrown : NullableHandle = nil;
        let __return = System_IO_Compression_BrotliStream_i32__EndRead_0__1__IAsyncResult(&__thrown, self.get_handle(), asyncResult.get_handle());
        if let __ex =  __thrown {
            throw dotnet.System.Exception(hndl: __ex);
        } else {
        return __return;
        }
    }
    // void EndWrite(System.IAsyncResult)
// docid: M:System.IO.Compression.BrotliStream.EndWrite(System.IAsyncResult)
    public override func EndWrite(asyncResult : dotnet.System.IAsyncResult) throws {
        var __thrown : NullableHandle = nil;
        System_IO_Compression_BrotliStream_void__EndWrite_0__1__IAsyncResult(&__thrown, self.get_handle(), asyncResult.get_handle());
        if let __ex =  __thrown {
            throw dotnet.System.Exception(hndl: __ex);
        } else {
            return;
        }
    }
    // void Flush()
// docid: M:System.IO.Compression.BrotliStream.Flush
    public override func Flush() throws {
        var __thrown : NullableHandle = nil;
        System_IO_Compression_BrotliStream_void__Flush_0__0(&__thrown, self.get_handle());
        if let __ex =  __thrown {
            throw dotnet.System.Exception(hndl: __ex);
        } else {
            return;
        }
    }
    // System.Threading.Tasks.Task FlushAsync(System.Threading.CancellationToken)
// docid: M:System.IO.Compression.BrotliStream.FlushAsync(System.Threading.CancellationToken)
    public override func FlushAsync(cancellationToken : dotnet.System.Threading.CancellationToken) async throws {
        var __thrown : NullableHandle = nil;
        let __return = System_IO_Compression_BrotliStream_Task__FlushAsync_0__1__CancellationToken(&__thrown, self.get_handle(), cancellationToken.get_handle());
        if let __ex =  __thrown {
            throw dotnet.System.Exception(hndl: __ex);
        } else {
        return try await dotnet.System.Threading.Tasks.Task(hndl: __return).ToAsync();
        }
    }
    // System.Int32 Read(System.Byte[], System.Int32, System.Int32)
// docid: M:System.IO.Compression.BrotliStream.Read(System.Byte[],System.Int32,System.Int32)
    public override func Read(buffer : dotnet.System_Arr<Swift.UInt8>, offset : Swift.Int32, count : Swift.Int32) throws -> Swift.Int32 {
        var __thrown : NullableHandle = nil;
        let __return = System_IO_Compression_BrotliStream_i32__Read_0__3__u8Array_i32_i32(&__thrown, self.get_handle(), buffer.get_handle(), offset, count);
        if let __ex =  __thrown {
            throw dotnet.System.Exception(hndl: __ex);
        } else {
        return __return;
        }
    }
// TODO COPE (write_all_methods) (span) System.Int32 Read(System.Span<System.Byte>)
    // System.Threading.Tasks.Task<System.Int32> ReadAsync(System.Byte[], System.Int32, System.Int32, System.Threading.CancellationToken)
// docid: M:System.IO.Compression.BrotliStream.ReadAsync(System.Byte[],System.Int32,System.Int32,System.Threading.CancellationToken)
    public override func ReadAsync(buffer : dotnet.System_Arr<Swift.UInt8>, offset : Swift.Int32, count : Swift.Int32, cancellationToken : dotnet.System.Threading.CancellationToken) async throws -> Swift.Int32 {
        var __thrown : NullableHandle = nil;
        let __return = System_IO_Compression_BrotliStream_System_Threading_Tasks_Task_i32___ReadAsync_0__4__u8Array_i32_i32_CancellationToken(&__thrown, self.get_handle(), buffer.get_handle(), offset, count, cancellationToken.get_handle());
        if let __ex =  __thrown {
            throw dotnet.System.Exception(hndl: __ex);
        } else {
        return try await dotnet.System.Threading.Tasks.Task_1(hndl: __return).ToAsync();
        }
    }
    // System.Threading.Tasks.ValueTask<System.Int32> ReadAsync(System.Memory<System.Byte>, System.Threading.CancellationToken)
// docid: M:System.IO.Compression.BrotliStream.ReadAsync(System.Memory{System.Byte},System.Threading.CancellationToken)
    public override func ReadAsync(buffer : dotnet.System.Memory_1<Swift.UInt8>, cancellationToken : dotnet.System.Threading.CancellationToken = System.Threading.CancellationToken.None) throws -> dotnet.System.Threading.Tasks.ValueTask_1<Swift.Int32> {
        var __thrown : NullableHandle = nil;
        let __return = System_IO_Compression_BrotliStream_System_Threading_Tasks_ValueTask_i32___ReadAsync_0__2__System_Memory_u8__CancellationToken(&__thrown, self.get_handle(), buffer.get_handle(), cancellationToken.get_handle());
        if let __ex =  __thrown {
            throw dotnet.System.Exception(hndl: __ex);
        } else {
        return dotnet.System.Threading.Tasks.ValueTask_1(hndl : __return);
        }
    }
    // System.Int32 ReadByte()
// docid: M:System.IO.Compression.BrotliStream.ReadByte
    public override func ReadByte() throws -> Swift.Int32 {
        var __thrown : NullableHandle = nil;
        let __return = System_IO_Compression_BrotliStream_i32__ReadByte_0__0(&__thrown, self.get_handle());
        if let __ex =  __thrown {
            throw dotnet.System.Exception(hndl: __ex);
        } else {
        return __return;
        }
    }
    // System.Int64 Seek(System.Int64, System.IO.SeekOrigin)
// docid: M:System.IO.Compression.BrotliStream.Seek(System.Int64,System.IO.SeekOrigin)
    public override func Seek(offset : Swift.Int64, origin : dotnet.System.IO.SeekOrigin) throws -> Swift.Int64 {
        var __thrown : NullableHandle = nil;
        let __return = System_IO_Compression_BrotliStream_i64__Seek_0__2__i64_SeekOrigin(&__thrown, self.get_handle(), offset, origin.get_value());
        if let __ex =  __thrown {
            throw dotnet.System.Exception(hndl: __ex);
        } else {
        return __return;
        }
    }
    // void SetLength(System.Int64)
// docid: M:System.IO.Compression.BrotliStream.SetLength(System.Int64)
    public override func SetLength(value : Swift.Int64) throws {
        var __thrown : NullableHandle = nil;
        System_IO_Compression_BrotliStream_void__SetLength_0__1__i64(&__thrown, self.get_handle(), value);
        if let __ex =  __thrown {
            throw dotnet.System.Exception(hndl: __ex);
        } else {
            return;
        }
    }
    // void Write(System.Byte[], System.Int32, System.Int32)
// docid: M:System.IO.Compression.BrotliStream.Write(System.Byte[],System.Int32,System.Int32)
    public override func Write(buffer : dotnet.System_Arr<Swift.UInt8>, offset : Swift.Int32, count : Swift.Int32) throws {
        var __thrown : NullableHandle = nil;
        System_IO_Compression_BrotliStream_void__Write_0__3__u8Array_i32_i32(&__thrown, self.get_handle(), buffer.get_handle(), offset, count);
        if let __ex =  __thrown {
            throw dotnet.System.Exception(hndl: __ex);
        } else {
            return;
        }
    }
// TODO COPE (write_all_methods) (span) void Write(System.ReadOnlySpan<System.Byte>)
    // System.Threading.Tasks.Task WriteAsync(System.Byte[], System.Int32, System.Int32, System.Threading.CancellationToken)
// docid: M:System.IO.Compression.BrotliStream.WriteAsync(System.Byte[],System.Int32,System.Int32,System.Threading.CancellationToken)
    public override func WriteAsync(buffer : dotnet.System_Arr<Swift.UInt8>, offset : Swift.Int32, count : Swift.Int32, cancellationToken : dotnet.System.Threading.CancellationToken) async throws {
        var __thrown : NullableHandle = nil;
        let __return = System_IO_Compression_BrotliStream_Task__WriteAsync_0__4__u8Array_i32_i32_CancellationToken(&__thrown, self.get_handle(), buffer.get_handle(), offset, count, cancellationToken.get_handle());
        if let __ex =  __thrown {
            throw dotnet.System.Exception(hndl: __ex);
        } else {
        return try await dotnet.System.Threading.Tasks.Task(hndl: __return).ToAsync();
        }
    }
    // System.Threading.Tasks.ValueTask WriteAsync(System.ReadOnlyMemory<System.Byte>, System.Threading.CancellationToken)
// docid: M:System.IO.Compression.BrotliStream.WriteAsync(System.ReadOnlyMemory{System.Byte},System.Threading.CancellationToken)
    public override func WriteAsync(buffer : dotnet.System.ReadOnlyMemory_1<Swift.UInt8>, cancellationToken : dotnet.System.Threading.CancellationToken = System.Threading.CancellationToken.None) throws -> dotnet.System.Threading.Tasks.ValueTask {
        var __thrown : NullableHandle = nil;
        let __return = System_IO_Compression_BrotliStream_ValueTask__WriteAsync_0__2__System_ReadOnlyMemory_u8__CancellationToken(&__thrown, self.get_handle(), buffer.get_handle(), cancellationToken.get_handle());
        if let __ex =  __thrown {
            throw dotnet.System.Exception(hndl: __ex);
        } else {
        return dotnet.System.Threading.Tasks.ValueTask(hndl : __return);
        }
    }
    // void WriteByte(System.Byte)
// docid: M:System.IO.Compression.BrotliStream.WriteByte(System.Byte)
    public override func WriteByte(value : Swift.UInt8) throws {
        var __thrown : NullableHandle = nil;
        System_IO_Compression_BrotliStream_void__WriteByte_0__1__u8(&__thrown, self.get_handle(), value);
        if let __ex =  __thrown {
            throw dotnet.System.Exception(hndl: __ex);
        } else {
            return;
        }
    }
    // [IsSpecialName] System.IO.Stream get_BaseStream()
// docid: M:System.IO.Compression.BrotliStream.get_BaseStream
    public func get_BaseStream() throws -> dotnet.System.IO.Stream {
        var __thrown : NullableHandle = nil;
        let __return = System_IO_Compression_BrotliStream_Stream__get_BaseStream_0__0(&__thrown, self.get_handle());
        if let __ex =  __thrown {
            throw dotnet.System.Exception(hndl: __ex);
        } else {
        return dotnet.System.IO.Stream(hndl : __return);
        }
    }
    // [IsSpecialName] bool get_CanRead()
// docid: M:System.IO.Compression.BrotliStream.get_CanRead
    public override func get_CanRead() throws -> Bool {
        var __thrown : NullableHandle = nil;
        let __return = System_IO_Compression_BrotliStream_bool__get_CanRead_0__0(&__thrown, self.get_handle());
        if let __ex =  __thrown {
            throw dotnet.System.Exception(hndl: __ex);
        } else {
        return (__return) != 0;
        }
    }
    // [IsSpecialName] bool get_CanSeek()
// docid: M:System.IO.Compression.BrotliStream.get_CanSeek
    public override func get_CanSeek() throws -> Bool {
        var __thrown : NullableHandle = nil;
        let __return = System_IO_Compression_BrotliStream_bool__get_CanSeek_0__0(&__thrown, self.get_handle());
        if let __ex =  __thrown {
            throw dotnet.System.Exception(hndl: __ex);
        } else {
        return (__return) != 0;
        }
    }
    // [IsSpecialName] bool get_CanWrite()
// docid: M:System.IO.Compression.BrotliStream.get_CanWrite
    public override func get_CanWrite() throws -> Bool {
        var __thrown : NullableHandle = nil;
        let __return = System_IO_Compression_BrotliStream_bool__get_CanWrite_0__0(&__thrown, self.get_handle());
        if let __ex =  __thrown {
            throw dotnet.System.Exception(hndl: __ex);
        } else {
        return (__return) != 0;
        }
    }
    // [IsSpecialName] System.Int64 get_Length()
// docid: M:System.IO.Compression.BrotliStream.get_Length
    public override func get_Length() throws -> Swift.Int64 {
        var __thrown : NullableHandle = nil;
        let __return = System_IO_Compression_BrotliStream_i64__get_Length_0__0(&__thrown, self.get_handle());
        if let __ex =  __thrown {
            throw dotnet.System.Exception(hndl: __ex);
        } else {
        return __return;
        }
    }
    // [IsSpecialName] System.Int64 get_Position()
// docid: M:System.IO.Compression.BrotliStream.get_Position
    public override func get_Position() throws -> Swift.Int64 {
        var __thrown : NullableHandle = nil;
        let __return = System_IO_Compression_BrotliStream_i64__get_Position_0__0(&__thrown, self.get_handle());
        if let __ex =  __thrown {
            throw dotnet.System.Exception(hndl: __ex);
        } else {
        return __return;
        }
    }
    // [IsSpecialName] void set_Position(System.Int64)
// docid: M:System.IO.Compression.BrotliStream.set_Position(System.Int64)
    public override func set_Position(value : Swift.Int64) throws {
        var __thrown : NullableHandle = nil;
        System_IO_Compression_BrotliStream_void__set_Position_0__1__i64(&__thrown, self.get_handle(), value);
        if let __ex =  __thrown {
            throw dotnet.System.Exception(hndl: __ex);
        } else {
            return;
        }
    }
    public var BaseStream : dotnet.System.IO.Stream {
        get {
            return try! get_BaseStream();
        }
    }
    public override var CanRead : Bool {
        get {
            return try! get_CanRead();
        }
    }
    public override var CanSeek : Bool {
        get {
            return try! get_CanSeek();
        }
    }
    public override var CanWrite : Bool {
        get {
            return try! get_CanWrite();
        }
    }
    public override var Length : Swift.Int64 {
        get {
            return try! get_Length();
        }
    }
    public override var Position : Swift.Int64 {
        get {
            return try! get_Position();
        }
        set(v) {
            return try! set_Position(value: v);
        }
    }
} // BrotliStream


}



