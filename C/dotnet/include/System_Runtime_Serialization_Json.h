// this file is automatically generated with SourceGear Bridge

#include <stdint.h>

#ifndef INCLUDE_System_Runtime_Serialization_Json
#define INCLUDE_System_Runtime_Serialization_Json

#ifdef __cplusplus
extern "C" {
#endif

typedef const void* _Nonnull SG_HNDL_NONNULL;
typedef const void* _Nullable SG_HNDL_NULLABLE;
typedef const void* _Nonnull TYP;
typedef uint64_t GVAL;

TYP System_Runtime_Serialization_DateTimeFormat_get_type_handle(void);

SG_HNDL_NONNULL System_Runtime_Serialization_DateTimeFormat_ctor_0__1__String(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL formatString);

SG_HNDL_NONNULL System_Runtime_Serialization_DateTimeFormat_ctor_0__2__String_IFormatProvider(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL formatString, SG_HNDL_NONNULL formatProvider);

int32_t System_Runtime_Serialization_DateTimeFormat_DateTimeStyles__get_DateTimeStyles_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

void System_Runtime_Serialization_DateTimeFormat_void__set_DateTimeStyles_0__1__DateTimeStyles(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, int32_t value);

SG_HNDL_NONNULL System_Runtime_Serialization_DateTimeFormat_IFormatProvider__get_FormatProvider_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL System_Runtime_Serialization_DateTimeFormat_String__get_FormatString_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL System_Runtime_Serialization_DateTimeFormat_cast(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __h);

TYP System_Runtime_Serialization_EmitTypeInformation_get_type_handle(void);

int32_t System_Runtime_Serialization_EmitTypeInformation_get_AsNeeded(void);

int32_t System_Runtime_Serialization_EmitTypeInformation_get_Always(void);

int32_t System_Runtime_Serialization_EmitTypeInformation_get_Never(void);

TYP System_Runtime_Serialization_Json_DataContractJsonSerializer_get_type_handle(void);

SG_HNDL_NONNULL System_Runtime_Serialization_Json_DataContractJsonSerializer_ctor_0__1__Type(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL type);

SG_HNDL_NONNULL System_Runtime_Serialization_Json_DataContractJsonSerializer_ctor_0__2__Type_System_Collections_Generic_IEnumerable_System_Type_(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL type, SG_HNDL_NULLABLE knownTypes);

SG_HNDL_NONNULL System_Runtime_Serialization_Json_DataContractJsonSerializer_ctor_0__2__Type_DataContractJsonSerializerSettings(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL type, SG_HNDL_NULLABLE settings);

SG_HNDL_NONNULL System_Runtime_Serialization_Json_DataContractJsonSerializer_ctor_0__2__Type_String(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL type, SG_HNDL_NULLABLE rootName);

SG_HNDL_NONNULL System_Runtime_Serialization_Json_DataContractJsonSerializer_ctor_0__3__Type_String_System_Collections_Generic_IEnumerable_System_Type_(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL type, SG_HNDL_NULLABLE rootName, SG_HNDL_NULLABLE knownTypes);

SG_HNDL_NONNULL System_Runtime_Serialization_Json_DataContractJsonSerializer_ctor_0__2__Type_XmlDictionaryString(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL type, SG_HNDL_NULLABLE rootName);

SG_HNDL_NONNULL System_Runtime_Serialization_Json_DataContractJsonSerializer_ctor_0__3__Type_XmlDictionaryString_System_Collections_Generic_IEnumerable_System_Type_(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL type, SG_HNDL_NULLABLE rootName, SG_HNDL_NULLABLE knownTypes);

int32_t System_Runtime_Serialization_Json_DataContractJsonSerializer_bool__IsStartObject_0__1__XmlDictionaryReader(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL reader);

int32_t System_Runtime_Serialization_Json_DataContractJsonSerializer_bool__IsStartObject_0__1__XmlReader(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL reader);

SG_HNDL_NULLABLE System_Runtime_Serialization_Json_DataContractJsonSerializer_Object__ReadObject_0__1__Stream(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL stream);

SG_HNDL_NULLABLE System_Runtime_Serialization_Json_DataContractJsonSerializer_Object__ReadObject_0__1__XmlDictionaryReader(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL reader);

SG_HNDL_NULLABLE System_Runtime_Serialization_Json_DataContractJsonSerializer_Object__ReadObject_0__2__XmlDictionaryReader_bool(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL reader, int32_t verifyObjectName);

SG_HNDL_NULLABLE System_Runtime_Serialization_Json_DataContractJsonSerializer_Object__ReadObject_0__1__XmlReader(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL reader);

SG_HNDL_NULLABLE System_Runtime_Serialization_Json_DataContractJsonSerializer_Object__ReadObject_0__2__XmlReader_bool(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL reader, int32_t verifyObjectName);

void System_Runtime_Serialization_Json_DataContractJsonSerializer_void__WriteEndObject_0__1__XmlDictionaryWriter(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL writer);

void System_Runtime_Serialization_Json_DataContractJsonSerializer_void__WriteEndObject_0__1__XmlWriter(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL writer);

void System_Runtime_Serialization_Json_DataContractJsonSerializer_void__WriteObject_0__2__Stream_Object(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL stream, SG_HNDL_NULLABLE graph);

void System_Runtime_Serialization_Json_DataContractJsonSerializer_void__WriteObject_0__2__XmlDictionaryWriter_Object(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL writer, SG_HNDL_NULLABLE graph);

void System_Runtime_Serialization_Json_DataContractJsonSerializer_void__WriteObject_0__2__XmlWriter_Object(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL writer, SG_HNDL_NULLABLE graph);

void System_Runtime_Serialization_Json_DataContractJsonSerializer_void__WriteObjectContent_0__2__XmlDictionaryWriter_Object(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL writer, SG_HNDL_NULLABLE graph);

void System_Runtime_Serialization_Json_DataContractJsonSerializer_void__WriteObjectContent_0__2__XmlWriter_Object(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL writer, SG_HNDL_NULLABLE graph);

void System_Runtime_Serialization_Json_DataContractJsonSerializer_void__WriteStartObject_0__2__XmlDictionaryWriter_Object(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL writer, SG_HNDL_NULLABLE graph);

void System_Runtime_Serialization_Json_DataContractJsonSerializer_void__WriteStartObject_0__2__XmlWriter_Object(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL writer, SG_HNDL_NULLABLE graph);

SG_HNDL_NULLABLE System_Runtime_Serialization_Json_DataContractJsonSerializer_DateTimeFormat__get_DateTimeFormat_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

int32_t System_Runtime_Serialization_Json_DataContractJsonSerializer_EmitTypeInformation__get_EmitTypeInformation_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

int32_t System_Runtime_Serialization_Json_DataContractJsonSerializer_bool__get_IgnoreExtensionDataObject_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL System_Runtime_Serialization_Json_DataContractJsonSerializer_System_Collections_ObjectModel_ReadOnlyCollection_System_Type___get_KnownTypes_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

int32_t System_Runtime_Serialization_Json_DataContractJsonSerializer_i32__get_MaxItemsInObjectGraph_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

int32_t System_Runtime_Serialization_Json_DataContractJsonSerializer_bool__get_SerializeReadOnlyTypes_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

int32_t System_Runtime_Serialization_Json_DataContractJsonSerializer_bool__get_UseSimpleDictionaryFormat_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL System_Runtime_Serialization_Json_DataContractJsonSerializer_cast(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __h);

TYP System_Runtime_Serialization_Json_DataContractJsonSerializerSettings_get_type_handle(void);

SG_HNDL_NONNULL System_Runtime_Serialization_Json_DataContractJsonSerializerSettings_ctor_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NULLABLE System_Runtime_Serialization_Json_DataContractJsonSerializerSettings_DateTimeFormat__get_DateTimeFormat_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

void System_Runtime_Serialization_Json_DataContractJsonSerializerSettings_void__set_DateTimeFormat_0__1__DateTimeFormat(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NULLABLE value);

int32_t System_Runtime_Serialization_Json_DataContractJsonSerializerSettings_EmitTypeInformation__get_EmitTypeInformation_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

void System_Runtime_Serialization_Json_DataContractJsonSerializerSettings_void__set_EmitTypeInformation_0__1__EmitTypeInformation(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, int32_t value);

int32_t System_Runtime_Serialization_Json_DataContractJsonSerializerSettings_bool__get_IgnoreExtensionDataObject_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

void System_Runtime_Serialization_Json_DataContractJsonSerializerSettings_void__set_IgnoreExtensionDataObject_0__1__bool(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, int32_t value);

SG_HNDL_NULLABLE System_Runtime_Serialization_Json_DataContractJsonSerializerSettings_System_Collections_Generic_IEnumerable_System_Type___get_KnownTypes_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

void System_Runtime_Serialization_Json_DataContractJsonSerializerSettings_void__set_KnownTypes_0__1__System_Collections_Generic_IEnumerable_System_Type_(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NULLABLE value);

int32_t System_Runtime_Serialization_Json_DataContractJsonSerializerSettings_i32__get_MaxItemsInObjectGraph_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

void System_Runtime_Serialization_Json_DataContractJsonSerializerSettings_void__set_MaxItemsInObjectGraph_0__1__i32(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, int32_t value);

SG_HNDL_NULLABLE System_Runtime_Serialization_Json_DataContractJsonSerializerSettings_String__get_RootName_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

void System_Runtime_Serialization_Json_DataContractJsonSerializerSettings_void__set_RootName_0__1__String(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NULLABLE value);

int32_t System_Runtime_Serialization_Json_DataContractJsonSerializerSettings_bool__get_SerializeReadOnlyTypes_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

void System_Runtime_Serialization_Json_DataContractJsonSerializerSettings_void__set_SerializeReadOnlyTypes_0__1__bool(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, int32_t value);

int32_t System_Runtime_Serialization_Json_DataContractJsonSerializerSettings_bool__get_UseSimpleDictionaryFormat_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

void System_Runtime_Serialization_Json_DataContractJsonSerializerSettings_void__set_UseSimpleDictionaryFormat_0__1__bool(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, int32_t value);

SG_HNDL_NONNULL System_Runtime_Serialization_Json_DataContractJsonSerializerSettings_cast(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __h);

TYP System_Runtime_Serialization_Json_IXmlJsonReaderInitializer_get_type_handle(void);

void System_Runtime_Serialization_Json_IXmlJsonReaderInitializer_void__SetInput_0__6__u8Array_i32_i32_Encoding_XmlDictionaryReaderQuotas_OnXmlDictionaryReaderClose(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL buffer, int32_t offset, int32_t count, SG_HNDL_NULLABLE encoding, SG_HNDL_NONNULL quotas, SG_HNDL_NULLABLE onClose);

void System_Runtime_Serialization_Json_IXmlJsonReaderInitializer_void__SetInput_0__4__Stream_Encoding_XmlDictionaryReaderQuotas_OnXmlDictionaryReaderClose(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL stream, SG_HNDL_NULLABLE encoding, SG_HNDL_NONNULL quotas, SG_HNDL_NULLABLE onClose);

SG_HNDL_NONNULL System_Runtime_Serialization_Json_IXmlJsonReaderInitializer_cast(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __h);

SG_HNDL_NONNULL System_Runtime_Serialization_Json_IXmlJsonReaderInitializer_create(SG_HNDL_NULLABLE * _Nonnull __thrown, void (* _Nonnull  __cb_System_Runtime_Serialization_Json_IXmlJsonReaderInitializer_void__SetInput_0__6__u8Array_i32_i32_Encoding_XmlDictionaryReaderQuotas_OnXmlDictionaryReaderClose)(const void* _Nonnull __pdata, SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL buffer, int32_t offset, int32_t count, SG_HNDL_NULLABLE encoding, SG_HNDL_NONNULL quotas, SG_HNDL_NULLABLE onClose), const void* _Nonnull __pdata_System_Runtime_Serialization_Json_IXmlJsonReaderInitializer_void__SetInput_0__6__u8Array_i32_i32_Encoding_XmlDictionaryReaderQuotas_OnXmlDictionaryReaderClose, void (* _Nonnull  __cb_System_Runtime_Serialization_Json_IXmlJsonReaderInitializer_void__SetInput_0__4__Stream_Encoding_XmlDictionaryReaderQuotas_OnXmlDictionaryReaderClose)(const void* _Nonnull __pdata, SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL stream, SG_HNDL_NULLABLE encoding, SG_HNDL_NONNULL quotas, SG_HNDL_NULLABLE onClose), const void* _Nonnull __pdata_System_Runtime_Serialization_Json_IXmlJsonReaderInitializer_void__SetInput_0__4__Stream_Encoding_XmlDictionaryReaderQuotas_OnXmlDictionaryReaderClose, void (* _Nullable __deinit)(const void* _Nonnull __pdata));

TYP System_Runtime_Serialization_Json_IXmlJsonWriterInitializer_get_type_handle(void);

void System_Runtime_Serialization_Json_IXmlJsonWriterInitializer_void__SetOutput_0__3__Stream_Encoding_bool(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL stream, SG_HNDL_NONNULL encoding, int32_t ownsStream);

SG_HNDL_NONNULL System_Runtime_Serialization_Json_IXmlJsonWriterInitializer_cast(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __h);

SG_HNDL_NONNULL System_Runtime_Serialization_Json_IXmlJsonWriterInitializer_create(SG_HNDL_NULLABLE * _Nonnull __thrown, void (* _Nonnull  __cb_System_Runtime_Serialization_Json_IXmlJsonWriterInitializer_void__SetOutput_0__3__Stream_Encoding_bool)(const void* _Nonnull __pdata, SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL stream, SG_HNDL_NONNULL encoding, int32_t ownsStream), const void* _Nonnull __pdata_System_Runtime_Serialization_Json_IXmlJsonWriterInitializer_void__SetOutput_0__3__Stream_Encoding_bool, void (* _Nullable __deinit)(const void* _Nonnull __pdata));

SG_HNDL_NONNULL System_Runtime_Serialization_Json_JsonReaderWriterFactory_XmlDictionaryReader__CreateJsonReader_0__6__u8Array_i32_i32_Encoding_XmlDictionaryReaderQuotas_OnXmlDictionaryReaderClose(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL buffer, int32_t offset, int32_t count, SG_HNDL_NULLABLE encoding, SG_HNDL_NONNULL quotas, SG_HNDL_NULLABLE onClose);

SG_HNDL_NONNULL System_Runtime_Serialization_Json_JsonReaderWriterFactory_XmlDictionaryReader__CreateJsonReader_0__4__u8Array_i32_i32_XmlDictionaryReaderQuotas(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL buffer, int32_t offset, int32_t count, SG_HNDL_NONNULL quotas);

SG_HNDL_NONNULL System_Runtime_Serialization_Json_JsonReaderWriterFactory_XmlDictionaryReader__CreateJsonReader_0__2__u8Array_XmlDictionaryReaderQuotas(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL buffer, SG_HNDL_NONNULL quotas);

SG_HNDL_NONNULL System_Runtime_Serialization_Json_JsonReaderWriterFactory_XmlDictionaryReader__CreateJsonReader_0__4__Stream_Encoding_XmlDictionaryReaderQuotas_OnXmlDictionaryReaderClose(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL stream, SG_HNDL_NULLABLE encoding, SG_HNDL_NONNULL quotas, SG_HNDL_NULLABLE onClose);

SG_HNDL_NONNULL System_Runtime_Serialization_Json_JsonReaderWriterFactory_XmlDictionaryReader__CreateJsonReader_0__2__Stream_XmlDictionaryReaderQuotas(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL stream, SG_HNDL_NONNULL quotas);

SG_HNDL_NONNULL System_Runtime_Serialization_Json_JsonReaderWriterFactory_XmlDictionaryWriter__CreateJsonWriter_0__1__Stream(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL stream);

SG_HNDL_NONNULL System_Runtime_Serialization_Json_JsonReaderWriterFactory_XmlDictionaryWriter__CreateJsonWriter_0__2__Stream_Encoding(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL stream, SG_HNDL_NONNULL encoding);

SG_HNDL_NONNULL System_Runtime_Serialization_Json_JsonReaderWriterFactory_XmlDictionaryWriter__CreateJsonWriter_0__3__Stream_Encoding_bool(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL stream, SG_HNDL_NONNULL encoding, int32_t ownsStream);

SG_HNDL_NONNULL System_Runtime_Serialization_Json_JsonReaderWriterFactory_XmlDictionaryWriter__CreateJsonWriter_0__4__Stream_Encoding_bool_bool(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL stream, SG_HNDL_NONNULL encoding, int32_t ownsStream, int32_t indent);

SG_HNDL_NONNULL System_Runtime_Serialization_Json_JsonReaderWriterFactory_XmlDictionaryWriter__CreateJsonWriter_0__5__Stream_Encoding_bool_bool_String(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL stream, SG_HNDL_NONNULL encoding, int32_t ownsStream, int32_t indent, SG_HNDL_NULLABLE indentChars);


#ifdef __cplusplus
}
#endif

#endif // INCLUDE_System_Runtime_Serialization_Json

