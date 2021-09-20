
public typealias NonnullHandle = UnsafeRawPointer;
public typealias NullableHandle = UnsafeRawPointer?;
public typealias TypeHandle = UnsafeRawPointer; // aka const void _Nonnull *
public typealias GVal = Swift.UInt64;

public protocol SGBridgeGetHandle {
    func get_handle() -> NonnullHandle;
}

public protocol SGBridgeGenericValue {
    static func get_type_handle() -> TypeHandle; // TODO probably need this to be throws
    init(gval: GVal); // TODO probably need this to be throws, because gval-to-nonnull-ptr
    func to_gval() -> GVal;
    func dup_gval() -> GVal;
}

