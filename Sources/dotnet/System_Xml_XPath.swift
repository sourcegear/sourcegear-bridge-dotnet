// this file is automatically generated with SourceGear Bridge

import jumptable_dotnet;

// System
// System.Xml
// System.Xml.XPath
extension System.Xml.XPath {
// type: System.Xml.XPath.XPathDocument
    /**
    Provides a fast, read-only, in-memory representation of an XML document by using the XPath data model.

    */
open class XPathDocument
    :
    dotnet.System.Object,
    System_Xml_XPath_IXPathNavigable
{
    open class override func get_type_handle() -> TypeHandle {
        return System_Xml_XPath_XPathDocument_get_type_handle();
    }
    open class override func AsType() -> dotnet.System.Type_ {
        return dotnet.System.Type_(hndl: __copy_handle(get_type_handle()));
    }
    public required init(hndl: NonnullHandle) { super.init(hndl: hndl); }
    public required init(gval: GVal) { super.init(gval: gval); }
    public convenience init (cast h_cast: NonnullHandle) throws {
        var __thrown : NullableHandle = nil;
        let h_res = System_Xml_XPath_XPathDocument_cast(&__thrown,h_cast);
        if let __ex = __thrown {
            throw dotnet.System.Exception(hndl: __ex);
        } else {
            self.init(hndl: h_res);
        }
    }
    // .ctor(System.IO.Stream)
// docid: M:System.Xml.XPath.XPathDocument.#ctor(System.IO.Stream)
    /**
    Initializes a new instance of the  class from the XML data in the specified  object.

    - Parameter stream: The  object that contains the XML data.
    */
    public init(stream : dotnet.System.IO.Stream) throws {
        var __thrown : NullableHandle = nil;
        let h = System_Xml_XPath_XPathDocument_ctor_0__1__Stream(&__thrown, stream.get_handle());
        if let __ex = __thrown {
            throw dotnet.System.Exception(hndl: __ex);
        } else {
            super.init(hndl: h);
        }
    }
    // .ctor(System.IO.TextReader)
// docid: M:System.Xml.XPath.XPathDocument.#ctor(System.IO.TextReader)
    /**
    Initializes a new instance of the  class from the XML data that is contained in the specified  object.

    - Parameter textReader: The  object that contains the XML data.
    */
    public init(textReader : dotnet.System.IO.TextReader) throws {
        var __thrown : NullableHandle = nil;
        let h = System_Xml_XPath_XPathDocument_ctor_0__1__TextReader(&__thrown, textReader.get_handle());
        if let __ex = __thrown {
            throw dotnet.System.Exception(hndl: __ex);
        } else {
            super.init(hndl: h);
        }
    }
    // .ctor(System.String)
// docid: M:System.Xml.XPath.XPathDocument.#ctor(System.String)
    /**
    Initializes a new instance of the  class from the XML data in the specified file.

    - Parameter uri: The path of the file that contains the XML data.
    */
    public init(uri : dotnet.System.String) throws {
        var __thrown : NullableHandle = nil;
        let h = System_Xml_XPath_XPathDocument_ctor_0__1__String(&__thrown, uri.get_handle());
        if let __ex = __thrown {
            throw dotnet.System.Exception(hndl: __ex);
        } else {
            super.init(hndl: h);
        }
    }
    // .ctor(System.String, System.Xml.XmlSpace)
// docid: M:System.Xml.XPath.XPathDocument.#ctor(System.String,System.Xml.XmlSpace)
    /**
    Initializes a new instance of the  class from the XML data in the file specified with the white space handling specified.

    - Parameter uri: The path of the file that contains the XML data.
    - Parameter space: An  object.
    */
    public init(uri : dotnet.System.String, space : dotnet.System.Xml.XmlSpace) throws {
        var __thrown : NullableHandle = nil;
        let h = System_Xml_XPath_XPathDocument_ctor_0__2__String_XmlSpace(&__thrown, uri.get_handle(), space.get_value());
        if let __ex = __thrown {
            throw dotnet.System.Exception(hndl: __ex);
        } else {
            super.init(hndl: h);
        }
    }
    // .ctor(System.Xml.XmlReader)
// docid: M:System.Xml.XPath.XPathDocument.#ctor(System.Xml.XmlReader)
    /**
    Initializes a new instance of the  class from the XML data that is contained in the specified  object.

    - Parameter reader: The  object that contains the XML data.
    */
    public init(reader : dotnet.System.Xml.XmlReader) throws {
        var __thrown : NullableHandle = nil;
        let h = System_Xml_XPath_XPathDocument_ctor_0__1__XmlReader(&__thrown, reader.get_handle());
        if let __ex = __thrown {
            throw dotnet.System.Exception(hndl: __ex);
        } else {
            super.init(hndl: h);
        }
    }
    // .ctor(System.Xml.XmlReader, System.Xml.XmlSpace)
// docid: M:System.Xml.XPath.XPathDocument.#ctor(System.Xml.XmlReader,System.Xml.XmlSpace)
    /**
    Initializes a new instance of the  class from the XML data that is contained in the specified  object with the specified white space handling.

    - Parameter reader: The  object that contains the XML data.
    - Parameter space: An  object.
    */
    public init(reader : dotnet.System.Xml.XmlReader, space : dotnet.System.Xml.XmlSpace) throws {
        var __thrown : NullableHandle = nil;
        let h = System_Xml_XPath_XPathDocument_ctor_0__2__XmlReader_XmlSpace(&__thrown, reader.get_handle(), space.get_value());
        if let __ex = __thrown {
            throw dotnet.System.Exception(hndl: __ex);
        } else {
            super.init(hndl: h);
        }
    }
    // System.Xml.XPath.XPathNavigator CreateNavigator()
// docid: M:System.Xml.XPath.XPathDocument.CreateNavigator
    /**
    Initializes a read-only  object for navigating through nodes in this .

    - Returns: A read-only  object.

    */
    open /* method final */ func CreateNavigator() throws -> dotnet.System.Xml.XPath.XPathNavigator {
        var __thrown : NullableHandle = nil;
        let __return = System_Xml_XPath_XPathDocument_XPathNavigator__CreateNavigator_0__0(&__thrown, self.get_handle());
        if let __ex =  __thrown {
            throw dotnet.System.Exception(hndl: __ex);
        } else {
        return dotnet.System.Xml.XPath.XPathNavigator(hndl : __return);
        }
    }
} // XPathDocument


// type: System.Xml.XPath.XPathException
    /**
    Provides the exception thrown when an error occurs while processing an XPath expression.

    */
open class XPathException
    :
    dotnet.System.SystemException
{
    open class override func get_type_handle() -> TypeHandle {
        return System_Xml_XPath_XPathException_get_type_handle();
    }
    open class override func AsType() -> dotnet.System.Type_ {
        return dotnet.System.Type_(hndl: __copy_handle(get_type_handle()));
    }
    public required init(hndl: NonnullHandle) { super.init(hndl: hndl); }
    public required init(gval: GVal) { super.init(gval: gval); }
    public convenience init (cast h_cast: NonnullHandle) throws {
        var __thrown : NullableHandle = nil;
        let h_res = System_Xml_XPath_XPathException_cast(&__thrown,h_cast);
        if let __ex = __thrown {
            throw dotnet.System.Exception(hndl: __ex);
        } else {
            self.init(hndl: h_res);
        }
    }
    // .ctor()
// docid: M:System.Xml.XPath.XPathException.#ctor
    /**
    Initializes a new instance of the  class.

    */
    public override init() throws {
        var __thrown : NullableHandle = nil;
        let h = System_Xml_XPath_XPathException_ctor_0__0(&__thrown);
        if let __ex = __thrown {
            throw dotnet.System.Exception(hndl: __ex);
        } else {
            super.init(hndl: h);
        }
    }
    // .ctor(System.String)
// docid: M:System.Xml.XPath.XPathException.#ctor(System.String)
    /**
    Initializes a new instance of the  class with the specified exception message.

    - Parameter message: The description of the error condition.
    */
    public override init(message : Optional<dotnet.System.String>) throws {
        var __thrown : NullableHandle = nil;
        let h = System_Xml_XPath_XPathException_ctor_0__1__String(&__thrown, message?.get_handle() ?? nil);
        if let __ex = __thrown {
            throw dotnet.System.Exception(hndl: __ex);
        } else {
            super.init(hndl: h);
        }
    }
    // .ctor(System.String, System.Exception)
// docid: M:System.Xml.XPath.XPathException.#ctor(System.String,System.Exception)
    /**
    Initializes a new instance of the  class using the specified exception message and  object.

    - Parameter message: The description of the error condition.
    - Parameter innerException: The  that threw the , if any. This value can be .
    */
    public override init(message : Optional<dotnet.System.String>, innerException : Optional<dotnet.System.Exception>) throws {
        var __thrown : NullableHandle = nil;
        let h = System_Xml_XPath_XPathException_ctor_0__2__String_Exception(&__thrown, message?.get_handle() ?? nil, innerException?.get_handle() ?? nil);
        if let __ex = __thrown {
            throw dotnet.System.Exception(hndl: __ex);
        } else {
            super.init(hndl: h);
        }
    }
    // void GetObjectData(System.Runtime.Serialization.SerializationInfo, System.Runtime.Serialization.StreamingContext)
// docid: M:System.Xml.XPath.XPathException.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
    /**
    Streams all the  properties into the  class for the specified .

    - Parameter info: The  object.
    - Parameter context: The  object.
    */
    open override func GetObjectData(info : dotnet.System.Runtime.Serialization.SerializationInfo, context : dotnet.System.Runtime.Serialization.StreamingContext) throws {
        var __thrown : NullableHandle = nil;
        System_Xml_XPath_XPathException_void__GetObjectData_0__2__SerializationInfo_StreamingContext(&__thrown, self.get_handle(), info.get_handle(), context.get_handle());
        if let __ex =  __thrown {
            throw dotnet.System.Exception(hndl: __ex);
        } else {
            return;
        }
    }
    // [IsSpecialName] System.String get_Message()
// docid: M:System.Xml.XPath.XPathException.get_Message
    open override func get_Message() throws -> dotnet.System.String {
        var __thrown : NullableHandle = nil;
        let __return = System_Xml_XPath_XPathException_String__get_Message_0__0(&__thrown, self.get_handle());
        if let __ex =  __thrown {
            throw dotnet.System.Exception(hndl: __ex);
        } else {
        return dotnet.System.String(hndl : __return);
        }
    }
    /**
    Gets the description of the error condition for this exception.

    */
    open override var Message : dotnet.System.String {
        get {
            return try! get_Message();
        }
    }
} // XPathException


}



