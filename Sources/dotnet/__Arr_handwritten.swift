// Copyright 2021 SourceGear

import jumptable_dotnet;

extension dotnet.System.Collections.Generic.IEnumerable_1 {
    public convenience init(array a: dotnet.System_Arr<T>) {
        self.init(hndl: __copy_handle(a.get_handle()));
    }
}

extension dotnet.System_Arr {
    public convenience init(array elements: [T]) {
        var __thrown : NullableHandle = nil;
        let n = elements.count;
        let __return = System_Arr_create(&__thrown, T.get_type_handle(), Swift.Int32(n));
        // TODO check thrown
        var i : Swift.Int32 = 0;
        for v in elements {
            System_Arr_set_item(&__thrown, T.get_type_handle(), __return, i, v.to_gval()); // TODO need dup_ffi here?
            // TODO check thrown
            i = i + 1;
        }
        self.init(hndl: __return);
    }

    // TODO not sure this is a great idea.
    // swift 5.4 subscripts cannot throw, so there is no way to propagate errors.
    public subscript(index: Swift.Int32) -> T {
        get {
            return try! self.get_item(index);
        }
        set(v) {
            return try! self.set_item(_index: index, v: v);
        }
    }

}

extension dotnet.System_Arr : Collection {
    public var startIndex : Swift.Int32 {
        get {
            return 0;
        }
    }
    public var endIndex : Swift.Int32 {
        get {
            return self.Length;
        }
    }
    public func index(after i : Swift.Int32) -> Swift.Int32 {
        return i + 1;
    }
}

