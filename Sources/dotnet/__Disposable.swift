
#if not
public func Using<T : System.IDisposable>(_ x: T, _ closure: (T) throws -> ()) throws {
    try closure(x);
    defer
    {
        try x.Dispose();
    }
}
#endif

