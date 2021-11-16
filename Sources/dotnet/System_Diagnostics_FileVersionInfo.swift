// this file is automatically generated with SourceGear Bridge

import jumptable_dotnet;

// System
// System.Diagnostics
extension System.Diagnostics {
// type: System.Diagnostics.FileVersionInfo
    /**
    Provides version information for a physical file on disk.

    */
public final class FileVersionInfo
    :
    dotnet.System.Object
{
    public class override func get_type_handle() -> TypeHandle {
        return System_Diagnostics_FileVersionInfo_get_type_handle();
    }
    public class override func AsType() -> dotnet.System.Type_ {
        return dotnet.System.Type_(hndl: __copy_handle(get_type_handle()));
    }
    public required init(hndl: NonnullHandle) { super.init(hndl: hndl); }
    public required init(gval: GVal) { super.init(gval: gval); }
    // System.Diagnostics.FileVersionInfo GetVersionInfo(System.String)
// docid: M:System.Diagnostics.FileVersionInfo.GetVersionInfo(System.String)
    /**
    Returns a  representing the version information associated with the specified file.

    - Parameter fileName: The fully qualified path and name of the file to retrieve the version information for.
    - Returns: A  containing information about the file. If the file did not contain version information, the  contains only the name of the file requested.

    */
    public class func GetVersionInfo(fileName : dotnet.System.String) throws -> dotnet.System.Diagnostics.FileVersionInfo {
        var __thrown : NullableHandle = nil;
        let __return = System_Diagnostics_FileVersionInfo_FileVersionInfo__GetVersionInfo_0__1__String(&__thrown, fileName.get_handle());
        if let __ex =  __thrown {
            throw dotnet.System.Exception(hndl: __ex);
        } else {
        return dotnet.System.Diagnostics.FileVersionInfo(hndl : __return);
        }
    }
    // System.String ToString()
// docid: M:System.Diagnostics.FileVersionInfo.ToString
    /**
    Returns a partial list of properties in the  and their values.

    - Returns: A list of the following properties in this class and their values:  
  
 , , , , , , , , , , , ,  
  
 .  
  
 If the file did not contain version information, this list will contain only the name of the requested file. Boolean values will be , and all other entries will be .

    */
    public override func ToString() throws -> dotnet.System.String {
        var __thrown : NullableHandle = nil;
        let __return = System_Diagnostics_FileVersionInfo_String__ToString_0__0(&__thrown, self.get_handle());
        if let __ex =  __thrown {
            throw dotnet.System.Exception(hndl: __ex);
        } else {
        return dotnet.System.String(hndl : __return);
        }
    }
    // [IsSpecialName] System.String get_Comments()
// docid: M:System.Diagnostics.FileVersionInfo.get_Comments
    public func get_Comments() throws -> Optional<dotnet.System.String> {
        var __thrown : NullableHandle = nil;
        let __return = System_Diagnostics_FileVersionInfo_String__get_Comments_0__0(&__thrown, self.get_handle());
        if let __ex =  __thrown {
            throw dotnet.System.Exception(hndl: __ex);
        } else {
        if let __ret_unwrapped = __return {
            return dotnet.System.String(hndl : __ret_unwrapped);
        } else {
            return nil;
        }
        }
    }
    // [IsSpecialName] System.String get_CompanyName()
// docid: M:System.Diagnostics.FileVersionInfo.get_CompanyName
    public func get_CompanyName() throws -> Optional<dotnet.System.String> {
        var __thrown : NullableHandle = nil;
        let __return = System_Diagnostics_FileVersionInfo_String__get_CompanyName_0__0(&__thrown, self.get_handle());
        if let __ex =  __thrown {
            throw dotnet.System.Exception(hndl: __ex);
        } else {
        if let __ret_unwrapped = __return {
            return dotnet.System.String(hndl : __ret_unwrapped);
        } else {
            return nil;
        }
        }
    }
    // [IsSpecialName] System.Int32 get_FileBuildPart()
// docid: M:System.Diagnostics.FileVersionInfo.get_FileBuildPart
    public func get_FileBuildPart() throws -> Swift.Int32 {
        var __thrown : NullableHandle = nil;
        let __return = System_Diagnostics_FileVersionInfo_i32__get_FileBuildPart_0__0(&__thrown, self.get_handle());
        if let __ex =  __thrown {
            throw dotnet.System.Exception(hndl: __ex);
        } else {
        return __return;
        }
    }
    // [IsSpecialName] System.String get_FileDescription()
// docid: M:System.Diagnostics.FileVersionInfo.get_FileDescription
    public func get_FileDescription() throws -> Optional<dotnet.System.String> {
        var __thrown : NullableHandle = nil;
        let __return = System_Diagnostics_FileVersionInfo_String__get_FileDescription_0__0(&__thrown, self.get_handle());
        if let __ex =  __thrown {
            throw dotnet.System.Exception(hndl: __ex);
        } else {
        if let __ret_unwrapped = __return {
            return dotnet.System.String(hndl : __ret_unwrapped);
        } else {
            return nil;
        }
        }
    }
    // [IsSpecialName] System.Int32 get_FileMajorPart()
// docid: M:System.Diagnostics.FileVersionInfo.get_FileMajorPart
    public func get_FileMajorPart() throws -> Swift.Int32 {
        var __thrown : NullableHandle = nil;
        let __return = System_Diagnostics_FileVersionInfo_i32__get_FileMajorPart_0__0(&__thrown, self.get_handle());
        if let __ex =  __thrown {
            throw dotnet.System.Exception(hndl: __ex);
        } else {
        return __return;
        }
    }
    // [IsSpecialName] System.Int32 get_FileMinorPart()
// docid: M:System.Diagnostics.FileVersionInfo.get_FileMinorPart
    public func get_FileMinorPart() throws -> Swift.Int32 {
        var __thrown : NullableHandle = nil;
        let __return = System_Diagnostics_FileVersionInfo_i32__get_FileMinorPart_0__0(&__thrown, self.get_handle());
        if let __ex =  __thrown {
            throw dotnet.System.Exception(hndl: __ex);
        } else {
        return __return;
        }
    }
    // [IsSpecialName] System.String get_FileName()
// docid: M:System.Diagnostics.FileVersionInfo.get_FileName
    public func get_FileName() throws -> dotnet.System.String {
        var __thrown : NullableHandle = nil;
        let __return = System_Diagnostics_FileVersionInfo_String__get_FileName_0__0(&__thrown, self.get_handle());
        if let __ex =  __thrown {
            throw dotnet.System.Exception(hndl: __ex);
        } else {
        return dotnet.System.String(hndl : __return);
        }
    }
    // [IsSpecialName] System.Int32 get_FilePrivatePart()
// docid: M:System.Diagnostics.FileVersionInfo.get_FilePrivatePart
    public func get_FilePrivatePart() throws -> Swift.Int32 {
        var __thrown : NullableHandle = nil;
        let __return = System_Diagnostics_FileVersionInfo_i32__get_FilePrivatePart_0__0(&__thrown, self.get_handle());
        if let __ex =  __thrown {
            throw dotnet.System.Exception(hndl: __ex);
        } else {
        return __return;
        }
    }
    // [IsSpecialName] System.String get_FileVersion()
// docid: M:System.Diagnostics.FileVersionInfo.get_FileVersion
    public func get_FileVersion() throws -> Optional<dotnet.System.String> {
        var __thrown : NullableHandle = nil;
        let __return = System_Diagnostics_FileVersionInfo_String__get_FileVersion_0__0(&__thrown, self.get_handle());
        if let __ex =  __thrown {
            throw dotnet.System.Exception(hndl: __ex);
        } else {
        if let __ret_unwrapped = __return {
            return dotnet.System.String(hndl : __ret_unwrapped);
        } else {
            return nil;
        }
        }
    }
    // [IsSpecialName] System.String get_InternalName()
// docid: M:System.Diagnostics.FileVersionInfo.get_InternalName
    public func get_InternalName() throws -> Optional<dotnet.System.String> {
        var __thrown : NullableHandle = nil;
        let __return = System_Diagnostics_FileVersionInfo_String__get_InternalName_0__0(&__thrown, self.get_handle());
        if let __ex =  __thrown {
            throw dotnet.System.Exception(hndl: __ex);
        } else {
        if let __ret_unwrapped = __return {
            return dotnet.System.String(hndl : __ret_unwrapped);
        } else {
            return nil;
        }
        }
    }
    // [IsSpecialName] bool get_IsDebug()
// docid: M:System.Diagnostics.FileVersionInfo.get_IsDebug
    public func get_IsDebug() throws -> Bool {
        var __thrown : NullableHandle = nil;
        let __return = System_Diagnostics_FileVersionInfo_bool__get_IsDebug_0__0(&__thrown, self.get_handle());
        if let __ex =  __thrown {
            throw dotnet.System.Exception(hndl: __ex);
        } else {
        return (__return) != 0;
        }
    }
    // [IsSpecialName] bool get_IsPatched()
// docid: M:System.Diagnostics.FileVersionInfo.get_IsPatched
    public func get_IsPatched() throws -> Bool {
        var __thrown : NullableHandle = nil;
        let __return = System_Diagnostics_FileVersionInfo_bool__get_IsPatched_0__0(&__thrown, self.get_handle());
        if let __ex =  __thrown {
            throw dotnet.System.Exception(hndl: __ex);
        } else {
        return (__return) != 0;
        }
    }
    // [IsSpecialName] bool get_IsPreRelease()
// docid: M:System.Diagnostics.FileVersionInfo.get_IsPreRelease
    public func get_IsPreRelease() throws -> Bool {
        var __thrown : NullableHandle = nil;
        let __return = System_Diagnostics_FileVersionInfo_bool__get_IsPreRelease_0__0(&__thrown, self.get_handle());
        if let __ex =  __thrown {
            throw dotnet.System.Exception(hndl: __ex);
        } else {
        return (__return) != 0;
        }
    }
    // [IsSpecialName] bool get_IsPrivateBuild()
// docid: M:System.Diagnostics.FileVersionInfo.get_IsPrivateBuild
    public func get_IsPrivateBuild() throws -> Bool {
        var __thrown : NullableHandle = nil;
        let __return = System_Diagnostics_FileVersionInfo_bool__get_IsPrivateBuild_0__0(&__thrown, self.get_handle());
        if let __ex =  __thrown {
            throw dotnet.System.Exception(hndl: __ex);
        } else {
        return (__return) != 0;
        }
    }
    // [IsSpecialName] bool get_IsSpecialBuild()
// docid: M:System.Diagnostics.FileVersionInfo.get_IsSpecialBuild
    public func get_IsSpecialBuild() throws -> Bool {
        var __thrown : NullableHandle = nil;
        let __return = System_Diagnostics_FileVersionInfo_bool__get_IsSpecialBuild_0__0(&__thrown, self.get_handle());
        if let __ex =  __thrown {
            throw dotnet.System.Exception(hndl: __ex);
        } else {
        return (__return) != 0;
        }
    }
    // [IsSpecialName] System.String get_Language()
// docid: M:System.Diagnostics.FileVersionInfo.get_Language
    public func get_Language() throws -> Optional<dotnet.System.String> {
        var __thrown : NullableHandle = nil;
        let __return = System_Diagnostics_FileVersionInfo_String__get_Language_0__0(&__thrown, self.get_handle());
        if let __ex =  __thrown {
            throw dotnet.System.Exception(hndl: __ex);
        } else {
        if let __ret_unwrapped = __return {
            return dotnet.System.String(hndl : __ret_unwrapped);
        } else {
            return nil;
        }
        }
    }
    // [IsSpecialName] System.String get_LegalCopyright()
// docid: M:System.Diagnostics.FileVersionInfo.get_LegalCopyright
    public func get_LegalCopyright() throws -> Optional<dotnet.System.String> {
        var __thrown : NullableHandle = nil;
        let __return = System_Diagnostics_FileVersionInfo_String__get_LegalCopyright_0__0(&__thrown, self.get_handle());
        if let __ex =  __thrown {
            throw dotnet.System.Exception(hndl: __ex);
        } else {
        if let __ret_unwrapped = __return {
            return dotnet.System.String(hndl : __ret_unwrapped);
        } else {
            return nil;
        }
        }
    }
    // [IsSpecialName] System.String get_LegalTrademarks()
// docid: M:System.Diagnostics.FileVersionInfo.get_LegalTrademarks
    public func get_LegalTrademarks() throws -> Optional<dotnet.System.String> {
        var __thrown : NullableHandle = nil;
        let __return = System_Diagnostics_FileVersionInfo_String__get_LegalTrademarks_0__0(&__thrown, self.get_handle());
        if let __ex =  __thrown {
            throw dotnet.System.Exception(hndl: __ex);
        } else {
        if let __ret_unwrapped = __return {
            return dotnet.System.String(hndl : __ret_unwrapped);
        } else {
            return nil;
        }
        }
    }
    // [IsSpecialName] System.String get_OriginalFilename()
// docid: M:System.Diagnostics.FileVersionInfo.get_OriginalFilename
    public func get_OriginalFilename() throws -> Optional<dotnet.System.String> {
        var __thrown : NullableHandle = nil;
        let __return = System_Diagnostics_FileVersionInfo_String__get_OriginalFilename_0__0(&__thrown, self.get_handle());
        if let __ex =  __thrown {
            throw dotnet.System.Exception(hndl: __ex);
        } else {
        if let __ret_unwrapped = __return {
            return dotnet.System.String(hndl : __ret_unwrapped);
        } else {
            return nil;
        }
        }
    }
    // [IsSpecialName] System.String get_PrivateBuild()
// docid: M:System.Diagnostics.FileVersionInfo.get_PrivateBuild
    public func get_PrivateBuild() throws -> Optional<dotnet.System.String> {
        var __thrown : NullableHandle = nil;
        let __return = System_Diagnostics_FileVersionInfo_String__get_PrivateBuild_0__0(&__thrown, self.get_handle());
        if let __ex =  __thrown {
            throw dotnet.System.Exception(hndl: __ex);
        } else {
        if let __ret_unwrapped = __return {
            return dotnet.System.String(hndl : __ret_unwrapped);
        } else {
            return nil;
        }
        }
    }
    // [IsSpecialName] System.Int32 get_ProductBuildPart()
// docid: M:System.Diagnostics.FileVersionInfo.get_ProductBuildPart
    public func get_ProductBuildPart() throws -> Swift.Int32 {
        var __thrown : NullableHandle = nil;
        let __return = System_Diagnostics_FileVersionInfo_i32__get_ProductBuildPart_0__0(&__thrown, self.get_handle());
        if let __ex =  __thrown {
            throw dotnet.System.Exception(hndl: __ex);
        } else {
        return __return;
        }
    }
    // [IsSpecialName] System.Int32 get_ProductMajorPart()
// docid: M:System.Diagnostics.FileVersionInfo.get_ProductMajorPart
    public func get_ProductMajorPart() throws -> Swift.Int32 {
        var __thrown : NullableHandle = nil;
        let __return = System_Diagnostics_FileVersionInfo_i32__get_ProductMajorPart_0__0(&__thrown, self.get_handle());
        if let __ex =  __thrown {
            throw dotnet.System.Exception(hndl: __ex);
        } else {
        return __return;
        }
    }
    // [IsSpecialName] System.Int32 get_ProductMinorPart()
// docid: M:System.Diagnostics.FileVersionInfo.get_ProductMinorPart
    public func get_ProductMinorPart() throws -> Swift.Int32 {
        var __thrown : NullableHandle = nil;
        let __return = System_Diagnostics_FileVersionInfo_i32__get_ProductMinorPart_0__0(&__thrown, self.get_handle());
        if let __ex =  __thrown {
            throw dotnet.System.Exception(hndl: __ex);
        } else {
        return __return;
        }
    }
    // [IsSpecialName] System.String get_ProductName()
// docid: M:System.Diagnostics.FileVersionInfo.get_ProductName
    public func get_ProductName() throws -> Optional<dotnet.System.String> {
        var __thrown : NullableHandle = nil;
        let __return = System_Diagnostics_FileVersionInfo_String__get_ProductName_0__0(&__thrown, self.get_handle());
        if let __ex =  __thrown {
            throw dotnet.System.Exception(hndl: __ex);
        } else {
        if let __ret_unwrapped = __return {
            return dotnet.System.String(hndl : __ret_unwrapped);
        } else {
            return nil;
        }
        }
    }
    // [IsSpecialName] System.Int32 get_ProductPrivatePart()
// docid: M:System.Diagnostics.FileVersionInfo.get_ProductPrivatePart
    public func get_ProductPrivatePart() throws -> Swift.Int32 {
        var __thrown : NullableHandle = nil;
        let __return = System_Diagnostics_FileVersionInfo_i32__get_ProductPrivatePart_0__0(&__thrown, self.get_handle());
        if let __ex =  __thrown {
            throw dotnet.System.Exception(hndl: __ex);
        } else {
        return __return;
        }
    }
    // [IsSpecialName] System.String get_ProductVersion()
// docid: M:System.Diagnostics.FileVersionInfo.get_ProductVersion
    public func get_ProductVersion() throws -> Optional<dotnet.System.String> {
        var __thrown : NullableHandle = nil;
        let __return = System_Diagnostics_FileVersionInfo_String__get_ProductVersion_0__0(&__thrown, self.get_handle());
        if let __ex =  __thrown {
            throw dotnet.System.Exception(hndl: __ex);
        } else {
        if let __ret_unwrapped = __return {
            return dotnet.System.String(hndl : __ret_unwrapped);
        } else {
            return nil;
        }
        }
    }
    // [IsSpecialName] System.String get_SpecialBuild()
// docid: M:System.Diagnostics.FileVersionInfo.get_SpecialBuild
    public func get_SpecialBuild() throws -> Optional<dotnet.System.String> {
        var __thrown : NullableHandle = nil;
        let __return = System_Diagnostics_FileVersionInfo_String__get_SpecialBuild_0__0(&__thrown, self.get_handle());
        if let __ex =  __thrown {
            throw dotnet.System.Exception(hndl: __ex);
        } else {
        if let __ret_unwrapped = __return {
            return dotnet.System.String(hndl : __ret_unwrapped);
        } else {
            return nil;
        }
        }
    }
    /**
    Gets the comments associated with the file.

    */
    public var Comments : Optional<dotnet.System.String> {
        get {
            return try! get_Comments();
        }
    }
    /**
    Gets the name of the company that produced the file.

    */
    public var CompanyName : Optional<dotnet.System.String> {
        get {
            return try! get_CompanyName();
        }
    }
    /**
    Gets the build number of the file.

    */
    public var FileBuildPart : Swift.Int32 {
        get {
            return try! get_FileBuildPart();
        }
    }
    /**
    Gets the description of the file.

    */
    public var FileDescription : Optional<dotnet.System.String> {
        get {
            return try! get_FileDescription();
        }
    }
    /**
    Gets the major part of the version number.

    */
    public var FileMajorPart : Swift.Int32 {
        get {
            return try! get_FileMajorPart();
        }
    }
    /**
    Gets the minor part of the version number of the file.

    */
    public var FileMinorPart : Swift.Int32 {
        get {
            return try! get_FileMinorPart();
        }
    }
    /**
    Gets the name of the file that this instance of  describes.

    */
    public var FileName : dotnet.System.String {
        get {
            return try! get_FileName();
        }
    }
    /**
    Gets the file private part number.

    */
    public var FilePrivatePart : Swift.Int32 {
        get {
            return try! get_FilePrivatePart();
        }
    }
    /**
    Gets the file version number.

    */
    public var FileVersion : Optional<dotnet.System.String> {
        get {
            return try! get_FileVersion();
        }
    }
    /**
    Gets the internal name of the file, if one exists.

    */
    public var InternalName : Optional<dotnet.System.String> {
        get {
            return try! get_InternalName();
        }
    }
    /**
    Gets a value that specifies whether the file contains debugging information or is compiled with debugging features enabled.

    */
    public var IsDebug : Bool {
        get {
            return try! get_IsDebug();
        }
    }
    /**
    Gets a value that specifies whether the file has been modified and is not identical to the original shipping file of the same version number.

    */
    public var IsPatched : Bool {
        get {
            return try! get_IsPatched();
        }
    }
    /**
    Gets a value that specifies whether the file is a development version, rather than a commercially released product.

    */
    public var IsPreRelease : Bool {
        get {
            return try! get_IsPreRelease();
        }
    }
    /**
    Gets a value that specifies whether the file was built using standard release procedures.

    */
    public var IsPrivateBuild : Bool {
        get {
            return try! get_IsPrivateBuild();
        }
    }
    /**
    Gets a value that specifies whether the file is a special build.

    */
    public var IsSpecialBuild : Bool {
        get {
            return try! get_IsSpecialBuild();
        }
    }
    /**
    Gets the default language string for the version info block.

    */
    public var Language : Optional<dotnet.System.String> {
        get {
            return try! get_Language();
        }
    }
    /**
    Gets all copyright notices that apply to the specified file.

    */
    public var LegalCopyright : Optional<dotnet.System.String> {
        get {
            return try! get_LegalCopyright();
        }
    }
    /**
    Gets the trademarks and registered trademarks that apply to the file.

    */
    public var LegalTrademarks : Optional<dotnet.System.String> {
        get {
            return try! get_LegalTrademarks();
        }
    }
    /**
    Gets the name the file was created with.

    */
    public var OriginalFilename : Optional<dotnet.System.String> {
        get {
            return try! get_OriginalFilename();
        }
    }
    /**
    Gets information about a private version of the file.

    */
    public var PrivateBuild : Optional<dotnet.System.String> {
        get {
            return try! get_PrivateBuild();
        }
    }
    /**
    Gets the build number of the product this file is associated with.

    */
    public var ProductBuildPart : Swift.Int32 {
        get {
            return try! get_ProductBuildPart();
        }
    }
    /**
    Gets the major part of the version number for the product this file is associated with.

    */
    public var ProductMajorPart : Swift.Int32 {
        get {
            return try! get_ProductMajorPart();
        }
    }
    /**
    Gets the minor part of the version number for the product the file is associated with.

    */
    public var ProductMinorPart : Swift.Int32 {
        get {
            return try! get_ProductMinorPart();
        }
    }
    /**
    Gets the name of the product this file is distributed with.

    */
    public var ProductName : Optional<dotnet.System.String> {
        get {
            return try! get_ProductName();
        }
    }
    /**
    Gets the private part number of the product this file is associated with.

    */
    public var ProductPrivatePart : Swift.Int32 {
        get {
            return try! get_ProductPrivatePart();
        }
    }
    /**
    Gets the version of the product this file is distributed with.

    */
    public var ProductVersion : Optional<dotnet.System.String> {
        get {
            return try! get_ProductVersion();
        }
    }
    /**
    Gets the special build information for the file.

    */
    public var SpecialBuild : Optional<dotnet.System.String> {
        get {
            return try! get_SpecialBuild();
        }
    }
} // FileVersionInfo


}


