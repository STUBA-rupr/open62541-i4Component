/* Generated from Opc.Ua.Types.bsd with script C:/Projects/open62541-i4Component/tools/generate_datatypes.py
 * on host VM-WIN16-FEI by user rudolf at 2021-01-19 07:00:15 */

#include "types_generated.h"

/* Boolean */
#define Boolean_members NULL

/* SByte */
#define SByte_members NULL

/* Byte */
#define Byte_members NULL

/* Int16 */
#define Int16_members NULL

/* UInt16 */
#define UInt16_members NULL

/* Int32 */
#define Int32_members NULL

/* UInt32 */
#define UInt32_members NULL

/* Int64 */
#define Int64_members NULL

/* UInt64 */
#define UInt64_members NULL

/* Float */
#define Float_members NULL

/* Double */
#define Double_members NULL

/* String */
#define String_members NULL

/* DateTime */
#define DateTime_members NULL

/* Guid */
#define Guid_members NULL

/* ByteString */
#define ByteString_members NULL

/* XmlElement */
#define XmlElement_members NULL

/* NodeId */
#define NodeId_members NULL

/* ExpandedNodeId */
#define ExpandedNodeId_members NULL

/* StatusCode */
#define StatusCode_members NULL

/* QualifiedName */
#define QualifiedName_members NULL

/* LocalizedText */
#define LocalizedText_members NULL

/* ExtensionObject */
#define ExtensionObject_members NULL

/* DataValue */
#define DataValue_members NULL

/* Variant */
#define Variant_members NULL

/* DiagnosticInfo */
#define DiagnosticInfo_members NULL

/* NamingRuleType */
#define NamingRuleType_members NULL

/* ImageBMP */
#define ImageBMP_members NULL

/* ImageGIF */
#define ImageGIF_members NULL

/* ImageJPG */
#define ImageJPG_members NULL

/* ImagePNG */
#define ImagePNG_members NULL

/* AudioDataType */
#define AudioDataType_members NULL

/* BitFieldMaskDataType */
#define BitFieldMaskDataType_members NULL

/* KeyValuePair */
static UA_DataTypeMember KeyValuePair_members[2] = {
{
    UA_TYPES_QUALIFIEDNAME, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Key") /* .memberName */
},
{
    UA_TYPES_VARIANT, /* .memberTypeIndex */
    offsetof(UA_KeyValuePair, value) - offsetof(UA_KeyValuePair, key) - sizeof(UA_QualifiedName), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Value") /* .memberName */
},};

/* RationalNumber */
static UA_DataTypeMember RationalNumber_members[2] = {
{
    UA_TYPES_INT32, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Numerator") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_RationalNumber, denominator) - offsetof(UA_RationalNumber, numerator) - sizeof(UA_Int32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Denominator") /* .memberName */
},};

/* Vector */
#define Vector_members NULL

/* ThreeDVector */
static UA_DataTypeMember ThreeDVector_members[3] = {
{
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("X") /* .memberName */
},
{
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_ThreeDVector, y) - offsetof(UA_ThreeDVector, x) - sizeof(UA_Double), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Y") /* .memberName */
},
{
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_ThreeDVector, z) - offsetof(UA_ThreeDVector, y) - sizeof(UA_Double), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Z") /* .memberName */
},};

/* CartesianCoordinates */
#define CartesianCoordinates_members NULL

/* ThreeDCartesianCoordinates */
static UA_DataTypeMember ThreeDCartesianCoordinates_members[3] = {
{
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("X") /* .memberName */
},
{
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_ThreeDCartesianCoordinates, y) - offsetof(UA_ThreeDCartesianCoordinates, x) - sizeof(UA_Double), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Y") /* .memberName */
},
{
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_ThreeDCartesianCoordinates, z) - offsetof(UA_ThreeDCartesianCoordinates, y) - sizeof(UA_Double), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Z") /* .memberName */
},};

/* Orientation */
#define Orientation_members NULL

/* ThreeDOrientation */
static UA_DataTypeMember ThreeDOrientation_members[3] = {
{
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("A") /* .memberName */
},
{
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_ThreeDOrientation, b) - offsetof(UA_ThreeDOrientation, a) - sizeof(UA_Double), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("B") /* .memberName */
},
{
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_ThreeDOrientation, c) - offsetof(UA_ThreeDOrientation, b) - sizeof(UA_Double), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("C") /* .memberName */
},};

/* Frame */
#define Frame_members NULL

/* ThreeDFrame */
static UA_DataTypeMember ThreeDFrame_members[2] = {
{
    UA_TYPES_THREEDCARTESIANCOORDINATES, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("CartesianCoordinates") /* .memberName */
},
{
    UA_TYPES_THREEDORIENTATION, /* .memberTypeIndex */
    offsetof(UA_ThreeDFrame, orientation) - offsetof(UA_ThreeDFrame, cartesianCoordinates) - sizeof(UA_ThreeDCartesianCoordinates), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Orientation") /* .memberName */
},};

/* OpenFileMode */
#define OpenFileMode_members NULL

/* IdentityCriteriaType */
#define IdentityCriteriaType_members NULL

/* IdentityMappingRuleType */
static UA_DataTypeMember IdentityMappingRuleType_members[2] = {
{
    UA_TYPES_IDENTITYCRITERIATYPE, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("CriteriaType") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_IdentityMappingRuleType, criteria) - offsetof(UA_IdentityMappingRuleType, criteriaType) - sizeof(UA_IdentityCriteriaType), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Criteria") /* .memberName */
},};

/* CurrencyUnitType */
static UA_DataTypeMember CurrencyUnitType_members[4] = {
{
    UA_TYPES_INT16, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("NumericCode") /* .memberName */
},
{
    UA_TYPES_SBYTE, /* .memberTypeIndex */
    offsetof(UA_CurrencyUnitType, exponent) - offsetof(UA_CurrencyUnitType, numericCode) - sizeof(UA_Int16), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Exponent") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_CurrencyUnitType, alphabeticCode) - offsetof(UA_CurrencyUnitType, exponent) - sizeof(UA_SByte), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("AlphabeticCode") /* .memberName */
},
{
    UA_TYPES_LOCALIZEDTEXT, /* .memberTypeIndex */
    offsetof(UA_CurrencyUnitType, currency) - offsetof(UA_CurrencyUnitType, alphabeticCode) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Currency") /* .memberName */
},};

/* TrustListMasks */
#define TrustListMasks_members NULL

/* TrustListDataType */
static UA_DataTypeMember TrustListDataType_members[5] = {
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SpecifiedLists") /* .memberName */
},
{
    UA_TYPES_BYTESTRING, /* .memberTypeIndex */
    offsetof(UA_TrustListDataType, trustedCertificatesSize) - offsetof(UA_TrustListDataType, specifiedLists) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("TrustedCertificates") /* .memberName */
},
{
    UA_TYPES_BYTESTRING, /* .memberTypeIndex */
    offsetof(UA_TrustListDataType, trustedCrlsSize) - offsetof(UA_TrustListDataType, trustedCertificates) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("TrustedCrls") /* .memberName */
},
{
    UA_TYPES_BYTESTRING, /* .memberTypeIndex */
    offsetof(UA_TrustListDataType, issuerCertificatesSize) - offsetof(UA_TrustListDataType, trustedCrls) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("IssuerCertificates") /* .memberName */
},
{
    UA_TYPES_BYTESTRING, /* .memberTypeIndex */
    offsetof(UA_TrustListDataType, issuerCrlsSize) - offsetof(UA_TrustListDataType, issuerCertificates) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("IssuerCrls") /* .memberName */
},};

/* DecimalDataType */
static UA_DataTypeMember DecimalDataType_members[2] = {
{
    UA_TYPES_INT16, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Scale") /* .memberName */
},
{
    UA_TYPES_BYTESTRING, /* .memberTypeIndex */
    offsetof(UA_DecimalDataType, value) - offsetof(UA_DecimalDataType, scale) - sizeof(UA_Int16), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Value") /* .memberName */
},};

/* DataTypeDescription */
static UA_DataTypeMember DataTypeDescription_members[2] = {
{
    UA_TYPES_NODEID, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DataTypeId") /* .memberName */
},
{
    UA_TYPES_QUALIFIEDNAME, /* .memberTypeIndex */
    offsetof(UA_DataTypeDescription, name) - offsetof(UA_DataTypeDescription, dataTypeId) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Name") /* .memberName */
},};

/* SimpleTypeDescription */
static UA_DataTypeMember SimpleTypeDescription_members[4] = {
{
    UA_TYPES_NODEID, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DataTypeId") /* .memberName */
},
{
    UA_TYPES_QUALIFIEDNAME, /* .memberTypeIndex */
    offsetof(UA_SimpleTypeDescription, name) - offsetof(UA_SimpleTypeDescription, dataTypeId) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Name") /* .memberName */
},
{
    UA_TYPES_NODEID, /* .memberTypeIndex */
    offsetof(UA_SimpleTypeDescription, baseDataType) - offsetof(UA_SimpleTypeDescription, name) - sizeof(UA_QualifiedName), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("BaseDataType") /* .memberName */
},
{
    UA_TYPES_BYTE, /* .memberTypeIndex */
    offsetof(UA_SimpleTypeDescription, builtInType) - offsetof(UA_SimpleTypeDescription, baseDataType) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("BuiltInType") /* .memberName */
},};

/* PubSubState */
#define PubSubState_members NULL

/* DataSetFieldFlags */
#define DataSetFieldFlags_members NULL

/* ConfigurationVersionDataType */
static UA_DataTypeMember ConfigurationVersionDataType_members[2] = {
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("MajorVersion") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_ConfigurationVersionDataType, minorVersion) - offsetof(UA_ConfigurationVersionDataType, majorVersion) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("MinorVersion") /* .memberName */
},};

/* PublishedDataSetSourceDataType */
#define PublishedDataSetSourceDataType_members NULL

/* PublishedVariableDataType */
static UA_DataTypeMember PublishedVariableDataType_members[8] = {
{
    UA_TYPES_NODEID, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("PublishedVariable") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_PublishedVariableDataType, attributeId) - offsetof(UA_PublishedVariableDataType, publishedVariable) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("AttributeId") /* .memberName */
},
{
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_PublishedVariableDataType, samplingIntervalHint) - offsetof(UA_PublishedVariableDataType, attributeId) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SamplingIntervalHint") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_PublishedVariableDataType, deadbandType) - offsetof(UA_PublishedVariableDataType, samplingIntervalHint) - sizeof(UA_Double), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DeadbandType") /* .memberName */
},
{
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_PublishedVariableDataType, deadbandValue) - offsetof(UA_PublishedVariableDataType, deadbandType) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DeadbandValue") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_PublishedVariableDataType, indexRange) - offsetof(UA_PublishedVariableDataType, deadbandValue) - sizeof(UA_Double), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("IndexRange") /* .memberName */
},
{
    UA_TYPES_VARIANT, /* .memberTypeIndex */
    offsetof(UA_PublishedVariableDataType, substituteValue) - offsetof(UA_PublishedVariableDataType, indexRange) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SubstituteValue") /* .memberName */
},
{
    UA_TYPES_QUALIFIEDNAME, /* .memberTypeIndex */
    offsetof(UA_PublishedVariableDataType, metaDataPropertiesSize) - offsetof(UA_PublishedVariableDataType, substituteValue) - sizeof(UA_Variant), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("MetaDataProperties") /* .memberName */
},};

/* PublishedDataItemsDataType */
static UA_DataTypeMember PublishedDataItemsDataType_members[1] = {
{
    UA_TYPES_PUBLISHEDVARIABLEDATATYPE, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("PublishedData") /* .memberName */
},};

/* DataSetFieldContentMask */
#define DataSetFieldContentMask_members NULL

/* DataSetWriterDataType */
static UA_DataTypeMember DataSetWriterDataType_members[9] = {
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Name") /* .memberName */
},
{
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_DataSetWriterDataType, enabled) - offsetof(UA_DataSetWriterDataType, name) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Enabled") /* .memberName */
},
{
    UA_TYPES_UINT16, /* .memberTypeIndex */
    offsetof(UA_DataSetWriterDataType, dataSetWriterId) - offsetof(UA_DataSetWriterDataType, enabled) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DataSetWriterId") /* .memberName */
},
{
    UA_TYPES_DATASETFIELDCONTENTMASK, /* .memberTypeIndex */
    offsetof(UA_DataSetWriterDataType, dataSetFieldContentMask) - offsetof(UA_DataSetWriterDataType, dataSetWriterId) - sizeof(UA_UInt16), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DataSetFieldContentMask") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_DataSetWriterDataType, keyFrameCount) - offsetof(UA_DataSetWriterDataType, dataSetFieldContentMask) - sizeof(UA_DataSetFieldContentMask), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("KeyFrameCount") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_DataSetWriterDataType, dataSetName) - offsetof(UA_DataSetWriterDataType, keyFrameCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DataSetName") /* .memberName */
},
{
    UA_TYPES_KEYVALUEPAIR, /* .memberTypeIndex */
    offsetof(UA_DataSetWriterDataType, dataSetWriterPropertiesSize) - offsetof(UA_DataSetWriterDataType, dataSetName) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DataSetWriterProperties") /* .memberName */
},
{
    UA_TYPES_EXTENSIONOBJECT, /* .memberTypeIndex */
    offsetof(UA_DataSetWriterDataType, transportSettings) - offsetof(UA_DataSetWriterDataType, dataSetWriterProperties) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("TransportSettings") /* .memberName */
},
{
    UA_TYPES_EXTENSIONOBJECT, /* .memberTypeIndex */
    offsetof(UA_DataSetWriterDataType, messageSettings) - offsetof(UA_DataSetWriterDataType, transportSettings) - sizeof(UA_ExtensionObject), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("MessageSettings") /* .memberName */
},};

/* DataSetWriterTransportDataType */
#define DataSetWriterTransportDataType_members NULL

/* DataSetWriterMessageDataType */
#define DataSetWriterMessageDataType_members NULL

/* WriterGroupTransportDataType */
#define WriterGroupTransportDataType_members NULL

/* WriterGroupMessageDataType */
#define WriterGroupMessageDataType_members NULL

/* ConnectionTransportDataType */
#define ConnectionTransportDataType_members NULL

/* NetworkAddressDataType */
static UA_DataTypeMember NetworkAddressDataType_members[1] = {
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("NetworkInterface") /* .memberName */
},};

/* NetworkAddressUrlDataType */
static UA_DataTypeMember NetworkAddressUrlDataType_members[2] = {
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("NetworkInterface") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_NetworkAddressUrlDataType, url) - offsetof(UA_NetworkAddressUrlDataType, networkInterface) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Url") /* .memberName */
},};

/* ReaderGroupTransportDataType */
#define ReaderGroupTransportDataType_members NULL

/* ReaderGroupMessageDataType */
#define ReaderGroupMessageDataType_members NULL

/* DataSetReaderTransportDataType */
#define DataSetReaderTransportDataType_members NULL

/* DataSetReaderMessageDataType */
#define DataSetReaderMessageDataType_members NULL

/* SubscribedDataSetDataType */
#define SubscribedDataSetDataType_members NULL

/* OverrideValueHandling */
#define OverrideValueHandling_members NULL

/* DataSetOrderingType */
#define DataSetOrderingType_members NULL

/* UadpNetworkMessageContentMask */
#define UadpNetworkMessageContentMask_members NULL

/* UadpWriterGroupMessageDataType */
static UA_DataTypeMember UadpWriterGroupMessageDataType_members[5] = {
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("GroupVersion") /* .memberName */
},
{
    UA_TYPES_DATASETORDERINGTYPE, /* .memberTypeIndex */
    offsetof(UA_UadpWriterGroupMessageDataType, dataSetOrdering) - offsetof(UA_UadpWriterGroupMessageDataType, groupVersion) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DataSetOrdering") /* .memberName */
},
{
    UA_TYPES_UADPNETWORKMESSAGECONTENTMASK, /* .memberTypeIndex */
    offsetof(UA_UadpWriterGroupMessageDataType, networkMessageContentMask) - offsetof(UA_UadpWriterGroupMessageDataType, dataSetOrdering) - sizeof(UA_DataSetOrderingType), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("NetworkMessageContentMask") /* .memberName */
},
{
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_UadpWriterGroupMessageDataType, samplingOffset) - offsetof(UA_UadpWriterGroupMessageDataType, networkMessageContentMask) - sizeof(UA_UadpNetworkMessageContentMask), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SamplingOffset") /* .memberName */
},
{
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_UadpWriterGroupMessageDataType, publishingOffsetSize) - offsetof(UA_UadpWriterGroupMessageDataType, samplingOffset) - sizeof(UA_Double), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("PublishingOffset") /* .memberName */
},};

/* UadpDataSetMessageContentMask */
#define UadpDataSetMessageContentMask_members NULL

/* UadpDataSetWriterMessageDataType */
static UA_DataTypeMember UadpDataSetWriterMessageDataType_members[4] = {
{
    UA_TYPES_UADPDATASETMESSAGECONTENTMASK, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DataSetMessageContentMask") /* .memberName */
},
{
    UA_TYPES_UINT16, /* .memberTypeIndex */
    offsetof(UA_UadpDataSetWriterMessageDataType, configuredSize) - offsetof(UA_UadpDataSetWriterMessageDataType, dataSetMessageContentMask) - sizeof(UA_UadpDataSetMessageContentMask), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ConfiguredSize") /* .memberName */
},
{
    UA_TYPES_UINT16, /* .memberTypeIndex */
    offsetof(UA_UadpDataSetWriterMessageDataType, networkMessageNumber) - offsetof(UA_UadpDataSetWriterMessageDataType, configuredSize) - sizeof(UA_UInt16), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("NetworkMessageNumber") /* .memberName */
},
{
    UA_TYPES_UINT16, /* .memberTypeIndex */
    offsetof(UA_UadpDataSetWriterMessageDataType, dataSetOffset) - offsetof(UA_UadpDataSetWriterMessageDataType, networkMessageNumber) - sizeof(UA_UInt16), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DataSetOffset") /* .memberName */
},};

/* UadpDataSetReaderMessageDataType */
static UA_DataTypeMember UadpDataSetReaderMessageDataType_members[9] = {
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("GroupVersion") /* .memberName */
},
{
    UA_TYPES_UINT16, /* .memberTypeIndex */
    offsetof(UA_UadpDataSetReaderMessageDataType, networkMessageNumber) - offsetof(UA_UadpDataSetReaderMessageDataType, groupVersion) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("NetworkMessageNumber") /* .memberName */
},
{
    UA_TYPES_UINT16, /* .memberTypeIndex */
    offsetof(UA_UadpDataSetReaderMessageDataType, dataSetOffset) - offsetof(UA_UadpDataSetReaderMessageDataType, networkMessageNumber) - sizeof(UA_UInt16), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DataSetOffset") /* .memberName */
},
{
    UA_TYPES_GUID, /* .memberTypeIndex */
    offsetof(UA_UadpDataSetReaderMessageDataType, dataSetClassId) - offsetof(UA_UadpDataSetReaderMessageDataType, dataSetOffset) - sizeof(UA_UInt16), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DataSetClassId") /* .memberName */
},
{
    UA_TYPES_UADPNETWORKMESSAGECONTENTMASK, /* .memberTypeIndex */
    offsetof(UA_UadpDataSetReaderMessageDataType, networkMessageContentMask) - offsetof(UA_UadpDataSetReaderMessageDataType, dataSetClassId) - sizeof(UA_Guid), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("NetworkMessageContentMask") /* .memberName */
},
{
    UA_TYPES_UADPDATASETMESSAGECONTENTMASK, /* .memberTypeIndex */
    offsetof(UA_UadpDataSetReaderMessageDataType, dataSetMessageContentMask) - offsetof(UA_UadpDataSetReaderMessageDataType, networkMessageContentMask) - sizeof(UA_UadpNetworkMessageContentMask), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DataSetMessageContentMask") /* .memberName */
},
{
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_UadpDataSetReaderMessageDataType, publishingInterval) - offsetof(UA_UadpDataSetReaderMessageDataType, dataSetMessageContentMask) - sizeof(UA_UadpDataSetMessageContentMask), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("PublishingInterval") /* .memberName */
},
{
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_UadpDataSetReaderMessageDataType, receiveOffset) - offsetof(UA_UadpDataSetReaderMessageDataType, publishingInterval) - sizeof(UA_Double), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ReceiveOffset") /* .memberName */
},
{
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_UadpDataSetReaderMessageDataType, processingOffset) - offsetof(UA_UadpDataSetReaderMessageDataType, receiveOffset) - sizeof(UA_Double), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ProcessingOffset") /* .memberName */
},};

/* JsonNetworkMessageContentMask */
#define JsonNetworkMessageContentMask_members NULL

/* JsonWriterGroupMessageDataType */
static UA_DataTypeMember JsonWriterGroupMessageDataType_members[1] = {
{
    UA_TYPES_JSONNETWORKMESSAGECONTENTMASK, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("NetworkMessageContentMask") /* .memberName */
},};

/* JsonDataSetMessageContentMask */
#define JsonDataSetMessageContentMask_members NULL

/* JsonDataSetWriterMessageDataType */
static UA_DataTypeMember JsonDataSetWriterMessageDataType_members[1] = {
{
    UA_TYPES_JSONDATASETMESSAGECONTENTMASK, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DataSetMessageContentMask") /* .memberName */
},};

/* JsonDataSetReaderMessageDataType */
static UA_DataTypeMember JsonDataSetReaderMessageDataType_members[2] = {
{
    UA_TYPES_JSONNETWORKMESSAGECONTENTMASK, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("NetworkMessageContentMask") /* .memberName */
},
{
    UA_TYPES_JSONDATASETMESSAGECONTENTMASK, /* .memberTypeIndex */
    offsetof(UA_JsonDataSetReaderMessageDataType, dataSetMessageContentMask) - offsetof(UA_JsonDataSetReaderMessageDataType, networkMessageContentMask) - sizeof(UA_JsonNetworkMessageContentMask), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DataSetMessageContentMask") /* .memberName */
},};

/* DatagramConnectionTransportDataType */
static UA_DataTypeMember DatagramConnectionTransportDataType_members[1] = {
{
    UA_TYPES_EXTENSIONOBJECT, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DiscoveryAddress") /* .memberName */
},};

/* DatagramWriterGroupTransportDataType */
static UA_DataTypeMember DatagramWriterGroupTransportDataType_members[2] = {
{
    UA_TYPES_BYTE, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("MessageRepeatCount") /* .memberName */
},
{
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_DatagramWriterGroupTransportDataType, messageRepeatDelay) - offsetof(UA_DatagramWriterGroupTransportDataType, messageRepeatCount) - sizeof(UA_Byte), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("MessageRepeatDelay") /* .memberName */
},};

/* BrokerConnectionTransportDataType */
static UA_DataTypeMember BrokerConnectionTransportDataType_members[2] = {
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ResourceUri") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_BrokerConnectionTransportDataType, authenticationProfileUri) - offsetof(UA_BrokerConnectionTransportDataType, resourceUri) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("AuthenticationProfileUri") /* .memberName */
},};

/* BrokerTransportQualityOfService */
#define BrokerTransportQualityOfService_members NULL

/* BrokerWriterGroupTransportDataType */
static UA_DataTypeMember BrokerWriterGroupTransportDataType_members[4] = {
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("QueueName") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_BrokerWriterGroupTransportDataType, resourceUri) - offsetof(UA_BrokerWriterGroupTransportDataType, queueName) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ResourceUri") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_BrokerWriterGroupTransportDataType, authenticationProfileUri) - offsetof(UA_BrokerWriterGroupTransportDataType, resourceUri) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("AuthenticationProfileUri") /* .memberName */
},
{
    UA_TYPES_BROKERTRANSPORTQUALITYOFSERVICE, /* .memberTypeIndex */
    offsetof(UA_BrokerWriterGroupTransportDataType, requestedDeliveryGuarantee) - offsetof(UA_BrokerWriterGroupTransportDataType, authenticationProfileUri) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RequestedDeliveryGuarantee") /* .memberName */
},};

/* BrokerDataSetWriterTransportDataType */
static UA_DataTypeMember BrokerDataSetWriterTransportDataType_members[6] = {
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("QueueName") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_BrokerDataSetWriterTransportDataType, resourceUri) - offsetof(UA_BrokerDataSetWriterTransportDataType, queueName) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ResourceUri") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_BrokerDataSetWriterTransportDataType, authenticationProfileUri) - offsetof(UA_BrokerDataSetWriterTransportDataType, resourceUri) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("AuthenticationProfileUri") /* .memberName */
},
{
    UA_TYPES_BROKERTRANSPORTQUALITYOFSERVICE, /* .memberTypeIndex */
    offsetof(UA_BrokerDataSetWriterTransportDataType, requestedDeliveryGuarantee) - offsetof(UA_BrokerDataSetWriterTransportDataType, authenticationProfileUri) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RequestedDeliveryGuarantee") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_BrokerDataSetWriterTransportDataType, metaDataQueueName) - offsetof(UA_BrokerDataSetWriterTransportDataType, requestedDeliveryGuarantee) - sizeof(UA_BrokerTransportQualityOfService), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("MetaDataQueueName") /* .memberName */
},
{
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_BrokerDataSetWriterTransportDataType, metaDataUpdateTime) - offsetof(UA_BrokerDataSetWriterTransportDataType, metaDataQueueName) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("MetaDataUpdateTime") /* .memberName */
},};

/* BrokerDataSetReaderTransportDataType */
static UA_DataTypeMember BrokerDataSetReaderTransportDataType_members[5] = {
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("QueueName") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_BrokerDataSetReaderTransportDataType, resourceUri) - offsetof(UA_BrokerDataSetReaderTransportDataType, queueName) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ResourceUri") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_BrokerDataSetReaderTransportDataType, authenticationProfileUri) - offsetof(UA_BrokerDataSetReaderTransportDataType, resourceUri) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("AuthenticationProfileUri") /* .memberName */
},
{
    UA_TYPES_BROKERTRANSPORTQUALITYOFSERVICE, /* .memberTypeIndex */
    offsetof(UA_BrokerDataSetReaderTransportDataType, requestedDeliveryGuarantee) - offsetof(UA_BrokerDataSetReaderTransportDataType, authenticationProfileUri) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RequestedDeliveryGuarantee") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_BrokerDataSetReaderTransportDataType, metaDataQueueName) - offsetof(UA_BrokerDataSetReaderTransportDataType, requestedDeliveryGuarantee) - sizeof(UA_BrokerTransportQualityOfService), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("MetaDataQueueName") /* .memberName */
},};

/* DiagnosticsLevel */
#define DiagnosticsLevel_members NULL

/* PubSubDiagnosticsCounterClassification */
#define PubSubDiagnosticsCounterClassification_members NULL

/* AliasNameDataType */
static UA_DataTypeMember AliasNameDataType_members[2] = {
{
    UA_TYPES_QUALIFIEDNAME, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("AliasName") /* .memberName */
},
{
    UA_TYPES_EXPANDEDNODEID, /* .memberTypeIndex */
    offsetof(UA_AliasNameDataType, referencedNodesSize) - offsetof(UA_AliasNameDataType, aliasName) - sizeof(UA_QualifiedName), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ReferencedNodes") /* .memberName */
},};

/* IdType */
#define IdType_members NULL

/* NodeClass */
#define NodeClass_members NULL

/* PermissionType */
#define PermissionType_members NULL

/* AccessLevelType */
#define AccessLevelType_members NULL

/* AccessLevelExType */
#define AccessLevelExType_members NULL

/* EventNotifierType */
#define EventNotifierType_members NULL

/* AccessRestrictionType */
#define AccessRestrictionType_members NULL

/* RolePermissionType */
static UA_DataTypeMember RolePermissionType_members[2] = {
{
    UA_TYPES_NODEID, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RoleId") /* .memberName */
},
{
    UA_TYPES_PERMISSIONTYPE, /* .memberTypeIndex */
    offsetof(UA_RolePermissionType, permissions) - offsetof(UA_RolePermissionType, roleId) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Permissions") /* .memberName */
},};

/* StructureType */
#define StructureType_members NULL

/* StructureField */
static UA_DataTypeMember StructureField_members[7] = {
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Name") /* .memberName */
},
{
    UA_TYPES_LOCALIZEDTEXT, /* .memberTypeIndex */
    offsetof(UA_StructureField, description) - offsetof(UA_StructureField, name) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Description") /* .memberName */
},
{
    UA_TYPES_NODEID, /* .memberTypeIndex */
    offsetof(UA_StructureField, dataType) - offsetof(UA_StructureField, description) - sizeof(UA_LocalizedText), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DataType") /* .memberName */
},
{
    UA_TYPES_INT32, /* .memberTypeIndex */
    offsetof(UA_StructureField, valueRank) - offsetof(UA_StructureField, dataType) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ValueRank") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_StructureField, arrayDimensionsSize) - offsetof(UA_StructureField, valueRank) - sizeof(UA_Int32), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ArrayDimensions") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_StructureField, maxStringLength) - offsetof(UA_StructureField, arrayDimensions) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("MaxStringLength") /* .memberName */
},
{
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_StructureField, isOptional) - offsetof(UA_StructureField, maxStringLength) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("IsOptional") /* .memberName */
},};

/* StructureDefinition */
static UA_DataTypeMember StructureDefinition_members[4] = {
{
    UA_TYPES_NODEID, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DefaultEncodingId") /* .memberName */
},
{
    UA_TYPES_NODEID, /* .memberTypeIndex */
    offsetof(UA_StructureDefinition, baseDataType) - offsetof(UA_StructureDefinition, defaultEncodingId) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("BaseDataType") /* .memberName */
},
{
    UA_TYPES_STRUCTURETYPE, /* .memberTypeIndex */
    offsetof(UA_StructureDefinition, structureType) - offsetof(UA_StructureDefinition, baseDataType) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("StructureType") /* .memberName */
},
{
    UA_TYPES_STRUCTUREFIELD, /* .memberTypeIndex */
    offsetof(UA_StructureDefinition, fieldsSize) - offsetof(UA_StructureDefinition, structureType) - sizeof(UA_StructureType), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Fields") /* .memberName */
},};

/* ReferenceNode */
static UA_DataTypeMember ReferenceNode_members[3] = {
{
    UA_TYPES_NODEID, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ReferenceTypeId") /* .memberName */
},
{
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_ReferenceNode, isInverse) - offsetof(UA_ReferenceNode, referenceTypeId) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("IsInverse") /* .memberName */
},
{
    UA_TYPES_EXPANDEDNODEID, /* .memberTypeIndex */
    offsetof(UA_ReferenceNode, targetId) - offsetof(UA_ReferenceNode, isInverse) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("TargetId") /* .memberName */
},};

/* Argument */
static UA_DataTypeMember Argument_members[5] = {
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Name") /* .memberName */
},
{
    UA_TYPES_NODEID, /* .memberTypeIndex */
    offsetof(UA_Argument, dataType) - offsetof(UA_Argument, name) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DataType") /* .memberName */
},
{
    UA_TYPES_INT32, /* .memberTypeIndex */
    offsetof(UA_Argument, valueRank) - offsetof(UA_Argument, dataType) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ValueRank") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_Argument, arrayDimensionsSize) - offsetof(UA_Argument, valueRank) - sizeof(UA_Int32), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ArrayDimensions") /* .memberName */
},
{
    UA_TYPES_LOCALIZEDTEXT, /* .memberTypeIndex */
    offsetof(UA_Argument, description) - offsetof(UA_Argument, arrayDimensions) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Description") /* .memberName */
},};

/* EnumValueType */
static UA_DataTypeMember EnumValueType_members[3] = {
{
    UA_TYPES_INT64, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Value") /* .memberName */
},
{
    UA_TYPES_LOCALIZEDTEXT, /* .memberTypeIndex */
    offsetof(UA_EnumValueType, displayName) - offsetof(UA_EnumValueType, value) - sizeof(UA_Int64), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DisplayName") /* .memberName */
},
{
    UA_TYPES_LOCALIZEDTEXT, /* .memberTypeIndex */
    offsetof(UA_EnumValueType, description) - offsetof(UA_EnumValueType, displayName) - sizeof(UA_LocalizedText), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Description") /* .memberName */
},};

/* EnumField */
static UA_DataTypeMember EnumField_members[4] = {
{
    UA_TYPES_INT64, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Value") /* .memberName */
},
{
    UA_TYPES_LOCALIZEDTEXT, /* .memberTypeIndex */
    offsetof(UA_EnumField, displayName) - offsetof(UA_EnumField, value) - sizeof(UA_Int64), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DisplayName") /* .memberName */
},
{
    UA_TYPES_LOCALIZEDTEXT, /* .memberTypeIndex */
    offsetof(UA_EnumField, description) - offsetof(UA_EnumField, displayName) - sizeof(UA_LocalizedText), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Description") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_EnumField, name) - offsetof(UA_EnumField, description) - sizeof(UA_LocalizedText), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Name") /* .memberName */
},};

/* OptionSet */
static UA_DataTypeMember OptionSet_members[2] = {
{
    UA_TYPES_BYTESTRING, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Value") /* .memberName */
},
{
    UA_TYPES_BYTESTRING, /* .memberTypeIndex */
    offsetof(UA_OptionSet, validBits) - offsetof(UA_OptionSet, value) - sizeof(UA_ByteString), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ValidBits") /* .memberName */
},};

/* Union */
#define Union_members NULL

/* NormalizedString */
#define NormalizedString_members NULL

/* DecimalString */
#define DecimalString_members NULL

/* DurationString */
#define DurationString_members NULL

/* TimeString */
#define TimeString_members NULL

/* DateString */
#define DateString_members NULL

/* Duration */
#define Duration_members NULL

/* UtcTime */
#define UtcTime_members NULL

/* LocaleId */
#define LocaleId_members NULL

/* TimeZoneDataType */
static UA_DataTypeMember TimeZoneDataType_members[2] = {
{
    UA_TYPES_INT16, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Offset") /* .memberName */
},
{
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_TimeZoneDataType, daylightSavingInOffset) - offsetof(UA_TimeZoneDataType, offset) - sizeof(UA_Int16), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DaylightSavingInOffset") /* .memberName */
},};

/* Index */
#define Index_members NULL

/* IntegerId */
#define IntegerId_members NULL

/* ApplicationType */
#define ApplicationType_members NULL

/* ApplicationDescription */
static UA_DataTypeMember ApplicationDescription_members[7] = {
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ApplicationUri") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_ApplicationDescription, productUri) - offsetof(UA_ApplicationDescription, applicationUri) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ProductUri") /* .memberName */
},
{
    UA_TYPES_LOCALIZEDTEXT, /* .memberTypeIndex */
    offsetof(UA_ApplicationDescription, applicationName) - offsetof(UA_ApplicationDescription, productUri) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ApplicationName") /* .memberName */
},
{
    UA_TYPES_APPLICATIONTYPE, /* .memberTypeIndex */
    offsetof(UA_ApplicationDescription, applicationType) - offsetof(UA_ApplicationDescription, applicationName) - sizeof(UA_LocalizedText), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ApplicationType") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_ApplicationDescription, gatewayServerUri) - offsetof(UA_ApplicationDescription, applicationType) - sizeof(UA_ApplicationType), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("GatewayServerUri") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_ApplicationDescription, discoveryProfileUri) - offsetof(UA_ApplicationDescription, gatewayServerUri) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DiscoveryProfileUri") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_ApplicationDescription, discoveryUrlsSize) - offsetof(UA_ApplicationDescription, discoveryProfileUri) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DiscoveryUrls") /* .memberName */
},};

/* RequestHeader */
static UA_DataTypeMember RequestHeader_members[7] = {
{
    UA_TYPES_NODEID, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("AuthenticationToken") /* .memberName */
},
{
    UA_TYPES_DATETIME, /* .memberTypeIndex */
    offsetof(UA_RequestHeader, timestamp) - offsetof(UA_RequestHeader, authenticationToken) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Timestamp") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_RequestHeader, requestHandle) - offsetof(UA_RequestHeader, timestamp) - sizeof(UA_DateTime), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RequestHandle") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_RequestHeader, returnDiagnostics) - offsetof(UA_RequestHeader, requestHandle) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ReturnDiagnostics") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_RequestHeader, auditEntryId) - offsetof(UA_RequestHeader, returnDiagnostics) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("AuditEntryId") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_RequestHeader, timeoutHint) - offsetof(UA_RequestHeader, auditEntryId) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("TimeoutHint") /* .memberName */
},
{
    UA_TYPES_EXTENSIONOBJECT, /* .memberTypeIndex */
    offsetof(UA_RequestHeader, additionalHeader) - offsetof(UA_RequestHeader, timeoutHint) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("AdditionalHeader") /* .memberName */
},};

/* ResponseHeader */
static UA_DataTypeMember ResponseHeader_members[6] = {
{
    UA_TYPES_DATETIME, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Timestamp") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_ResponseHeader, requestHandle) - offsetof(UA_ResponseHeader, timestamp) - sizeof(UA_DateTime), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RequestHandle") /* .memberName */
},
{
    UA_TYPES_STATUSCODE, /* .memberTypeIndex */
    offsetof(UA_ResponseHeader, serviceResult) - offsetof(UA_ResponseHeader, requestHandle) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ServiceResult") /* .memberName */
},
{
    UA_TYPES_DIAGNOSTICINFO, /* .memberTypeIndex */
    offsetof(UA_ResponseHeader, serviceDiagnostics) - offsetof(UA_ResponseHeader, serviceResult) - sizeof(UA_StatusCode), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ServiceDiagnostics") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_ResponseHeader, stringTableSize) - offsetof(UA_ResponseHeader, serviceDiagnostics) - sizeof(UA_DiagnosticInfo), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("StringTable") /* .memberName */
},
{
    UA_TYPES_EXTENSIONOBJECT, /* .memberTypeIndex */
    offsetof(UA_ResponseHeader, additionalHeader) - offsetof(UA_ResponseHeader, stringTable) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("AdditionalHeader") /* .memberName */
},};

/* VersionTime */
#define VersionTime_members NULL

/* ServiceFault */
static UA_DataTypeMember ServiceFault_members[1] = {
{
    UA_TYPES_RESPONSEHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ResponseHeader") /* .memberName */
},};

/* SessionlessInvokeRequestType */
static UA_DataTypeMember SessionlessInvokeRequestType_members[5] = {
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("UrisVersion") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_SessionlessInvokeRequestType, namespaceUrisSize) - offsetof(UA_SessionlessInvokeRequestType, urisVersion) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("NamespaceUris") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_SessionlessInvokeRequestType, serverUrisSize) - offsetof(UA_SessionlessInvokeRequestType, namespaceUris) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ServerUris") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_SessionlessInvokeRequestType, localeIdsSize) - offsetof(UA_SessionlessInvokeRequestType, serverUris) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("LocaleIds") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SessionlessInvokeRequestType, serviceId) - offsetof(UA_SessionlessInvokeRequestType, localeIds) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ServiceId") /* .memberName */
},};

/* SessionlessInvokeResponseType */
static UA_DataTypeMember SessionlessInvokeResponseType_members[3] = {
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("NamespaceUris") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_SessionlessInvokeResponseType, serverUrisSize) - offsetof(UA_SessionlessInvokeResponseType, namespaceUris) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ServerUris") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SessionlessInvokeResponseType, serviceId) - offsetof(UA_SessionlessInvokeResponseType, serverUris) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ServiceId") /* .memberName */
},};

/* FindServersRequest */
static UA_DataTypeMember FindServersRequest_members[4] = {
{
    UA_TYPES_REQUESTHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RequestHeader") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_FindServersRequest, endpointUrl) - offsetof(UA_FindServersRequest, requestHeader) - sizeof(UA_RequestHeader), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("EndpointUrl") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_FindServersRequest, localeIdsSize) - offsetof(UA_FindServersRequest, endpointUrl) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("LocaleIds") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_FindServersRequest, serverUrisSize) - offsetof(UA_FindServersRequest, localeIds) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ServerUris") /* .memberName */
},};

/* FindServersResponse */
static UA_DataTypeMember FindServersResponse_members[2] = {
{
    UA_TYPES_RESPONSEHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ResponseHeader") /* .memberName */
},
{
    UA_TYPES_APPLICATIONDESCRIPTION, /* .memberTypeIndex */
    offsetof(UA_FindServersResponse, serversSize) - offsetof(UA_FindServersResponse, responseHeader) - sizeof(UA_ResponseHeader), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Servers") /* .memberName */
},};

/* ServerOnNetwork */
static UA_DataTypeMember ServerOnNetwork_members[4] = {
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RecordId") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_ServerOnNetwork, serverName) - offsetof(UA_ServerOnNetwork, recordId) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ServerName") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_ServerOnNetwork, discoveryUrl) - offsetof(UA_ServerOnNetwork, serverName) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DiscoveryUrl") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_ServerOnNetwork, serverCapabilitiesSize) - offsetof(UA_ServerOnNetwork, discoveryUrl) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ServerCapabilities") /* .memberName */
},};

/* FindServersOnNetworkRequest */
static UA_DataTypeMember FindServersOnNetworkRequest_members[4] = {
{
    UA_TYPES_REQUESTHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RequestHeader") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_FindServersOnNetworkRequest, startingRecordId) - offsetof(UA_FindServersOnNetworkRequest, requestHeader) - sizeof(UA_RequestHeader), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("StartingRecordId") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_FindServersOnNetworkRequest, maxRecordsToReturn) - offsetof(UA_FindServersOnNetworkRequest, startingRecordId) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("MaxRecordsToReturn") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_FindServersOnNetworkRequest, serverCapabilityFilterSize) - offsetof(UA_FindServersOnNetworkRequest, maxRecordsToReturn) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ServerCapabilityFilter") /* .memberName */
},};

/* FindServersOnNetworkResponse */
static UA_DataTypeMember FindServersOnNetworkResponse_members[3] = {
{
    UA_TYPES_RESPONSEHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ResponseHeader") /* .memberName */
},
{
    UA_TYPES_DATETIME, /* .memberTypeIndex */
    offsetof(UA_FindServersOnNetworkResponse, lastCounterResetTime) - offsetof(UA_FindServersOnNetworkResponse, responseHeader) - sizeof(UA_ResponseHeader), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("LastCounterResetTime") /* .memberName */
},
{
    UA_TYPES_SERVERONNETWORK, /* .memberTypeIndex */
    offsetof(UA_FindServersOnNetworkResponse, serversSize) - offsetof(UA_FindServersOnNetworkResponse, lastCounterResetTime) - sizeof(UA_DateTime), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Servers") /* .memberName */
},};

/* ApplicationInstanceCertificate */
#define ApplicationInstanceCertificate_members NULL

/* MessageSecurityMode */
#define MessageSecurityMode_members NULL

/* UserTokenType */
#define UserTokenType_members NULL

/* UserTokenPolicy */
static UA_DataTypeMember UserTokenPolicy_members[5] = {
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("PolicyId") /* .memberName */
},
{
    UA_TYPES_USERTOKENTYPE, /* .memberTypeIndex */
    offsetof(UA_UserTokenPolicy, tokenType) - offsetof(UA_UserTokenPolicy, policyId) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("TokenType") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_UserTokenPolicy, issuedTokenType) - offsetof(UA_UserTokenPolicy, tokenType) - sizeof(UA_UserTokenType), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("IssuedTokenType") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_UserTokenPolicy, issuerEndpointUrl) - offsetof(UA_UserTokenPolicy, issuedTokenType) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("IssuerEndpointUrl") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_UserTokenPolicy, securityPolicyUri) - offsetof(UA_UserTokenPolicy, issuerEndpointUrl) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SecurityPolicyUri") /* .memberName */
},};

/* EndpointDescription */
static UA_DataTypeMember EndpointDescription_members[8] = {
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("EndpointUrl") /* .memberName */
},
{
    UA_TYPES_APPLICATIONDESCRIPTION, /* .memberTypeIndex */
    offsetof(UA_EndpointDescription, server) - offsetof(UA_EndpointDescription, endpointUrl) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Server") /* .memberName */
},
{
    UA_TYPES_BYTESTRING, /* .memberTypeIndex */
    offsetof(UA_EndpointDescription, serverCertificate) - offsetof(UA_EndpointDescription, server) - sizeof(UA_ApplicationDescription), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ServerCertificate") /* .memberName */
},
{
    UA_TYPES_MESSAGESECURITYMODE, /* .memberTypeIndex */
    offsetof(UA_EndpointDescription, securityMode) - offsetof(UA_EndpointDescription, serverCertificate) - sizeof(UA_ByteString), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SecurityMode") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_EndpointDescription, securityPolicyUri) - offsetof(UA_EndpointDescription, securityMode) - sizeof(UA_MessageSecurityMode), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SecurityPolicyUri") /* .memberName */
},
{
    UA_TYPES_USERTOKENPOLICY, /* .memberTypeIndex */
    offsetof(UA_EndpointDescription, userIdentityTokensSize) - offsetof(UA_EndpointDescription, securityPolicyUri) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("UserIdentityTokens") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_EndpointDescription, transportProfileUri) - offsetof(UA_EndpointDescription, userIdentityTokens) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("TransportProfileUri") /* .memberName */
},
{
    UA_TYPES_BYTE, /* .memberTypeIndex */
    offsetof(UA_EndpointDescription, securityLevel) - offsetof(UA_EndpointDescription, transportProfileUri) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SecurityLevel") /* .memberName */
},};

/* GetEndpointsRequest */
static UA_DataTypeMember GetEndpointsRequest_members[4] = {
{
    UA_TYPES_REQUESTHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RequestHeader") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_GetEndpointsRequest, endpointUrl) - offsetof(UA_GetEndpointsRequest, requestHeader) - sizeof(UA_RequestHeader), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("EndpointUrl") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_GetEndpointsRequest, localeIdsSize) - offsetof(UA_GetEndpointsRequest, endpointUrl) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("LocaleIds") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_GetEndpointsRequest, profileUrisSize) - offsetof(UA_GetEndpointsRequest, localeIds) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ProfileUris") /* .memberName */
},};

/* GetEndpointsResponse */
static UA_DataTypeMember GetEndpointsResponse_members[2] = {
{
    UA_TYPES_RESPONSEHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ResponseHeader") /* .memberName */
},
{
    UA_TYPES_ENDPOINTDESCRIPTION, /* .memberTypeIndex */
    offsetof(UA_GetEndpointsResponse, endpointsSize) - offsetof(UA_GetEndpointsResponse, responseHeader) - sizeof(UA_ResponseHeader), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Endpoints") /* .memberName */
},};

/* RegisteredServer */
static UA_DataTypeMember RegisteredServer_members[8] = {
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ServerUri") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_RegisteredServer, productUri) - offsetof(UA_RegisteredServer, serverUri) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ProductUri") /* .memberName */
},
{
    UA_TYPES_LOCALIZEDTEXT, /* .memberTypeIndex */
    offsetof(UA_RegisteredServer, serverNamesSize) - offsetof(UA_RegisteredServer, productUri) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ServerNames") /* .memberName */
},
{
    UA_TYPES_APPLICATIONTYPE, /* .memberTypeIndex */
    offsetof(UA_RegisteredServer, serverType) - offsetof(UA_RegisteredServer, serverNames) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ServerType") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_RegisteredServer, gatewayServerUri) - offsetof(UA_RegisteredServer, serverType) - sizeof(UA_ApplicationType), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("GatewayServerUri") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_RegisteredServer, discoveryUrlsSize) - offsetof(UA_RegisteredServer, gatewayServerUri) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DiscoveryUrls") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_RegisteredServer, semaphoreFilePath) - offsetof(UA_RegisteredServer, discoveryUrls) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SemaphoreFilePath") /* .memberName */
},
{
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_RegisteredServer, isOnline) - offsetof(UA_RegisteredServer, semaphoreFilePath) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("IsOnline") /* .memberName */
},};

/* RegisterServerRequest */
static UA_DataTypeMember RegisterServerRequest_members[2] = {
{
    UA_TYPES_REQUESTHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RequestHeader") /* .memberName */
},
{
    UA_TYPES_REGISTEREDSERVER, /* .memberTypeIndex */
    offsetof(UA_RegisterServerRequest, server) - offsetof(UA_RegisterServerRequest, requestHeader) - sizeof(UA_RequestHeader), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Server") /* .memberName */
},};

/* RegisterServerResponse */
static UA_DataTypeMember RegisterServerResponse_members[1] = {
{
    UA_TYPES_RESPONSEHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ResponseHeader") /* .memberName */
},};

/* DiscoveryConfiguration */
#define DiscoveryConfiguration_members NULL

/* MdnsDiscoveryConfiguration */
static UA_DataTypeMember MdnsDiscoveryConfiguration_members[2] = {
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("MdnsServerName") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_MdnsDiscoveryConfiguration, serverCapabilitiesSize) - offsetof(UA_MdnsDiscoveryConfiguration, mdnsServerName) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ServerCapabilities") /* .memberName */
},};

/* RegisterServer2Request */
static UA_DataTypeMember RegisterServer2Request_members[3] = {
{
    UA_TYPES_REQUESTHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RequestHeader") /* .memberName */
},
{
    UA_TYPES_REGISTEREDSERVER, /* .memberTypeIndex */
    offsetof(UA_RegisterServer2Request, server) - offsetof(UA_RegisterServer2Request, requestHeader) - sizeof(UA_RequestHeader), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Server") /* .memberName */
},
{
    UA_TYPES_EXTENSIONOBJECT, /* .memberTypeIndex */
    offsetof(UA_RegisterServer2Request, discoveryConfigurationSize) - offsetof(UA_RegisterServer2Request, server) - sizeof(UA_RegisteredServer), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DiscoveryConfiguration") /* .memberName */
},};

/* RegisterServer2Response */
static UA_DataTypeMember RegisterServer2Response_members[3] = {
{
    UA_TYPES_RESPONSEHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ResponseHeader") /* .memberName */
},
{
    UA_TYPES_STATUSCODE, /* .memberTypeIndex */
    offsetof(UA_RegisterServer2Response, configurationResultsSize) - offsetof(UA_RegisterServer2Response, responseHeader) - sizeof(UA_ResponseHeader), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ConfigurationResults") /* .memberName */
},
{
    UA_TYPES_DIAGNOSTICINFO, /* .memberTypeIndex */
    offsetof(UA_RegisterServer2Response, diagnosticInfosSize) - offsetof(UA_RegisterServer2Response, configurationResults) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DiagnosticInfos") /* .memberName */
},};

/* SecurityTokenRequestType */
#define SecurityTokenRequestType_members NULL

/* ChannelSecurityToken */
static UA_DataTypeMember ChannelSecurityToken_members[4] = {
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ChannelId") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_ChannelSecurityToken, tokenId) - offsetof(UA_ChannelSecurityToken, channelId) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("TokenId") /* .memberName */
},
{
    UA_TYPES_DATETIME, /* .memberTypeIndex */
    offsetof(UA_ChannelSecurityToken, createdAt) - offsetof(UA_ChannelSecurityToken, tokenId) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("CreatedAt") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_ChannelSecurityToken, revisedLifetime) - offsetof(UA_ChannelSecurityToken, createdAt) - sizeof(UA_DateTime), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RevisedLifetime") /* .memberName */
},};

/* OpenSecureChannelRequest */
static UA_DataTypeMember OpenSecureChannelRequest_members[6] = {
{
    UA_TYPES_REQUESTHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RequestHeader") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_OpenSecureChannelRequest, clientProtocolVersion) - offsetof(UA_OpenSecureChannelRequest, requestHeader) - sizeof(UA_RequestHeader), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ClientProtocolVersion") /* .memberName */
},
{
    UA_TYPES_SECURITYTOKENREQUESTTYPE, /* .memberTypeIndex */
    offsetof(UA_OpenSecureChannelRequest, requestType) - offsetof(UA_OpenSecureChannelRequest, clientProtocolVersion) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RequestType") /* .memberName */
},
{
    UA_TYPES_MESSAGESECURITYMODE, /* .memberTypeIndex */
    offsetof(UA_OpenSecureChannelRequest, securityMode) - offsetof(UA_OpenSecureChannelRequest, requestType) - sizeof(UA_SecurityTokenRequestType), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SecurityMode") /* .memberName */
},
{
    UA_TYPES_BYTESTRING, /* .memberTypeIndex */
    offsetof(UA_OpenSecureChannelRequest, clientNonce) - offsetof(UA_OpenSecureChannelRequest, securityMode) - sizeof(UA_MessageSecurityMode), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ClientNonce") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_OpenSecureChannelRequest, requestedLifetime) - offsetof(UA_OpenSecureChannelRequest, clientNonce) - sizeof(UA_ByteString), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RequestedLifetime") /* .memberName */
},};

/* OpenSecureChannelResponse */
static UA_DataTypeMember OpenSecureChannelResponse_members[4] = {
{
    UA_TYPES_RESPONSEHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ResponseHeader") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_OpenSecureChannelResponse, serverProtocolVersion) - offsetof(UA_OpenSecureChannelResponse, responseHeader) - sizeof(UA_ResponseHeader), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ServerProtocolVersion") /* .memberName */
},
{
    UA_TYPES_CHANNELSECURITYTOKEN, /* .memberTypeIndex */
    offsetof(UA_OpenSecureChannelResponse, securityToken) - offsetof(UA_OpenSecureChannelResponse, serverProtocolVersion) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SecurityToken") /* .memberName */
},
{
    UA_TYPES_BYTESTRING, /* .memberTypeIndex */
    offsetof(UA_OpenSecureChannelResponse, serverNonce) - offsetof(UA_OpenSecureChannelResponse, securityToken) - sizeof(UA_ChannelSecurityToken), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ServerNonce") /* .memberName */
},};

/* CloseSecureChannelRequest */
static UA_DataTypeMember CloseSecureChannelRequest_members[1] = {
{
    UA_TYPES_REQUESTHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RequestHeader") /* .memberName */
},};

/* CloseSecureChannelResponse */
static UA_DataTypeMember CloseSecureChannelResponse_members[1] = {
{
    UA_TYPES_RESPONSEHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ResponseHeader") /* .memberName */
},};

/* SignedSoftwareCertificate */
static UA_DataTypeMember SignedSoftwareCertificate_members[2] = {
{
    UA_TYPES_BYTESTRING, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("CertificateData") /* .memberName */
},
{
    UA_TYPES_BYTESTRING, /* .memberTypeIndex */
    offsetof(UA_SignedSoftwareCertificate, signature) - offsetof(UA_SignedSoftwareCertificate, certificateData) - sizeof(UA_ByteString), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Signature") /* .memberName */
},};

/* SessionAuthenticationToken */
#define SessionAuthenticationToken_members NULL

/* SignatureData */
static UA_DataTypeMember SignatureData_members[2] = {
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Algorithm") /* .memberName */
},
{
    UA_TYPES_BYTESTRING, /* .memberTypeIndex */
    offsetof(UA_SignatureData, signature) - offsetof(UA_SignatureData, algorithm) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Signature") /* .memberName */
},};

/* CreateSessionRequest */
static UA_DataTypeMember CreateSessionRequest_members[9] = {
{
    UA_TYPES_REQUESTHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RequestHeader") /* .memberName */
},
{
    UA_TYPES_APPLICATIONDESCRIPTION, /* .memberTypeIndex */
    offsetof(UA_CreateSessionRequest, clientDescription) - offsetof(UA_CreateSessionRequest, requestHeader) - sizeof(UA_RequestHeader), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ClientDescription") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_CreateSessionRequest, serverUri) - offsetof(UA_CreateSessionRequest, clientDescription) - sizeof(UA_ApplicationDescription), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ServerUri") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_CreateSessionRequest, endpointUrl) - offsetof(UA_CreateSessionRequest, serverUri) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("EndpointUrl") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_CreateSessionRequest, sessionName) - offsetof(UA_CreateSessionRequest, endpointUrl) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SessionName") /* .memberName */
},
{
    UA_TYPES_BYTESTRING, /* .memberTypeIndex */
    offsetof(UA_CreateSessionRequest, clientNonce) - offsetof(UA_CreateSessionRequest, sessionName) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ClientNonce") /* .memberName */
},
{
    UA_TYPES_BYTESTRING, /* .memberTypeIndex */
    offsetof(UA_CreateSessionRequest, clientCertificate) - offsetof(UA_CreateSessionRequest, clientNonce) - sizeof(UA_ByteString), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ClientCertificate") /* .memberName */
},
{
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_CreateSessionRequest, requestedSessionTimeout) - offsetof(UA_CreateSessionRequest, clientCertificate) - sizeof(UA_ByteString), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RequestedSessionTimeout") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_CreateSessionRequest, maxResponseMessageSize) - offsetof(UA_CreateSessionRequest, requestedSessionTimeout) - sizeof(UA_Double), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("MaxResponseMessageSize") /* .memberName */
},};

/* CreateSessionResponse */
static UA_DataTypeMember CreateSessionResponse_members[10] = {
{
    UA_TYPES_RESPONSEHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ResponseHeader") /* .memberName */
},
{
    UA_TYPES_NODEID, /* .memberTypeIndex */
    offsetof(UA_CreateSessionResponse, sessionId) - offsetof(UA_CreateSessionResponse, responseHeader) - sizeof(UA_ResponseHeader), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SessionId") /* .memberName */
},
{
    UA_TYPES_NODEID, /* .memberTypeIndex */
    offsetof(UA_CreateSessionResponse, authenticationToken) - offsetof(UA_CreateSessionResponse, sessionId) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("AuthenticationToken") /* .memberName */
},
{
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_CreateSessionResponse, revisedSessionTimeout) - offsetof(UA_CreateSessionResponse, authenticationToken) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RevisedSessionTimeout") /* .memberName */
},
{
    UA_TYPES_BYTESTRING, /* .memberTypeIndex */
    offsetof(UA_CreateSessionResponse, serverNonce) - offsetof(UA_CreateSessionResponse, revisedSessionTimeout) - sizeof(UA_Double), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ServerNonce") /* .memberName */
},
{
    UA_TYPES_BYTESTRING, /* .memberTypeIndex */
    offsetof(UA_CreateSessionResponse, serverCertificate) - offsetof(UA_CreateSessionResponse, serverNonce) - sizeof(UA_ByteString), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ServerCertificate") /* .memberName */
},
{
    UA_TYPES_ENDPOINTDESCRIPTION, /* .memberTypeIndex */
    offsetof(UA_CreateSessionResponse, serverEndpointsSize) - offsetof(UA_CreateSessionResponse, serverCertificate) - sizeof(UA_ByteString), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ServerEndpoints") /* .memberName */
},
{
    UA_TYPES_SIGNEDSOFTWARECERTIFICATE, /* .memberTypeIndex */
    offsetof(UA_CreateSessionResponse, serverSoftwareCertificatesSize) - offsetof(UA_CreateSessionResponse, serverEndpoints) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ServerSoftwareCertificates") /* .memberName */
},
{
    UA_TYPES_SIGNATUREDATA, /* .memberTypeIndex */
    offsetof(UA_CreateSessionResponse, serverSignature) - offsetof(UA_CreateSessionResponse, serverSoftwareCertificates) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ServerSignature") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_CreateSessionResponse, maxRequestMessageSize) - offsetof(UA_CreateSessionResponse, serverSignature) - sizeof(UA_SignatureData), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("MaxRequestMessageSize") /* .memberName */
},};

/* UserIdentityToken */
static UA_DataTypeMember UserIdentityToken_members[1] = {
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("PolicyId") /* .memberName */
},};

/* AnonymousIdentityToken */
static UA_DataTypeMember AnonymousIdentityToken_members[1] = {
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("PolicyId") /* .memberName */
},};

/* UserNameIdentityToken */
static UA_DataTypeMember UserNameIdentityToken_members[4] = {
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("PolicyId") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_UserNameIdentityToken, userName) - offsetof(UA_UserNameIdentityToken, policyId) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("UserName") /* .memberName */
},
{
    UA_TYPES_BYTESTRING, /* .memberTypeIndex */
    offsetof(UA_UserNameIdentityToken, password) - offsetof(UA_UserNameIdentityToken, userName) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Password") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_UserNameIdentityToken, encryptionAlgorithm) - offsetof(UA_UserNameIdentityToken, password) - sizeof(UA_ByteString), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("EncryptionAlgorithm") /* .memberName */
},};

/* X509IdentityToken */
static UA_DataTypeMember X509IdentityToken_members[2] = {
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("PolicyId") /* .memberName */
},
{
    UA_TYPES_BYTESTRING, /* .memberTypeIndex */
    offsetof(UA_X509IdentityToken, certificateData) - offsetof(UA_X509IdentityToken, policyId) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("CertificateData") /* .memberName */
},};

/* IssuedIdentityToken */
static UA_DataTypeMember IssuedIdentityToken_members[3] = {
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("PolicyId") /* .memberName */
},
{
    UA_TYPES_BYTESTRING, /* .memberTypeIndex */
    offsetof(UA_IssuedIdentityToken, tokenData) - offsetof(UA_IssuedIdentityToken, policyId) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("TokenData") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_IssuedIdentityToken, encryptionAlgorithm) - offsetof(UA_IssuedIdentityToken, tokenData) - sizeof(UA_ByteString), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("EncryptionAlgorithm") /* .memberName */
},};

/* RsaEncryptedSecret */
#define RsaEncryptedSecret_members NULL

/* ActivateSessionRequest */
static UA_DataTypeMember ActivateSessionRequest_members[6] = {
{
    UA_TYPES_REQUESTHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RequestHeader") /* .memberName */
},
{
    UA_TYPES_SIGNATUREDATA, /* .memberTypeIndex */
    offsetof(UA_ActivateSessionRequest, clientSignature) - offsetof(UA_ActivateSessionRequest, requestHeader) - sizeof(UA_RequestHeader), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ClientSignature") /* .memberName */
},
{
    UA_TYPES_SIGNEDSOFTWARECERTIFICATE, /* .memberTypeIndex */
    offsetof(UA_ActivateSessionRequest, clientSoftwareCertificatesSize) - offsetof(UA_ActivateSessionRequest, clientSignature) - sizeof(UA_SignatureData), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ClientSoftwareCertificates") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_ActivateSessionRequest, localeIdsSize) - offsetof(UA_ActivateSessionRequest, clientSoftwareCertificates) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("LocaleIds") /* .memberName */
},
{
    UA_TYPES_EXTENSIONOBJECT, /* .memberTypeIndex */
    offsetof(UA_ActivateSessionRequest, userIdentityToken) - offsetof(UA_ActivateSessionRequest, localeIds) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("UserIdentityToken") /* .memberName */
},
{
    UA_TYPES_SIGNATUREDATA, /* .memberTypeIndex */
    offsetof(UA_ActivateSessionRequest, userTokenSignature) - offsetof(UA_ActivateSessionRequest, userIdentityToken) - sizeof(UA_ExtensionObject), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("UserTokenSignature") /* .memberName */
},};

/* ActivateSessionResponse */
static UA_DataTypeMember ActivateSessionResponse_members[4] = {
{
    UA_TYPES_RESPONSEHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ResponseHeader") /* .memberName */
},
{
    UA_TYPES_BYTESTRING, /* .memberTypeIndex */
    offsetof(UA_ActivateSessionResponse, serverNonce) - offsetof(UA_ActivateSessionResponse, responseHeader) - sizeof(UA_ResponseHeader), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ServerNonce") /* .memberName */
},
{
    UA_TYPES_STATUSCODE, /* .memberTypeIndex */
    offsetof(UA_ActivateSessionResponse, resultsSize) - offsetof(UA_ActivateSessionResponse, serverNonce) - sizeof(UA_ByteString), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Results") /* .memberName */
},
{
    UA_TYPES_DIAGNOSTICINFO, /* .memberTypeIndex */
    offsetof(UA_ActivateSessionResponse, diagnosticInfosSize) - offsetof(UA_ActivateSessionResponse, results) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DiagnosticInfos") /* .memberName */
},};

/* CloseSessionRequest */
static UA_DataTypeMember CloseSessionRequest_members[2] = {
{
    UA_TYPES_REQUESTHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RequestHeader") /* .memberName */
},
{
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_CloseSessionRequest, deleteSubscriptions) - offsetof(UA_CloseSessionRequest, requestHeader) - sizeof(UA_RequestHeader), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DeleteSubscriptions") /* .memberName */
},};

/* CloseSessionResponse */
static UA_DataTypeMember CloseSessionResponse_members[1] = {
{
    UA_TYPES_RESPONSEHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ResponseHeader") /* .memberName */
},};

/* CancelRequest */
static UA_DataTypeMember CancelRequest_members[2] = {
{
    UA_TYPES_REQUESTHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RequestHeader") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_CancelRequest, requestHandle) - offsetof(UA_CancelRequest, requestHeader) - sizeof(UA_RequestHeader), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RequestHandle") /* .memberName */
},};

/* CancelResponse */
static UA_DataTypeMember CancelResponse_members[2] = {
{
    UA_TYPES_RESPONSEHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ResponseHeader") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_CancelResponse, cancelCount) - offsetof(UA_CancelResponse, responseHeader) - sizeof(UA_ResponseHeader), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("CancelCount") /* .memberName */
},};

/* NodeAttributesMask */
#define NodeAttributesMask_members NULL

/* NodeAttributes */
static UA_DataTypeMember NodeAttributes_members[5] = {
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SpecifiedAttributes") /* .memberName */
},
{
    UA_TYPES_LOCALIZEDTEXT, /* .memberTypeIndex */
    offsetof(UA_NodeAttributes, displayName) - offsetof(UA_NodeAttributes, specifiedAttributes) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DisplayName") /* .memberName */
},
{
    UA_TYPES_LOCALIZEDTEXT, /* .memberTypeIndex */
    offsetof(UA_NodeAttributes, description) - offsetof(UA_NodeAttributes, displayName) - sizeof(UA_LocalizedText), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Description") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_NodeAttributes, writeMask) - offsetof(UA_NodeAttributes, description) - sizeof(UA_LocalizedText), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("WriteMask") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_NodeAttributes, userWriteMask) - offsetof(UA_NodeAttributes, writeMask) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("UserWriteMask") /* .memberName */
},};

/* ObjectAttributes */
static UA_DataTypeMember ObjectAttributes_members[6] = {
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SpecifiedAttributes") /* .memberName */
},
{
    UA_TYPES_LOCALIZEDTEXT, /* .memberTypeIndex */
    offsetof(UA_ObjectAttributes, displayName) - offsetof(UA_ObjectAttributes, specifiedAttributes) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DisplayName") /* .memberName */
},
{
    UA_TYPES_LOCALIZEDTEXT, /* .memberTypeIndex */
    offsetof(UA_ObjectAttributes, description) - offsetof(UA_ObjectAttributes, displayName) - sizeof(UA_LocalizedText), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Description") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_ObjectAttributes, writeMask) - offsetof(UA_ObjectAttributes, description) - sizeof(UA_LocalizedText), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("WriteMask") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_ObjectAttributes, userWriteMask) - offsetof(UA_ObjectAttributes, writeMask) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("UserWriteMask") /* .memberName */
},
{
    UA_TYPES_BYTE, /* .memberTypeIndex */
    offsetof(UA_ObjectAttributes, eventNotifier) - offsetof(UA_ObjectAttributes, userWriteMask) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("EventNotifier") /* .memberName */
},};

/* VariableAttributes */
static UA_DataTypeMember VariableAttributes_members[13] = {
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SpecifiedAttributes") /* .memberName */
},
{
    UA_TYPES_LOCALIZEDTEXT, /* .memberTypeIndex */
    offsetof(UA_VariableAttributes, displayName) - offsetof(UA_VariableAttributes, specifiedAttributes) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DisplayName") /* .memberName */
},
{
    UA_TYPES_LOCALIZEDTEXT, /* .memberTypeIndex */
    offsetof(UA_VariableAttributes, description) - offsetof(UA_VariableAttributes, displayName) - sizeof(UA_LocalizedText), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Description") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_VariableAttributes, writeMask) - offsetof(UA_VariableAttributes, description) - sizeof(UA_LocalizedText), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("WriteMask") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_VariableAttributes, userWriteMask) - offsetof(UA_VariableAttributes, writeMask) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("UserWriteMask") /* .memberName */
},
{
    UA_TYPES_VARIANT, /* .memberTypeIndex */
    offsetof(UA_VariableAttributes, value) - offsetof(UA_VariableAttributes, userWriteMask) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Value") /* .memberName */
},
{
    UA_TYPES_NODEID, /* .memberTypeIndex */
    offsetof(UA_VariableAttributes, dataType) - offsetof(UA_VariableAttributes, value) - sizeof(UA_Variant), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DataType") /* .memberName */
},
{
    UA_TYPES_INT32, /* .memberTypeIndex */
    offsetof(UA_VariableAttributes, valueRank) - offsetof(UA_VariableAttributes, dataType) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ValueRank") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_VariableAttributes, arrayDimensionsSize) - offsetof(UA_VariableAttributes, valueRank) - sizeof(UA_Int32), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ArrayDimensions") /* .memberName */
},
{
    UA_TYPES_BYTE, /* .memberTypeIndex */
    offsetof(UA_VariableAttributes, accessLevel) - offsetof(UA_VariableAttributes, arrayDimensions) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("AccessLevel") /* .memberName */
},
{
    UA_TYPES_BYTE, /* .memberTypeIndex */
    offsetof(UA_VariableAttributes, userAccessLevel) - offsetof(UA_VariableAttributes, accessLevel) - sizeof(UA_Byte), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("UserAccessLevel") /* .memberName */
},
{
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_VariableAttributes, minimumSamplingInterval) - offsetof(UA_VariableAttributes, userAccessLevel) - sizeof(UA_Byte), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("MinimumSamplingInterval") /* .memberName */
},
{
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_VariableAttributes, historizing) - offsetof(UA_VariableAttributes, minimumSamplingInterval) - sizeof(UA_Double), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Historizing") /* .memberName */
},};

/* MethodAttributes */
static UA_DataTypeMember MethodAttributes_members[7] = {
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SpecifiedAttributes") /* .memberName */
},
{
    UA_TYPES_LOCALIZEDTEXT, /* .memberTypeIndex */
    offsetof(UA_MethodAttributes, displayName) - offsetof(UA_MethodAttributes, specifiedAttributes) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DisplayName") /* .memberName */
},
{
    UA_TYPES_LOCALIZEDTEXT, /* .memberTypeIndex */
    offsetof(UA_MethodAttributes, description) - offsetof(UA_MethodAttributes, displayName) - sizeof(UA_LocalizedText), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Description") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_MethodAttributes, writeMask) - offsetof(UA_MethodAttributes, description) - sizeof(UA_LocalizedText), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("WriteMask") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_MethodAttributes, userWriteMask) - offsetof(UA_MethodAttributes, writeMask) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("UserWriteMask") /* .memberName */
},
{
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_MethodAttributes, executable) - offsetof(UA_MethodAttributes, userWriteMask) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Executable") /* .memberName */
},
{
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_MethodAttributes, userExecutable) - offsetof(UA_MethodAttributes, executable) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("UserExecutable") /* .memberName */
},};

/* ObjectTypeAttributes */
static UA_DataTypeMember ObjectTypeAttributes_members[6] = {
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SpecifiedAttributes") /* .memberName */
},
{
    UA_TYPES_LOCALIZEDTEXT, /* .memberTypeIndex */
    offsetof(UA_ObjectTypeAttributes, displayName) - offsetof(UA_ObjectTypeAttributes, specifiedAttributes) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DisplayName") /* .memberName */
},
{
    UA_TYPES_LOCALIZEDTEXT, /* .memberTypeIndex */
    offsetof(UA_ObjectTypeAttributes, description) - offsetof(UA_ObjectTypeAttributes, displayName) - sizeof(UA_LocalizedText), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Description") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_ObjectTypeAttributes, writeMask) - offsetof(UA_ObjectTypeAttributes, description) - sizeof(UA_LocalizedText), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("WriteMask") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_ObjectTypeAttributes, userWriteMask) - offsetof(UA_ObjectTypeAttributes, writeMask) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("UserWriteMask") /* .memberName */
},
{
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_ObjectTypeAttributes, isAbstract) - offsetof(UA_ObjectTypeAttributes, userWriteMask) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("IsAbstract") /* .memberName */
},};

/* VariableTypeAttributes */
static UA_DataTypeMember VariableTypeAttributes_members[10] = {
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SpecifiedAttributes") /* .memberName */
},
{
    UA_TYPES_LOCALIZEDTEXT, /* .memberTypeIndex */
    offsetof(UA_VariableTypeAttributes, displayName) - offsetof(UA_VariableTypeAttributes, specifiedAttributes) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DisplayName") /* .memberName */
},
{
    UA_TYPES_LOCALIZEDTEXT, /* .memberTypeIndex */
    offsetof(UA_VariableTypeAttributes, description) - offsetof(UA_VariableTypeAttributes, displayName) - sizeof(UA_LocalizedText), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Description") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_VariableTypeAttributes, writeMask) - offsetof(UA_VariableTypeAttributes, description) - sizeof(UA_LocalizedText), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("WriteMask") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_VariableTypeAttributes, userWriteMask) - offsetof(UA_VariableTypeAttributes, writeMask) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("UserWriteMask") /* .memberName */
},
{
    UA_TYPES_VARIANT, /* .memberTypeIndex */
    offsetof(UA_VariableTypeAttributes, value) - offsetof(UA_VariableTypeAttributes, userWriteMask) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Value") /* .memberName */
},
{
    UA_TYPES_NODEID, /* .memberTypeIndex */
    offsetof(UA_VariableTypeAttributes, dataType) - offsetof(UA_VariableTypeAttributes, value) - sizeof(UA_Variant), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DataType") /* .memberName */
},
{
    UA_TYPES_INT32, /* .memberTypeIndex */
    offsetof(UA_VariableTypeAttributes, valueRank) - offsetof(UA_VariableTypeAttributes, dataType) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ValueRank") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_VariableTypeAttributes, arrayDimensionsSize) - offsetof(UA_VariableTypeAttributes, valueRank) - sizeof(UA_Int32), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ArrayDimensions") /* .memberName */
},
{
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_VariableTypeAttributes, isAbstract) - offsetof(UA_VariableTypeAttributes, arrayDimensions) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("IsAbstract") /* .memberName */
},};

/* ReferenceTypeAttributes */
static UA_DataTypeMember ReferenceTypeAttributes_members[8] = {
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SpecifiedAttributes") /* .memberName */
},
{
    UA_TYPES_LOCALIZEDTEXT, /* .memberTypeIndex */
    offsetof(UA_ReferenceTypeAttributes, displayName) - offsetof(UA_ReferenceTypeAttributes, specifiedAttributes) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DisplayName") /* .memberName */
},
{
    UA_TYPES_LOCALIZEDTEXT, /* .memberTypeIndex */
    offsetof(UA_ReferenceTypeAttributes, description) - offsetof(UA_ReferenceTypeAttributes, displayName) - sizeof(UA_LocalizedText), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Description") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_ReferenceTypeAttributes, writeMask) - offsetof(UA_ReferenceTypeAttributes, description) - sizeof(UA_LocalizedText), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("WriteMask") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_ReferenceTypeAttributes, userWriteMask) - offsetof(UA_ReferenceTypeAttributes, writeMask) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("UserWriteMask") /* .memberName */
},
{
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_ReferenceTypeAttributes, isAbstract) - offsetof(UA_ReferenceTypeAttributes, userWriteMask) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("IsAbstract") /* .memberName */
},
{
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_ReferenceTypeAttributes, symmetric) - offsetof(UA_ReferenceTypeAttributes, isAbstract) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Symmetric") /* .memberName */
},
{
    UA_TYPES_LOCALIZEDTEXT, /* .memberTypeIndex */
    offsetof(UA_ReferenceTypeAttributes, inverseName) - offsetof(UA_ReferenceTypeAttributes, symmetric) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("InverseName") /* .memberName */
},};

/* DataTypeAttributes */
static UA_DataTypeMember DataTypeAttributes_members[6] = {
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SpecifiedAttributes") /* .memberName */
},
{
    UA_TYPES_LOCALIZEDTEXT, /* .memberTypeIndex */
    offsetof(UA_DataTypeAttributes, displayName) - offsetof(UA_DataTypeAttributes, specifiedAttributes) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DisplayName") /* .memberName */
},
{
    UA_TYPES_LOCALIZEDTEXT, /* .memberTypeIndex */
    offsetof(UA_DataTypeAttributes, description) - offsetof(UA_DataTypeAttributes, displayName) - sizeof(UA_LocalizedText), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Description") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_DataTypeAttributes, writeMask) - offsetof(UA_DataTypeAttributes, description) - sizeof(UA_LocalizedText), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("WriteMask") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_DataTypeAttributes, userWriteMask) - offsetof(UA_DataTypeAttributes, writeMask) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("UserWriteMask") /* .memberName */
},
{
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_DataTypeAttributes, isAbstract) - offsetof(UA_DataTypeAttributes, userWriteMask) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("IsAbstract") /* .memberName */
},};

/* ViewAttributes */
static UA_DataTypeMember ViewAttributes_members[7] = {
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SpecifiedAttributes") /* .memberName */
},
{
    UA_TYPES_LOCALIZEDTEXT, /* .memberTypeIndex */
    offsetof(UA_ViewAttributes, displayName) - offsetof(UA_ViewAttributes, specifiedAttributes) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DisplayName") /* .memberName */
},
{
    UA_TYPES_LOCALIZEDTEXT, /* .memberTypeIndex */
    offsetof(UA_ViewAttributes, description) - offsetof(UA_ViewAttributes, displayName) - sizeof(UA_LocalizedText), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Description") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_ViewAttributes, writeMask) - offsetof(UA_ViewAttributes, description) - sizeof(UA_LocalizedText), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("WriteMask") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_ViewAttributes, userWriteMask) - offsetof(UA_ViewAttributes, writeMask) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("UserWriteMask") /* .memberName */
},
{
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_ViewAttributes, containsNoLoops) - offsetof(UA_ViewAttributes, userWriteMask) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ContainsNoLoops") /* .memberName */
},
{
    UA_TYPES_BYTE, /* .memberTypeIndex */
    offsetof(UA_ViewAttributes, eventNotifier) - offsetof(UA_ViewAttributes, containsNoLoops) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("EventNotifier") /* .memberName */
},};

/* GenericAttributeValue */
static UA_DataTypeMember GenericAttributeValue_members[2] = {
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("AttributeId") /* .memberName */
},
{
    UA_TYPES_VARIANT, /* .memberTypeIndex */
    offsetof(UA_GenericAttributeValue, value) - offsetof(UA_GenericAttributeValue, attributeId) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Value") /* .memberName */
},};

/* GenericAttributes */
static UA_DataTypeMember GenericAttributes_members[6] = {
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SpecifiedAttributes") /* .memberName */
},
{
    UA_TYPES_LOCALIZEDTEXT, /* .memberTypeIndex */
    offsetof(UA_GenericAttributes, displayName) - offsetof(UA_GenericAttributes, specifiedAttributes) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DisplayName") /* .memberName */
},
{
    UA_TYPES_LOCALIZEDTEXT, /* .memberTypeIndex */
    offsetof(UA_GenericAttributes, description) - offsetof(UA_GenericAttributes, displayName) - sizeof(UA_LocalizedText), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Description") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_GenericAttributes, writeMask) - offsetof(UA_GenericAttributes, description) - sizeof(UA_LocalizedText), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("WriteMask") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_GenericAttributes, userWriteMask) - offsetof(UA_GenericAttributes, writeMask) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("UserWriteMask") /* .memberName */
},
{
    UA_TYPES_GENERICATTRIBUTEVALUE, /* .memberTypeIndex */
    offsetof(UA_GenericAttributes, attributeValuesSize) - offsetof(UA_GenericAttributes, userWriteMask) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("AttributeValues") /* .memberName */
},};

/* AddNodesItem */
static UA_DataTypeMember AddNodesItem_members[7] = {
{
    UA_TYPES_EXPANDEDNODEID, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ParentNodeId") /* .memberName */
},
{
    UA_TYPES_NODEID, /* .memberTypeIndex */
    offsetof(UA_AddNodesItem, referenceTypeId) - offsetof(UA_AddNodesItem, parentNodeId) - sizeof(UA_ExpandedNodeId), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ReferenceTypeId") /* .memberName */
},
{
    UA_TYPES_EXPANDEDNODEID, /* .memberTypeIndex */
    offsetof(UA_AddNodesItem, requestedNewNodeId) - offsetof(UA_AddNodesItem, referenceTypeId) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RequestedNewNodeId") /* .memberName */
},
{
    UA_TYPES_QUALIFIEDNAME, /* .memberTypeIndex */
    offsetof(UA_AddNodesItem, browseName) - offsetof(UA_AddNodesItem, requestedNewNodeId) - sizeof(UA_ExpandedNodeId), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("BrowseName") /* .memberName */
},
{
    UA_TYPES_NODECLASS, /* .memberTypeIndex */
    offsetof(UA_AddNodesItem, nodeClass) - offsetof(UA_AddNodesItem, browseName) - sizeof(UA_QualifiedName), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("NodeClass") /* .memberName */
},
{
    UA_TYPES_EXTENSIONOBJECT, /* .memberTypeIndex */
    offsetof(UA_AddNodesItem, nodeAttributes) - offsetof(UA_AddNodesItem, nodeClass) - sizeof(UA_NodeClass), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("NodeAttributes") /* .memberName */
},
{
    UA_TYPES_EXPANDEDNODEID, /* .memberTypeIndex */
    offsetof(UA_AddNodesItem, typeDefinition) - offsetof(UA_AddNodesItem, nodeAttributes) - sizeof(UA_ExtensionObject), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("TypeDefinition") /* .memberName */
},};

/* AddNodesResult */
static UA_DataTypeMember AddNodesResult_members[2] = {
{
    UA_TYPES_STATUSCODE, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("StatusCode") /* .memberName */
},
{
    UA_TYPES_NODEID, /* .memberTypeIndex */
    offsetof(UA_AddNodesResult, addedNodeId) - offsetof(UA_AddNodesResult, statusCode) - sizeof(UA_StatusCode), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("AddedNodeId") /* .memberName */
},};

/* AddNodesRequest */
static UA_DataTypeMember AddNodesRequest_members[2] = {
{
    UA_TYPES_REQUESTHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RequestHeader") /* .memberName */
},
{
    UA_TYPES_ADDNODESITEM, /* .memberTypeIndex */
    offsetof(UA_AddNodesRequest, nodesToAddSize) - offsetof(UA_AddNodesRequest, requestHeader) - sizeof(UA_RequestHeader), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("NodesToAdd") /* .memberName */
},};

/* AddNodesResponse */
static UA_DataTypeMember AddNodesResponse_members[3] = {
{
    UA_TYPES_RESPONSEHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ResponseHeader") /* .memberName */
},
{
    UA_TYPES_ADDNODESRESULT, /* .memberTypeIndex */
    offsetof(UA_AddNodesResponse, resultsSize) - offsetof(UA_AddNodesResponse, responseHeader) - sizeof(UA_ResponseHeader), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Results") /* .memberName */
},
{
    UA_TYPES_DIAGNOSTICINFO, /* .memberTypeIndex */
    offsetof(UA_AddNodesResponse, diagnosticInfosSize) - offsetof(UA_AddNodesResponse, results) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DiagnosticInfos") /* .memberName */
},};

/* AddReferencesItem */
static UA_DataTypeMember AddReferencesItem_members[6] = {
{
    UA_TYPES_NODEID, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SourceNodeId") /* .memberName */
},
{
    UA_TYPES_NODEID, /* .memberTypeIndex */
    offsetof(UA_AddReferencesItem, referenceTypeId) - offsetof(UA_AddReferencesItem, sourceNodeId) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ReferenceTypeId") /* .memberName */
},
{
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_AddReferencesItem, isForward) - offsetof(UA_AddReferencesItem, referenceTypeId) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("IsForward") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_AddReferencesItem, targetServerUri) - offsetof(UA_AddReferencesItem, isForward) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("TargetServerUri") /* .memberName */
},
{
    UA_TYPES_EXPANDEDNODEID, /* .memberTypeIndex */
    offsetof(UA_AddReferencesItem, targetNodeId) - offsetof(UA_AddReferencesItem, targetServerUri) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("TargetNodeId") /* .memberName */
},
{
    UA_TYPES_NODECLASS, /* .memberTypeIndex */
    offsetof(UA_AddReferencesItem, targetNodeClass) - offsetof(UA_AddReferencesItem, targetNodeId) - sizeof(UA_ExpandedNodeId), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("TargetNodeClass") /* .memberName */
},};

/* AddReferencesRequest */
static UA_DataTypeMember AddReferencesRequest_members[2] = {
{
    UA_TYPES_REQUESTHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RequestHeader") /* .memberName */
},
{
    UA_TYPES_ADDREFERENCESITEM, /* .memberTypeIndex */
    offsetof(UA_AddReferencesRequest, referencesToAddSize) - offsetof(UA_AddReferencesRequest, requestHeader) - sizeof(UA_RequestHeader), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ReferencesToAdd") /* .memberName */
},};

/* AddReferencesResponse */
static UA_DataTypeMember AddReferencesResponse_members[3] = {
{
    UA_TYPES_RESPONSEHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ResponseHeader") /* .memberName */
},
{
    UA_TYPES_STATUSCODE, /* .memberTypeIndex */
    offsetof(UA_AddReferencesResponse, resultsSize) - offsetof(UA_AddReferencesResponse, responseHeader) - sizeof(UA_ResponseHeader), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Results") /* .memberName */
},
{
    UA_TYPES_DIAGNOSTICINFO, /* .memberTypeIndex */
    offsetof(UA_AddReferencesResponse, diagnosticInfosSize) - offsetof(UA_AddReferencesResponse, results) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DiagnosticInfos") /* .memberName */
},};

/* DeleteNodesItem */
static UA_DataTypeMember DeleteNodesItem_members[2] = {
{
    UA_TYPES_NODEID, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("NodeId") /* .memberName */
},
{
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_DeleteNodesItem, deleteTargetReferences) - offsetof(UA_DeleteNodesItem, nodeId) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DeleteTargetReferences") /* .memberName */
},};

/* DeleteNodesRequest */
static UA_DataTypeMember DeleteNodesRequest_members[2] = {
{
    UA_TYPES_REQUESTHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RequestHeader") /* .memberName */
},
{
    UA_TYPES_DELETENODESITEM, /* .memberTypeIndex */
    offsetof(UA_DeleteNodesRequest, nodesToDeleteSize) - offsetof(UA_DeleteNodesRequest, requestHeader) - sizeof(UA_RequestHeader), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("NodesToDelete") /* .memberName */
},};

/* DeleteNodesResponse */
static UA_DataTypeMember DeleteNodesResponse_members[3] = {
{
    UA_TYPES_RESPONSEHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ResponseHeader") /* .memberName */
},
{
    UA_TYPES_STATUSCODE, /* .memberTypeIndex */
    offsetof(UA_DeleteNodesResponse, resultsSize) - offsetof(UA_DeleteNodesResponse, responseHeader) - sizeof(UA_ResponseHeader), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Results") /* .memberName */
},
{
    UA_TYPES_DIAGNOSTICINFO, /* .memberTypeIndex */
    offsetof(UA_DeleteNodesResponse, diagnosticInfosSize) - offsetof(UA_DeleteNodesResponse, results) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DiagnosticInfos") /* .memberName */
},};

/* DeleteReferencesItem */
static UA_DataTypeMember DeleteReferencesItem_members[5] = {
{
    UA_TYPES_NODEID, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SourceNodeId") /* .memberName */
},
{
    UA_TYPES_NODEID, /* .memberTypeIndex */
    offsetof(UA_DeleteReferencesItem, referenceTypeId) - offsetof(UA_DeleteReferencesItem, sourceNodeId) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ReferenceTypeId") /* .memberName */
},
{
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_DeleteReferencesItem, isForward) - offsetof(UA_DeleteReferencesItem, referenceTypeId) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("IsForward") /* .memberName */
},
{
    UA_TYPES_EXPANDEDNODEID, /* .memberTypeIndex */
    offsetof(UA_DeleteReferencesItem, targetNodeId) - offsetof(UA_DeleteReferencesItem, isForward) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("TargetNodeId") /* .memberName */
},
{
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_DeleteReferencesItem, deleteBidirectional) - offsetof(UA_DeleteReferencesItem, targetNodeId) - sizeof(UA_ExpandedNodeId), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DeleteBidirectional") /* .memberName */
},};

/* DeleteReferencesRequest */
static UA_DataTypeMember DeleteReferencesRequest_members[2] = {
{
    UA_TYPES_REQUESTHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RequestHeader") /* .memberName */
},
{
    UA_TYPES_DELETEREFERENCESITEM, /* .memberTypeIndex */
    offsetof(UA_DeleteReferencesRequest, referencesToDeleteSize) - offsetof(UA_DeleteReferencesRequest, requestHeader) - sizeof(UA_RequestHeader), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ReferencesToDelete") /* .memberName */
},};

/* DeleteReferencesResponse */
static UA_DataTypeMember DeleteReferencesResponse_members[3] = {
{
    UA_TYPES_RESPONSEHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ResponseHeader") /* .memberName */
},
{
    UA_TYPES_STATUSCODE, /* .memberTypeIndex */
    offsetof(UA_DeleteReferencesResponse, resultsSize) - offsetof(UA_DeleteReferencesResponse, responseHeader) - sizeof(UA_ResponseHeader), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Results") /* .memberName */
},
{
    UA_TYPES_DIAGNOSTICINFO, /* .memberTypeIndex */
    offsetof(UA_DeleteReferencesResponse, diagnosticInfosSize) - offsetof(UA_DeleteReferencesResponse, results) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DiagnosticInfos") /* .memberName */
},};

/* AttributeWriteMask */
#define AttributeWriteMask_members NULL

/* BrowseDirection */
#define BrowseDirection_members NULL

/* ViewDescription */
static UA_DataTypeMember ViewDescription_members[3] = {
{
    UA_TYPES_NODEID, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ViewId") /* .memberName */
},
{
    UA_TYPES_DATETIME, /* .memberTypeIndex */
    offsetof(UA_ViewDescription, timestamp) - offsetof(UA_ViewDescription, viewId) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Timestamp") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_ViewDescription, viewVersion) - offsetof(UA_ViewDescription, timestamp) - sizeof(UA_DateTime), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ViewVersion") /* .memberName */
},};

/* BrowseDescription */
static UA_DataTypeMember BrowseDescription_members[6] = {
{
    UA_TYPES_NODEID, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("NodeId") /* .memberName */
},
{
    UA_TYPES_BROWSEDIRECTION, /* .memberTypeIndex */
    offsetof(UA_BrowseDescription, browseDirection) - offsetof(UA_BrowseDescription, nodeId) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("BrowseDirection") /* .memberName */
},
{
    UA_TYPES_NODEID, /* .memberTypeIndex */
    offsetof(UA_BrowseDescription, referenceTypeId) - offsetof(UA_BrowseDescription, browseDirection) - sizeof(UA_BrowseDirection), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ReferenceTypeId") /* .memberName */
},
{
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_BrowseDescription, includeSubtypes) - offsetof(UA_BrowseDescription, referenceTypeId) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("IncludeSubtypes") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_BrowseDescription, nodeClassMask) - offsetof(UA_BrowseDescription, includeSubtypes) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("NodeClassMask") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_BrowseDescription, resultMask) - offsetof(UA_BrowseDescription, nodeClassMask) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ResultMask") /* .memberName */
},};

/* BrowseResultMask */
#define BrowseResultMask_members NULL

/* ReferenceDescription */
static UA_DataTypeMember ReferenceDescription_members[7] = {
{
    UA_TYPES_NODEID, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ReferenceTypeId") /* .memberName */
},
{
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_ReferenceDescription, isForward) - offsetof(UA_ReferenceDescription, referenceTypeId) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("IsForward") /* .memberName */
},
{
    UA_TYPES_EXPANDEDNODEID, /* .memberTypeIndex */
    offsetof(UA_ReferenceDescription, nodeId) - offsetof(UA_ReferenceDescription, isForward) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("NodeId") /* .memberName */
},
{
    UA_TYPES_QUALIFIEDNAME, /* .memberTypeIndex */
    offsetof(UA_ReferenceDescription, browseName) - offsetof(UA_ReferenceDescription, nodeId) - sizeof(UA_ExpandedNodeId), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("BrowseName") /* .memberName */
},
{
    UA_TYPES_LOCALIZEDTEXT, /* .memberTypeIndex */
    offsetof(UA_ReferenceDescription, displayName) - offsetof(UA_ReferenceDescription, browseName) - sizeof(UA_QualifiedName), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DisplayName") /* .memberName */
},
{
    UA_TYPES_NODECLASS, /* .memberTypeIndex */
    offsetof(UA_ReferenceDescription, nodeClass) - offsetof(UA_ReferenceDescription, displayName) - sizeof(UA_LocalizedText), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("NodeClass") /* .memberName */
},
{
    UA_TYPES_EXPANDEDNODEID, /* .memberTypeIndex */
    offsetof(UA_ReferenceDescription, typeDefinition) - offsetof(UA_ReferenceDescription, nodeClass) - sizeof(UA_NodeClass), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("TypeDefinition") /* .memberName */
},};

/* ContinuationPoint */
#define ContinuationPoint_members NULL

/* BrowseResult */
static UA_DataTypeMember BrowseResult_members[3] = {
{
    UA_TYPES_STATUSCODE, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("StatusCode") /* .memberName */
},
{
    UA_TYPES_BYTESTRING, /* .memberTypeIndex */
    offsetof(UA_BrowseResult, continuationPoint) - offsetof(UA_BrowseResult, statusCode) - sizeof(UA_StatusCode), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ContinuationPoint") /* .memberName */
},
{
    UA_TYPES_REFERENCEDESCRIPTION, /* .memberTypeIndex */
    offsetof(UA_BrowseResult, referencesSize) - offsetof(UA_BrowseResult, continuationPoint) - sizeof(UA_ByteString), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("References") /* .memberName */
},};

/* BrowseRequest */
static UA_DataTypeMember BrowseRequest_members[4] = {
{
    UA_TYPES_REQUESTHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RequestHeader") /* .memberName */
},
{
    UA_TYPES_VIEWDESCRIPTION, /* .memberTypeIndex */
    offsetof(UA_BrowseRequest, view) - offsetof(UA_BrowseRequest, requestHeader) - sizeof(UA_RequestHeader), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("View") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_BrowseRequest, requestedMaxReferencesPerNode) - offsetof(UA_BrowseRequest, view) - sizeof(UA_ViewDescription), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RequestedMaxReferencesPerNode") /* .memberName */
},
{
    UA_TYPES_BROWSEDESCRIPTION, /* .memberTypeIndex */
    offsetof(UA_BrowseRequest, nodesToBrowseSize) - offsetof(UA_BrowseRequest, requestedMaxReferencesPerNode) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("NodesToBrowse") /* .memberName */
},};

/* BrowseResponse */
static UA_DataTypeMember BrowseResponse_members[3] = {
{
    UA_TYPES_RESPONSEHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ResponseHeader") /* .memberName */
},
{
    UA_TYPES_BROWSERESULT, /* .memberTypeIndex */
    offsetof(UA_BrowseResponse, resultsSize) - offsetof(UA_BrowseResponse, responseHeader) - sizeof(UA_ResponseHeader), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Results") /* .memberName */
},
{
    UA_TYPES_DIAGNOSTICINFO, /* .memberTypeIndex */
    offsetof(UA_BrowseResponse, diagnosticInfosSize) - offsetof(UA_BrowseResponse, results) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DiagnosticInfos") /* .memberName */
},};

/* BrowseNextRequest */
static UA_DataTypeMember BrowseNextRequest_members[3] = {
{
    UA_TYPES_REQUESTHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RequestHeader") /* .memberName */
},
{
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_BrowseNextRequest, releaseContinuationPoints) - offsetof(UA_BrowseNextRequest, requestHeader) - sizeof(UA_RequestHeader), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ReleaseContinuationPoints") /* .memberName */
},
{
    UA_TYPES_BYTESTRING, /* .memberTypeIndex */
    offsetof(UA_BrowseNextRequest, continuationPointsSize) - offsetof(UA_BrowseNextRequest, releaseContinuationPoints) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ContinuationPoints") /* .memberName */
},};

/* BrowseNextResponse */
static UA_DataTypeMember BrowseNextResponse_members[3] = {
{
    UA_TYPES_RESPONSEHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ResponseHeader") /* .memberName */
},
{
    UA_TYPES_BROWSERESULT, /* .memberTypeIndex */
    offsetof(UA_BrowseNextResponse, resultsSize) - offsetof(UA_BrowseNextResponse, responseHeader) - sizeof(UA_ResponseHeader), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Results") /* .memberName */
},
{
    UA_TYPES_DIAGNOSTICINFO, /* .memberTypeIndex */
    offsetof(UA_BrowseNextResponse, diagnosticInfosSize) - offsetof(UA_BrowseNextResponse, results) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DiagnosticInfos") /* .memberName */
},};

/* RelativePathElement */
static UA_DataTypeMember RelativePathElement_members[4] = {
{
    UA_TYPES_NODEID, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ReferenceTypeId") /* .memberName */
},
{
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_RelativePathElement, isInverse) - offsetof(UA_RelativePathElement, referenceTypeId) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("IsInverse") /* .memberName */
},
{
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_RelativePathElement, includeSubtypes) - offsetof(UA_RelativePathElement, isInverse) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("IncludeSubtypes") /* .memberName */
},
{
    UA_TYPES_QUALIFIEDNAME, /* .memberTypeIndex */
    offsetof(UA_RelativePathElement, targetName) - offsetof(UA_RelativePathElement, includeSubtypes) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("TargetName") /* .memberName */
},};

/* RelativePath */
static UA_DataTypeMember RelativePath_members[1] = {
{
    UA_TYPES_RELATIVEPATHELEMENT, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Elements") /* .memberName */
},};

/* BrowsePath */
static UA_DataTypeMember BrowsePath_members[2] = {
{
    UA_TYPES_NODEID, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("StartingNode") /* .memberName */
},
{
    UA_TYPES_RELATIVEPATH, /* .memberTypeIndex */
    offsetof(UA_BrowsePath, relativePath) - offsetof(UA_BrowsePath, startingNode) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RelativePath") /* .memberName */
},};

/* BrowsePathTarget */
static UA_DataTypeMember BrowsePathTarget_members[2] = {
{
    UA_TYPES_EXPANDEDNODEID, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("TargetId") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_BrowsePathTarget, remainingPathIndex) - offsetof(UA_BrowsePathTarget, targetId) - sizeof(UA_ExpandedNodeId), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RemainingPathIndex") /* .memberName */
},};

/* BrowsePathResult */
static UA_DataTypeMember BrowsePathResult_members[2] = {
{
    UA_TYPES_STATUSCODE, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("StatusCode") /* .memberName */
},
{
    UA_TYPES_BROWSEPATHTARGET, /* .memberTypeIndex */
    offsetof(UA_BrowsePathResult, targetsSize) - offsetof(UA_BrowsePathResult, statusCode) - sizeof(UA_StatusCode), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Targets") /* .memberName */
},};

/* TranslateBrowsePathsToNodeIdsRequest */
static UA_DataTypeMember TranslateBrowsePathsToNodeIdsRequest_members[2] = {
{
    UA_TYPES_REQUESTHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RequestHeader") /* .memberName */
},
{
    UA_TYPES_BROWSEPATH, /* .memberTypeIndex */
    offsetof(UA_TranslateBrowsePathsToNodeIdsRequest, browsePathsSize) - offsetof(UA_TranslateBrowsePathsToNodeIdsRequest, requestHeader) - sizeof(UA_RequestHeader), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("BrowsePaths") /* .memberName */
},};

/* TranslateBrowsePathsToNodeIdsResponse */
static UA_DataTypeMember TranslateBrowsePathsToNodeIdsResponse_members[3] = {
{
    UA_TYPES_RESPONSEHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ResponseHeader") /* .memberName */
},
{
    UA_TYPES_BROWSEPATHRESULT, /* .memberTypeIndex */
    offsetof(UA_TranslateBrowsePathsToNodeIdsResponse, resultsSize) - offsetof(UA_TranslateBrowsePathsToNodeIdsResponse, responseHeader) - sizeof(UA_ResponseHeader), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Results") /* .memberName */
},
{
    UA_TYPES_DIAGNOSTICINFO, /* .memberTypeIndex */
    offsetof(UA_TranslateBrowsePathsToNodeIdsResponse, diagnosticInfosSize) - offsetof(UA_TranslateBrowsePathsToNodeIdsResponse, results) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DiagnosticInfos") /* .memberName */
},};

/* RegisterNodesRequest */
static UA_DataTypeMember RegisterNodesRequest_members[2] = {
{
    UA_TYPES_REQUESTHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RequestHeader") /* .memberName */
},
{
    UA_TYPES_NODEID, /* .memberTypeIndex */
    offsetof(UA_RegisterNodesRequest, nodesToRegisterSize) - offsetof(UA_RegisterNodesRequest, requestHeader) - sizeof(UA_RequestHeader), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("NodesToRegister") /* .memberName */
},};

/* RegisterNodesResponse */
static UA_DataTypeMember RegisterNodesResponse_members[2] = {
{
    UA_TYPES_RESPONSEHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ResponseHeader") /* .memberName */
},
{
    UA_TYPES_NODEID, /* .memberTypeIndex */
    offsetof(UA_RegisterNodesResponse, registeredNodeIdsSize) - offsetof(UA_RegisterNodesResponse, responseHeader) - sizeof(UA_ResponseHeader), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RegisteredNodeIds") /* .memberName */
},};

/* UnregisterNodesRequest */
static UA_DataTypeMember UnregisterNodesRequest_members[2] = {
{
    UA_TYPES_REQUESTHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RequestHeader") /* .memberName */
},
{
    UA_TYPES_NODEID, /* .memberTypeIndex */
    offsetof(UA_UnregisterNodesRequest, nodesToUnregisterSize) - offsetof(UA_UnregisterNodesRequest, requestHeader) - sizeof(UA_RequestHeader), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("NodesToUnregister") /* .memberName */
},};

/* UnregisterNodesResponse */
static UA_DataTypeMember UnregisterNodesResponse_members[1] = {
{
    UA_TYPES_RESPONSEHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ResponseHeader") /* .memberName */
},};

/* Counter */
#define Counter_members NULL

/* OpaqueNumericRange */
#define OpaqueNumericRange_members NULL

/* Time */
#define Time_members NULL

/* Date */
#define Date_members NULL

/* EndpointConfiguration */
static UA_DataTypeMember EndpointConfiguration_members[9] = {
{
    UA_TYPES_INT32, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("OperationTimeout") /* .memberName */
},
{
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_EndpointConfiguration, useBinaryEncoding) - offsetof(UA_EndpointConfiguration, operationTimeout) - sizeof(UA_Int32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("UseBinaryEncoding") /* .memberName */
},
{
    UA_TYPES_INT32, /* .memberTypeIndex */
    offsetof(UA_EndpointConfiguration, maxStringLength) - offsetof(UA_EndpointConfiguration, useBinaryEncoding) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("MaxStringLength") /* .memberName */
},
{
    UA_TYPES_INT32, /* .memberTypeIndex */
    offsetof(UA_EndpointConfiguration, maxByteStringLength) - offsetof(UA_EndpointConfiguration, maxStringLength) - sizeof(UA_Int32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("MaxByteStringLength") /* .memberName */
},
{
    UA_TYPES_INT32, /* .memberTypeIndex */
    offsetof(UA_EndpointConfiguration, maxArrayLength) - offsetof(UA_EndpointConfiguration, maxByteStringLength) - sizeof(UA_Int32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("MaxArrayLength") /* .memberName */
},
{
    UA_TYPES_INT32, /* .memberTypeIndex */
    offsetof(UA_EndpointConfiguration, maxMessageSize) - offsetof(UA_EndpointConfiguration, maxArrayLength) - sizeof(UA_Int32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("MaxMessageSize") /* .memberName */
},
{
    UA_TYPES_INT32, /* .memberTypeIndex */
    offsetof(UA_EndpointConfiguration, maxBufferSize) - offsetof(UA_EndpointConfiguration, maxMessageSize) - sizeof(UA_Int32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("MaxBufferSize") /* .memberName */
},
{
    UA_TYPES_INT32, /* .memberTypeIndex */
    offsetof(UA_EndpointConfiguration, channelLifetime) - offsetof(UA_EndpointConfiguration, maxBufferSize) - sizeof(UA_Int32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ChannelLifetime") /* .memberName */
},
{
    UA_TYPES_INT32, /* .memberTypeIndex */
    offsetof(UA_EndpointConfiguration, securityTokenLifetime) - offsetof(UA_EndpointConfiguration, channelLifetime) - sizeof(UA_Int32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SecurityTokenLifetime") /* .memberName */
},};

/* QueryDataDescription */
static UA_DataTypeMember QueryDataDescription_members[3] = {
{
    UA_TYPES_RELATIVEPATH, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RelativePath") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_QueryDataDescription, attributeId) - offsetof(UA_QueryDataDescription, relativePath) - sizeof(UA_RelativePath), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("AttributeId") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_QueryDataDescription, indexRange) - offsetof(UA_QueryDataDescription, attributeId) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("IndexRange") /* .memberName */
},};

/* NodeTypeDescription */
static UA_DataTypeMember NodeTypeDescription_members[3] = {
{
    UA_TYPES_EXPANDEDNODEID, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("TypeDefinitionNode") /* .memberName */
},
{
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_NodeTypeDescription, includeSubTypes) - offsetof(UA_NodeTypeDescription, typeDefinitionNode) - sizeof(UA_ExpandedNodeId), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("IncludeSubTypes") /* .memberName */
},
{
    UA_TYPES_QUERYDATADESCRIPTION, /* .memberTypeIndex */
    offsetof(UA_NodeTypeDescription, dataToReturnSize) - offsetof(UA_NodeTypeDescription, includeSubTypes) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DataToReturn") /* .memberName */
},};

/* FilterOperator */
#define FilterOperator_members NULL

/* QueryDataSet */
static UA_DataTypeMember QueryDataSet_members[3] = {
{
    UA_TYPES_EXPANDEDNODEID, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("NodeId") /* .memberName */
},
{
    UA_TYPES_EXPANDEDNODEID, /* .memberTypeIndex */
    offsetof(UA_QueryDataSet, typeDefinitionNode) - offsetof(UA_QueryDataSet, nodeId) - sizeof(UA_ExpandedNodeId), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("TypeDefinitionNode") /* .memberName */
},
{
    UA_TYPES_VARIANT, /* .memberTypeIndex */
    offsetof(UA_QueryDataSet, valuesSize) - offsetof(UA_QueryDataSet, typeDefinitionNode) - sizeof(UA_ExpandedNodeId), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Values") /* .memberName */
},};

/* NodeReference */
static UA_DataTypeMember NodeReference_members[4] = {
{
    UA_TYPES_NODEID, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("NodeId") /* .memberName */
},
{
    UA_TYPES_NODEID, /* .memberTypeIndex */
    offsetof(UA_NodeReference, referenceTypeId) - offsetof(UA_NodeReference, nodeId) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ReferenceTypeId") /* .memberName */
},
{
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_NodeReference, isForward) - offsetof(UA_NodeReference, referenceTypeId) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("IsForward") /* .memberName */
},
{
    UA_TYPES_NODEID, /* .memberTypeIndex */
    offsetof(UA_NodeReference, referencedNodeIdsSize) - offsetof(UA_NodeReference, isForward) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ReferencedNodeIds") /* .memberName */
},};

/* ContentFilterElement */
static UA_DataTypeMember ContentFilterElement_members[2] = {
{
    UA_TYPES_FILTEROPERATOR, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("FilterOperator") /* .memberName */
},
{
    UA_TYPES_EXTENSIONOBJECT, /* .memberTypeIndex */
    offsetof(UA_ContentFilterElement, filterOperandsSize) - offsetof(UA_ContentFilterElement, filterOperator) - sizeof(UA_FilterOperator), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("FilterOperands") /* .memberName */
},};

/* ContentFilter */
static UA_DataTypeMember ContentFilter_members[1] = {
{
    UA_TYPES_CONTENTFILTERELEMENT, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Elements") /* .memberName */
},};

/* FilterOperand */
#define FilterOperand_members NULL

/* ElementOperand */
static UA_DataTypeMember ElementOperand_members[1] = {
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Index") /* .memberName */
},};

/* LiteralOperand */
static UA_DataTypeMember LiteralOperand_members[1] = {
{
    UA_TYPES_VARIANT, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Value") /* .memberName */
},};

/* AttributeOperand */
static UA_DataTypeMember AttributeOperand_members[5] = {
{
    UA_TYPES_NODEID, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("NodeId") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_AttributeOperand, alias) - offsetof(UA_AttributeOperand, nodeId) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Alias") /* .memberName */
},
{
    UA_TYPES_RELATIVEPATH, /* .memberTypeIndex */
    offsetof(UA_AttributeOperand, browsePath) - offsetof(UA_AttributeOperand, alias) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("BrowsePath") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_AttributeOperand, attributeId) - offsetof(UA_AttributeOperand, browsePath) - sizeof(UA_RelativePath), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("AttributeId") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_AttributeOperand, indexRange) - offsetof(UA_AttributeOperand, attributeId) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("IndexRange") /* .memberName */
},};

/* SimpleAttributeOperand */
static UA_DataTypeMember SimpleAttributeOperand_members[4] = {
{
    UA_TYPES_NODEID, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("TypeDefinitionId") /* .memberName */
},
{
    UA_TYPES_QUALIFIEDNAME, /* .memberTypeIndex */
    offsetof(UA_SimpleAttributeOperand, browsePathSize) - offsetof(UA_SimpleAttributeOperand, typeDefinitionId) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("BrowsePath") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SimpleAttributeOperand, attributeId) - offsetof(UA_SimpleAttributeOperand, browsePath) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("AttributeId") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_SimpleAttributeOperand, indexRange) - offsetof(UA_SimpleAttributeOperand, attributeId) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("IndexRange") /* .memberName */
},};

/* ContentFilterElementResult */
static UA_DataTypeMember ContentFilterElementResult_members[3] = {
{
    UA_TYPES_STATUSCODE, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("StatusCode") /* .memberName */
},
{
    UA_TYPES_STATUSCODE, /* .memberTypeIndex */
    offsetof(UA_ContentFilterElementResult, operandStatusCodesSize) - offsetof(UA_ContentFilterElementResult, statusCode) - sizeof(UA_StatusCode), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("OperandStatusCodes") /* .memberName */
},
{
    UA_TYPES_DIAGNOSTICINFO, /* .memberTypeIndex */
    offsetof(UA_ContentFilterElementResult, operandDiagnosticInfosSize) - offsetof(UA_ContentFilterElementResult, operandStatusCodes) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("OperandDiagnosticInfos") /* .memberName */
},};

/* ContentFilterResult */
static UA_DataTypeMember ContentFilterResult_members[2] = {
{
    UA_TYPES_CONTENTFILTERELEMENTRESULT, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ElementResults") /* .memberName */
},
{
    UA_TYPES_DIAGNOSTICINFO, /* .memberTypeIndex */
    offsetof(UA_ContentFilterResult, elementDiagnosticInfosSize) - offsetof(UA_ContentFilterResult, elementResults) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ElementDiagnosticInfos") /* .memberName */
},};

/* ParsingResult */
static UA_DataTypeMember ParsingResult_members[3] = {
{
    UA_TYPES_STATUSCODE, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("StatusCode") /* .memberName */
},
{
    UA_TYPES_STATUSCODE, /* .memberTypeIndex */
    offsetof(UA_ParsingResult, dataStatusCodesSize) - offsetof(UA_ParsingResult, statusCode) - sizeof(UA_StatusCode), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DataStatusCodes") /* .memberName */
},
{
    UA_TYPES_DIAGNOSTICINFO, /* .memberTypeIndex */
    offsetof(UA_ParsingResult, dataDiagnosticInfosSize) - offsetof(UA_ParsingResult, dataStatusCodes) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DataDiagnosticInfos") /* .memberName */
},};

/* QueryFirstRequest */
static UA_DataTypeMember QueryFirstRequest_members[6] = {
{
    UA_TYPES_REQUESTHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RequestHeader") /* .memberName */
},
{
    UA_TYPES_VIEWDESCRIPTION, /* .memberTypeIndex */
    offsetof(UA_QueryFirstRequest, view) - offsetof(UA_QueryFirstRequest, requestHeader) - sizeof(UA_RequestHeader), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("View") /* .memberName */
},
{
    UA_TYPES_NODETYPEDESCRIPTION, /* .memberTypeIndex */
    offsetof(UA_QueryFirstRequest, nodeTypesSize) - offsetof(UA_QueryFirstRequest, view) - sizeof(UA_ViewDescription), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("NodeTypes") /* .memberName */
},
{
    UA_TYPES_CONTENTFILTER, /* .memberTypeIndex */
    offsetof(UA_QueryFirstRequest, filter) - offsetof(UA_QueryFirstRequest, nodeTypes) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Filter") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_QueryFirstRequest, maxDataSetsToReturn) - offsetof(UA_QueryFirstRequest, filter) - sizeof(UA_ContentFilter), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("MaxDataSetsToReturn") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_QueryFirstRequest, maxReferencesToReturn) - offsetof(UA_QueryFirstRequest, maxDataSetsToReturn) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("MaxReferencesToReturn") /* .memberName */
},};

/* QueryFirstResponse */
static UA_DataTypeMember QueryFirstResponse_members[6] = {
{
    UA_TYPES_RESPONSEHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ResponseHeader") /* .memberName */
},
{
    UA_TYPES_QUERYDATASET, /* .memberTypeIndex */
    offsetof(UA_QueryFirstResponse, queryDataSetsSize) - offsetof(UA_QueryFirstResponse, responseHeader) - sizeof(UA_ResponseHeader), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("QueryDataSets") /* .memberName */
},
{
    UA_TYPES_BYTESTRING, /* .memberTypeIndex */
    offsetof(UA_QueryFirstResponse, continuationPoint) - offsetof(UA_QueryFirstResponse, queryDataSets) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ContinuationPoint") /* .memberName */
},
{
    UA_TYPES_PARSINGRESULT, /* .memberTypeIndex */
    offsetof(UA_QueryFirstResponse, parsingResultsSize) - offsetof(UA_QueryFirstResponse, continuationPoint) - sizeof(UA_ByteString), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ParsingResults") /* .memberName */
},
{
    UA_TYPES_DIAGNOSTICINFO, /* .memberTypeIndex */
    offsetof(UA_QueryFirstResponse, diagnosticInfosSize) - offsetof(UA_QueryFirstResponse, parsingResults) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DiagnosticInfos") /* .memberName */
},
{
    UA_TYPES_CONTENTFILTERRESULT, /* .memberTypeIndex */
    offsetof(UA_QueryFirstResponse, filterResult) - offsetof(UA_QueryFirstResponse, diagnosticInfos) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("FilterResult") /* .memberName */
},};

/* QueryNextRequest */
static UA_DataTypeMember QueryNextRequest_members[3] = {
{
    UA_TYPES_REQUESTHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RequestHeader") /* .memberName */
},
{
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_QueryNextRequest, releaseContinuationPoint) - offsetof(UA_QueryNextRequest, requestHeader) - sizeof(UA_RequestHeader), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ReleaseContinuationPoint") /* .memberName */
},
{
    UA_TYPES_BYTESTRING, /* .memberTypeIndex */
    offsetof(UA_QueryNextRequest, continuationPoint) - offsetof(UA_QueryNextRequest, releaseContinuationPoint) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ContinuationPoint") /* .memberName */
},};

/* QueryNextResponse */
static UA_DataTypeMember QueryNextResponse_members[3] = {
{
    UA_TYPES_RESPONSEHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ResponseHeader") /* .memberName */
},
{
    UA_TYPES_QUERYDATASET, /* .memberTypeIndex */
    offsetof(UA_QueryNextResponse, queryDataSetsSize) - offsetof(UA_QueryNextResponse, responseHeader) - sizeof(UA_ResponseHeader), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("QueryDataSets") /* .memberName */
},
{
    UA_TYPES_BYTESTRING, /* .memberTypeIndex */
    offsetof(UA_QueryNextResponse, revisedContinuationPoint) - offsetof(UA_QueryNextResponse, queryDataSets) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RevisedContinuationPoint") /* .memberName */
},};

/* TimestampsToReturn */
#define TimestampsToReturn_members NULL

/* ReadValueId */
static UA_DataTypeMember ReadValueId_members[4] = {
{
    UA_TYPES_NODEID, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("NodeId") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_ReadValueId, attributeId) - offsetof(UA_ReadValueId, nodeId) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("AttributeId") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_ReadValueId, indexRange) - offsetof(UA_ReadValueId, attributeId) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("IndexRange") /* .memberName */
},
{
    UA_TYPES_QUALIFIEDNAME, /* .memberTypeIndex */
    offsetof(UA_ReadValueId, dataEncoding) - offsetof(UA_ReadValueId, indexRange) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DataEncoding") /* .memberName */
},};

/* ReadRequest */
static UA_DataTypeMember ReadRequest_members[4] = {
{
    UA_TYPES_REQUESTHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RequestHeader") /* .memberName */
},
{
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_ReadRequest, maxAge) - offsetof(UA_ReadRequest, requestHeader) - sizeof(UA_RequestHeader), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("MaxAge") /* .memberName */
},
{
    UA_TYPES_TIMESTAMPSTORETURN, /* .memberTypeIndex */
    offsetof(UA_ReadRequest, timestampsToReturn) - offsetof(UA_ReadRequest, maxAge) - sizeof(UA_Double), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("TimestampsToReturn") /* .memberName */
},
{
    UA_TYPES_READVALUEID, /* .memberTypeIndex */
    offsetof(UA_ReadRequest, nodesToReadSize) - offsetof(UA_ReadRequest, timestampsToReturn) - sizeof(UA_TimestampsToReturn), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("NodesToRead") /* .memberName */
},};

/* ReadResponse */
static UA_DataTypeMember ReadResponse_members[3] = {
{
    UA_TYPES_RESPONSEHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ResponseHeader") /* .memberName */
},
{
    UA_TYPES_DATAVALUE, /* .memberTypeIndex */
    offsetof(UA_ReadResponse, resultsSize) - offsetof(UA_ReadResponse, responseHeader) - sizeof(UA_ResponseHeader), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Results") /* .memberName */
},
{
    UA_TYPES_DIAGNOSTICINFO, /* .memberTypeIndex */
    offsetof(UA_ReadResponse, diagnosticInfosSize) - offsetof(UA_ReadResponse, results) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DiagnosticInfos") /* .memberName */
},};

/* HistoryReadValueId */
static UA_DataTypeMember HistoryReadValueId_members[4] = {
{
    UA_TYPES_NODEID, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("NodeId") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_HistoryReadValueId, indexRange) - offsetof(UA_HistoryReadValueId, nodeId) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("IndexRange") /* .memberName */
},
{
    UA_TYPES_QUALIFIEDNAME, /* .memberTypeIndex */
    offsetof(UA_HistoryReadValueId, dataEncoding) - offsetof(UA_HistoryReadValueId, indexRange) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DataEncoding") /* .memberName */
},
{
    UA_TYPES_BYTESTRING, /* .memberTypeIndex */
    offsetof(UA_HistoryReadValueId, continuationPoint) - offsetof(UA_HistoryReadValueId, dataEncoding) - sizeof(UA_QualifiedName), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ContinuationPoint") /* .memberName */
},};

/* HistoryReadResult */
static UA_DataTypeMember HistoryReadResult_members[3] = {
{
    UA_TYPES_STATUSCODE, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("StatusCode") /* .memberName */
},
{
    UA_TYPES_BYTESTRING, /* .memberTypeIndex */
    offsetof(UA_HistoryReadResult, continuationPoint) - offsetof(UA_HistoryReadResult, statusCode) - sizeof(UA_StatusCode), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ContinuationPoint") /* .memberName */
},
{
    UA_TYPES_EXTENSIONOBJECT, /* .memberTypeIndex */
    offsetof(UA_HistoryReadResult, historyData) - offsetof(UA_HistoryReadResult, continuationPoint) - sizeof(UA_ByteString), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("HistoryData") /* .memberName */
},};

/* HistoryReadDetails */
#define HistoryReadDetails_members NULL

/* ReadRawModifiedDetails */
static UA_DataTypeMember ReadRawModifiedDetails_members[5] = {
{
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("IsReadModified") /* .memberName */
},
{
    UA_TYPES_DATETIME, /* .memberTypeIndex */
    offsetof(UA_ReadRawModifiedDetails, startTime) - offsetof(UA_ReadRawModifiedDetails, isReadModified) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("StartTime") /* .memberName */
},
{
    UA_TYPES_DATETIME, /* .memberTypeIndex */
    offsetof(UA_ReadRawModifiedDetails, endTime) - offsetof(UA_ReadRawModifiedDetails, startTime) - sizeof(UA_DateTime), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("EndTime") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_ReadRawModifiedDetails, numValuesPerNode) - offsetof(UA_ReadRawModifiedDetails, endTime) - sizeof(UA_DateTime), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("NumValuesPerNode") /* .memberName */
},
{
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_ReadRawModifiedDetails, returnBounds) - offsetof(UA_ReadRawModifiedDetails, numValuesPerNode) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ReturnBounds") /* .memberName */
},};

/* ReadAtTimeDetails */
static UA_DataTypeMember ReadAtTimeDetails_members[2] = {
{
    UA_TYPES_DATETIME, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ReqTimes") /* .memberName */
},
{
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_ReadAtTimeDetails, useSimpleBounds) - offsetof(UA_ReadAtTimeDetails, reqTimes) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("UseSimpleBounds") /* .memberName */
},};

/* ReadAnnotationDataDetails */
static UA_DataTypeMember ReadAnnotationDataDetails_members[1] = {
{
    UA_TYPES_DATETIME, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ReqTimes") /* .memberName */
},};

/* HistoryData */
static UA_DataTypeMember HistoryData_members[1] = {
{
    UA_TYPES_DATAVALUE, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DataValues") /* .memberName */
},};

/* HistoryReadRequest */
static UA_DataTypeMember HistoryReadRequest_members[5] = {
{
    UA_TYPES_REQUESTHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RequestHeader") /* .memberName */
},
{
    UA_TYPES_EXTENSIONOBJECT, /* .memberTypeIndex */
    offsetof(UA_HistoryReadRequest, historyReadDetails) - offsetof(UA_HistoryReadRequest, requestHeader) - sizeof(UA_RequestHeader), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("HistoryReadDetails") /* .memberName */
},
{
    UA_TYPES_TIMESTAMPSTORETURN, /* .memberTypeIndex */
    offsetof(UA_HistoryReadRequest, timestampsToReturn) - offsetof(UA_HistoryReadRequest, historyReadDetails) - sizeof(UA_ExtensionObject), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("TimestampsToReturn") /* .memberName */
},
{
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_HistoryReadRequest, releaseContinuationPoints) - offsetof(UA_HistoryReadRequest, timestampsToReturn) - sizeof(UA_TimestampsToReturn), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ReleaseContinuationPoints") /* .memberName */
},
{
    UA_TYPES_HISTORYREADVALUEID, /* .memberTypeIndex */
    offsetof(UA_HistoryReadRequest, nodesToReadSize) - offsetof(UA_HistoryReadRequest, releaseContinuationPoints) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("NodesToRead") /* .memberName */
},};

/* HistoryReadResponse */
static UA_DataTypeMember HistoryReadResponse_members[3] = {
{
    UA_TYPES_RESPONSEHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ResponseHeader") /* .memberName */
},
{
    UA_TYPES_HISTORYREADRESULT, /* .memberTypeIndex */
    offsetof(UA_HistoryReadResponse, resultsSize) - offsetof(UA_HistoryReadResponse, responseHeader) - sizeof(UA_ResponseHeader), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Results") /* .memberName */
},
{
    UA_TYPES_DIAGNOSTICINFO, /* .memberTypeIndex */
    offsetof(UA_HistoryReadResponse, diagnosticInfosSize) - offsetof(UA_HistoryReadResponse, results) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DiagnosticInfos") /* .memberName */
},};

/* WriteValue */
static UA_DataTypeMember WriteValue_members[4] = {
{
    UA_TYPES_NODEID, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("NodeId") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_WriteValue, attributeId) - offsetof(UA_WriteValue, nodeId) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("AttributeId") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_WriteValue, indexRange) - offsetof(UA_WriteValue, attributeId) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("IndexRange") /* .memberName */
},
{
    UA_TYPES_DATAVALUE, /* .memberTypeIndex */
    offsetof(UA_WriteValue, value) - offsetof(UA_WriteValue, indexRange) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Value") /* .memberName */
},};

/* WriteRequest */
static UA_DataTypeMember WriteRequest_members[2] = {
{
    UA_TYPES_REQUESTHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RequestHeader") /* .memberName */
},
{
    UA_TYPES_WRITEVALUE, /* .memberTypeIndex */
    offsetof(UA_WriteRequest, nodesToWriteSize) - offsetof(UA_WriteRequest, requestHeader) - sizeof(UA_RequestHeader), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("NodesToWrite") /* .memberName */
},};

/* WriteResponse */
static UA_DataTypeMember WriteResponse_members[3] = {
{
    UA_TYPES_RESPONSEHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ResponseHeader") /* .memberName */
},
{
    UA_TYPES_STATUSCODE, /* .memberTypeIndex */
    offsetof(UA_WriteResponse, resultsSize) - offsetof(UA_WriteResponse, responseHeader) - sizeof(UA_ResponseHeader), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Results") /* .memberName */
},
{
    UA_TYPES_DIAGNOSTICINFO, /* .memberTypeIndex */
    offsetof(UA_WriteResponse, diagnosticInfosSize) - offsetof(UA_WriteResponse, results) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DiagnosticInfos") /* .memberName */
},};

/* HistoryUpdateDetails */
static UA_DataTypeMember HistoryUpdateDetails_members[1] = {
{
    UA_TYPES_NODEID, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("NodeId") /* .memberName */
},};

/* HistoryUpdateType */
#define HistoryUpdateType_members NULL

/* PerformUpdateType */
#define PerformUpdateType_members NULL

/* UpdateDataDetails */
static UA_DataTypeMember UpdateDataDetails_members[3] = {
{
    UA_TYPES_NODEID, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("NodeId") /* .memberName */
},
{
    UA_TYPES_PERFORMUPDATETYPE, /* .memberTypeIndex */
    offsetof(UA_UpdateDataDetails, performInsertReplace) - offsetof(UA_UpdateDataDetails, nodeId) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("PerformInsertReplace") /* .memberName */
},
{
    UA_TYPES_DATAVALUE, /* .memberTypeIndex */
    offsetof(UA_UpdateDataDetails, updateValuesSize) - offsetof(UA_UpdateDataDetails, performInsertReplace) - sizeof(UA_PerformUpdateType), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("UpdateValues") /* .memberName */
},};

/* UpdateStructureDataDetails */
static UA_DataTypeMember UpdateStructureDataDetails_members[3] = {
{
    UA_TYPES_NODEID, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("NodeId") /* .memberName */
},
{
    UA_TYPES_PERFORMUPDATETYPE, /* .memberTypeIndex */
    offsetof(UA_UpdateStructureDataDetails, performInsertReplace) - offsetof(UA_UpdateStructureDataDetails, nodeId) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("PerformInsertReplace") /* .memberName */
},
{
    UA_TYPES_DATAVALUE, /* .memberTypeIndex */
    offsetof(UA_UpdateStructureDataDetails, updateValuesSize) - offsetof(UA_UpdateStructureDataDetails, performInsertReplace) - sizeof(UA_PerformUpdateType), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("UpdateValues") /* .memberName */
},};

/* DeleteRawModifiedDetails */
static UA_DataTypeMember DeleteRawModifiedDetails_members[4] = {
{
    UA_TYPES_NODEID, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("NodeId") /* .memberName */
},
{
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_DeleteRawModifiedDetails, isDeleteModified) - offsetof(UA_DeleteRawModifiedDetails, nodeId) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("IsDeleteModified") /* .memberName */
},
{
    UA_TYPES_DATETIME, /* .memberTypeIndex */
    offsetof(UA_DeleteRawModifiedDetails, startTime) - offsetof(UA_DeleteRawModifiedDetails, isDeleteModified) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("StartTime") /* .memberName */
},
{
    UA_TYPES_DATETIME, /* .memberTypeIndex */
    offsetof(UA_DeleteRawModifiedDetails, endTime) - offsetof(UA_DeleteRawModifiedDetails, startTime) - sizeof(UA_DateTime), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("EndTime") /* .memberName */
},};

/* DeleteAtTimeDetails */
static UA_DataTypeMember DeleteAtTimeDetails_members[2] = {
{
    UA_TYPES_NODEID, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("NodeId") /* .memberName */
},
{
    UA_TYPES_DATETIME, /* .memberTypeIndex */
    offsetof(UA_DeleteAtTimeDetails, reqTimesSize) - offsetof(UA_DeleteAtTimeDetails, nodeId) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ReqTimes") /* .memberName */
},};

/* DeleteEventDetails */
static UA_DataTypeMember DeleteEventDetails_members[2] = {
{
    UA_TYPES_NODEID, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("NodeId") /* .memberName */
},
{
    UA_TYPES_BYTESTRING, /* .memberTypeIndex */
    offsetof(UA_DeleteEventDetails, eventIdsSize) - offsetof(UA_DeleteEventDetails, nodeId) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("EventIds") /* .memberName */
},};

/* HistoryUpdateResult */
static UA_DataTypeMember HistoryUpdateResult_members[3] = {
{
    UA_TYPES_STATUSCODE, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("StatusCode") /* .memberName */
},
{
    UA_TYPES_STATUSCODE, /* .memberTypeIndex */
    offsetof(UA_HistoryUpdateResult, operationResultsSize) - offsetof(UA_HistoryUpdateResult, statusCode) - sizeof(UA_StatusCode), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("OperationResults") /* .memberName */
},
{
    UA_TYPES_DIAGNOSTICINFO, /* .memberTypeIndex */
    offsetof(UA_HistoryUpdateResult, diagnosticInfosSize) - offsetof(UA_HistoryUpdateResult, operationResults) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DiagnosticInfos") /* .memberName */
},};

/* HistoryUpdateRequest */
static UA_DataTypeMember HistoryUpdateRequest_members[2] = {
{
    UA_TYPES_REQUESTHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RequestHeader") /* .memberName */
},
{
    UA_TYPES_EXTENSIONOBJECT, /* .memberTypeIndex */
    offsetof(UA_HistoryUpdateRequest, historyUpdateDetailsSize) - offsetof(UA_HistoryUpdateRequest, requestHeader) - sizeof(UA_RequestHeader), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("HistoryUpdateDetails") /* .memberName */
},};

/* HistoryUpdateResponse */
static UA_DataTypeMember HistoryUpdateResponse_members[3] = {
{
    UA_TYPES_RESPONSEHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ResponseHeader") /* .memberName */
},
{
    UA_TYPES_HISTORYUPDATERESULT, /* .memberTypeIndex */
    offsetof(UA_HistoryUpdateResponse, resultsSize) - offsetof(UA_HistoryUpdateResponse, responseHeader) - sizeof(UA_ResponseHeader), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Results") /* .memberName */
},
{
    UA_TYPES_DIAGNOSTICINFO, /* .memberTypeIndex */
    offsetof(UA_HistoryUpdateResponse, diagnosticInfosSize) - offsetof(UA_HistoryUpdateResponse, results) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DiagnosticInfos") /* .memberName */
},};

/* CallMethodRequest */
static UA_DataTypeMember CallMethodRequest_members[3] = {
{
    UA_TYPES_NODEID, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ObjectId") /* .memberName */
},
{
    UA_TYPES_NODEID, /* .memberTypeIndex */
    offsetof(UA_CallMethodRequest, methodId) - offsetof(UA_CallMethodRequest, objectId) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("MethodId") /* .memberName */
},
{
    UA_TYPES_VARIANT, /* .memberTypeIndex */
    offsetof(UA_CallMethodRequest, inputArgumentsSize) - offsetof(UA_CallMethodRequest, methodId) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("InputArguments") /* .memberName */
},};

/* CallMethodResult */
static UA_DataTypeMember CallMethodResult_members[4] = {
{
    UA_TYPES_STATUSCODE, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("StatusCode") /* .memberName */
},
{
    UA_TYPES_STATUSCODE, /* .memberTypeIndex */
    offsetof(UA_CallMethodResult, inputArgumentResultsSize) - offsetof(UA_CallMethodResult, statusCode) - sizeof(UA_StatusCode), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("InputArgumentResults") /* .memberName */
},
{
    UA_TYPES_DIAGNOSTICINFO, /* .memberTypeIndex */
    offsetof(UA_CallMethodResult, inputArgumentDiagnosticInfosSize) - offsetof(UA_CallMethodResult, inputArgumentResults) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("InputArgumentDiagnosticInfos") /* .memberName */
},
{
    UA_TYPES_VARIANT, /* .memberTypeIndex */
    offsetof(UA_CallMethodResult, outputArgumentsSize) - offsetof(UA_CallMethodResult, inputArgumentDiagnosticInfos) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("OutputArguments") /* .memberName */
},};

/* CallRequest */
static UA_DataTypeMember CallRequest_members[2] = {
{
    UA_TYPES_REQUESTHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RequestHeader") /* .memberName */
},
{
    UA_TYPES_CALLMETHODREQUEST, /* .memberTypeIndex */
    offsetof(UA_CallRequest, methodsToCallSize) - offsetof(UA_CallRequest, requestHeader) - sizeof(UA_RequestHeader), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("MethodsToCall") /* .memberName */
},};

/* CallResponse */
static UA_DataTypeMember CallResponse_members[3] = {
{
    UA_TYPES_RESPONSEHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ResponseHeader") /* .memberName */
},
{
    UA_TYPES_CALLMETHODRESULT, /* .memberTypeIndex */
    offsetof(UA_CallResponse, resultsSize) - offsetof(UA_CallResponse, responseHeader) - sizeof(UA_ResponseHeader), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Results") /* .memberName */
},
{
    UA_TYPES_DIAGNOSTICINFO, /* .memberTypeIndex */
    offsetof(UA_CallResponse, diagnosticInfosSize) - offsetof(UA_CallResponse, results) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DiagnosticInfos") /* .memberName */
},};

/* MonitoringMode */
#define MonitoringMode_members NULL

/* DataChangeTrigger */
#define DataChangeTrigger_members NULL

/* DeadbandType */
#define DeadbandType_members NULL

/* MonitoringFilter */
#define MonitoringFilter_members NULL

/* DataChangeFilter */
static UA_DataTypeMember DataChangeFilter_members[3] = {
{
    UA_TYPES_DATACHANGETRIGGER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Trigger") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_DataChangeFilter, deadbandType) - offsetof(UA_DataChangeFilter, trigger) - sizeof(UA_DataChangeTrigger), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DeadbandType") /* .memberName */
},
{
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_DataChangeFilter, deadbandValue) - offsetof(UA_DataChangeFilter, deadbandType) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DeadbandValue") /* .memberName */
},};

/* EventFilter */
static UA_DataTypeMember EventFilter_members[2] = {
{
    UA_TYPES_SIMPLEATTRIBUTEOPERAND, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SelectClauses") /* .memberName */
},
{
    UA_TYPES_CONTENTFILTER, /* .memberTypeIndex */
    offsetof(UA_EventFilter, whereClause) - offsetof(UA_EventFilter, selectClauses) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("WhereClause") /* .memberName */
},};

/* AggregateConfiguration */
static UA_DataTypeMember AggregateConfiguration_members[5] = {
{
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("UseServerCapabilitiesDefaults") /* .memberName */
},
{
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_AggregateConfiguration, treatUncertainAsBad) - offsetof(UA_AggregateConfiguration, useServerCapabilitiesDefaults) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("TreatUncertainAsBad") /* .memberName */
},
{
    UA_TYPES_BYTE, /* .memberTypeIndex */
    offsetof(UA_AggregateConfiguration, percentDataBad) - offsetof(UA_AggregateConfiguration, treatUncertainAsBad) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("PercentDataBad") /* .memberName */
},
{
    UA_TYPES_BYTE, /* .memberTypeIndex */
    offsetof(UA_AggregateConfiguration, percentDataGood) - offsetof(UA_AggregateConfiguration, percentDataBad) - sizeof(UA_Byte), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("PercentDataGood") /* .memberName */
},
{
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_AggregateConfiguration, useSlopedExtrapolation) - offsetof(UA_AggregateConfiguration, percentDataGood) - sizeof(UA_Byte), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("UseSlopedExtrapolation") /* .memberName */
},};

/* AggregateFilter */
static UA_DataTypeMember AggregateFilter_members[4] = {
{
    UA_TYPES_DATETIME, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("StartTime") /* .memberName */
},
{
    UA_TYPES_NODEID, /* .memberTypeIndex */
    offsetof(UA_AggregateFilter, aggregateType) - offsetof(UA_AggregateFilter, startTime) - sizeof(UA_DateTime), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("AggregateType") /* .memberName */
},
{
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_AggregateFilter, processingInterval) - offsetof(UA_AggregateFilter, aggregateType) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ProcessingInterval") /* .memberName */
},
{
    UA_TYPES_AGGREGATECONFIGURATION, /* .memberTypeIndex */
    offsetof(UA_AggregateFilter, aggregateConfiguration) - offsetof(UA_AggregateFilter, processingInterval) - sizeof(UA_Double), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("AggregateConfiguration") /* .memberName */
},};

/* MonitoringFilterResult */
#define MonitoringFilterResult_members NULL

/* EventFilterResult */
static UA_DataTypeMember EventFilterResult_members[3] = {
{
    UA_TYPES_STATUSCODE, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SelectClauseResults") /* .memberName */
},
{
    UA_TYPES_DIAGNOSTICINFO, /* .memberTypeIndex */
    offsetof(UA_EventFilterResult, selectClauseDiagnosticInfosSize) - offsetof(UA_EventFilterResult, selectClauseResults) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SelectClauseDiagnosticInfos") /* .memberName */
},
{
    UA_TYPES_CONTENTFILTERRESULT, /* .memberTypeIndex */
    offsetof(UA_EventFilterResult, whereClauseResult) - offsetof(UA_EventFilterResult, selectClauseDiagnosticInfos) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("WhereClauseResult") /* .memberName */
},};

/* AggregateFilterResult */
static UA_DataTypeMember AggregateFilterResult_members[3] = {
{
    UA_TYPES_DATETIME, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RevisedStartTime") /* .memberName */
},
{
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_AggregateFilterResult, revisedProcessingInterval) - offsetof(UA_AggregateFilterResult, revisedStartTime) - sizeof(UA_DateTime), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RevisedProcessingInterval") /* .memberName */
},
{
    UA_TYPES_AGGREGATECONFIGURATION, /* .memberTypeIndex */
    offsetof(UA_AggregateFilterResult, revisedAggregateConfiguration) - offsetof(UA_AggregateFilterResult, revisedProcessingInterval) - sizeof(UA_Double), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RevisedAggregateConfiguration") /* .memberName */
},};

/* MonitoringParameters */
static UA_DataTypeMember MonitoringParameters_members[5] = {
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ClientHandle") /* .memberName */
},
{
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_MonitoringParameters, samplingInterval) - offsetof(UA_MonitoringParameters, clientHandle) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SamplingInterval") /* .memberName */
},
{
    UA_TYPES_EXTENSIONOBJECT, /* .memberTypeIndex */
    offsetof(UA_MonitoringParameters, filter) - offsetof(UA_MonitoringParameters, samplingInterval) - sizeof(UA_Double), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Filter") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_MonitoringParameters, queueSize) - offsetof(UA_MonitoringParameters, filter) - sizeof(UA_ExtensionObject), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("QueueSize") /* .memberName */
},
{
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_MonitoringParameters, discardOldest) - offsetof(UA_MonitoringParameters, queueSize) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DiscardOldest") /* .memberName */
},};

/* MonitoredItemCreateRequest */
static UA_DataTypeMember MonitoredItemCreateRequest_members[3] = {
{
    UA_TYPES_READVALUEID, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ItemToMonitor") /* .memberName */
},
{
    UA_TYPES_MONITORINGMODE, /* .memberTypeIndex */
    offsetof(UA_MonitoredItemCreateRequest, monitoringMode) - offsetof(UA_MonitoredItemCreateRequest, itemToMonitor) - sizeof(UA_ReadValueId), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("MonitoringMode") /* .memberName */
},
{
    UA_TYPES_MONITORINGPARAMETERS, /* .memberTypeIndex */
    offsetof(UA_MonitoredItemCreateRequest, requestedParameters) - offsetof(UA_MonitoredItemCreateRequest, monitoringMode) - sizeof(UA_MonitoringMode), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RequestedParameters") /* .memberName */
},};

/* MonitoredItemCreateResult */
static UA_DataTypeMember MonitoredItemCreateResult_members[5] = {
{
    UA_TYPES_STATUSCODE, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("StatusCode") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_MonitoredItemCreateResult, monitoredItemId) - offsetof(UA_MonitoredItemCreateResult, statusCode) - sizeof(UA_StatusCode), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("MonitoredItemId") /* .memberName */
},
{
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_MonitoredItemCreateResult, revisedSamplingInterval) - offsetof(UA_MonitoredItemCreateResult, monitoredItemId) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RevisedSamplingInterval") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_MonitoredItemCreateResult, revisedQueueSize) - offsetof(UA_MonitoredItemCreateResult, revisedSamplingInterval) - sizeof(UA_Double), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RevisedQueueSize") /* .memberName */
},
{
    UA_TYPES_EXTENSIONOBJECT, /* .memberTypeIndex */
    offsetof(UA_MonitoredItemCreateResult, filterResult) - offsetof(UA_MonitoredItemCreateResult, revisedQueueSize) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("FilterResult") /* .memberName */
},};

/* CreateMonitoredItemsRequest */
static UA_DataTypeMember CreateMonitoredItemsRequest_members[4] = {
{
    UA_TYPES_REQUESTHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RequestHeader") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_CreateMonitoredItemsRequest, subscriptionId) - offsetof(UA_CreateMonitoredItemsRequest, requestHeader) - sizeof(UA_RequestHeader), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SubscriptionId") /* .memberName */
},
{
    UA_TYPES_TIMESTAMPSTORETURN, /* .memberTypeIndex */
    offsetof(UA_CreateMonitoredItemsRequest, timestampsToReturn) - offsetof(UA_CreateMonitoredItemsRequest, subscriptionId) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("TimestampsToReturn") /* .memberName */
},
{
    UA_TYPES_MONITOREDITEMCREATEREQUEST, /* .memberTypeIndex */
    offsetof(UA_CreateMonitoredItemsRequest, itemsToCreateSize) - offsetof(UA_CreateMonitoredItemsRequest, timestampsToReturn) - sizeof(UA_TimestampsToReturn), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ItemsToCreate") /* .memberName */
},};

/* CreateMonitoredItemsResponse */
static UA_DataTypeMember CreateMonitoredItemsResponse_members[3] = {
{
    UA_TYPES_RESPONSEHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ResponseHeader") /* .memberName */
},
{
    UA_TYPES_MONITOREDITEMCREATERESULT, /* .memberTypeIndex */
    offsetof(UA_CreateMonitoredItemsResponse, resultsSize) - offsetof(UA_CreateMonitoredItemsResponse, responseHeader) - sizeof(UA_ResponseHeader), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Results") /* .memberName */
},
{
    UA_TYPES_DIAGNOSTICINFO, /* .memberTypeIndex */
    offsetof(UA_CreateMonitoredItemsResponse, diagnosticInfosSize) - offsetof(UA_CreateMonitoredItemsResponse, results) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DiagnosticInfos") /* .memberName */
},};

/* MonitoredItemModifyRequest */
static UA_DataTypeMember MonitoredItemModifyRequest_members[2] = {
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("MonitoredItemId") /* .memberName */
},
{
    UA_TYPES_MONITORINGPARAMETERS, /* .memberTypeIndex */
    offsetof(UA_MonitoredItemModifyRequest, requestedParameters) - offsetof(UA_MonitoredItemModifyRequest, monitoredItemId) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RequestedParameters") /* .memberName */
},};

/* MonitoredItemModifyResult */
static UA_DataTypeMember MonitoredItemModifyResult_members[4] = {
{
    UA_TYPES_STATUSCODE, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("StatusCode") /* .memberName */
},
{
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_MonitoredItemModifyResult, revisedSamplingInterval) - offsetof(UA_MonitoredItemModifyResult, statusCode) - sizeof(UA_StatusCode), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RevisedSamplingInterval") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_MonitoredItemModifyResult, revisedQueueSize) - offsetof(UA_MonitoredItemModifyResult, revisedSamplingInterval) - sizeof(UA_Double), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RevisedQueueSize") /* .memberName */
},
{
    UA_TYPES_EXTENSIONOBJECT, /* .memberTypeIndex */
    offsetof(UA_MonitoredItemModifyResult, filterResult) - offsetof(UA_MonitoredItemModifyResult, revisedQueueSize) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("FilterResult") /* .memberName */
},};

/* ModifyMonitoredItemsRequest */
static UA_DataTypeMember ModifyMonitoredItemsRequest_members[4] = {
{
    UA_TYPES_REQUESTHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RequestHeader") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_ModifyMonitoredItemsRequest, subscriptionId) - offsetof(UA_ModifyMonitoredItemsRequest, requestHeader) - sizeof(UA_RequestHeader), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SubscriptionId") /* .memberName */
},
{
    UA_TYPES_TIMESTAMPSTORETURN, /* .memberTypeIndex */
    offsetof(UA_ModifyMonitoredItemsRequest, timestampsToReturn) - offsetof(UA_ModifyMonitoredItemsRequest, subscriptionId) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("TimestampsToReturn") /* .memberName */
},
{
    UA_TYPES_MONITOREDITEMMODIFYREQUEST, /* .memberTypeIndex */
    offsetof(UA_ModifyMonitoredItemsRequest, itemsToModifySize) - offsetof(UA_ModifyMonitoredItemsRequest, timestampsToReturn) - sizeof(UA_TimestampsToReturn), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ItemsToModify") /* .memberName */
},};

/* ModifyMonitoredItemsResponse */
static UA_DataTypeMember ModifyMonitoredItemsResponse_members[3] = {
{
    UA_TYPES_RESPONSEHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ResponseHeader") /* .memberName */
},
{
    UA_TYPES_MONITOREDITEMMODIFYRESULT, /* .memberTypeIndex */
    offsetof(UA_ModifyMonitoredItemsResponse, resultsSize) - offsetof(UA_ModifyMonitoredItemsResponse, responseHeader) - sizeof(UA_ResponseHeader), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Results") /* .memberName */
},
{
    UA_TYPES_DIAGNOSTICINFO, /* .memberTypeIndex */
    offsetof(UA_ModifyMonitoredItemsResponse, diagnosticInfosSize) - offsetof(UA_ModifyMonitoredItemsResponse, results) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DiagnosticInfos") /* .memberName */
},};

/* SetMonitoringModeRequest */
static UA_DataTypeMember SetMonitoringModeRequest_members[4] = {
{
    UA_TYPES_REQUESTHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RequestHeader") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SetMonitoringModeRequest, subscriptionId) - offsetof(UA_SetMonitoringModeRequest, requestHeader) - sizeof(UA_RequestHeader), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SubscriptionId") /* .memberName */
},
{
    UA_TYPES_MONITORINGMODE, /* .memberTypeIndex */
    offsetof(UA_SetMonitoringModeRequest, monitoringMode) - offsetof(UA_SetMonitoringModeRequest, subscriptionId) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("MonitoringMode") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SetMonitoringModeRequest, monitoredItemIdsSize) - offsetof(UA_SetMonitoringModeRequest, monitoringMode) - sizeof(UA_MonitoringMode), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("MonitoredItemIds") /* .memberName */
},};

/* SetMonitoringModeResponse */
static UA_DataTypeMember SetMonitoringModeResponse_members[3] = {
{
    UA_TYPES_RESPONSEHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ResponseHeader") /* .memberName */
},
{
    UA_TYPES_STATUSCODE, /* .memberTypeIndex */
    offsetof(UA_SetMonitoringModeResponse, resultsSize) - offsetof(UA_SetMonitoringModeResponse, responseHeader) - sizeof(UA_ResponseHeader), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Results") /* .memberName */
},
{
    UA_TYPES_DIAGNOSTICINFO, /* .memberTypeIndex */
    offsetof(UA_SetMonitoringModeResponse, diagnosticInfosSize) - offsetof(UA_SetMonitoringModeResponse, results) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DiagnosticInfos") /* .memberName */
},};

/* SetTriggeringRequest */
static UA_DataTypeMember SetTriggeringRequest_members[5] = {
{
    UA_TYPES_REQUESTHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RequestHeader") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SetTriggeringRequest, subscriptionId) - offsetof(UA_SetTriggeringRequest, requestHeader) - sizeof(UA_RequestHeader), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SubscriptionId") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SetTriggeringRequest, triggeringItemId) - offsetof(UA_SetTriggeringRequest, subscriptionId) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("TriggeringItemId") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SetTriggeringRequest, linksToAddSize) - offsetof(UA_SetTriggeringRequest, triggeringItemId) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("LinksToAdd") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SetTriggeringRequest, linksToRemoveSize) - offsetof(UA_SetTriggeringRequest, linksToAdd) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("LinksToRemove") /* .memberName */
},};

/* SetTriggeringResponse */
static UA_DataTypeMember SetTriggeringResponse_members[5] = {
{
    UA_TYPES_RESPONSEHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ResponseHeader") /* .memberName */
},
{
    UA_TYPES_STATUSCODE, /* .memberTypeIndex */
    offsetof(UA_SetTriggeringResponse, addResultsSize) - offsetof(UA_SetTriggeringResponse, responseHeader) - sizeof(UA_ResponseHeader), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("AddResults") /* .memberName */
},
{
    UA_TYPES_DIAGNOSTICINFO, /* .memberTypeIndex */
    offsetof(UA_SetTriggeringResponse, addDiagnosticInfosSize) - offsetof(UA_SetTriggeringResponse, addResults) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("AddDiagnosticInfos") /* .memberName */
},
{
    UA_TYPES_STATUSCODE, /* .memberTypeIndex */
    offsetof(UA_SetTriggeringResponse, removeResultsSize) - offsetof(UA_SetTriggeringResponse, addDiagnosticInfos) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RemoveResults") /* .memberName */
},
{
    UA_TYPES_DIAGNOSTICINFO, /* .memberTypeIndex */
    offsetof(UA_SetTriggeringResponse, removeDiagnosticInfosSize) - offsetof(UA_SetTriggeringResponse, removeResults) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RemoveDiagnosticInfos") /* .memberName */
},};

/* DeleteMonitoredItemsRequest */
static UA_DataTypeMember DeleteMonitoredItemsRequest_members[3] = {
{
    UA_TYPES_REQUESTHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RequestHeader") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_DeleteMonitoredItemsRequest, subscriptionId) - offsetof(UA_DeleteMonitoredItemsRequest, requestHeader) - sizeof(UA_RequestHeader), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SubscriptionId") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_DeleteMonitoredItemsRequest, monitoredItemIdsSize) - offsetof(UA_DeleteMonitoredItemsRequest, subscriptionId) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("MonitoredItemIds") /* .memberName */
},};

/* DeleteMonitoredItemsResponse */
static UA_DataTypeMember DeleteMonitoredItemsResponse_members[3] = {
{
    UA_TYPES_RESPONSEHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ResponseHeader") /* .memberName */
},
{
    UA_TYPES_STATUSCODE, /* .memberTypeIndex */
    offsetof(UA_DeleteMonitoredItemsResponse, resultsSize) - offsetof(UA_DeleteMonitoredItemsResponse, responseHeader) - sizeof(UA_ResponseHeader), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Results") /* .memberName */
},
{
    UA_TYPES_DIAGNOSTICINFO, /* .memberTypeIndex */
    offsetof(UA_DeleteMonitoredItemsResponse, diagnosticInfosSize) - offsetof(UA_DeleteMonitoredItemsResponse, results) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DiagnosticInfos") /* .memberName */
},};

/* CreateSubscriptionRequest */
static UA_DataTypeMember CreateSubscriptionRequest_members[7] = {
{
    UA_TYPES_REQUESTHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RequestHeader") /* .memberName */
},
{
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_CreateSubscriptionRequest, requestedPublishingInterval) - offsetof(UA_CreateSubscriptionRequest, requestHeader) - sizeof(UA_RequestHeader), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RequestedPublishingInterval") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_CreateSubscriptionRequest, requestedLifetimeCount) - offsetof(UA_CreateSubscriptionRequest, requestedPublishingInterval) - sizeof(UA_Double), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RequestedLifetimeCount") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_CreateSubscriptionRequest, requestedMaxKeepAliveCount) - offsetof(UA_CreateSubscriptionRequest, requestedLifetimeCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RequestedMaxKeepAliveCount") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_CreateSubscriptionRequest, maxNotificationsPerPublish) - offsetof(UA_CreateSubscriptionRequest, requestedMaxKeepAliveCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("MaxNotificationsPerPublish") /* .memberName */
},
{
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_CreateSubscriptionRequest, publishingEnabled) - offsetof(UA_CreateSubscriptionRequest, maxNotificationsPerPublish) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("PublishingEnabled") /* .memberName */
},
{
    UA_TYPES_BYTE, /* .memberTypeIndex */
    offsetof(UA_CreateSubscriptionRequest, priority) - offsetof(UA_CreateSubscriptionRequest, publishingEnabled) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Priority") /* .memberName */
},};

/* CreateSubscriptionResponse */
static UA_DataTypeMember CreateSubscriptionResponse_members[5] = {
{
    UA_TYPES_RESPONSEHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ResponseHeader") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_CreateSubscriptionResponse, subscriptionId) - offsetof(UA_CreateSubscriptionResponse, responseHeader) - sizeof(UA_ResponseHeader), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SubscriptionId") /* .memberName */
},
{
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_CreateSubscriptionResponse, revisedPublishingInterval) - offsetof(UA_CreateSubscriptionResponse, subscriptionId) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RevisedPublishingInterval") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_CreateSubscriptionResponse, revisedLifetimeCount) - offsetof(UA_CreateSubscriptionResponse, revisedPublishingInterval) - sizeof(UA_Double), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RevisedLifetimeCount") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_CreateSubscriptionResponse, revisedMaxKeepAliveCount) - offsetof(UA_CreateSubscriptionResponse, revisedLifetimeCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RevisedMaxKeepAliveCount") /* .memberName */
},};

/* ModifySubscriptionRequest */
static UA_DataTypeMember ModifySubscriptionRequest_members[7] = {
{
    UA_TYPES_REQUESTHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RequestHeader") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_ModifySubscriptionRequest, subscriptionId) - offsetof(UA_ModifySubscriptionRequest, requestHeader) - sizeof(UA_RequestHeader), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SubscriptionId") /* .memberName */
},
{
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_ModifySubscriptionRequest, requestedPublishingInterval) - offsetof(UA_ModifySubscriptionRequest, subscriptionId) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RequestedPublishingInterval") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_ModifySubscriptionRequest, requestedLifetimeCount) - offsetof(UA_ModifySubscriptionRequest, requestedPublishingInterval) - sizeof(UA_Double), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RequestedLifetimeCount") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_ModifySubscriptionRequest, requestedMaxKeepAliveCount) - offsetof(UA_ModifySubscriptionRequest, requestedLifetimeCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RequestedMaxKeepAliveCount") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_ModifySubscriptionRequest, maxNotificationsPerPublish) - offsetof(UA_ModifySubscriptionRequest, requestedMaxKeepAliveCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("MaxNotificationsPerPublish") /* .memberName */
},
{
    UA_TYPES_BYTE, /* .memberTypeIndex */
    offsetof(UA_ModifySubscriptionRequest, priority) - offsetof(UA_ModifySubscriptionRequest, maxNotificationsPerPublish) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Priority") /* .memberName */
},};

/* ModifySubscriptionResponse */
static UA_DataTypeMember ModifySubscriptionResponse_members[4] = {
{
    UA_TYPES_RESPONSEHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ResponseHeader") /* .memberName */
},
{
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_ModifySubscriptionResponse, revisedPublishingInterval) - offsetof(UA_ModifySubscriptionResponse, responseHeader) - sizeof(UA_ResponseHeader), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RevisedPublishingInterval") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_ModifySubscriptionResponse, revisedLifetimeCount) - offsetof(UA_ModifySubscriptionResponse, revisedPublishingInterval) - sizeof(UA_Double), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RevisedLifetimeCount") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_ModifySubscriptionResponse, revisedMaxKeepAliveCount) - offsetof(UA_ModifySubscriptionResponse, revisedLifetimeCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RevisedMaxKeepAliveCount") /* .memberName */
},};

/* SetPublishingModeRequest */
static UA_DataTypeMember SetPublishingModeRequest_members[3] = {
{
    UA_TYPES_REQUESTHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RequestHeader") /* .memberName */
},
{
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_SetPublishingModeRequest, publishingEnabled) - offsetof(UA_SetPublishingModeRequest, requestHeader) - sizeof(UA_RequestHeader), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("PublishingEnabled") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SetPublishingModeRequest, subscriptionIdsSize) - offsetof(UA_SetPublishingModeRequest, publishingEnabled) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SubscriptionIds") /* .memberName */
},};

/* SetPublishingModeResponse */
static UA_DataTypeMember SetPublishingModeResponse_members[3] = {
{
    UA_TYPES_RESPONSEHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ResponseHeader") /* .memberName */
},
{
    UA_TYPES_STATUSCODE, /* .memberTypeIndex */
    offsetof(UA_SetPublishingModeResponse, resultsSize) - offsetof(UA_SetPublishingModeResponse, responseHeader) - sizeof(UA_ResponseHeader), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Results") /* .memberName */
},
{
    UA_TYPES_DIAGNOSTICINFO, /* .memberTypeIndex */
    offsetof(UA_SetPublishingModeResponse, diagnosticInfosSize) - offsetof(UA_SetPublishingModeResponse, results) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DiagnosticInfos") /* .memberName */
},};

/* NotificationMessage */
static UA_DataTypeMember NotificationMessage_members[3] = {
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SequenceNumber") /* .memberName */
},
{
    UA_TYPES_DATETIME, /* .memberTypeIndex */
    offsetof(UA_NotificationMessage, publishTime) - offsetof(UA_NotificationMessage, sequenceNumber) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("PublishTime") /* .memberName */
},
{
    UA_TYPES_EXTENSIONOBJECT, /* .memberTypeIndex */
    offsetof(UA_NotificationMessage, notificationDataSize) - offsetof(UA_NotificationMessage, publishTime) - sizeof(UA_DateTime), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("NotificationData") /* .memberName */
},};

/* NotificationData */
#define NotificationData_members NULL

/* MonitoredItemNotification */
static UA_DataTypeMember MonitoredItemNotification_members[2] = {
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ClientHandle") /* .memberName */
},
{
    UA_TYPES_DATAVALUE, /* .memberTypeIndex */
    offsetof(UA_MonitoredItemNotification, value) - offsetof(UA_MonitoredItemNotification, clientHandle) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Value") /* .memberName */
},};

/* EventFieldList */
static UA_DataTypeMember EventFieldList_members[2] = {
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ClientHandle") /* .memberName */
},
{
    UA_TYPES_VARIANT, /* .memberTypeIndex */
    offsetof(UA_EventFieldList, eventFieldsSize) - offsetof(UA_EventFieldList, clientHandle) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("EventFields") /* .memberName */
},};

/* HistoryEventFieldList */
static UA_DataTypeMember HistoryEventFieldList_members[1] = {
{
    UA_TYPES_VARIANT, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("EventFields") /* .memberName */
},};

/* StatusChangeNotification */
static UA_DataTypeMember StatusChangeNotification_members[2] = {
{
    UA_TYPES_STATUSCODE, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Status") /* .memberName */
},
{
    UA_TYPES_DIAGNOSTICINFO, /* .memberTypeIndex */
    offsetof(UA_StatusChangeNotification, diagnosticInfo) - offsetof(UA_StatusChangeNotification, status) - sizeof(UA_StatusCode), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DiagnosticInfo") /* .memberName */
},};

/* SubscriptionAcknowledgement */
static UA_DataTypeMember SubscriptionAcknowledgement_members[2] = {
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SubscriptionId") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SubscriptionAcknowledgement, sequenceNumber) - offsetof(UA_SubscriptionAcknowledgement, subscriptionId) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SequenceNumber") /* .memberName */
},};

/* PublishRequest */
static UA_DataTypeMember PublishRequest_members[2] = {
{
    UA_TYPES_REQUESTHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RequestHeader") /* .memberName */
},
{
    UA_TYPES_SUBSCRIPTIONACKNOWLEDGEMENT, /* .memberTypeIndex */
    offsetof(UA_PublishRequest, subscriptionAcknowledgementsSize) - offsetof(UA_PublishRequest, requestHeader) - sizeof(UA_RequestHeader), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SubscriptionAcknowledgements") /* .memberName */
},};

/* PublishResponse */
static UA_DataTypeMember PublishResponse_members[7] = {
{
    UA_TYPES_RESPONSEHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ResponseHeader") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_PublishResponse, subscriptionId) - offsetof(UA_PublishResponse, responseHeader) - sizeof(UA_ResponseHeader), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SubscriptionId") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_PublishResponse, availableSequenceNumbersSize) - offsetof(UA_PublishResponse, subscriptionId) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("AvailableSequenceNumbers") /* .memberName */
},
{
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_PublishResponse, moreNotifications) - offsetof(UA_PublishResponse, availableSequenceNumbers) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("MoreNotifications") /* .memberName */
},
{
    UA_TYPES_NOTIFICATIONMESSAGE, /* .memberTypeIndex */
    offsetof(UA_PublishResponse, notificationMessage) - offsetof(UA_PublishResponse, moreNotifications) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("NotificationMessage") /* .memberName */
},
{
    UA_TYPES_STATUSCODE, /* .memberTypeIndex */
    offsetof(UA_PublishResponse, resultsSize) - offsetof(UA_PublishResponse, notificationMessage) - sizeof(UA_NotificationMessage), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Results") /* .memberName */
},
{
    UA_TYPES_DIAGNOSTICINFO, /* .memberTypeIndex */
    offsetof(UA_PublishResponse, diagnosticInfosSize) - offsetof(UA_PublishResponse, results) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DiagnosticInfos") /* .memberName */
},};

/* RepublishRequest */
static UA_DataTypeMember RepublishRequest_members[3] = {
{
    UA_TYPES_REQUESTHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RequestHeader") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_RepublishRequest, subscriptionId) - offsetof(UA_RepublishRequest, requestHeader) - sizeof(UA_RequestHeader), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SubscriptionId") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_RepublishRequest, retransmitSequenceNumber) - offsetof(UA_RepublishRequest, subscriptionId) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RetransmitSequenceNumber") /* .memberName */
},};

/* RepublishResponse */
static UA_DataTypeMember RepublishResponse_members[2] = {
{
    UA_TYPES_RESPONSEHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ResponseHeader") /* .memberName */
},
{
    UA_TYPES_NOTIFICATIONMESSAGE, /* .memberTypeIndex */
    offsetof(UA_RepublishResponse, notificationMessage) - offsetof(UA_RepublishResponse, responseHeader) - sizeof(UA_ResponseHeader), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("NotificationMessage") /* .memberName */
},};

/* TransferResult */
static UA_DataTypeMember TransferResult_members[2] = {
{
    UA_TYPES_STATUSCODE, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("StatusCode") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_TransferResult, availableSequenceNumbersSize) - offsetof(UA_TransferResult, statusCode) - sizeof(UA_StatusCode), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("AvailableSequenceNumbers") /* .memberName */
},};

/* TransferSubscriptionsRequest */
static UA_DataTypeMember TransferSubscriptionsRequest_members[3] = {
{
    UA_TYPES_REQUESTHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RequestHeader") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_TransferSubscriptionsRequest, subscriptionIdsSize) - offsetof(UA_TransferSubscriptionsRequest, requestHeader) - sizeof(UA_RequestHeader), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SubscriptionIds") /* .memberName */
},
{
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_TransferSubscriptionsRequest, sendInitialValues) - offsetof(UA_TransferSubscriptionsRequest, subscriptionIds) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SendInitialValues") /* .memberName */
},};

/* TransferSubscriptionsResponse */
static UA_DataTypeMember TransferSubscriptionsResponse_members[3] = {
{
    UA_TYPES_RESPONSEHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ResponseHeader") /* .memberName */
},
{
    UA_TYPES_TRANSFERRESULT, /* .memberTypeIndex */
    offsetof(UA_TransferSubscriptionsResponse, resultsSize) - offsetof(UA_TransferSubscriptionsResponse, responseHeader) - sizeof(UA_ResponseHeader), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Results") /* .memberName */
},
{
    UA_TYPES_DIAGNOSTICINFO, /* .memberTypeIndex */
    offsetof(UA_TransferSubscriptionsResponse, diagnosticInfosSize) - offsetof(UA_TransferSubscriptionsResponse, results) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DiagnosticInfos") /* .memberName */
},};

/* DeleteSubscriptionsRequest */
static UA_DataTypeMember DeleteSubscriptionsRequest_members[2] = {
{
    UA_TYPES_REQUESTHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RequestHeader") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_DeleteSubscriptionsRequest, subscriptionIdsSize) - offsetof(UA_DeleteSubscriptionsRequest, requestHeader) - sizeof(UA_RequestHeader), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SubscriptionIds") /* .memberName */
},};

/* DeleteSubscriptionsResponse */
static UA_DataTypeMember DeleteSubscriptionsResponse_members[3] = {
{
    UA_TYPES_RESPONSEHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ResponseHeader") /* .memberName */
},
{
    UA_TYPES_STATUSCODE, /* .memberTypeIndex */
    offsetof(UA_DeleteSubscriptionsResponse, resultsSize) - offsetof(UA_DeleteSubscriptionsResponse, responseHeader) - sizeof(UA_ResponseHeader), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Results") /* .memberName */
},
{
    UA_TYPES_DIAGNOSTICINFO, /* .memberTypeIndex */
    offsetof(UA_DeleteSubscriptionsResponse, diagnosticInfosSize) - offsetof(UA_DeleteSubscriptionsResponse, results) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DiagnosticInfos") /* .memberName */
},};

/* BuildInfo */
static UA_DataTypeMember BuildInfo_members[6] = {
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ProductUri") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_BuildInfo, manufacturerName) - offsetof(UA_BuildInfo, productUri) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ManufacturerName") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_BuildInfo, productName) - offsetof(UA_BuildInfo, manufacturerName) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ProductName") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_BuildInfo, softwareVersion) - offsetof(UA_BuildInfo, productName) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SoftwareVersion") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_BuildInfo, buildNumber) - offsetof(UA_BuildInfo, softwareVersion) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("BuildNumber") /* .memberName */
},
{
    UA_TYPES_DATETIME, /* .memberTypeIndex */
    offsetof(UA_BuildInfo, buildDate) - offsetof(UA_BuildInfo, buildNumber) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("BuildDate") /* .memberName */
},};

/* RedundancySupport */
#define RedundancySupport_members NULL

/* ServerState */
#define ServerState_members NULL

/* RedundantServerDataType */
static UA_DataTypeMember RedundantServerDataType_members[3] = {
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ServerId") /* .memberName */
},
{
    UA_TYPES_BYTE, /* .memberTypeIndex */
    offsetof(UA_RedundantServerDataType, serviceLevel) - offsetof(UA_RedundantServerDataType, serverId) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ServiceLevel") /* .memberName */
},
{
    UA_TYPES_SERVERSTATE, /* .memberTypeIndex */
    offsetof(UA_RedundantServerDataType, serverState) - offsetof(UA_RedundantServerDataType, serviceLevel) - sizeof(UA_Byte), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ServerState") /* .memberName */
},};

/* EndpointUrlListDataType */
static UA_DataTypeMember EndpointUrlListDataType_members[1] = {
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("EndpointUrlList") /* .memberName */
},};

/* NetworkGroupDataType */
static UA_DataTypeMember NetworkGroupDataType_members[2] = {
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ServerUri") /* .memberName */
},
{
    UA_TYPES_ENDPOINTURLLISTDATATYPE, /* .memberTypeIndex */
    offsetof(UA_NetworkGroupDataType, networkPathsSize) - offsetof(UA_NetworkGroupDataType, serverUri) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("NetworkPaths") /* .memberName */
},};

/* SamplingIntervalDiagnosticsDataType */
static UA_DataTypeMember SamplingIntervalDiagnosticsDataType_members[4] = {
{
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SamplingInterval") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SamplingIntervalDiagnosticsDataType, monitoredItemCount) - offsetof(UA_SamplingIntervalDiagnosticsDataType, samplingInterval) - sizeof(UA_Double), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("MonitoredItemCount") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SamplingIntervalDiagnosticsDataType, maxMonitoredItemCount) - offsetof(UA_SamplingIntervalDiagnosticsDataType, monitoredItemCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("MaxMonitoredItemCount") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SamplingIntervalDiagnosticsDataType, disabledMonitoredItemCount) - offsetof(UA_SamplingIntervalDiagnosticsDataType, maxMonitoredItemCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DisabledMonitoredItemCount") /* .memberName */
},};

/* ServerDiagnosticsSummaryDataType */
static UA_DataTypeMember ServerDiagnosticsSummaryDataType_members[12] = {
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ServerViewCount") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_ServerDiagnosticsSummaryDataType, currentSessionCount) - offsetof(UA_ServerDiagnosticsSummaryDataType, serverViewCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("CurrentSessionCount") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_ServerDiagnosticsSummaryDataType, cumulatedSessionCount) - offsetof(UA_ServerDiagnosticsSummaryDataType, currentSessionCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("CumulatedSessionCount") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_ServerDiagnosticsSummaryDataType, securityRejectedSessionCount) - offsetof(UA_ServerDiagnosticsSummaryDataType, cumulatedSessionCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SecurityRejectedSessionCount") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_ServerDiagnosticsSummaryDataType, rejectedSessionCount) - offsetof(UA_ServerDiagnosticsSummaryDataType, securityRejectedSessionCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RejectedSessionCount") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_ServerDiagnosticsSummaryDataType, sessionTimeoutCount) - offsetof(UA_ServerDiagnosticsSummaryDataType, rejectedSessionCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SessionTimeoutCount") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_ServerDiagnosticsSummaryDataType, sessionAbortCount) - offsetof(UA_ServerDiagnosticsSummaryDataType, sessionTimeoutCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SessionAbortCount") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_ServerDiagnosticsSummaryDataType, currentSubscriptionCount) - offsetof(UA_ServerDiagnosticsSummaryDataType, sessionAbortCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("CurrentSubscriptionCount") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_ServerDiagnosticsSummaryDataType, cumulatedSubscriptionCount) - offsetof(UA_ServerDiagnosticsSummaryDataType, currentSubscriptionCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("CumulatedSubscriptionCount") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_ServerDiagnosticsSummaryDataType, publishingIntervalCount) - offsetof(UA_ServerDiagnosticsSummaryDataType, cumulatedSubscriptionCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("PublishingIntervalCount") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_ServerDiagnosticsSummaryDataType, securityRejectedRequestsCount) - offsetof(UA_ServerDiagnosticsSummaryDataType, publishingIntervalCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SecurityRejectedRequestsCount") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_ServerDiagnosticsSummaryDataType, rejectedRequestsCount) - offsetof(UA_ServerDiagnosticsSummaryDataType, securityRejectedRequestsCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RejectedRequestsCount") /* .memberName */
},};

/* ServerStatusDataType */
static UA_DataTypeMember ServerStatusDataType_members[6] = {
{
    UA_TYPES_DATETIME, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("StartTime") /* .memberName */
},
{
    UA_TYPES_DATETIME, /* .memberTypeIndex */
    offsetof(UA_ServerStatusDataType, currentTime) - offsetof(UA_ServerStatusDataType, startTime) - sizeof(UA_DateTime), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("CurrentTime") /* .memberName */
},
{
    UA_TYPES_SERVERSTATE, /* .memberTypeIndex */
    offsetof(UA_ServerStatusDataType, state) - offsetof(UA_ServerStatusDataType, currentTime) - sizeof(UA_DateTime), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("State") /* .memberName */
},
{
    UA_TYPES_BUILDINFO, /* .memberTypeIndex */
    offsetof(UA_ServerStatusDataType, buildInfo) - offsetof(UA_ServerStatusDataType, state) - sizeof(UA_ServerState), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("BuildInfo") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_ServerStatusDataType, secondsTillShutdown) - offsetof(UA_ServerStatusDataType, buildInfo) - sizeof(UA_BuildInfo), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SecondsTillShutdown") /* .memberName */
},
{
    UA_TYPES_LOCALIZEDTEXT, /* .memberTypeIndex */
    offsetof(UA_ServerStatusDataType, shutdownReason) - offsetof(UA_ServerStatusDataType, secondsTillShutdown) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ShutdownReason") /* .memberName */
},};

/* SessionSecurityDiagnosticsDataType */
static UA_DataTypeMember SessionSecurityDiagnosticsDataType_members[9] = {
{
    UA_TYPES_NODEID, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SessionId") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_SessionSecurityDiagnosticsDataType, clientUserIdOfSession) - offsetof(UA_SessionSecurityDiagnosticsDataType, sessionId) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ClientUserIdOfSession") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_SessionSecurityDiagnosticsDataType, clientUserIdHistorySize) - offsetof(UA_SessionSecurityDiagnosticsDataType, clientUserIdOfSession) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ClientUserIdHistory") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_SessionSecurityDiagnosticsDataType, authenticationMechanism) - offsetof(UA_SessionSecurityDiagnosticsDataType, clientUserIdHistory) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("AuthenticationMechanism") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_SessionSecurityDiagnosticsDataType, encoding) - offsetof(UA_SessionSecurityDiagnosticsDataType, authenticationMechanism) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Encoding") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_SessionSecurityDiagnosticsDataType, transportProtocol) - offsetof(UA_SessionSecurityDiagnosticsDataType, encoding) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("TransportProtocol") /* .memberName */
},
{
    UA_TYPES_MESSAGESECURITYMODE, /* .memberTypeIndex */
    offsetof(UA_SessionSecurityDiagnosticsDataType, securityMode) - offsetof(UA_SessionSecurityDiagnosticsDataType, transportProtocol) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SecurityMode") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_SessionSecurityDiagnosticsDataType, securityPolicyUri) - offsetof(UA_SessionSecurityDiagnosticsDataType, securityMode) - sizeof(UA_MessageSecurityMode), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SecurityPolicyUri") /* .memberName */
},
{
    UA_TYPES_BYTESTRING, /* .memberTypeIndex */
    offsetof(UA_SessionSecurityDiagnosticsDataType, clientCertificate) - offsetof(UA_SessionSecurityDiagnosticsDataType, securityPolicyUri) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ClientCertificate") /* .memberName */
},};

/* ServiceCounterDataType */
static UA_DataTypeMember ServiceCounterDataType_members[2] = {
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("TotalCount") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_ServiceCounterDataType, errorCount) - offsetof(UA_ServiceCounterDataType, totalCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ErrorCount") /* .memberName */
},};

/* StatusResult */
static UA_DataTypeMember StatusResult_members[2] = {
{
    UA_TYPES_STATUSCODE, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("StatusCode") /* .memberName */
},
{
    UA_TYPES_DIAGNOSTICINFO, /* .memberTypeIndex */
    offsetof(UA_StatusResult, diagnosticInfo) - offsetof(UA_StatusResult, statusCode) - sizeof(UA_StatusCode), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DiagnosticInfo") /* .memberName */
},};

/* SubscriptionDiagnosticsDataType */
static UA_DataTypeMember SubscriptionDiagnosticsDataType_members[31] = {
{
    UA_TYPES_NODEID, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SessionId") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SubscriptionDiagnosticsDataType, subscriptionId) - offsetof(UA_SubscriptionDiagnosticsDataType, sessionId) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SubscriptionId") /* .memberName */
},
{
    UA_TYPES_BYTE, /* .memberTypeIndex */
    offsetof(UA_SubscriptionDiagnosticsDataType, priority) - offsetof(UA_SubscriptionDiagnosticsDataType, subscriptionId) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Priority") /* .memberName */
},
{
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_SubscriptionDiagnosticsDataType, publishingInterval) - offsetof(UA_SubscriptionDiagnosticsDataType, priority) - sizeof(UA_Byte), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("PublishingInterval") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SubscriptionDiagnosticsDataType, maxKeepAliveCount) - offsetof(UA_SubscriptionDiagnosticsDataType, publishingInterval) - sizeof(UA_Double), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("MaxKeepAliveCount") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SubscriptionDiagnosticsDataType, maxLifetimeCount) - offsetof(UA_SubscriptionDiagnosticsDataType, maxKeepAliveCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("MaxLifetimeCount") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SubscriptionDiagnosticsDataType, maxNotificationsPerPublish) - offsetof(UA_SubscriptionDiagnosticsDataType, maxLifetimeCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("MaxNotificationsPerPublish") /* .memberName */
},
{
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_SubscriptionDiagnosticsDataType, publishingEnabled) - offsetof(UA_SubscriptionDiagnosticsDataType, maxNotificationsPerPublish) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("PublishingEnabled") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SubscriptionDiagnosticsDataType, modifyCount) - offsetof(UA_SubscriptionDiagnosticsDataType, publishingEnabled) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ModifyCount") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SubscriptionDiagnosticsDataType, enableCount) - offsetof(UA_SubscriptionDiagnosticsDataType, modifyCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("EnableCount") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SubscriptionDiagnosticsDataType, disableCount) - offsetof(UA_SubscriptionDiagnosticsDataType, enableCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DisableCount") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SubscriptionDiagnosticsDataType, republishRequestCount) - offsetof(UA_SubscriptionDiagnosticsDataType, disableCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RepublishRequestCount") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SubscriptionDiagnosticsDataType, republishMessageRequestCount) - offsetof(UA_SubscriptionDiagnosticsDataType, republishRequestCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RepublishMessageRequestCount") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SubscriptionDiagnosticsDataType, republishMessageCount) - offsetof(UA_SubscriptionDiagnosticsDataType, republishMessageRequestCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RepublishMessageCount") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SubscriptionDiagnosticsDataType, transferRequestCount) - offsetof(UA_SubscriptionDiagnosticsDataType, republishMessageCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("TransferRequestCount") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SubscriptionDiagnosticsDataType, transferredToAltClientCount) - offsetof(UA_SubscriptionDiagnosticsDataType, transferRequestCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("TransferredToAltClientCount") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SubscriptionDiagnosticsDataType, transferredToSameClientCount) - offsetof(UA_SubscriptionDiagnosticsDataType, transferredToAltClientCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("TransferredToSameClientCount") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SubscriptionDiagnosticsDataType, publishRequestCount) - offsetof(UA_SubscriptionDiagnosticsDataType, transferredToSameClientCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("PublishRequestCount") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SubscriptionDiagnosticsDataType, dataChangeNotificationsCount) - offsetof(UA_SubscriptionDiagnosticsDataType, publishRequestCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DataChangeNotificationsCount") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SubscriptionDiagnosticsDataType, eventNotificationsCount) - offsetof(UA_SubscriptionDiagnosticsDataType, dataChangeNotificationsCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("EventNotificationsCount") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SubscriptionDiagnosticsDataType, notificationsCount) - offsetof(UA_SubscriptionDiagnosticsDataType, eventNotificationsCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("NotificationsCount") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SubscriptionDiagnosticsDataType, latePublishRequestCount) - offsetof(UA_SubscriptionDiagnosticsDataType, notificationsCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("LatePublishRequestCount") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SubscriptionDiagnosticsDataType, currentKeepAliveCount) - offsetof(UA_SubscriptionDiagnosticsDataType, latePublishRequestCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("CurrentKeepAliveCount") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SubscriptionDiagnosticsDataType, currentLifetimeCount) - offsetof(UA_SubscriptionDiagnosticsDataType, currentKeepAliveCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("CurrentLifetimeCount") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SubscriptionDiagnosticsDataType, unacknowledgedMessageCount) - offsetof(UA_SubscriptionDiagnosticsDataType, currentLifetimeCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("UnacknowledgedMessageCount") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SubscriptionDiagnosticsDataType, discardedMessageCount) - offsetof(UA_SubscriptionDiagnosticsDataType, unacknowledgedMessageCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DiscardedMessageCount") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SubscriptionDiagnosticsDataType, monitoredItemCount) - offsetof(UA_SubscriptionDiagnosticsDataType, discardedMessageCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("MonitoredItemCount") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SubscriptionDiagnosticsDataType, disabledMonitoredItemCount) - offsetof(UA_SubscriptionDiagnosticsDataType, monitoredItemCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DisabledMonitoredItemCount") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SubscriptionDiagnosticsDataType, monitoringQueueOverflowCount) - offsetof(UA_SubscriptionDiagnosticsDataType, disabledMonitoredItemCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("MonitoringQueueOverflowCount") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SubscriptionDiagnosticsDataType, nextSequenceNumber) - offsetof(UA_SubscriptionDiagnosticsDataType, monitoringQueueOverflowCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("NextSequenceNumber") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SubscriptionDiagnosticsDataType, eventQueueOverFlowCount) - offsetof(UA_SubscriptionDiagnosticsDataType, nextSequenceNumber) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("EventQueueOverFlowCount") /* .memberName */
},};

/* ModelChangeStructureVerbMask */
#define ModelChangeStructureVerbMask_members NULL

/* ModelChangeStructureDataType */
static UA_DataTypeMember ModelChangeStructureDataType_members[3] = {
{
    UA_TYPES_NODEID, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Affected") /* .memberName */
},
{
    UA_TYPES_NODEID, /* .memberTypeIndex */
    offsetof(UA_ModelChangeStructureDataType, affectedType) - offsetof(UA_ModelChangeStructureDataType, affected) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("AffectedType") /* .memberName */
},
{
    UA_TYPES_BYTE, /* .memberTypeIndex */
    offsetof(UA_ModelChangeStructureDataType, verb) - offsetof(UA_ModelChangeStructureDataType, affectedType) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Verb") /* .memberName */
},};

/* SemanticChangeStructureDataType */
static UA_DataTypeMember SemanticChangeStructureDataType_members[2] = {
{
    UA_TYPES_NODEID, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Affected") /* .memberName */
},
{
    UA_TYPES_NODEID, /* .memberTypeIndex */
    offsetof(UA_SemanticChangeStructureDataType, affectedType) - offsetof(UA_SemanticChangeStructureDataType, affected) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("AffectedType") /* .memberName */
},};

/* Range */
static UA_DataTypeMember Range_members[2] = {
{
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Low") /* .memberName */
},
{
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_Range, high) - offsetof(UA_Range, low) - sizeof(UA_Double), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("High") /* .memberName */
},};

/* EUInformation */
static UA_DataTypeMember EUInformation_members[4] = {
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("NamespaceUri") /* .memberName */
},
{
    UA_TYPES_INT32, /* .memberTypeIndex */
    offsetof(UA_EUInformation, unitId) - offsetof(UA_EUInformation, namespaceUri) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("UnitId") /* .memberName */
},
{
    UA_TYPES_LOCALIZEDTEXT, /* .memberTypeIndex */
    offsetof(UA_EUInformation, displayName) - offsetof(UA_EUInformation, unitId) - sizeof(UA_Int32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DisplayName") /* .memberName */
},
{
    UA_TYPES_LOCALIZEDTEXT, /* .memberTypeIndex */
    offsetof(UA_EUInformation, description) - offsetof(UA_EUInformation, displayName) - sizeof(UA_LocalizedText), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Description") /* .memberName */
},};

/* AxisScaleEnumeration */
#define AxisScaleEnumeration_members NULL

/* ComplexNumberType */
static UA_DataTypeMember ComplexNumberType_members[2] = {
{
    UA_TYPES_FLOAT, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Real") /* .memberName */
},
{
    UA_TYPES_FLOAT, /* .memberTypeIndex */
    offsetof(UA_ComplexNumberType, imaginary) - offsetof(UA_ComplexNumberType, real) - sizeof(UA_Float), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Imaginary") /* .memberName */
},};

/* DoubleComplexNumberType */
static UA_DataTypeMember DoubleComplexNumberType_members[2] = {
{
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Real") /* .memberName */
},
{
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_DoubleComplexNumberType, imaginary) - offsetof(UA_DoubleComplexNumberType, real) - sizeof(UA_Double), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Imaginary") /* .memberName */
},};

/* AxisInformation */
static UA_DataTypeMember AxisInformation_members[5] = {
{
    UA_TYPES_EUINFORMATION, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("EngineeringUnits") /* .memberName */
},
{
    UA_TYPES_RANGE, /* .memberTypeIndex */
    offsetof(UA_AxisInformation, eURange) - offsetof(UA_AxisInformation, engineeringUnits) - sizeof(UA_EUInformation), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("EURange") /* .memberName */
},
{
    UA_TYPES_LOCALIZEDTEXT, /* .memberTypeIndex */
    offsetof(UA_AxisInformation, title) - offsetof(UA_AxisInformation, eURange) - sizeof(UA_Range), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Title") /* .memberName */
},
{
    UA_TYPES_AXISSCALEENUMERATION, /* .memberTypeIndex */
    offsetof(UA_AxisInformation, axisScaleType) - offsetof(UA_AxisInformation, title) - sizeof(UA_LocalizedText), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("AxisScaleType") /* .memberName */
},
{
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_AxisInformation, axisStepsSize) - offsetof(UA_AxisInformation, axisScaleType) - sizeof(UA_AxisScaleEnumeration), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("AxisSteps") /* .memberName */
},};

/* XVType */
static UA_DataTypeMember XVType_members[2] = {
{
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("X") /* .memberName */
},
{
    UA_TYPES_FLOAT, /* .memberTypeIndex */
    offsetof(UA_XVType, value) - offsetof(UA_XVType, x) - sizeof(UA_Double), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Value") /* .memberName */
},};

/* ProgramDiagnosticDataType */
static UA_DataTypeMember ProgramDiagnosticDataType_members[10] = {
{
    UA_TYPES_NODEID, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("CreateSessionId") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_ProgramDiagnosticDataType, createClientName) - offsetof(UA_ProgramDiagnosticDataType, createSessionId) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("CreateClientName") /* .memberName */
},
{
    UA_TYPES_DATETIME, /* .memberTypeIndex */
    offsetof(UA_ProgramDiagnosticDataType, invocationCreationTime) - offsetof(UA_ProgramDiagnosticDataType, createClientName) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("InvocationCreationTime") /* .memberName */
},
{
    UA_TYPES_DATETIME, /* .memberTypeIndex */
    offsetof(UA_ProgramDiagnosticDataType, lastTransitionTime) - offsetof(UA_ProgramDiagnosticDataType, invocationCreationTime) - sizeof(UA_DateTime), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("LastTransitionTime") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_ProgramDiagnosticDataType, lastMethodCall) - offsetof(UA_ProgramDiagnosticDataType, lastTransitionTime) - sizeof(UA_DateTime), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("LastMethodCall") /* .memberName */
},
{
    UA_TYPES_NODEID, /* .memberTypeIndex */
    offsetof(UA_ProgramDiagnosticDataType, lastMethodSessionId) - offsetof(UA_ProgramDiagnosticDataType, lastMethodCall) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("LastMethodSessionId") /* .memberName */
},
{
    UA_TYPES_ARGUMENT, /* .memberTypeIndex */
    offsetof(UA_ProgramDiagnosticDataType, lastMethodInputArgumentsSize) - offsetof(UA_ProgramDiagnosticDataType, lastMethodSessionId) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("LastMethodInputArguments") /* .memberName */
},
{
    UA_TYPES_ARGUMENT, /* .memberTypeIndex */
    offsetof(UA_ProgramDiagnosticDataType, lastMethodOutputArgumentsSize) - offsetof(UA_ProgramDiagnosticDataType, lastMethodInputArguments) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("LastMethodOutputArguments") /* .memberName */
},
{
    UA_TYPES_DATETIME, /* .memberTypeIndex */
    offsetof(UA_ProgramDiagnosticDataType, lastMethodCallTime) - offsetof(UA_ProgramDiagnosticDataType, lastMethodOutputArguments) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("LastMethodCallTime") /* .memberName */
},
{
    UA_TYPES_STATUSRESULT, /* .memberTypeIndex */
    offsetof(UA_ProgramDiagnosticDataType, lastMethodReturnStatus) - offsetof(UA_ProgramDiagnosticDataType, lastMethodCallTime) - sizeof(UA_DateTime), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("LastMethodReturnStatus") /* .memberName */
},};

/* ProgramDiagnostic2DataType */
static UA_DataTypeMember ProgramDiagnostic2DataType_members[12] = {
{
    UA_TYPES_NODEID, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("CreateSessionId") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_ProgramDiagnostic2DataType, createClientName) - offsetof(UA_ProgramDiagnostic2DataType, createSessionId) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("CreateClientName") /* .memberName */
},
{
    UA_TYPES_DATETIME, /* .memberTypeIndex */
    offsetof(UA_ProgramDiagnostic2DataType, invocationCreationTime) - offsetof(UA_ProgramDiagnostic2DataType, createClientName) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("InvocationCreationTime") /* .memberName */
},
{
    UA_TYPES_DATETIME, /* .memberTypeIndex */
    offsetof(UA_ProgramDiagnostic2DataType, lastTransitionTime) - offsetof(UA_ProgramDiagnostic2DataType, invocationCreationTime) - sizeof(UA_DateTime), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("LastTransitionTime") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_ProgramDiagnostic2DataType, lastMethodCall) - offsetof(UA_ProgramDiagnostic2DataType, lastTransitionTime) - sizeof(UA_DateTime), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("LastMethodCall") /* .memberName */
},
{
    UA_TYPES_NODEID, /* .memberTypeIndex */
    offsetof(UA_ProgramDiagnostic2DataType, lastMethodSessionId) - offsetof(UA_ProgramDiagnostic2DataType, lastMethodCall) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("LastMethodSessionId") /* .memberName */
},
{
    UA_TYPES_ARGUMENT, /* .memberTypeIndex */
    offsetof(UA_ProgramDiagnostic2DataType, lastMethodInputArgumentsSize) - offsetof(UA_ProgramDiagnostic2DataType, lastMethodSessionId) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("LastMethodInputArguments") /* .memberName */
},
{
    UA_TYPES_ARGUMENT, /* .memberTypeIndex */
    offsetof(UA_ProgramDiagnostic2DataType, lastMethodOutputArgumentsSize) - offsetof(UA_ProgramDiagnostic2DataType, lastMethodInputArguments) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("LastMethodOutputArguments") /* .memberName */
},
{
    UA_TYPES_VARIANT, /* .memberTypeIndex */
    offsetof(UA_ProgramDiagnostic2DataType, lastMethodInputValuesSize) - offsetof(UA_ProgramDiagnostic2DataType, lastMethodOutputArguments) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("LastMethodInputValues") /* .memberName */
},
{
    UA_TYPES_VARIANT, /* .memberTypeIndex */
    offsetof(UA_ProgramDiagnostic2DataType, lastMethodOutputValuesSize) - offsetof(UA_ProgramDiagnostic2DataType, lastMethodInputValues) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("LastMethodOutputValues") /* .memberName */
},
{
    UA_TYPES_DATETIME, /* .memberTypeIndex */
    offsetof(UA_ProgramDiagnostic2DataType, lastMethodCallTime) - offsetof(UA_ProgramDiagnostic2DataType, lastMethodOutputValues) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("LastMethodCallTime") /* .memberName */
},
{
    UA_TYPES_STATUSRESULT, /* .memberTypeIndex */
    offsetof(UA_ProgramDiagnostic2DataType, lastMethodReturnStatus) - offsetof(UA_ProgramDiagnostic2DataType, lastMethodCallTime) - sizeof(UA_DateTime), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("LastMethodReturnStatus") /* .memberName */
},};

/* Annotation */
static UA_DataTypeMember Annotation_members[3] = {
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Message") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_Annotation, userName) - offsetof(UA_Annotation, message) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("UserName") /* .memberName */
},
{
    UA_TYPES_DATETIME, /* .memberTypeIndex */
    offsetof(UA_Annotation, annotationTime) - offsetof(UA_Annotation, userName) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("AnnotationTime") /* .memberName */
},};

/* ExceptionDeviationFormat */
#define ExceptionDeviationFormat_members NULL

/* EndpointType */
static UA_DataTypeMember EndpointType_members[4] = {
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("EndpointUrl") /* .memberName */
},
{
    UA_TYPES_MESSAGESECURITYMODE, /* .memberTypeIndex */
    offsetof(UA_EndpointType, securityMode) - offsetof(UA_EndpointType, endpointUrl) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SecurityMode") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_EndpointType, securityPolicyUri) - offsetof(UA_EndpointType, securityMode) - sizeof(UA_MessageSecurityMode), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SecurityPolicyUri") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_EndpointType, transportProfileUri) - offsetof(UA_EndpointType, securityPolicyUri) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("TransportProfileUri") /* .memberName */
},};

/* StructureDescription */
static UA_DataTypeMember StructureDescription_members[3] = {
{
    UA_TYPES_NODEID, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DataTypeId") /* .memberName */
},
{
    UA_TYPES_QUALIFIEDNAME, /* .memberTypeIndex */
    offsetof(UA_StructureDescription, name) - offsetof(UA_StructureDescription, dataTypeId) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Name") /* .memberName */
},
{
    UA_TYPES_STRUCTUREDEFINITION, /* .memberTypeIndex */
    offsetof(UA_StructureDescription, structureDefinition) - offsetof(UA_StructureDescription, name) - sizeof(UA_QualifiedName), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("StructureDefinition") /* .memberName */
},};

/* FieldMetaData */
static UA_DataTypeMember FieldMetaData_members[10] = {
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Name") /* .memberName */
},
{
    UA_TYPES_LOCALIZEDTEXT, /* .memberTypeIndex */
    offsetof(UA_FieldMetaData, description) - offsetof(UA_FieldMetaData, name) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Description") /* .memberName */
},
{
    UA_TYPES_DATASETFIELDFLAGS, /* .memberTypeIndex */
    offsetof(UA_FieldMetaData, fieldFlags) - offsetof(UA_FieldMetaData, description) - sizeof(UA_LocalizedText), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("FieldFlags") /* .memberName */
},
{
    UA_TYPES_BYTE, /* .memberTypeIndex */
    offsetof(UA_FieldMetaData, builtInType) - offsetof(UA_FieldMetaData, fieldFlags) - sizeof(UA_DataSetFieldFlags), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("BuiltInType") /* .memberName */
},
{
    UA_TYPES_NODEID, /* .memberTypeIndex */
    offsetof(UA_FieldMetaData, dataType) - offsetof(UA_FieldMetaData, builtInType) - sizeof(UA_Byte), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DataType") /* .memberName */
},
{
    UA_TYPES_INT32, /* .memberTypeIndex */
    offsetof(UA_FieldMetaData, valueRank) - offsetof(UA_FieldMetaData, dataType) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ValueRank") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_FieldMetaData, arrayDimensionsSize) - offsetof(UA_FieldMetaData, valueRank) - sizeof(UA_Int32), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ArrayDimensions") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_FieldMetaData, maxStringLength) - offsetof(UA_FieldMetaData, arrayDimensions) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("MaxStringLength") /* .memberName */
},
{
    UA_TYPES_GUID, /* .memberTypeIndex */
    offsetof(UA_FieldMetaData, dataSetFieldId) - offsetof(UA_FieldMetaData, maxStringLength) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DataSetFieldId") /* .memberName */
},
{
    UA_TYPES_KEYVALUEPAIR, /* .memberTypeIndex */
    offsetof(UA_FieldMetaData, propertiesSize) - offsetof(UA_FieldMetaData, dataSetFieldId) - sizeof(UA_Guid), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Properties") /* .memberName */
},};

/* PublishedEventsDataType */
static UA_DataTypeMember PublishedEventsDataType_members[3] = {
{
    UA_TYPES_NODEID, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("EventNotifier") /* .memberName */
},
{
    UA_TYPES_SIMPLEATTRIBUTEOPERAND, /* .memberTypeIndex */
    offsetof(UA_PublishedEventsDataType, selectedFieldsSize) - offsetof(UA_PublishedEventsDataType, eventNotifier) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SelectedFields") /* .memberName */
},
{
    UA_TYPES_CONTENTFILTER, /* .memberTypeIndex */
    offsetof(UA_PublishedEventsDataType, filter) - offsetof(UA_PublishedEventsDataType, selectedFields) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Filter") /* .memberName */
},};

/* PubSubGroupDataType */
static UA_DataTypeMember PubSubGroupDataType_members[7] = {
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Name") /* .memberName */
},
{
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_PubSubGroupDataType, enabled) - offsetof(UA_PubSubGroupDataType, name) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Enabled") /* .memberName */
},
{
    UA_TYPES_MESSAGESECURITYMODE, /* .memberTypeIndex */
    offsetof(UA_PubSubGroupDataType, securityMode) - offsetof(UA_PubSubGroupDataType, enabled) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SecurityMode") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_PubSubGroupDataType, securityGroupId) - offsetof(UA_PubSubGroupDataType, securityMode) - sizeof(UA_MessageSecurityMode), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SecurityGroupId") /* .memberName */
},
{
    UA_TYPES_ENDPOINTDESCRIPTION, /* .memberTypeIndex */
    offsetof(UA_PubSubGroupDataType, securityKeyServicesSize) - offsetof(UA_PubSubGroupDataType, securityGroupId) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SecurityKeyServices") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_PubSubGroupDataType, maxNetworkMessageSize) - offsetof(UA_PubSubGroupDataType, securityKeyServices) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("MaxNetworkMessageSize") /* .memberName */
},
{
    UA_TYPES_KEYVALUEPAIR, /* .memberTypeIndex */
    offsetof(UA_PubSubGroupDataType, groupPropertiesSize) - offsetof(UA_PubSubGroupDataType, maxNetworkMessageSize) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("GroupProperties") /* .memberName */
},};

/* WriterGroupDataType */
static UA_DataTypeMember WriterGroupDataType_members[16] = {
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Name") /* .memberName */
},
{
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_WriterGroupDataType, enabled) - offsetof(UA_WriterGroupDataType, name) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Enabled") /* .memberName */
},
{
    UA_TYPES_MESSAGESECURITYMODE, /* .memberTypeIndex */
    offsetof(UA_WriterGroupDataType, securityMode) - offsetof(UA_WriterGroupDataType, enabled) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SecurityMode") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_WriterGroupDataType, securityGroupId) - offsetof(UA_WriterGroupDataType, securityMode) - sizeof(UA_MessageSecurityMode), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SecurityGroupId") /* .memberName */
},
{
    UA_TYPES_ENDPOINTDESCRIPTION, /* .memberTypeIndex */
    offsetof(UA_WriterGroupDataType, securityKeyServicesSize) - offsetof(UA_WriterGroupDataType, securityGroupId) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SecurityKeyServices") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_WriterGroupDataType, maxNetworkMessageSize) - offsetof(UA_WriterGroupDataType, securityKeyServices) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("MaxNetworkMessageSize") /* .memberName */
},
{
    UA_TYPES_KEYVALUEPAIR, /* .memberTypeIndex */
    offsetof(UA_WriterGroupDataType, groupPropertiesSize) - offsetof(UA_WriterGroupDataType, maxNetworkMessageSize) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("GroupProperties") /* .memberName */
},
{
    UA_TYPES_UINT16, /* .memberTypeIndex */
    offsetof(UA_WriterGroupDataType, writerGroupId) - offsetof(UA_WriterGroupDataType, groupProperties) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("WriterGroupId") /* .memberName */
},
{
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_WriterGroupDataType, publishingInterval) - offsetof(UA_WriterGroupDataType, writerGroupId) - sizeof(UA_UInt16), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("PublishingInterval") /* .memberName */
},
{
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_WriterGroupDataType, keepAliveTime) - offsetof(UA_WriterGroupDataType, publishingInterval) - sizeof(UA_Double), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("KeepAliveTime") /* .memberName */
},
{
    UA_TYPES_BYTE, /* .memberTypeIndex */
    offsetof(UA_WriterGroupDataType, priority) - offsetof(UA_WriterGroupDataType, keepAliveTime) - sizeof(UA_Double), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Priority") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_WriterGroupDataType, localeIdsSize) - offsetof(UA_WriterGroupDataType, priority) - sizeof(UA_Byte), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("LocaleIds") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_WriterGroupDataType, headerLayoutUri) - offsetof(UA_WriterGroupDataType, localeIds) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("HeaderLayoutUri") /* .memberName */
},
{
    UA_TYPES_EXTENSIONOBJECT, /* .memberTypeIndex */
    offsetof(UA_WriterGroupDataType, transportSettings) - offsetof(UA_WriterGroupDataType, headerLayoutUri) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("TransportSettings") /* .memberName */
},
{
    UA_TYPES_EXTENSIONOBJECT, /* .memberTypeIndex */
    offsetof(UA_WriterGroupDataType, messageSettings) - offsetof(UA_WriterGroupDataType, transportSettings) - sizeof(UA_ExtensionObject), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("MessageSettings") /* .memberName */
},
{
    UA_TYPES_DATASETWRITERDATATYPE, /* .memberTypeIndex */
    offsetof(UA_WriterGroupDataType, dataSetWritersSize) - offsetof(UA_WriterGroupDataType, messageSettings) - sizeof(UA_ExtensionObject), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DataSetWriters") /* .memberName */
},};

/* FieldTargetDataType */
static UA_DataTypeMember FieldTargetDataType_members[7] = {
{
    UA_TYPES_GUID, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DataSetFieldId") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_FieldTargetDataType, receiverIndexRange) - offsetof(UA_FieldTargetDataType, dataSetFieldId) - sizeof(UA_Guid), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ReceiverIndexRange") /* .memberName */
},
{
    UA_TYPES_NODEID, /* .memberTypeIndex */
    offsetof(UA_FieldTargetDataType, targetNodeId) - offsetof(UA_FieldTargetDataType, receiverIndexRange) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("TargetNodeId") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_FieldTargetDataType, attributeId) - offsetof(UA_FieldTargetDataType, targetNodeId) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("AttributeId") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_FieldTargetDataType, writeIndexRange) - offsetof(UA_FieldTargetDataType, attributeId) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("WriteIndexRange") /* .memberName */
},
{
    UA_TYPES_OVERRIDEVALUEHANDLING, /* .memberTypeIndex */
    offsetof(UA_FieldTargetDataType, overrideValueHandling) - offsetof(UA_FieldTargetDataType, writeIndexRange) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("OverrideValueHandling") /* .memberName */
},
{
    UA_TYPES_VARIANT, /* .memberTypeIndex */
    offsetof(UA_FieldTargetDataType, overrideValue) - offsetof(UA_FieldTargetDataType, overrideValueHandling) - sizeof(UA_OverrideValueHandling), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("OverrideValue") /* .memberName */
},};

/* SubscribedDataSetMirrorDataType */
static UA_DataTypeMember SubscribedDataSetMirrorDataType_members[2] = {
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ParentNodeName") /* .memberName */
},
{
    UA_TYPES_ROLEPERMISSIONTYPE, /* .memberTypeIndex */
    offsetof(UA_SubscribedDataSetMirrorDataType, rolePermissionsSize) - offsetof(UA_SubscribedDataSetMirrorDataType, parentNodeName) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RolePermissions") /* .memberName */
},};

/* EnumDefinition */
static UA_DataTypeMember EnumDefinition_members[1] = {
{
    UA_TYPES_ENUMFIELD, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Fields") /* .memberName */
},};

/* ReadEventDetails */
static UA_DataTypeMember ReadEventDetails_members[4] = {
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("NumValuesPerNode") /* .memberName */
},
{
    UA_TYPES_DATETIME, /* .memberTypeIndex */
    offsetof(UA_ReadEventDetails, startTime) - offsetof(UA_ReadEventDetails, numValuesPerNode) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("StartTime") /* .memberName */
},
{
    UA_TYPES_DATETIME, /* .memberTypeIndex */
    offsetof(UA_ReadEventDetails, endTime) - offsetof(UA_ReadEventDetails, startTime) - sizeof(UA_DateTime), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("EndTime") /* .memberName */
},
{
    UA_TYPES_EVENTFILTER, /* .memberTypeIndex */
    offsetof(UA_ReadEventDetails, filter) - offsetof(UA_ReadEventDetails, endTime) - sizeof(UA_DateTime), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Filter") /* .memberName */
},};

/* ReadProcessedDetails */
static UA_DataTypeMember ReadProcessedDetails_members[5] = {
{
    UA_TYPES_DATETIME, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("StartTime") /* .memberName */
},
{
    UA_TYPES_DATETIME, /* .memberTypeIndex */
    offsetof(UA_ReadProcessedDetails, endTime) - offsetof(UA_ReadProcessedDetails, startTime) - sizeof(UA_DateTime), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("EndTime") /* .memberName */
},
{
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_ReadProcessedDetails, processingInterval) - offsetof(UA_ReadProcessedDetails, endTime) - sizeof(UA_DateTime), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ProcessingInterval") /* .memberName */
},
{
    UA_TYPES_NODEID, /* .memberTypeIndex */
    offsetof(UA_ReadProcessedDetails, aggregateTypeSize) - offsetof(UA_ReadProcessedDetails, processingInterval) - sizeof(UA_Double), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("AggregateType") /* .memberName */
},
{
    UA_TYPES_AGGREGATECONFIGURATION, /* .memberTypeIndex */
    offsetof(UA_ReadProcessedDetails, aggregateConfiguration) - offsetof(UA_ReadProcessedDetails, aggregateType) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("AggregateConfiguration") /* .memberName */
},};

/* ModificationInfo */
static UA_DataTypeMember ModificationInfo_members[3] = {
{
    UA_TYPES_DATETIME, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ModificationTime") /* .memberName */
},
{
    UA_TYPES_HISTORYUPDATETYPE, /* .memberTypeIndex */
    offsetof(UA_ModificationInfo, updateType) - offsetof(UA_ModificationInfo, modificationTime) - sizeof(UA_DateTime), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("UpdateType") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_ModificationInfo, userName) - offsetof(UA_ModificationInfo, updateType) - sizeof(UA_HistoryUpdateType), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("UserName") /* .memberName */
},};

/* HistoryModifiedData */
static UA_DataTypeMember HistoryModifiedData_members[2] = {
{
    UA_TYPES_DATAVALUE, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DataValues") /* .memberName */
},
{
    UA_TYPES_MODIFICATIONINFO, /* .memberTypeIndex */
    offsetof(UA_HistoryModifiedData, modificationInfosSize) - offsetof(UA_HistoryModifiedData, dataValues) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ModificationInfos") /* .memberName */
},};

/* HistoryEvent */
static UA_DataTypeMember HistoryEvent_members[1] = {
{
    UA_TYPES_HISTORYEVENTFIELDLIST, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Events") /* .memberName */
},};

/* UpdateEventDetails */
static UA_DataTypeMember UpdateEventDetails_members[4] = {
{
    UA_TYPES_NODEID, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("NodeId") /* .memberName */
},
{
    UA_TYPES_PERFORMUPDATETYPE, /* .memberTypeIndex */
    offsetof(UA_UpdateEventDetails, performInsertReplace) - offsetof(UA_UpdateEventDetails, nodeId) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("PerformInsertReplace") /* .memberName */
},
{
    UA_TYPES_EVENTFILTER, /* .memberTypeIndex */
    offsetof(UA_UpdateEventDetails, filter) - offsetof(UA_UpdateEventDetails, performInsertReplace) - sizeof(UA_PerformUpdateType), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Filter") /* .memberName */
},
{
    UA_TYPES_HISTORYEVENTFIELDLIST, /* .memberTypeIndex */
    offsetof(UA_UpdateEventDetails, eventDataSize) - offsetof(UA_UpdateEventDetails, filter) - sizeof(UA_EventFilter), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("EventData") /* .memberName */
},};

/* DataChangeNotification */
static UA_DataTypeMember DataChangeNotification_members[2] = {
{
    UA_TYPES_MONITOREDITEMNOTIFICATION, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("MonitoredItems") /* .memberName */
},
{
    UA_TYPES_DIAGNOSTICINFO, /* .memberTypeIndex */
    offsetof(UA_DataChangeNotification, diagnosticInfosSize) - offsetof(UA_DataChangeNotification, monitoredItems) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DiagnosticInfos") /* .memberName */
},};

/* EventNotificationList */
static UA_DataTypeMember EventNotificationList_members[1] = {
{
    UA_TYPES_EVENTFIELDLIST, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Events") /* .memberName */
},};

/* SessionDiagnosticsDataType */
static UA_DataTypeMember SessionDiagnosticsDataType_members[43] = {
{
    UA_TYPES_NODEID, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SessionId") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_SessionDiagnosticsDataType, sessionName) - offsetof(UA_SessionDiagnosticsDataType, sessionId) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SessionName") /* .memberName */
},
{
    UA_TYPES_APPLICATIONDESCRIPTION, /* .memberTypeIndex */
    offsetof(UA_SessionDiagnosticsDataType, clientDescription) - offsetof(UA_SessionDiagnosticsDataType, sessionName) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ClientDescription") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_SessionDiagnosticsDataType, serverUri) - offsetof(UA_SessionDiagnosticsDataType, clientDescription) - sizeof(UA_ApplicationDescription), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ServerUri") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_SessionDiagnosticsDataType, endpointUrl) - offsetof(UA_SessionDiagnosticsDataType, serverUri) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("EndpointUrl") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_SessionDiagnosticsDataType, localeIdsSize) - offsetof(UA_SessionDiagnosticsDataType, endpointUrl) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("LocaleIds") /* .memberName */
},
{
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_SessionDiagnosticsDataType, actualSessionTimeout) - offsetof(UA_SessionDiagnosticsDataType, localeIds) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ActualSessionTimeout") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SessionDiagnosticsDataType, maxResponseMessageSize) - offsetof(UA_SessionDiagnosticsDataType, actualSessionTimeout) - sizeof(UA_Double), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("MaxResponseMessageSize") /* .memberName */
},
{
    UA_TYPES_DATETIME, /* .memberTypeIndex */
    offsetof(UA_SessionDiagnosticsDataType, clientConnectionTime) - offsetof(UA_SessionDiagnosticsDataType, maxResponseMessageSize) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ClientConnectionTime") /* .memberName */
},
{
    UA_TYPES_DATETIME, /* .memberTypeIndex */
    offsetof(UA_SessionDiagnosticsDataType, clientLastContactTime) - offsetof(UA_SessionDiagnosticsDataType, clientConnectionTime) - sizeof(UA_DateTime), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ClientLastContactTime") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SessionDiagnosticsDataType, currentSubscriptionsCount) - offsetof(UA_SessionDiagnosticsDataType, clientLastContactTime) - sizeof(UA_DateTime), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("CurrentSubscriptionsCount") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SessionDiagnosticsDataType, currentMonitoredItemsCount) - offsetof(UA_SessionDiagnosticsDataType, currentSubscriptionsCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("CurrentMonitoredItemsCount") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SessionDiagnosticsDataType, currentPublishRequestsInQueue) - offsetof(UA_SessionDiagnosticsDataType, currentMonitoredItemsCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("CurrentPublishRequestsInQueue") /* .memberName */
},
{
    UA_TYPES_SERVICECOUNTERDATATYPE, /* .memberTypeIndex */
    offsetof(UA_SessionDiagnosticsDataType, totalRequestCount) - offsetof(UA_SessionDiagnosticsDataType, currentPublishRequestsInQueue) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("TotalRequestCount") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SessionDiagnosticsDataType, unauthorizedRequestCount) - offsetof(UA_SessionDiagnosticsDataType, totalRequestCount) - sizeof(UA_ServiceCounterDataType), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("UnauthorizedRequestCount") /* .memberName */
},
{
    UA_TYPES_SERVICECOUNTERDATATYPE, /* .memberTypeIndex */
    offsetof(UA_SessionDiagnosticsDataType, readCount) - offsetof(UA_SessionDiagnosticsDataType, unauthorizedRequestCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ReadCount") /* .memberName */
},
{
    UA_TYPES_SERVICECOUNTERDATATYPE, /* .memberTypeIndex */
    offsetof(UA_SessionDiagnosticsDataType, historyReadCount) - offsetof(UA_SessionDiagnosticsDataType, readCount) - sizeof(UA_ServiceCounterDataType), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("HistoryReadCount") /* .memberName */
},
{
    UA_TYPES_SERVICECOUNTERDATATYPE, /* .memberTypeIndex */
    offsetof(UA_SessionDiagnosticsDataType, writeCount) - offsetof(UA_SessionDiagnosticsDataType, historyReadCount) - sizeof(UA_ServiceCounterDataType), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("WriteCount") /* .memberName */
},
{
    UA_TYPES_SERVICECOUNTERDATATYPE, /* .memberTypeIndex */
    offsetof(UA_SessionDiagnosticsDataType, historyUpdateCount) - offsetof(UA_SessionDiagnosticsDataType, writeCount) - sizeof(UA_ServiceCounterDataType), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("HistoryUpdateCount") /* .memberName */
},
{
    UA_TYPES_SERVICECOUNTERDATATYPE, /* .memberTypeIndex */
    offsetof(UA_SessionDiagnosticsDataType, callCount) - offsetof(UA_SessionDiagnosticsDataType, historyUpdateCount) - sizeof(UA_ServiceCounterDataType), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("CallCount") /* .memberName */
},
{
    UA_TYPES_SERVICECOUNTERDATATYPE, /* .memberTypeIndex */
    offsetof(UA_SessionDiagnosticsDataType, createMonitoredItemsCount) - offsetof(UA_SessionDiagnosticsDataType, callCount) - sizeof(UA_ServiceCounterDataType), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("CreateMonitoredItemsCount") /* .memberName */
},
{
    UA_TYPES_SERVICECOUNTERDATATYPE, /* .memberTypeIndex */
    offsetof(UA_SessionDiagnosticsDataType, modifyMonitoredItemsCount) - offsetof(UA_SessionDiagnosticsDataType, createMonitoredItemsCount) - sizeof(UA_ServiceCounterDataType), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ModifyMonitoredItemsCount") /* .memberName */
},
{
    UA_TYPES_SERVICECOUNTERDATATYPE, /* .memberTypeIndex */
    offsetof(UA_SessionDiagnosticsDataType, setMonitoringModeCount) - offsetof(UA_SessionDiagnosticsDataType, modifyMonitoredItemsCount) - sizeof(UA_ServiceCounterDataType), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SetMonitoringModeCount") /* .memberName */
},
{
    UA_TYPES_SERVICECOUNTERDATATYPE, /* .memberTypeIndex */
    offsetof(UA_SessionDiagnosticsDataType, setTriggeringCount) - offsetof(UA_SessionDiagnosticsDataType, setMonitoringModeCount) - sizeof(UA_ServiceCounterDataType), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SetTriggeringCount") /* .memberName */
},
{
    UA_TYPES_SERVICECOUNTERDATATYPE, /* .memberTypeIndex */
    offsetof(UA_SessionDiagnosticsDataType, deleteMonitoredItemsCount) - offsetof(UA_SessionDiagnosticsDataType, setTriggeringCount) - sizeof(UA_ServiceCounterDataType), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DeleteMonitoredItemsCount") /* .memberName */
},
{
    UA_TYPES_SERVICECOUNTERDATATYPE, /* .memberTypeIndex */
    offsetof(UA_SessionDiagnosticsDataType, createSubscriptionCount) - offsetof(UA_SessionDiagnosticsDataType, deleteMonitoredItemsCount) - sizeof(UA_ServiceCounterDataType), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("CreateSubscriptionCount") /* .memberName */
},
{
    UA_TYPES_SERVICECOUNTERDATATYPE, /* .memberTypeIndex */
    offsetof(UA_SessionDiagnosticsDataType, modifySubscriptionCount) - offsetof(UA_SessionDiagnosticsDataType, createSubscriptionCount) - sizeof(UA_ServiceCounterDataType), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ModifySubscriptionCount") /* .memberName */
},
{
    UA_TYPES_SERVICECOUNTERDATATYPE, /* .memberTypeIndex */
    offsetof(UA_SessionDiagnosticsDataType, setPublishingModeCount) - offsetof(UA_SessionDiagnosticsDataType, modifySubscriptionCount) - sizeof(UA_ServiceCounterDataType), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SetPublishingModeCount") /* .memberName */
},
{
    UA_TYPES_SERVICECOUNTERDATATYPE, /* .memberTypeIndex */
    offsetof(UA_SessionDiagnosticsDataType, publishCount) - offsetof(UA_SessionDiagnosticsDataType, setPublishingModeCount) - sizeof(UA_ServiceCounterDataType), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("PublishCount") /* .memberName */
},
{
    UA_TYPES_SERVICECOUNTERDATATYPE, /* .memberTypeIndex */
    offsetof(UA_SessionDiagnosticsDataType, republishCount) - offsetof(UA_SessionDiagnosticsDataType, publishCount) - sizeof(UA_ServiceCounterDataType), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RepublishCount") /* .memberName */
},
{
    UA_TYPES_SERVICECOUNTERDATATYPE, /* .memberTypeIndex */
    offsetof(UA_SessionDiagnosticsDataType, transferSubscriptionsCount) - offsetof(UA_SessionDiagnosticsDataType, republishCount) - sizeof(UA_ServiceCounterDataType), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("TransferSubscriptionsCount") /* .memberName */
},
{
    UA_TYPES_SERVICECOUNTERDATATYPE, /* .memberTypeIndex */
    offsetof(UA_SessionDiagnosticsDataType, deleteSubscriptionsCount) - offsetof(UA_SessionDiagnosticsDataType, transferSubscriptionsCount) - sizeof(UA_ServiceCounterDataType), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DeleteSubscriptionsCount") /* .memberName */
},
{
    UA_TYPES_SERVICECOUNTERDATATYPE, /* .memberTypeIndex */
    offsetof(UA_SessionDiagnosticsDataType, addNodesCount) - offsetof(UA_SessionDiagnosticsDataType, deleteSubscriptionsCount) - sizeof(UA_ServiceCounterDataType), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("AddNodesCount") /* .memberName */
},
{
    UA_TYPES_SERVICECOUNTERDATATYPE, /* .memberTypeIndex */
    offsetof(UA_SessionDiagnosticsDataType, addReferencesCount) - offsetof(UA_SessionDiagnosticsDataType, addNodesCount) - sizeof(UA_ServiceCounterDataType), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("AddReferencesCount") /* .memberName */
},
{
    UA_TYPES_SERVICECOUNTERDATATYPE, /* .memberTypeIndex */
    offsetof(UA_SessionDiagnosticsDataType, deleteNodesCount) - offsetof(UA_SessionDiagnosticsDataType, addReferencesCount) - sizeof(UA_ServiceCounterDataType), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DeleteNodesCount") /* .memberName */
},
{
    UA_TYPES_SERVICECOUNTERDATATYPE, /* .memberTypeIndex */
    offsetof(UA_SessionDiagnosticsDataType, deleteReferencesCount) - offsetof(UA_SessionDiagnosticsDataType, deleteNodesCount) - sizeof(UA_ServiceCounterDataType), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DeleteReferencesCount") /* .memberName */
},
{
    UA_TYPES_SERVICECOUNTERDATATYPE, /* .memberTypeIndex */
    offsetof(UA_SessionDiagnosticsDataType, browseCount) - offsetof(UA_SessionDiagnosticsDataType, deleteReferencesCount) - sizeof(UA_ServiceCounterDataType), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("BrowseCount") /* .memberName */
},
{
    UA_TYPES_SERVICECOUNTERDATATYPE, /* .memberTypeIndex */
    offsetof(UA_SessionDiagnosticsDataType, browseNextCount) - offsetof(UA_SessionDiagnosticsDataType, browseCount) - sizeof(UA_ServiceCounterDataType), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("BrowseNextCount") /* .memberName */
},
{
    UA_TYPES_SERVICECOUNTERDATATYPE, /* .memberTypeIndex */
    offsetof(UA_SessionDiagnosticsDataType, translateBrowsePathsToNodeIdsCount) - offsetof(UA_SessionDiagnosticsDataType, browseNextCount) - sizeof(UA_ServiceCounterDataType), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("TranslateBrowsePathsToNodeIdsCount") /* .memberName */
},
{
    UA_TYPES_SERVICECOUNTERDATATYPE, /* .memberTypeIndex */
    offsetof(UA_SessionDiagnosticsDataType, queryFirstCount) - offsetof(UA_SessionDiagnosticsDataType, translateBrowsePathsToNodeIdsCount) - sizeof(UA_ServiceCounterDataType), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("QueryFirstCount") /* .memberName */
},
{
    UA_TYPES_SERVICECOUNTERDATATYPE, /* .memberTypeIndex */
    offsetof(UA_SessionDiagnosticsDataType, queryNextCount) - offsetof(UA_SessionDiagnosticsDataType, queryFirstCount) - sizeof(UA_ServiceCounterDataType), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("QueryNextCount") /* .memberName */
},
{
    UA_TYPES_SERVICECOUNTERDATATYPE, /* .memberTypeIndex */
    offsetof(UA_SessionDiagnosticsDataType, registerNodesCount) - offsetof(UA_SessionDiagnosticsDataType, queryNextCount) - sizeof(UA_ServiceCounterDataType), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RegisterNodesCount") /* .memberName */
},
{
    UA_TYPES_SERVICECOUNTERDATATYPE, /* .memberTypeIndex */
    offsetof(UA_SessionDiagnosticsDataType, unregisterNodesCount) - offsetof(UA_SessionDiagnosticsDataType, registerNodesCount) - sizeof(UA_ServiceCounterDataType), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("UnregisterNodesCount") /* .memberName */
},};

/* EnumDescription */
static UA_DataTypeMember EnumDescription_members[4] = {
{
    UA_TYPES_NODEID, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DataTypeId") /* .memberName */
},
{
    UA_TYPES_QUALIFIEDNAME, /* .memberTypeIndex */
    offsetof(UA_EnumDescription, name) - offsetof(UA_EnumDescription, dataTypeId) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Name") /* .memberName */
},
{
    UA_TYPES_ENUMDEFINITION, /* .memberTypeIndex */
    offsetof(UA_EnumDescription, enumDefinition) - offsetof(UA_EnumDescription, name) - sizeof(UA_QualifiedName), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("EnumDefinition") /* .memberName */
},
{
    UA_TYPES_BYTE, /* .memberTypeIndex */
    offsetof(UA_EnumDescription, builtInType) - offsetof(UA_EnumDescription, enumDefinition) - sizeof(UA_EnumDefinition), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("BuiltInType") /* .memberName */
},};

/* UABinaryFileDataType */
static UA_DataTypeMember UABinaryFileDataType_members[7] = {
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Namespaces") /* .memberName */
},
{
    UA_TYPES_STRUCTUREDESCRIPTION, /* .memberTypeIndex */
    offsetof(UA_UABinaryFileDataType, structureDataTypesSize) - offsetof(UA_UABinaryFileDataType, namespaces) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("StructureDataTypes") /* .memberName */
},
{
    UA_TYPES_ENUMDESCRIPTION, /* .memberTypeIndex */
    offsetof(UA_UABinaryFileDataType, enumDataTypesSize) - offsetof(UA_UABinaryFileDataType, structureDataTypes) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("EnumDataTypes") /* .memberName */
},
{
    UA_TYPES_SIMPLETYPEDESCRIPTION, /* .memberTypeIndex */
    offsetof(UA_UABinaryFileDataType, simpleDataTypesSize) - offsetof(UA_UABinaryFileDataType, enumDataTypes) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SimpleDataTypes") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_UABinaryFileDataType, schemaLocation) - offsetof(UA_UABinaryFileDataType, simpleDataTypes) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SchemaLocation") /* .memberName */
},
{
    UA_TYPES_KEYVALUEPAIR, /* .memberTypeIndex */
    offsetof(UA_UABinaryFileDataType, fileHeaderSize) - offsetof(UA_UABinaryFileDataType, schemaLocation) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("FileHeader") /* .memberName */
},
{
    UA_TYPES_VARIANT, /* .memberTypeIndex */
    offsetof(UA_UABinaryFileDataType, body) - offsetof(UA_UABinaryFileDataType, fileHeader) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Body") /* .memberName */
},};

/* DataSetMetaDataType */
static UA_DataTypeMember DataSetMetaDataType_members[9] = {
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Namespaces") /* .memberName */
},
{
    UA_TYPES_STRUCTUREDESCRIPTION, /* .memberTypeIndex */
    offsetof(UA_DataSetMetaDataType, structureDataTypesSize) - offsetof(UA_DataSetMetaDataType, namespaces) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("StructureDataTypes") /* .memberName */
},
{
    UA_TYPES_ENUMDESCRIPTION, /* .memberTypeIndex */
    offsetof(UA_DataSetMetaDataType, enumDataTypesSize) - offsetof(UA_DataSetMetaDataType, structureDataTypes) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("EnumDataTypes") /* .memberName */
},
{
    UA_TYPES_SIMPLETYPEDESCRIPTION, /* .memberTypeIndex */
    offsetof(UA_DataSetMetaDataType, simpleDataTypesSize) - offsetof(UA_DataSetMetaDataType, enumDataTypes) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SimpleDataTypes") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_DataSetMetaDataType, name) - offsetof(UA_DataSetMetaDataType, simpleDataTypes) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Name") /* .memberName */
},
{
    UA_TYPES_LOCALIZEDTEXT, /* .memberTypeIndex */
    offsetof(UA_DataSetMetaDataType, description) - offsetof(UA_DataSetMetaDataType, name) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Description") /* .memberName */
},
{
    UA_TYPES_FIELDMETADATA, /* .memberTypeIndex */
    offsetof(UA_DataSetMetaDataType, fieldsSize) - offsetof(UA_DataSetMetaDataType, description) - sizeof(UA_LocalizedText), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Fields") /* .memberName */
},
{
    UA_TYPES_GUID, /* .memberTypeIndex */
    offsetof(UA_DataSetMetaDataType, dataSetClassId) - offsetof(UA_DataSetMetaDataType, fields) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DataSetClassId") /* .memberName */
},
{
    UA_TYPES_CONFIGURATIONVERSIONDATATYPE, /* .memberTypeIndex */
    offsetof(UA_DataSetMetaDataType, configurationVersion) - offsetof(UA_DataSetMetaDataType, dataSetClassId) - sizeof(UA_Guid), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ConfigurationVersion") /* .memberName */
},};

/* PublishedDataSetDataType */
static UA_DataTypeMember PublishedDataSetDataType_members[5] = {
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Name") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_PublishedDataSetDataType, dataSetFolderSize) - offsetof(UA_PublishedDataSetDataType, name) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DataSetFolder") /* .memberName */
},
{
    UA_TYPES_DATASETMETADATATYPE, /* .memberTypeIndex */
    offsetof(UA_PublishedDataSetDataType, dataSetMetaData) - offsetof(UA_PublishedDataSetDataType, dataSetFolder) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DataSetMetaData") /* .memberName */
},
{
    UA_TYPES_KEYVALUEPAIR, /* .memberTypeIndex */
    offsetof(UA_PublishedDataSetDataType, extensionFieldsSize) - offsetof(UA_PublishedDataSetDataType, dataSetMetaData) - sizeof(UA_DataSetMetaDataType), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ExtensionFields") /* .memberName */
},
{
    UA_TYPES_EXTENSIONOBJECT, /* .memberTypeIndex */
    offsetof(UA_PublishedDataSetDataType, dataSetSource) - offsetof(UA_PublishedDataSetDataType, extensionFields) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DataSetSource") /* .memberName */
},};

/* DataSetReaderDataType */
static UA_DataTypeMember DataSetReaderDataType_members[17] = {
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Name") /* .memberName */
},
{
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_DataSetReaderDataType, enabled) - offsetof(UA_DataSetReaderDataType, name) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Enabled") /* .memberName */
},
{
    UA_TYPES_VARIANT, /* .memberTypeIndex */
    offsetof(UA_DataSetReaderDataType, publisherId) - offsetof(UA_DataSetReaderDataType, enabled) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("PublisherId") /* .memberName */
},
{
    UA_TYPES_UINT16, /* .memberTypeIndex */
    offsetof(UA_DataSetReaderDataType, writerGroupId) - offsetof(UA_DataSetReaderDataType, publisherId) - sizeof(UA_Variant), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("WriterGroupId") /* .memberName */
},
{
    UA_TYPES_UINT16, /* .memberTypeIndex */
    offsetof(UA_DataSetReaderDataType, dataSetWriterId) - offsetof(UA_DataSetReaderDataType, writerGroupId) - sizeof(UA_UInt16), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DataSetWriterId") /* .memberName */
},
{
    UA_TYPES_DATASETMETADATATYPE, /* .memberTypeIndex */
    offsetof(UA_DataSetReaderDataType, dataSetMetaData) - offsetof(UA_DataSetReaderDataType, dataSetWriterId) - sizeof(UA_UInt16), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DataSetMetaData") /* .memberName */
},
{
    UA_TYPES_DATASETFIELDCONTENTMASK, /* .memberTypeIndex */
    offsetof(UA_DataSetReaderDataType, dataSetFieldContentMask) - offsetof(UA_DataSetReaderDataType, dataSetMetaData) - sizeof(UA_DataSetMetaDataType), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DataSetFieldContentMask") /* .memberName */
},
{
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_DataSetReaderDataType, messageReceiveTimeout) - offsetof(UA_DataSetReaderDataType, dataSetFieldContentMask) - sizeof(UA_DataSetFieldContentMask), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("MessageReceiveTimeout") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_DataSetReaderDataType, keyFrameCount) - offsetof(UA_DataSetReaderDataType, messageReceiveTimeout) - sizeof(UA_Double), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("KeyFrameCount") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_DataSetReaderDataType, headerLayoutUri) - offsetof(UA_DataSetReaderDataType, keyFrameCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("HeaderLayoutUri") /* .memberName */
},
{
    UA_TYPES_MESSAGESECURITYMODE, /* .memberTypeIndex */
    offsetof(UA_DataSetReaderDataType, securityMode) - offsetof(UA_DataSetReaderDataType, headerLayoutUri) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SecurityMode") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_DataSetReaderDataType, securityGroupId) - offsetof(UA_DataSetReaderDataType, securityMode) - sizeof(UA_MessageSecurityMode), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SecurityGroupId") /* .memberName */
},
{
    UA_TYPES_ENDPOINTDESCRIPTION, /* .memberTypeIndex */
    offsetof(UA_DataSetReaderDataType, securityKeyServicesSize) - offsetof(UA_DataSetReaderDataType, securityGroupId) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SecurityKeyServices") /* .memberName */
},
{
    UA_TYPES_KEYVALUEPAIR, /* .memberTypeIndex */
    offsetof(UA_DataSetReaderDataType, dataSetReaderPropertiesSize) - offsetof(UA_DataSetReaderDataType, securityKeyServices) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DataSetReaderProperties") /* .memberName */
},
{
    UA_TYPES_EXTENSIONOBJECT, /* .memberTypeIndex */
    offsetof(UA_DataSetReaderDataType, transportSettings) - offsetof(UA_DataSetReaderDataType, dataSetReaderProperties) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("TransportSettings") /* .memberName */
},
{
    UA_TYPES_EXTENSIONOBJECT, /* .memberTypeIndex */
    offsetof(UA_DataSetReaderDataType, messageSettings) - offsetof(UA_DataSetReaderDataType, transportSettings) - sizeof(UA_ExtensionObject), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("MessageSettings") /* .memberName */
},
{
    UA_TYPES_EXTENSIONOBJECT, /* .memberTypeIndex */
    offsetof(UA_DataSetReaderDataType, subscribedDataSet) - offsetof(UA_DataSetReaderDataType, messageSettings) - sizeof(UA_ExtensionObject), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SubscribedDataSet") /* .memberName */
},};

/* TargetVariablesDataType */
static UA_DataTypeMember TargetVariablesDataType_members[1] = {
{
    UA_TYPES_FIELDTARGETDATATYPE, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("TargetVariables") /* .memberName */
},};

/* DataTypeSchemaHeader */
static UA_DataTypeMember DataTypeSchemaHeader_members[4] = {
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Namespaces") /* .memberName */
},
{
    UA_TYPES_STRUCTUREDESCRIPTION, /* .memberTypeIndex */
    offsetof(UA_DataTypeSchemaHeader, structureDataTypesSize) - offsetof(UA_DataTypeSchemaHeader, namespaces) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("StructureDataTypes") /* .memberName */
},
{
    UA_TYPES_ENUMDESCRIPTION, /* .memberTypeIndex */
    offsetof(UA_DataTypeSchemaHeader, enumDataTypesSize) - offsetof(UA_DataTypeSchemaHeader, structureDataTypes) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("EnumDataTypes") /* .memberName */
},
{
    UA_TYPES_SIMPLETYPEDESCRIPTION, /* .memberTypeIndex */
    offsetof(UA_DataTypeSchemaHeader, simpleDataTypesSize) - offsetof(UA_DataTypeSchemaHeader, enumDataTypes) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SimpleDataTypes") /* .memberName */
},};

/* ReaderGroupDataType */
static UA_DataTypeMember ReaderGroupDataType_members[10] = {
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Name") /* .memberName */
},
{
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_ReaderGroupDataType, enabled) - offsetof(UA_ReaderGroupDataType, name) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Enabled") /* .memberName */
},
{
    UA_TYPES_MESSAGESECURITYMODE, /* .memberTypeIndex */
    offsetof(UA_ReaderGroupDataType, securityMode) - offsetof(UA_ReaderGroupDataType, enabled) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SecurityMode") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_ReaderGroupDataType, securityGroupId) - offsetof(UA_ReaderGroupDataType, securityMode) - sizeof(UA_MessageSecurityMode), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SecurityGroupId") /* .memberName */
},
{
    UA_TYPES_ENDPOINTDESCRIPTION, /* .memberTypeIndex */
    offsetof(UA_ReaderGroupDataType, securityKeyServicesSize) - offsetof(UA_ReaderGroupDataType, securityGroupId) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SecurityKeyServices") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_ReaderGroupDataType, maxNetworkMessageSize) - offsetof(UA_ReaderGroupDataType, securityKeyServices) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("MaxNetworkMessageSize") /* .memberName */
},
{
    UA_TYPES_KEYVALUEPAIR, /* .memberTypeIndex */
    offsetof(UA_ReaderGroupDataType, groupPropertiesSize) - offsetof(UA_ReaderGroupDataType, maxNetworkMessageSize) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("GroupProperties") /* .memberName */
},
{
    UA_TYPES_EXTENSIONOBJECT, /* .memberTypeIndex */
    offsetof(UA_ReaderGroupDataType, transportSettings) - offsetof(UA_ReaderGroupDataType, groupProperties) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("TransportSettings") /* .memberName */
},
{
    UA_TYPES_EXTENSIONOBJECT, /* .memberTypeIndex */
    offsetof(UA_ReaderGroupDataType, messageSettings) - offsetof(UA_ReaderGroupDataType, transportSettings) - sizeof(UA_ExtensionObject), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("MessageSettings") /* .memberName */
},
{
    UA_TYPES_DATASETREADERDATATYPE, /* .memberTypeIndex */
    offsetof(UA_ReaderGroupDataType, dataSetReadersSize) - offsetof(UA_ReaderGroupDataType, messageSettings) - sizeof(UA_ExtensionObject), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DataSetReaders") /* .memberName */
},};

/* PubSubConnectionDataType */
static UA_DataTypeMember PubSubConnectionDataType_members[9] = {
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Name") /* .memberName */
},
{
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_PubSubConnectionDataType, enabled) - offsetof(UA_PubSubConnectionDataType, name) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Enabled") /* .memberName */
},
{
    UA_TYPES_VARIANT, /* .memberTypeIndex */
    offsetof(UA_PubSubConnectionDataType, publisherId) - offsetof(UA_PubSubConnectionDataType, enabled) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("PublisherId") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_PubSubConnectionDataType, transportProfileUri) - offsetof(UA_PubSubConnectionDataType, publisherId) - sizeof(UA_Variant), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("TransportProfileUri") /* .memberName */
},
{
    UA_TYPES_EXTENSIONOBJECT, /* .memberTypeIndex */
    offsetof(UA_PubSubConnectionDataType, address) - offsetof(UA_PubSubConnectionDataType, transportProfileUri) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Address") /* .memberName */
},
{
    UA_TYPES_KEYVALUEPAIR, /* .memberTypeIndex */
    offsetof(UA_PubSubConnectionDataType, connectionPropertiesSize) - offsetof(UA_PubSubConnectionDataType, address) - sizeof(UA_ExtensionObject), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ConnectionProperties") /* .memberName */
},
{
    UA_TYPES_EXTENSIONOBJECT, /* .memberTypeIndex */
    offsetof(UA_PubSubConnectionDataType, transportSettings) - offsetof(UA_PubSubConnectionDataType, connectionProperties) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("TransportSettings") /* .memberName */
},
{
    UA_TYPES_WRITERGROUPDATATYPE, /* .memberTypeIndex */
    offsetof(UA_PubSubConnectionDataType, writerGroupsSize) - offsetof(UA_PubSubConnectionDataType, transportSettings) - sizeof(UA_ExtensionObject), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("WriterGroups") /* .memberName */
},
{
    UA_TYPES_READERGROUPDATATYPE, /* .memberTypeIndex */
    offsetof(UA_PubSubConnectionDataType, readerGroupsSize) - offsetof(UA_PubSubConnectionDataType, writerGroups) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ReaderGroups") /* .memberName */
},};

/* PubSubConfigurationDataType */
static UA_DataTypeMember PubSubConfigurationDataType_members[3] = {
{
    UA_TYPES_PUBLISHEDDATASETDATATYPE, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("PublishedDataSets") /* .memberName */
},
{
    UA_TYPES_PUBSUBCONNECTIONDATATYPE, /* .memberTypeIndex */
    offsetof(UA_PubSubConfigurationDataType, connectionsSize) - offsetof(UA_PubSubConfigurationDataType, publishedDataSets) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Connections") /* .memberName */
},
{
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_PubSubConfigurationDataType, enabled) - offsetof(UA_PubSubConfigurationDataType, connections) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Enabled") /* .memberName */
},};
const UA_DataType UA_TYPES[UA_TYPES_COUNT] = {
/* Boolean */
{
    {0, UA_NODEIDTYPE_NUMERIC, {1}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_Boolean), /* .memSize */
    UA_TYPES_BOOLEAN, /* .typeIndex */
    UA_DATATYPEKIND_BOOLEAN, /* .typeKind */
    true, /* .pointerFree */
    true, /* .overlayable */
    0, /* .membersSize */
    Boolean_members  /* .members */
    UA_TYPENAME("Boolean") /* .typeName */
},
/* SByte */
{
    {0, UA_NODEIDTYPE_NUMERIC, {2}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_SByte), /* .memSize */
    UA_TYPES_SBYTE, /* .typeIndex */
    UA_DATATYPEKIND_SBYTE, /* .typeKind */
    true, /* .pointerFree */
    true, /* .overlayable */
    0, /* .membersSize */
    SByte_members  /* .members */
    UA_TYPENAME("SByte") /* .typeName */
},
/* Byte */
{
    {0, UA_NODEIDTYPE_NUMERIC, {3}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_Byte), /* .memSize */
    UA_TYPES_BYTE, /* .typeIndex */
    UA_DATATYPEKIND_BYTE, /* .typeKind */
    true, /* .pointerFree */
    true, /* .overlayable */
    0, /* .membersSize */
    Byte_members  /* .members */
    UA_TYPENAME("Byte") /* .typeName */
},
/* Int16 */
{
    {0, UA_NODEIDTYPE_NUMERIC, {4}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_Int16), /* .memSize */
    UA_TYPES_INT16, /* .typeIndex */
    UA_DATATYPEKIND_INT16, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    Int16_members  /* .members */
    UA_TYPENAME("Int16") /* .typeName */
},
/* UInt16 */
{
    {0, UA_NODEIDTYPE_NUMERIC, {5}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_UInt16), /* .memSize */
    UA_TYPES_UINT16, /* .typeIndex */
    UA_DATATYPEKIND_UINT16, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    UInt16_members  /* .members */
    UA_TYPENAME("UInt16") /* .typeName */
},
/* Int32 */
{
    {0, UA_NODEIDTYPE_NUMERIC, {6}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_Int32), /* .memSize */
    UA_TYPES_INT32, /* .typeIndex */
    UA_DATATYPEKIND_INT32, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    Int32_members  /* .members */
    UA_TYPENAME("Int32") /* .typeName */
},
/* UInt32 */
{
    {0, UA_NODEIDTYPE_NUMERIC, {7}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_UInt32), /* .memSize */
    UA_TYPES_UINT32, /* .typeIndex */
    UA_DATATYPEKIND_UINT32, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    UInt32_members  /* .members */
    UA_TYPENAME("UInt32") /* .typeName */
},
/* Int64 */
{
    {0, UA_NODEIDTYPE_NUMERIC, {8}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_Int64), /* .memSize */
    UA_TYPES_INT64, /* .typeIndex */
    UA_DATATYPEKIND_INT64, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    Int64_members  /* .members */
    UA_TYPENAME("Int64") /* .typeName */
},
/* UInt64 */
{
    {0, UA_NODEIDTYPE_NUMERIC, {9}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_UInt64), /* .memSize */
    UA_TYPES_UINT64, /* .typeIndex */
    UA_DATATYPEKIND_UINT64, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    UInt64_members  /* .members */
    UA_TYPENAME("UInt64") /* .typeName */
},
/* Float */
{
    {0, UA_NODEIDTYPE_NUMERIC, {10}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_Float), /* .memSize */
    UA_TYPES_FLOAT, /* .typeIndex */
    UA_DATATYPEKIND_FLOAT, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_FLOAT, /* .overlayable */
    0, /* .membersSize */
    Float_members  /* .members */
    UA_TYPENAME("Float") /* .typeName */
},
/* Double */
{
    {0, UA_NODEIDTYPE_NUMERIC, {11}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_Double), /* .memSize */
    UA_TYPES_DOUBLE, /* .typeIndex */
    UA_DATATYPEKIND_DOUBLE, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_FLOAT, /* .overlayable */
    0, /* .membersSize */
    Double_members  /* .members */
    UA_TYPENAME("Double") /* .typeName */
},
/* String */
{
    {0, UA_NODEIDTYPE_NUMERIC, {12}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_String), /* .memSize */
    UA_TYPES_STRING, /* .typeIndex */
    UA_DATATYPEKIND_STRING, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    0, /* .membersSize */
    String_members  /* .members */
    UA_TYPENAME("String") /* .typeName */
},
/* DateTime */
{
    {0, UA_NODEIDTYPE_NUMERIC, {13}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_DateTime), /* .memSize */
    UA_TYPES_DATETIME, /* .typeIndex */
    UA_DATATYPEKIND_DATETIME, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    DateTime_members  /* .members */
    UA_TYPENAME("DateTime") /* .typeName */
},
/* Guid */
{
    {0, UA_NODEIDTYPE_NUMERIC, {14}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_Guid), /* .memSize */
    UA_TYPES_GUID, /* .typeIndex */
    UA_DATATYPEKIND_GUID, /* .typeKind */
    true, /* .pointerFree */
    (UA_BINARY_OVERLAYABLE_INTEGER && offsetof(UA_Guid, data2) == sizeof(UA_UInt32) && offsetof(UA_Guid, data3) == (sizeof(UA_UInt16) + sizeof(UA_UInt32)) && offsetof(UA_Guid, data4) == (2*sizeof(UA_UInt32))), /* .overlayable */
    0, /* .membersSize */
    Guid_members  /* .members */
    UA_TYPENAME("Guid") /* .typeName */
},
/* ByteString */
{
    {0, UA_NODEIDTYPE_NUMERIC, {15}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_ByteString), /* .memSize */
    UA_TYPES_BYTESTRING, /* .typeIndex */
    UA_DATATYPEKIND_BYTESTRING, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    0, /* .membersSize */
    ByteString_members  /* .members */
    UA_TYPENAME("ByteString") /* .typeName */
},
/* XmlElement */
{
    {0, UA_NODEIDTYPE_NUMERIC, {16}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_XmlElement), /* .memSize */
    UA_TYPES_XMLELEMENT, /* .typeIndex */
    UA_DATATYPEKIND_XMLELEMENT, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    0, /* .membersSize */
    XmlElement_members  /* .members */
    UA_TYPENAME("XmlElement") /* .typeName */
},
/* NodeId */
{
    {0, UA_NODEIDTYPE_NUMERIC, {17}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_NodeId), /* .memSize */
    UA_TYPES_NODEID, /* .typeIndex */
    UA_DATATYPEKIND_NODEID, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    0, /* .membersSize */
    NodeId_members  /* .members */
    UA_TYPENAME("NodeId") /* .typeName */
},
/* ExpandedNodeId */
{
    {0, UA_NODEIDTYPE_NUMERIC, {18}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_ExpandedNodeId), /* .memSize */
    UA_TYPES_EXPANDEDNODEID, /* .typeIndex */
    UA_DATATYPEKIND_EXPANDEDNODEID, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    0, /* .membersSize */
    ExpandedNodeId_members  /* .members */
    UA_TYPENAME("ExpandedNodeId") /* .typeName */
},
/* StatusCode */
{
    {0, UA_NODEIDTYPE_NUMERIC, {19}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_StatusCode), /* .memSize */
    UA_TYPES_STATUSCODE, /* .typeIndex */
    UA_DATATYPEKIND_STATUSCODE, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    StatusCode_members  /* .members */
    UA_TYPENAME("StatusCode") /* .typeName */
},
/* QualifiedName */
{
    {0, UA_NODEIDTYPE_NUMERIC, {20}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_QualifiedName), /* .memSize */
    UA_TYPES_QUALIFIEDNAME, /* .typeIndex */
    UA_DATATYPEKIND_QUALIFIEDNAME, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    0, /* .membersSize */
    QualifiedName_members  /* .members */
    UA_TYPENAME("QualifiedName") /* .typeName */
},
/* LocalizedText */
{
    {0, UA_NODEIDTYPE_NUMERIC, {21}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_LocalizedText), /* .memSize */
    UA_TYPES_LOCALIZEDTEXT, /* .typeIndex */
    UA_DATATYPEKIND_LOCALIZEDTEXT, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    0, /* .membersSize */
    LocalizedText_members  /* .members */
    UA_TYPENAME("LocalizedText") /* .typeName */
},
/* ExtensionObject */
{
    {0, UA_NODEIDTYPE_NUMERIC, {22}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_ExtensionObject), /* .memSize */
    UA_TYPES_EXTENSIONOBJECT, /* .typeIndex */
    UA_DATATYPEKIND_EXTENSIONOBJECT, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    0, /* .membersSize */
    ExtensionObject_members  /* .members */
    UA_TYPENAME("ExtensionObject") /* .typeName */
},
/* DataValue */
{
    {0, UA_NODEIDTYPE_NUMERIC, {23}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_DataValue), /* .memSize */
    UA_TYPES_DATAVALUE, /* .typeIndex */
    UA_DATATYPEKIND_DATAVALUE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    0, /* .membersSize */
    DataValue_members  /* .members */
    UA_TYPENAME("DataValue") /* .typeName */
},
/* Variant */
{
    {0, UA_NODEIDTYPE_NUMERIC, {24}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_Variant), /* .memSize */
    UA_TYPES_VARIANT, /* .typeIndex */
    UA_DATATYPEKIND_VARIANT, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    0, /* .membersSize */
    Variant_members  /* .members */
    UA_TYPENAME("Variant") /* .typeName */
},
/* DiagnosticInfo */
{
    {0, UA_NODEIDTYPE_NUMERIC, {25}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_DiagnosticInfo), /* .memSize */
    UA_TYPES_DIAGNOSTICINFO, /* .typeIndex */
    UA_DATATYPEKIND_DIAGNOSTICINFO, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    0, /* .membersSize */
    DiagnosticInfo_members  /* .members */
    UA_TYPENAME("DiagnosticInfo") /* .typeName */
},
/* NamingRuleType */
{
    {0, UA_NODEIDTYPE_NUMERIC, {120}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_NamingRuleType), /* .memSize */
    UA_TYPES_INT32, /* .typeIndex */
    UA_DATATYPEKIND_ENUM, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    NamingRuleType_members  /* .members */
    UA_TYPENAME("NamingRuleType") /* .typeName */
},
/* ImageBMP */
{
    {0, UA_NODEIDTYPE_NUMERIC, {2000}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_ImageBMP), /* .memSize */
    UA_TYPES_IMAGEBMP, /* .typeIndex */
    UA_DATATYPEKIND_BYTESTRING, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    0, /* .membersSize */
    ImageBMP_members  /* .members */
    UA_TYPENAME("ImageBMP") /* .typeName */
},
/* ImageGIF */
{
    {0, UA_NODEIDTYPE_NUMERIC, {2001}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_ImageGIF), /* .memSize */
    UA_TYPES_IMAGEGIF, /* .typeIndex */
    UA_DATATYPEKIND_BYTESTRING, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    0, /* .membersSize */
    ImageGIF_members  /* .members */
    UA_TYPENAME("ImageGIF") /* .typeName */
},
/* ImageJPG */
{
    {0, UA_NODEIDTYPE_NUMERIC, {2002}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_ImageJPG), /* .memSize */
    UA_TYPES_IMAGEJPG, /* .typeIndex */
    UA_DATATYPEKIND_BYTESTRING, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    0, /* .membersSize */
    ImageJPG_members  /* .members */
    UA_TYPENAME("ImageJPG") /* .typeName */
},
/* ImagePNG */
{
    {0, UA_NODEIDTYPE_NUMERIC, {2003}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_ImagePNG), /* .memSize */
    UA_TYPES_IMAGEPNG, /* .typeIndex */
    UA_DATATYPEKIND_BYTESTRING, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    0, /* .membersSize */
    ImagePNG_members  /* .members */
    UA_TYPENAME("ImagePNG") /* .typeName */
},
/* AudioDataType */
{
    {0, UA_NODEIDTYPE_NUMERIC, {16307}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_AudioDataType), /* .memSize */
    UA_TYPES_AUDIODATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_BYTESTRING, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    0, /* .membersSize */
    AudioDataType_members  /* .members */
    UA_TYPENAME("AudioDataType") /* .typeName */
},
/* BitFieldMaskDataType */
{
    {0, UA_NODEIDTYPE_NUMERIC, {11737}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_BitFieldMaskDataType), /* .memSize */
    UA_TYPES_BITFIELDMASKDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_UINT64, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    0, /* .membersSize */
    BitFieldMaskDataType_members  /* .members */
    UA_TYPENAME("BitFieldMaskDataType") /* .typeName */
},
/* KeyValuePair */
{
    {0, UA_NODEIDTYPE_NUMERIC, {14533}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {14846}}, /* .binaryEncodingId */
    sizeof(UA_KeyValuePair), /* .memSize */
    UA_TYPES_KEYVALUEPAIR, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    KeyValuePair_members  /* .members */
    UA_TYPENAME("KeyValuePair") /* .typeName */
},
/* RationalNumber */
{
    {0, UA_NODEIDTYPE_NUMERIC, {18806}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {18815}}, /* .binaryEncodingId */
    sizeof(UA_RationalNumber), /* .memSize */
    UA_TYPES_RATIONALNUMBER, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    true, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    RationalNumber_members  /* .members */
    UA_TYPENAME("RationalNumber") /* .typeName */
},
/* Vector */
{
    {0, UA_NODEIDTYPE_NUMERIC, {18807}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {18816}}, /* .binaryEncodingId */
    sizeof(UA_Vector), /* .memSize */
    UA_TYPES_VECTOR, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    true, /* .pointerFree */
    false, /* .overlayable */
    0, /* .membersSize */
    Vector_members  /* .members */
    UA_TYPENAME("Vector") /* .typeName */
},
/* ThreeDVector */
{
    {0, UA_NODEIDTYPE_NUMERIC, {18808}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {18817}}, /* .binaryEncodingId */
    sizeof(UA_ThreeDVector), /* .memSize */
    UA_TYPES_THREEDVECTOR, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    true, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    ThreeDVector_members  /* .members */
    UA_TYPENAME("ThreeDVector") /* .typeName */
},
/* CartesianCoordinates */
{
    {0, UA_NODEIDTYPE_NUMERIC, {18809}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {18818}}, /* .binaryEncodingId */
    sizeof(UA_CartesianCoordinates), /* .memSize */
    UA_TYPES_CARTESIANCOORDINATES, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    true, /* .pointerFree */
    false, /* .overlayable */
    0, /* .membersSize */
    CartesianCoordinates_members  /* .members */
    UA_TYPENAME("CartesianCoordinates") /* .typeName */
},
/* ThreeDCartesianCoordinates */
{
    {0, UA_NODEIDTYPE_NUMERIC, {18810}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {18819}}, /* .binaryEncodingId */
    sizeof(UA_ThreeDCartesianCoordinates), /* .memSize */
    UA_TYPES_THREEDCARTESIANCOORDINATES, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    true, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    ThreeDCartesianCoordinates_members  /* .members */
    UA_TYPENAME("ThreeDCartesianCoordinates") /* .typeName */
},
/* Orientation */
{
    {0, UA_NODEIDTYPE_NUMERIC, {18811}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {18820}}, /* .binaryEncodingId */
    sizeof(UA_Orientation), /* .memSize */
    UA_TYPES_ORIENTATION, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    true, /* .pointerFree */
    false, /* .overlayable */
    0, /* .membersSize */
    Orientation_members  /* .members */
    UA_TYPENAME("Orientation") /* .typeName */
},
/* ThreeDOrientation */
{
    {0, UA_NODEIDTYPE_NUMERIC, {18812}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {18821}}, /* .binaryEncodingId */
    sizeof(UA_ThreeDOrientation), /* .memSize */
    UA_TYPES_THREEDORIENTATION, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    true, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    ThreeDOrientation_members  /* .members */
    UA_TYPENAME("ThreeDOrientation") /* .typeName */
},
/* Frame */
{
    {0, UA_NODEIDTYPE_NUMERIC, {18813}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {18822}}, /* .binaryEncodingId */
    sizeof(UA_Frame), /* .memSize */
    UA_TYPES_FRAME, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    true, /* .pointerFree */
    false, /* .overlayable */
    0, /* .membersSize */
    Frame_members  /* .members */
    UA_TYPENAME("Frame") /* .typeName */
},
/* ThreeDFrame */
{
    {0, UA_NODEIDTYPE_NUMERIC, {18814}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {18823}}, /* .binaryEncodingId */
    sizeof(UA_ThreeDFrame), /* .memSize */
    UA_TYPES_THREEDFRAME, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    true, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    ThreeDFrame_members  /* .members */
    UA_TYPENAME("ThreeDFrame") /* .typeName */
},
/* OpenFileMode */
{
    {0, UA_NODEIDTYPE_NUMERIC, {11939}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_OpenFileMode), /* .memSize */
    UA_TYPES_INT32, /* .typeIndex */
    UA_DATATYPEKIND_ENUM, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    OpenFileMode_members  /* .members */
    UA_TYPENAME("OpenFileMode") /* .typeName */
},
/* IdentityCriteriaType */
{
    {0, UA_NODEIDTYPE_NUMERIC, {15632}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_IdentityCriteriaType), /* .memSize */
    UA_TYPES_INT32, /* .typeIndex */
    UA_DATATYPEKIND_ENUM, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    IdentityCriteriaType_members  /* .members */
    UA_TYPENAME("IdentityCriteriaType") /* .typeName */
},
/* IdentityMappingRuleType */
{
    {0, UA_NODEIDTYPE_NUMERIC, {15634}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {15736}}, /* .binaryEncodingId */
    sizeof(UA_IdentityMappingRuleType), /* .memSize */
    UA_TYPES_IDENTITYMAPPINGRULETYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    IdentityMappingRuleType_members  /* .members */
    UA_TYPENAME("IdentityMappingRuleType") /* .typeName */
},
/* CurrencyUnitType */
{
    {0, UA_NODEIDTYPE_NUMERIC, {23498}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {23507}}, /* .binaryEncodingId */
    sizeof(UA_CurrencyUnitType), /* .memSize */
    UA_TYPES_CURRENCYUNITTYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    4, /* .membersSize */
    CurrencyUnitType_members  /* .members */
    UA_TYPENAME("CurrencyUnitType") /* .typeName */
},
/* TrustListMasks */
{
    {0, UA_NODEIDTYPE_NUMERIC, {12552}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_TrustListMasks), /* .memSize */
    UA_TYPES_INT32, /* .typeIndex */
    UA_DATATYPEKIND_ENUM, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    TrustListMasks_members  /* .members */
    UA_TYPENAME("TrustListMasks") /* .typeName */
},
/* TrustListDataType */
{
    {0, UA_NODEIDTYPE_NUMERIC, {12554}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {12680}}, /* .binaryEncodingId */
    sizeof(UA_TrustListDataType), /* .memSize */
    UA_TYPES_TRUSTLISTDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    5, /* .membersSize */
    TrustListDataType_members  /* .members */
    UA_TYPENAME("TrustListDataType") /* .typeName */
},
/* DecimalDataType */
{
    {0, UA_NODEIDTYPE_NUMERIC, {17861}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {17863}}, /* .binaryEncodingId */
    sizeof(UA_DecimalDataType), /* .memSize */
    UA_TYPES_DECIMALDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    DecimalDataType_members  /* .members */
    UA_TYPENAME("DecimalDataType") /* .typeName */
},
/* DataTypeDescription */
{
    {0, UA_NODEIDTYPE_NUMERIC, {14525}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {125}}, /* .binaryEncodingId */
    sizeof(UA_DataTypeDescription), /* .memSize */
    UA_TYPES_DATATYPEDESCRIPTION, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    DataTypeDescription_members  /* .members */
    UA_TYPENAME("DataTypeDescription") /* .typeName */
},
/* SimpleTypeDescription */
{
    {0, UA_NODEIDTYPE_NUMERIC, {15005}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {15421}}, /* .binaryEncodingId */
    sizeof(UA_SimpleTypeDescription), /* .memSize */
    UA_TYPES_SIMPLETYPEDESCRIPTION, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    4, /* .membersSize */
    SimpleTypeDescription_members  /* .members */
    UA_TYPENAME("SimpleTypeDescription") /* .typeName */
},
/* PubSubState */
{
    {0, UA_NODEIDTYPE_NUMERIC, {14647}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_PubSubState), /* .memSize */
    UA_TYPES_INT32, /* .typeIndex */
    UA_DATATYPEKIND_ENUM, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    PubSubState_members  /* .members */
    UA_TYPENAME("PubSubState") /* .typeName */
},
/* DataSetFieldFlags */
{
    {0, UA_NODEIDTYPE_NUMERIC, {15904}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_DataSetFieldFlags), /* .memSize */
    UA_TYPES_UINT16, /* .typeIndex */
    UA_DATATYPEKIND_UINT16, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    DataSetFieldFlags_members  /* .members */
    UA_TYPENAME("DataSetFieldFlags") /* .typeName */
},
/* ConfigurationVersionDataType */
{
    {0, UA_NODEIDTYPE_NUMERIC, {14593}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {14847}}, /* .binaryEncodingId */
    sizeof(UA_ConfigurationVersionDataType), /* .memSize */
    UA_TYPES_CONFIGURATIONVERSIONDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    true, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    ConfigurationVersionDataType_members  /* .members */
    UA_TYPENAME("ConfigurationVersionDataType") /* .typeName */
},
/* PublishedDataSetSourceDataType */
{
    {0, UA_NODEIDTYPE_NUMERIC, {15580}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {15678}}, /* .binaryEncodingId */
    sizeof(UA_PublishedDataSetSourceDataType), /* .memSize */
    UA_TYPES_PUBLISHEDDATASETSOURCEDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    true, /* .pointerFree */
    false, /* .overlayable */
    0, /* .membersSize */
    PublishedDataSetSourceDataType_members  /* .members */
    UA_TYPENAME("PublishedDataSetSourceDataType") /* .typeName */
},
/* PublishedVariableDataType */
{
    {0, UA_NODEIDTYPE_NUMERIC, {14273}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {14323}}, /* .binaryEncodingId */
    sizeof(UA_PublishedVariableDataType), /* .memSize */
    UA_TYPES_PUBLISHEDVARIABLEDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    8, /* .membersSize */
    PublishedVariableDataType_members  /* .members */
    UA_TYPENAME("PublishedVariableDataType") /* .typeName */
},
/* PublishedDataItemsDataType */
{
    {0, UA_NODEIDTYPE_NUMERIC, {15581}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {15679}}, /* .binaryEncodingId */
    sizeof(UA_PublishedDataItemsDataType), /* .memSize */
    UA_TYPES_PUBLISHEDDATAITEMSDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    1, /* .membersSize */
    PublishedDataItemsDataType_members  /* .members */
    UA_TYPENAME("PublishedDataItemsDataType") /* .typeName */
},
/* DataSetFieldContentMask */
{
    {0, UA_NODEIDTYPE_NUMERIC, {15583}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_DataSetFieldContentMask), /* .memSize */
    UA_TYPES_UINT32, /* .typeIndex */
    UA_DATATYPEKIND_UINT32, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    DataSetFieldContentMask_members  /* .members */
    UA_TYPENAME("DataSetFieldContentMask") /* .typeName */
},
/* DataSetWriterDataType */
{
    {0, UA_NODEIDTYPE_NUMERIC, {15597}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {15682}}, /* .binaryEncodingId */
    sizeof(UA_DataSetWriterDataType), /* .memSize */
    UA_TYPES_DATASETWRITERDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    9, /* .membersSize */
    DataSetWriterDataType_members  /* .members */
    UA_TYPENAME("DataSetWriterDataType") /* .typeName */
},
/* DataSetWriterTransportDataType */
{
    {0, UA_NODEIDTYPE_NUMERIC, {15598}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {15683}}, /* .binaryEncodingId */
    sizeof(UA_DataSetWriterTransportDataType), /* .memSize */
    UA_TYPES_DATASETWRITERTRANSPORTDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    true, /* .pointerFree */
    false, /* .overlayable */
    0, /* .membersSize */
    DataSetWriterTransportDataType_members  /* .members */
    UA_TYPENAME("DataSetWriterTransportDataType") /* .typeName */
},
/* DataSetWriterMessageDataType */
{
    {0, UA_NODEIDTYPE_NUMERIC, {15605}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {15688}}, /* .binaryEncodingId */
    sizeof(UA_DataSetWriterMessageDataType), /* .memSize */
    UA_TYPES_DATASETWRITERMESSAGEDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    true, /* .pointerFree */
    false, /* .overlayable */
    0, /* .membersSize */
    DataSetWriterMessageDataType_members  /* .members */
    UA_TYPENAME("DataSetWriterMessageDataType") /* .typeName */
},
/* WriterGroupTransportDataType */
{
    {0, UA_NODEIDTYPE_NUMERIC, {15611}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {15691}}, /* .binaryEncodingId */
    sizeof(UA_WriterGroupTransportDataType), /* .memSize */
    UA_TYPES_WRITERGROUPTRANSPORTDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    true, /* .pointerFree */
    false, /* .overlayable */
    0, /* .membersSize */
    WriterGroupTransportDataType_members  /* .members */
    UA_TYPENAME("WriterGroupTransportDataType") /* .typeName */
},
/* WriterGroupMessageDataType */
{
    {0, UA_NODEIDTYPE_NUMERIC, {15616}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {15693}}, /* .binaryEncodingId */
    sizeof(UA_WriterGroupMessageDataType), /* .memSize */
    UA_TYPES_WRITERGROUPMESSAGEDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    true, /* .pointerFree */
    false, /* .overlayable */
    0, /* .membersSize */
    WriterGroupMessageDataType_members  /* .members */
    UA_TYPENAME("WriterGroupMessageDataType") /* .typeName */
},
/* ConnectionTransportDataType */
{
    {0, UA_NODEIDTYPE_NUMERIC, {15618}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {15695}}, /* .binaryEncodingId */
    sizeof(UA_ConnectionTransportDataType), /* .memSize */
    UA_TYPES_CONNECTIONTRANSPORTDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    true, /* .pointerFree */
    false, /* .overlayable */
    0, /* .membersSize */
    ConnectionTransportDataType_members  /* .members */
    UA_TYPENAME("ConnectionTransportDataType") /* .typeName */
},
/* NetworkAddressDataType */
{
    {0, UA_NODEIDTYPE_NUMERIC, {15502}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {21151}}, /* .binaryEncodingId */
    sizeof(UA_NetworkAddressDataType), /* .memSize */
    UA_TYPES_NETWORKADDRESSDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    1, /* .membersSize */
    NetworkAddressDataType_members  /* .members */
    UA_TYPENAME("NetworkAddressDataType") /* .typeName */
},
/* NetworkAddressUrlDataType */
{
    {0, UA_NODEIDTYPE_NUMERIC, {15510}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {21152}}, /* .binaryEncodingId */
    sizeof(UA_NetworkAddressUrlDataType), /* .memSize */
    UA_TYPES_NETWORKADDRESSURLDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    NetworkAddressUrlDataType_members  /* .members */
    UA_TYPENAME("NetworkAddressUrlDataType") /* .typeName */
},
/* ReaderGroupTransportDataType */
{
    {0, UA_NODEIDTYPE_NUMERIC, {15621}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {15701}}, /* .binaryEncodingId */
    sizeof(UA_ReaderGroupTransportDataType), /* .memSize */
    UA_TYPES_READERGROUPTRANSPORTDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    true, /* .pointerFree */
    false, /* .overlayable */
    0, /* .membersSize */
    ReaderGroupTransportDataType_members  /* .members */
    UA_TYPENAME("ReaderGroupTransportDataType") /* .typeName */
},
/* ReaderGroupMessageDataType */
{
    {0, UA_NODEIDTYPE_NUMERIC, {15622}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {15702}}, /* .binaryEncodingId */
    sizeof(UA_ReaderGroupMessageDataType), /* .memSize */
    UA_TYPES_READERGROUPMESSAGEDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    true, /* .pointerFree */
    false, /* .overlayable */
    0, /* .membersSize */
    ReaderGroupMessageDataType_members  /* .members */
    UA_TYPENAME("ReaderGroupMessageDataType") /* .typeName */
},
/* DataSetReaderTransportDataType */
{
    {0, UA_NODEIDTYPE_NUMERIC, {15628}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {15705}}, /* .binaryEncodingId */
    sizeof(UA_DataSetReaderTransportDataType), /* .memSize */
    UA_TYPES_DATASETREADERTRANSPORTDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    true, /* .pointerFree */
    false, /* .overlayable */
    0, /* .membersSize */
    DataSetReaderTransportDataType_members  /* .members */
    UA_TYPENAME("DataSetReaderTransportDataType") /* .typeName */
},
/* DataSetReaderMessageDataType */
{
    {0, UA_NODEIDTYPE_NUMERIC, {15629}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {15706}}, /* .binaryEncodingId */
    sizeof(UA_DataSetReaderMessageDataType), /* .memSize */
    UA_TYPES_DATASETREADERMESSAGEDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    true, /* .pointerFree */
    false, /* .overlayable */
    0, /* .membersSize */
    DataSetReaderMessageDataType_members  /* .members */
    UA_TYPENAME("DataSetReaderMessageDataType") /* .typeName */
},
/* SubscribedDataSetDataType */
{
    {0, UA_NODEIDTYPE_NUMERIC, {15630}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {15707}}, /* .binaryEncodingId */
    sizeof(UA_SubscribedDataSetDataType), /* .memSize */
    UA_TYPES_SUBSCRIBEDDATASETDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    true, /* .pointerFree */
    false, /* .overlayable */
    0, /* .membersSize */
    SubscribedDataSetDataType_members  /* .members */
    UA_TYPENAME("SubscribedDataSetDataType") /* .typeName */
},
/* OverrideValueHandling */
{
    {0, UA_NODEIDTYPE_NUMERIC, {15874}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_OverrideValueHandling), /* .memSize */
    UA_TYPES_INT32, /* .typeIndex */
    UA_DATATYPEKIND_ENUM, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    OverrideValueHandling_members  /* .members */
    UA_TYPENAME("OverrideValueHandling") /* .typeName */
},
/* DataSetOrderingType */
{
    {0, UA_NODEIDTYPE_NUMERIC, {20408}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_DataSetOrderingType), /* .memSize */
    UA_TYPES_INT32, /* .typeIndex */
    UA_DATATYPEKIND_ENUM, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    DataSetOrderingType_members  /* .members */
    UA_TYPENAME("DataSetOrderingType") /* .typeName */
},
/* UadpNetworkMessageContentMask */
{
    {0, UA_NODEIDTYPE_NUMERIC, {15642}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_UadpNetworkMessageContentMask), /* .memSize */
    UA_TYPES_UINT32, /* .typeIndex */
    UA_DATATYPEKIND_UINT32, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    UadpNetworkMessageContentMask_members  /* .members */
    UA_TYPENAME("UadpNetworkMessageContentMask") /* .typeName */
},
/* UadpWriterGroupMessageDataType */
{
    {0, UA_NODEIDTYPE_NUMERIC, {15645}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {15715}}, /* .binaryEncodingId */
    sizeof(UA_UadpWriterGroupMessageDataType), /* .memSize */
    UA_TYPES_UADPWRITERGROUPMESSAGEDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    5, /* .membersSize */
    UadpWriterGroupMessageDataType_members  /* .members */
    UA_TYPENAME("UadpWriterGroupMessageDataType") /* .typeName */
},
/* UadpDataSetMessageContentMask */
{
    {0, UA_NODEIDTYPE_NUMERIC, {15646}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_UadpDataSetMessageContentMask), /* .memSize */
    UA_TYPES_UINT32, /* .typeIndex */
    UA_DATATYPEKIND_UINT32, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    UadpDataSetMessageContentMask_members  /* .members */
    UA_TYPENAME("UadpDataSetMessageContentMask") /* .typeName */
},
/* UadpDataSetWriterMessageDataType */
{
    {0, UA_NODEIDTYPE_NUMERIC, {15652}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {15717}}, /* .binaryEncodingId */
    sizeof(UA_UadpDataSetWriterMessageDataType), /* .memSize */
    UA_TYPES_UADPDATASETWRITERMESSAGEDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    true, /* .pointerFree */
    false, /* .overlayable */
    4, /* .membersSize */
    UadpDataSetWriterMessageDataType_members  /* .members */
    UA_TYPENAME("UadpDataSetWriterMessageDataType") /* .typeName */
},
/* UadpDataSetReaderMessageDataType */
{
    {0, UA_NODEIDTYPE_NUMERIC, {15653}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {15718}}, /* .binaryEncodingId */
    sizeof(UA_UadpDataSetReaderMessageDataType), /* .memSize */
    UA_TYPES_UADPDATASETREADERMESSAGEDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    true, /* .pointerFree */
    false, /* .overlayable */
    9, /* .membersSize */
    UadpDataSetReaderMessageDataType_members  /* .members */
    UA_TYPENAME("UadpDataSetReaderMessageDataType") /* .typeName */
},
/* JsonNetworkMessageContentMask */
{
    {0, UA_NODEIDTYPE_NUMERIC, {15654}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_JsonNetworkMessageContentMask), /* .memSize */
    UA_TYPES_UINT32, /* .typeIndex */
    UA_DATATYPEKIND_UINT32, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    JsonNetworkMessageContentMask_members  /* .members */
    UA_TYPENAME("JsonNetworkMessageContentMask") /* .typeName */
},
/* JsonWriterGroupMessageDataType */
{
    {0, UA_NODEIDTYPE_NUMERIC, {15657}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {15719}}, /* .binaryEncodingId */
    sizeof(UA_JsonWriterGroupMessageDataType), /* .memSize */
    UA_TYPES_JSONWRITERGROUPMESSAGEDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    true, /* .pointerFree */
    false, /* .overlayable */
    1, /* .membersSize */
    JsonWriterGroupMessageDataType_members  /* .members */
    UA_TYPENAME("JsonWriterGroupMessageDataType") /* .typeName */
},
/* JsonDataSetMessageContentMask */
{
    {0, UA_NODEIDTYPE_NUMERIC, {15658}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_JsonDataSetMessageContentMask), /* .memSize */
    UA_TYPES_UINT32, /* .typeIndex */
    UA_DATATYPEKIND_UINT32, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    JsonDataSetMessageContentMask_members  /* .members */
    UA_TYPENAME("JsonDataSetMessageContentMask") /* .typeName */
},
/* JsonDataSetWriterMessageDataType */
{
    {0, UA_NODEIDTYPE_NUMERIC, {15664}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {15724}}, /* .binaryEncodingId */
    sizeof(UA_JsonDataSetWriterMessageDataType), /* .memSize */
    UA_TYPES_JSONDATASETWRITERMESSAGEDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    true, /* .pointerFree */
    false, /* .overlayable */
    1, /* .membersSize */
    JsonDataSetWriterMessageDataType_members  /* .members */
    UA_TYPENAME("JsonDataSetWriterMessageDataType") /* .typeName */
},
/* JsonDataSetReaderMessageDataType */
{
    {0, UA_NODEIDTYPE_NUMERIC, {15665}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {15725}}, /* .binaryEncodingId */
    sizeof(UA_JsonDataSetReaderMessageDataType), /* .memSize */
    UA_TYPES_JSONDATASETREADERMESSAGEDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    true, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    JsonDataSetReaderMessageDataType_members  /* .members */
    UA_TYPENAME("JsonDataSetReaderMessageDataType") /* .typeName */
},
/* DatagramConnectionTransportDataType */
{
    {0, UA_NODEIDTYPE_NUMERIC, {17467}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {17468}}, /* .binaryEncodingId */
    sizeof(UA_DatagramConnectionTransportDataType), /* .memSize */
    UA_TYPES_DATAGRAMCONNECTIONTRANSPORTDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    1, /* .membersSize */
    DatagramConnectionTransportDataType_members  /* .members */
    UA_TYPENAME("DatagramConnectionTransportDataType") /* .typeName */
},
/* DatagramWriterGroupTransportDataType */
{
    {0, UA_NODEIDTYPE_NUMERIC, {15532}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {21155}}, /* .binaryEncodingId */
    sizeof(UA_DatagramWriterGroupTransportDataType), /* .memSize */
    UA_TYPES_DATAGRAMWRITERGROUPTRANSPORTDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    true, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    DatagramWriterGroupTransportDataType_members  /* .members */
    UA_TYPENAME("DatagramWriterGroupTransportDataType") /* .typeName */
},
/* BrokerConnectionTransportDataType */
{
    {0, UA_NODEIDTYPE_NUMERIC, {15007}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {15479}}, /* .binaryEncodingId */
    sizeof(UA_BrokerConnectionTransportDataType), /* .memSize */
    UA_TYPES_BROKERCONNECTIONTRANSPORTDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    BrokerConnectionTransportDataType_members  /* .members */
    UA_TYPENAME("BrokerConnectionTransportDataType") /* .typeName */
},
/* BrokerTransportQualityOfService */
{
    {0, UA_NODEIDTYPE_NUMERIC, {15008}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_BrokerTransportQualityOfService), /* .memSize */
    UA_TYPES_INT32, /* .typeIndex */
    UA_DATATYPEKIND_ENUM, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    BrokerTransportQualityOfService_members  /* .members */
    UA_TYPENAME("BrokerTransportQualityOfService") /* .typeName */
},
/* BrokerWriterGroupTransportDataType */
{
    {0, UA_NODEIDTYPE_NUMERIC, {15667}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {15727}}, /* .binaryEncodingId */
    sizeof(UA_BrokerWriterGroupTransportDataType), /* .memSize */
    UA_TYPES_BROKERWRITERGROUPTRANSPORTDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    4, /* .membersSize */
    BrokerWriterGroupTransportDataType_members  /* .members */
    UA_TYPENAME("BrokerWriterGroupTransportDataType") /* .typeName */
},
/* BrokerDataSetWriterTransportDataType */
{
    {0, UA_NODEIDTYPE_NUMERIC, {15669}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {15729}}, /* .binaryEncodingId */
    sizeof(UA_BrokerDataSetWriterTransportDataType), /* .memSize */
    UA_TYPES_BROKERDATASETWRITERTRANSPORTDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    6, /* .membersSize */
    BrokerDataSetWriterTransportDataType_members  /* .members */
    UA_TYPENAME("BrokerDataSetWriterTransportDataType") /* .typeName */
},
/* BrokerDataSetReaderTransportDataType */
{
    {0, UA_NODEIDTYPE_NUMERIC, {15670}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {15733}}, /* .binaryEncodingId */
    sizeof(UA_BrokerDataSetReaderTransportDataType), /* .memSize */
    UA_TYPES_BROKERDATASETREADERTRANSPORTDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    5, /* .membersSize */
    BrokerDataSetReaderTransportDataType_members  /* .members */
    UA_TYPENAME("BrokerDataSetReaderTransportDataType") /* .typeName */
},
/* DiagnosticsLevel */
{
    {0, UA_NODEIDTYPE_NUMERIC, {19723}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_DiagnosticsLevel), /* .memSize */
    UA_TYPES_INT32, /* .typeIndex */
    UA_DATATYPEKIND_ENUM, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    DiagnosticsLevel_members  /* .members */
    UA_TYPENAME("DiagnosticsLevel") /* .typeName */
},
/* PubSubDiagnosticsCounterClassification */
{
    {0, UA_NODEIDTYPE_NUMERIC, {19730}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_PubSubDiagnosticsCounterClassification), /* .memSize */
    UA_TYPES_INT32, /* .typeIndex */
    UA_DATATYPEKIND_ENUM, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    PubSubDiagnosticsCounterClassification_members  /* .members */
    UA_TYPENAME("PubSubDiagnosticsCounterClassification") /* .typeName */
},
/* AliasNameDataType */
{
    {0, UA_NODEIDTYPE_NUMERIC, {23468}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {23499}}, /* .binaryEncodingId */
    sizeof(UA_AliasNameDataType), /* .memSize */
    UA_TYPES_ALIASNAMEDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    AliasNameDataType_members  /* .members */
    UA_TYPENAME("AliasNameDataType") /* .typeName */
},
/* IdType */
{
    {0, UA_NODEIDTYPE_NUMERIC, {256}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_IdType), /* .memSize */
    UA_TYPES_INT32, /* .typeIndex */
    UA_DATATYPEKIND_ENUM, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    IdType_members  /* .members */
    UA_TYPENAME("IdType") /* .typeName */
},
/* NodeClass */
{
    {0, UA_NODEIDTYPE_NUMERIC, {257}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_NodeClass), /* .memSize */
    UA_TYPES_INT32, /* .typeIndex */
    UA_DATATYPEKIND_ENUM, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    NodeClass_members  /* .members */
    UA_TYPENAME("NodeClass") /* .typeName */
},
/* PermissionType */
{
    {0, UA_NODEIDTYPE_NUMERIC, {94}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_PermissionType), /* .memSize */
    UA_TYPES_UINT32, /* .typeIndex */
    UA_DATATYPEKIND_UINT32, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    PermissionType_members  /* .members */
    UA_TYPENAME("PermissionType") /* .typeName */
},
/* AccessLevelType */
{
    {0, UA_NODEIDTYPE_NUMERIC, {15031}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_AccessLevelType), /* .memSize */
    UA_TYPES_BYTE, /* .typeIndex */
    UA_DATATYPEKIND_BYTE, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    AccessLevelType_members  /* .members */
    UA_TYPENAME("AccessLevelType") /* .typeName */
},
/* AccessLevelExType */
{
    {0, UA_NODEIDTYPE_NUMERIC, {15406}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_AccessLevelExType), /* .memSize */
    UA_TYPES_UINT32, /* .typeIndex */
    UA_DATATYPEKIND_UINT32, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    AccessLevelExType_members  /* .members */
    UA_TYPENAME("AccessLevelExType") /* .typeName */
},
/* EventNotifierType */
{
    {0, UA_NODEIDTYPE_NUMERIC, {15033}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_EventNotifierType), /* .memSize */
    UA_TYPES_BYTE, /* .typeIndex */
    UA_DATATYPEKIND_BYTE, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    EventNotifierType_members  /* .members */
    UA_TYPENAME("EventNotifierType") /* .typeName */
},
/* AccessRestrictionType */
{
    {0, UA_NODEIDTYPE_NUMERIC, {95}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_AccessRestrictionType), /* .memSize */
    UA_TYPES_UINT32, /* .typeIndex */
    UA_DATATYPEKIND_UINT32, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    AccessRestrictionType_members  /* .members */
    UA_TYPENAME("AccessRestrictionType") /* .typeName */
},
/* RolePermissionType */
{
    {0, UA_NODEIDTYPE_NUMERIC, {96}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {128}}, /* .binaryEncodingId */
    sizeof(UA_RolePermissionType), /* .memSize */
    UA_TYPES_ROLEPERMISSIONTYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    RolePermissionType_members  /* .members */
    UA_TYPENAME("RolePermissionType") /* .typeName */
},
/* StructureType */
{
    {0, UA_NODEIDTYPE_NUMERIC, {98}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_StructureType), /* .memSize */
    UA_TYPES_INT32, /* .typeIndex */
    UA_DATATYPEKIND_ENUM, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    StructureType_members  /* .members */
    UA_TYPENAME("StructureType") /* .typeName */
},
/* StructureField */
{
    {0, UA_NODEIDTYPE_NUMERIC, {101}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {14844}}, /* .binaryEncodingId */
    sizeof(UA_StructureField), /* .memSize */
    UA_TYPES_STRUCTUREFIELD, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    7, /* .membersSize */
    StructureField_members  /* .members */
    UA_TYPENAME("StructureField") /* .typeName */
},
/* StructureDefinition */
{
    {0, UA_NODEIDTYPE_NUMERIC, {99}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {122}}, /* .binaryEncodingId */
    sizeof(UA_StructureDefinition), /* .memSize */
    UA_TYPES_STRUCTUREDEFINITION, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    4, /* .membersSize */
    StructureDefinition_members  /* .members */
    UA_TYPENAME("StructureDefinition") /* .typeName */
},
/* ReferenceNode */
{
    {0, UA_NODEIDTYPE_NUMERIC, {285}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {287}}, /* .binaryEncodingId */
    sizeof(UA_ReferenceNode), /* .memSize */
    UA_TYPES_REFERENCENODE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    ReferenceNode_members  /* .members */
    UA_TYPENAME("ReferenceNode") /* .typeName */
},
/* Argument */
{
    {0, UA_NODEIDTYPE_NUMERIC, {296}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {298}}, /* .binaryEncodingId */
    sizeof(UA_Argument), /* .memSize */
    UA_TYPES_ARGUMENT, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    5, /* .membersSize */
    Argument_members  /* .members */
    UA_TYPENAME("Argument") /* .typeName */
},
/* EnumValueType */
{
    {0, UA_NODEIDTYPE_NUMERIC, {7594}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {8251}}, /* .binaryEncodingId */
    sizeof(UA_EnumValueType), /* .memSize */
    UA_TYPES_ENUMVALUETYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    EnumValueType_members  /* .members */
    UA_TYPENAME("EnumValueType") /* .typeName */
},
/* EnumField */
{
    {0, UA_NODEIDTYPE_NUMERIC, {102}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {14845}}, /* .binaryEncodingId */
    sizeof(UA_EnumField), /* .memSize */
    UA_TYPES_ENUMFIELD, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    4, /* .membersSize */
    EnumField_members  /* .members */
    UA_TYPENAME("EnumField") /* .typeName */
},
/* OptionSet */
{
    {0, UA_NODEIDTYPE_NUMERIC, {12755}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {12765}}, /* .binaryEncodingId */
    sizeof(UA_OptionSet), /* .memSize */
    UA_TYPES_OPTIONSET, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    OptionSet_members  /* .members */
    UA_TYPENAME("OptionSet") /* .typeName */
},
/* Union */
{
    {0, UA_NODEIDTYPE_NUMERIC, {12756}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {12766}}, /* .binaryEncodingId */
    sizeof(UA_Union), /* .memSize */
    UA_TYPES_UNION, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    true, /* .pointerFree */
    false, /* .overlayable */
    0, /* .membersSize */
    Union_members  /* .members */
    UA_TYPENAME("Union") /* .typeName */
},
/* NormalizedString */
{
    {0, UA_NODEIDTYPE_NUMERIC, {12877}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_NormalizedString), /* .memSize */
    UA_TYPES_NORMALIZEDSTRING, /* .typeIndex */
    UA_DATATYPEKIND_STRING, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    0, /* .membersSize */
    NormalizedString_members  /* .members */
    UA_TYPENAME("NormalizedString") /* .typeName */
},
/* DecimalString */
{
    {0, UA_NODEIDTYPE_NUMERIC, {12878}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_DecimalString), /* .memSize */
    UA_TYPES_DECIMALSTRING, /* .typeIndex */
    UA_DATATYPEKIND_STRING, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    0, /* .membersSize */
    DecimalString_members  /* .members */
    UA_TYPENAME("DecimalString") /* .typeName */
},
/* DurationString */
{
    {0, UA_NODEIDTYPE_NUMERIC, {12879}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_DurationString), /* .memSize */
    UA_TYPES_DURATIONSTRING, /* .typeIndex */
    UA_DATATYPEKIND_STRING, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    0, /* .membersSize */
    DurationString_members  /* .members */
    UA_TYPENAME("DurationString") /* .typeName */
},
/* TimeString */
{
    {0, UA_NODEIDTYPE_NUMERIC, {12880}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_TimeString), /* .memSize */
    UA_TYPES_TIMESTRING, /* .typeIndex */
    UA_DATATYPEKIND_STRING, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    0, /* .membersSize */
    TimeString_members  /* .members */
    UA_TYPENAME("TimeString") /* .typeName */
},
/* DateString */
{
    {0, UA_NODEIDTYPE_NUMERIC, {12881}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_DateString), /* .memSize */
    UA_TYPES_DATESTRING, /* .typeIndex */
    UA_DATATYPEKIND_STRING, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    0, /* .membersSize */
    DateString_members  /* .members */
    UA_TYPENAME("DateString") /* .typeName */
},
/* Duration */
{
    {0, UA_NODEIDTYPE_NUMERIC, {290}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_Duration), /* .memSize */
    UA_TYPES_DURATION, /* .typeIndex */
    UA_DATATYPEKIND_DOUBLE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    0, /* .membersSize */
    Duration_members  /* .members */
    UA_TYPENAME("Duration") /* .typeName */
},
/* UtcTime */
{
    {0, UA_NODEIDTYPE_NUMERIC, {294}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_UtcTime), /* .memSize */
    UA_TYPES_UTCTIME, /* .typeIndex */
    UA_DATATYPEKIND_DATETIME, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    0, /* .membersSize */
    UtcTime_members  /* .members */
    UA_TYPENAME("UtcTime") /* .typeName */
},
/* LocaleId */
{
    {0, UA_NODEIDTYPE_NUMERIC, {295}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_LocaleId), /* .memSize */
    UA_TYPES_LOCALEID, /* .typeIndex */
    UA_DATATYPEKIND_STRING, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    0, /* .membersSize */
    LocaleId_members  /* .members */
    UA_TYPENAME("LocaleId") /* .typeName */
},
/* TimeZoneDataType */
{
    {0, UA_NODEIDTYPE_NUMERIC, {8912}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {8917}}, /* .binaryEncodingId */
    sizeof(UA_TimeZoneDataType), /* .memSize */
    UA_TYPES_TIMEZONEDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    true, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    TimeZoneDataType_members  /* .members */
    UA_TYPENAME("TimeZoneDataType") /* .typeName */
},
/* Index */
{
    {0, UA_NODEIDTYPE_NUMERIC, {17588}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_Index), /* .memSize */
    UA_TYPES_INDEX, /* .typeIndex */
    UA_DATATYPEKIND_BYTESTRING, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    0, /* .membersSize */
    Index_members  /* .members */
    UA_TYPENAME("Index") /* .typeName */
},
/* IntegerId */
{
    {0, UA_NODEIDTYPE_NUMERIC, {288}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_IntegerId), /* .memSize */
    UA_TYPES_INTEGERID, /* .typeIndex */
    UA_DATATYPEKIND_UINT32, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    0, /* .membersSize */
    IntegerId_members  /* .members */
    UA_TYPENAME("IntegerId") /* .typeName */
},
/* ApplicationType */
{
    {0, UA_NODEIDTYPE_NUMERIC, {307}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_ApplicationType), /* .memSize */
    UA_TYPES_INT32, /* .typeIndex */
    UA_DATATYPEKIND_ENUM, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    ApplicationType_members  /* .members */
    UA_TYPENAME("ApplicationType") /* .typeName */
},
/* ApplicationDescription */
{
    {0, UA_NODEIDTYPE_NUMERIC, {308}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {310}}, /* .binaryEncodingId */
    sizeof(UA_ApplicationDescription), /* .memSize */
    UA_TYPES_APPLICATIONDESCRIPTION, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    7, /* .membersSize */
    ApplicationDescription_members  /* .members */
    UA_TYPENAME("ApplicationDescription") /* .typeName */
},
/* RequestHeader */
{
    {0, UA_NODEIDTYPE_NUMERIC, {389}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {391}}, /* .binaryEncodingId */
    sizeof(UA_RequestHeader), /* .memSize */
    UA_TYPES_REQUESTHEADER, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    7, /* .membersSize */
    RequestHeader_members  /* .members */
    UA_TYPENAME("RequestHeader") /* .typeName */
},
/* ResponseHeader */
{
    {0, UA_NODEIDTYPE_NUMERIC, {392}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {394}}, /* .binaryEncodingId */
    sizeof(UA_ResponseHeader), /* .memSize */
    UA_TYPES_RESPONSEHEADER, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    6, /* .membersSize */
    ResponseHeader_members  /* .members */
    UA_TYPENAME("ResponseHeader") /* .typeName */
},
/* VersionTime */
{
    {0, UA_NODEIDTYPE_NUMERIC, {20998}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_VersionTime), /* .memSize */
    UA_TYPES_VERSIONTIME, /* .typeIndex */
    UA_DATATYPEKIND_BYTESTRING, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    0, /* .membersSize */
    VersionTime_members  /* .members */
    UA_TYPENAME("VersionTime") /* .typeName */
},
/* ServiceFault */
{
    {0, UA_NODEIDTYPE_NUMERIC, {395}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {397}}, /* .binaryEncodingId */
    sizeof(UA_ServiceFault), /* .memSize */
    UA_TYPES_SERVICEFAULT, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    1, /* .membersSize */
    ServiceFault_members  /* .members */
    UA_TYPENAME("ServiceFault") /* .typeName */
},
/* SessionlessInvokeRequestType */
{
    {0, UA_NODEIDTYPE_NUMERIC, {15901}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {15903}}, /* .binaryEncodingId */
    sizeof(UA_SessionlessInvokeRequestType), /* .memSize */
    UA_TYPES_SESSIONLESSINVOKEREQUESTTYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    5, /* .membersSize */
    SessionlessInvokeRequestType_members  /* .members */
    UA_TYPENAME("SessionlessInvokeRequestType") /* .typeName */
},
/* SessionlessInvokeResponseType */
{
    {0, UA_NODEIDTYPE_NUMERIC, {20999}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {21001}}, /* .binaryEncodingId */
    sizeof(UA_SessionlessInvokeResponseType), /* .memSize */
    UA_TYPES_SESSIONLESSINVOKERESPONSETYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    SessionlessInvokeResponseType_members  /* .members */
    UA_TYPENAME("SessionlessInvokeResponseType") /* .typeName */
},
/* FindServersRequest */
{
    {0, UA_NODEIDTYPE_NUMERIC, {420}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {422}}, /* .binaryEncodingId */
    sizeof(UA_FindServersRequest), /* .memSize */
    UA_TYPES_FINDSERVERSREQUEST, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    4, /* .membersSize */
    FindServersRequest_members  /* .members */
    UA_TYPENAME("FindServersRequest") /* .typeName */
},
/* FindServersResponse */
{
    {0, UA_NODEIDTYPE_NUMERIC, {423}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {425}}, /* .binaryEncodingId */
    sizeof(UA_FindServersResponse), /* .memSize */
    UA_TYPES_FINDSERVERSRESPONSE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    FindServersResponse_members  /* .members */
    UA_TYPENAME("FindServersResponse") /* .typeName */
},
/* ServerOnNetwork */
{
    {0, UA_NODEIDTYPE_NUMERIC, {12189}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {12207}}, /* .binaryEncodingId */
    sizeof(UA_ServerOnNetwork), /* .memSize */
    UA_TYPES_SERVERONNETWORK, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    4, /* .membersSize */
    ServerOnNetwork_members  /* .members */
    UA_TYPENAME("ServerOnNetwork") /* .typeName */
},
/* FindServersOnNetworkRequest */
{
    {0, UA_NODEIDTYPE_NUMERIC, {12190}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {12208}}, /* .binaryEncodingId */
    sizeof(UA_FindServersOnNetworkRequest), /* .memSize */
    UA_TYPES_FINDSERVERSONNETWORKREQUEST, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    4, /* .membersSize */
    FindServersOnNetworkRequest_members  /* .members */
    UA_TYPENAME("FindServersOnNetworkRequest") /* .typeName */
},
/* FindServersOnNetworkResponse */
{
    {0, UA_NODEIDTYPE_NUMERIC, {12191}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {12209}}, /* .binaryEncodingId */
    sizeof(UA_FindServersOnNetworkResponse), /* .memSize */
    UA_TYPES_FINDSERVERSONNETWORKRESPONSE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    FindServersOnNetworkResponse_members  /* .members */
    UA_TYPENAME("FindServersOnNetworkResponse") /* .typeName */
},
/* ApplicationInstanceCertificate */
{
    {0, UA_NODEIDTYPE_NUMERIC, {311}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_ApplicationInstanceCertificate), /* .memSize */
    UA_TYPES_APPLICATIONINSTANCECERTIFICATE, /* .typeIndex */
    UA_DATATYPEKIND_BYTESTRING, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    0, /* .membersSize */
    ApplicationInstanceCertificate_members  /* .members */
    UA_TYPENAME("ApplicationInstanceCertificate") /* .typeName */
},
/* MessageSecurityMode */
{
    {0, UA_NODEIDTYPE_NUMERIC, {302}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_MessageSecurityMode), /* .memSize */
    UA_TYPES_INT32, /* .typeIndex */
    UA_DATATYPEKIND_ENUM, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    MessageSecurityMode_members  /* .members */
    UA_TYPENAME("MessageSecurityMode") /* .typeName */
},
/* UserTokenType */
{
    {0, UA_NODEIDTYPE_NUMERIC, {303}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_UserTokenType), /* .memSize */
    UA_TYPES_INT32, /* .typeIndex */
    UA_DATATYPEKIND_ENUM, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    UserTokenType_members  /* .members */
    UA_TYPENAME("UserTokenType") /* .typeName */
},
/* UserTokenPolicy */
{
    {0, UA_NODEIDTYPE_NUMERIC, {304}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {306}}, /* .binaryEncodingId */
    sizeof(UA_UserTokenPolicy), /* .memSize */
    UA_TYPES_USERTOKENPOLICY, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    5, /* .membersSize */
    UserTokenPolicy_members  /* .members */
    UA_TYPENAME("UserTokenPolicy") /* .typeName */
},
/* EndpointDescription */
{
    {0, UA_NODEIDTYPE_NUMERIC, {312}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {314}}, /* .binaryEncodingId */
    sizeof(UA_EndpointDescription), /* .memSize */
    UA_TYPES_ENDPOINTDESCRIPTION, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    8, /* .membersSize */
    EndpointDescription_members  /* .members */
    UA_TYPENAME("EndpointDescription") /* .typeName */
},
/* GetEndpointsRequest */
{
    {0, UA_NODEIDTYPE_NUMERIC, {426}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {428}}, /* .binaryEncodingId */
    sizeof(UA_GetEndpointsRequest), /* .memSize */
    UA_TYPES_GETENDPOINTSREQUEST, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    4, /* .membersSize */
    GetEndpointsRequest_members  /* .members */
    UA_TYPENAME("GetEndpointsRequest") /* .typeName */
},
/* GetEndpointsResponse */
{
    {0, UA_NODEIDTYPE_NUMERIC, {429}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {431}}, /* .binaryEncodingId */
    sizeof(UA_GetEndpointsResponse), /* .memSize */
    UA_TYPES_GETENDPOINTSRESPONSE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    GetEndpointsResponse_members  /* .members */
    UA_TYPENAME("GetEndpointsResponse") /* .typeName */
},
/* RegisteredServer */
{
    {0, UA_NODEIDTYPE_NUMERIC, {432}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {434}}, /* .binaryEncodingId */
    sizeof(UA_RegisteredServer), /* .memSize */
    UA_TYPES_REGISTEREDSERVER, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    8, /* .membersSize */
    RegisteredServer_members  /* .members */
    UA_TYPENAME("RegisteredServer") /* .typeName */
},
/* RegisterServerRequest */
{
    {0, UA_NODEIDTYPE_NUMERIC, {435}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {437}}, /* .binaryEncodingId */
    sizeof(UA_RegisterServerRequest), /* .memSize */
    UA_TYPES_REGISTERSERVERREQUEST, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    RegisterServerRequest_members  /* .members */
    UA_TYPENAME("RegisterServerRequest") /* .typeName */
},
/* RegisterServerResponse */
{
    {0, UA_NODEIDTYPE_NUMERIC, {438}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {440}}, /* .binaryEncodingId */
    sizeof(UA_RegisterServerResponse), /* .memSize */
    UA_TYPES_REGISTERSERVERRESPONSE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    1, /* .membersSize */
    RegisterServerResponse_members  /* .members */
    UA_TYPENAME("RegisterServerResponse") /* .typeName */
},
/* DiscoveryConfiguration */
{
    {0, UA_NODEIDTYPE_NUMERIC, {12890}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {12900}}, /* .binaryEncodingId */
    sizeof(UA_DiscoveryConfiguration), /* .memSize */
    UA_TYPES_DISCOVERYCONFIGURATION, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    true, /* .pointerFree */
    false, /* .overlayable */
    0, /* .membersSize */
    DiscoveryConfiguration_members  /* .members */
    UA_TYPENAME("DiscoveryConfiguration") /* .typeName */
},
/* MdnsDiscoveryConfiguration */
{
    {0, UA_NODEIDTYPE_NUMERIC, {12891}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {12901}}, /* .binaryEncodingId */
    sizeof(UA_MdnsDiscoveryConfiguration), /* .memSize */
    UA_TYPES_MDNSDISCOVERYCONFIGURATION, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    MdnsDiscoveryConfiguration_members  /* .members */
    UA_TYPENAME("MdnsDiscoveryConfiguration") /* .typeName */
},
/* RegisterServer2Request */
{
    {0, UA_NODEIDTYPE_NUMERIC, {12193}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {12211}}, /* .binaryEncodingId */
    sizeof(UA_RegisterServer2Request), /* .memSize */
    UA_TYPES_REGISTERSERVER2REQUEST, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    RegisterServer2Request_members  /* .members */
    UA_TYPENAME("RegisterServer2Request") /* .typeName */
},
/* RegisterServer2Response */
{
    {0, UA_NODEIDTYPE_NUMERIC, {12194}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {12212}}, /* .binaryEncodingId */
    sizeof(UA_RegisterServer2Response), /* .memSize */
    UA_TYPES_REGISTERSERVER2RESPONSE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    RegisterServer2Response_members  /* .members */
    UA_TYPENAME("RegisterServer2Response") /* .typeName */
},
/* SecurityTokenRequestType */
{
    {0, UA_NODEIDTYPE_NUMERIC, {315}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_SecurityTokenRequestType), /* .memSize */
    UA_TYPES_INT32, /* .typeIndex */
    UA_DATATYPEKIND_ENUM, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    SecurityTokenRequestType_members  /* .members */
    UA_TYPENAME("SecurityTokenRequestType") /* .typeName */
},
/* ChannelSecurityToken */
{
    {0, UA_NODEIDTYPE_NUMERIC, {441}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {443}}, /* .binaryEncodingId */
    sizeof(UA_ChannelSecurityToken), /* .memSize */
    UA_TYPES_CHANNELSECURITYTOKEN, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    true, /* .pointerFree */
    false, /* .overlayable */
    4, /* .membersSize */
    ChannelSecurityToken_members  /* .members */
    UA_TYPENAME("ChannelSecurityToken") /* .typeName */
},
/* OpenSecureChannelRequest */
{
    {0, UA_NODEIDTYPE_NUMERIC, {444}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {446}}, /* .binaryEncodingId */
    sizeof(UA_OpenSecureChannelRequest), /* .memSize */
    UA_TYPES_OPENSECURECHANNELREQUEST, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    6, /* .membersSize */
    OpenSecureChannelRequest_members  /* .members */
    UA_TYPENAME("OpenSecureChannelRequest") /* .typeName */
},
/* OpenSecureChannelResponse */
{
    {0, UA_NODEIDTYPE_NUMERIC, {447}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {449}}, /* .binaryEncodingId */
    sizeof(UA_OpenSecureChannelResponse), /* .memSize */
    UA_TYPES_OPENSECURECHANNELRESPONSE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    4, /* .membersSize */
    OpenSecureChannelResponse_members  /* .members */
    UA_TYPENAME("OpenSecureChannelResponse") /* .typeName */
},
/* CloseSecureChannelRequest */
{
    {0, UA_NODEIDTYPE_NUMERIC, {450}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {452}}, /* .binaryEncodingId */
    sizeof(UA_CloseSecureChannelRequest), /* .memSize */
    UA_TYPES_CLOSESECURECHANNELREQUEST, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    1, /* .membersSize */
    CloseSecureChannelRequest_members  /* .members */
    UA_TYPENAME("CloseSecureChannelRequest") /* .typeName */
},
/* CloseSecureChannelResponse */
{
    {0, UA_NODEIDTYPE_NUMERIC, {453}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {455}}, /* .binaryEncodingId */
    sizeof(UA_CloseSecureChannelResponse), /* .memSize */
    UA_TYPES_CLOSESECURECHANNELRESPONSE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    1, /* .membersSize */
    CloseSecureChannelResponse_members  /* .members */
    UA_TYPENAME("CloseSecureChannelResponse") /* .typeName */
},
/* SignedSoftwareCertificate */
{
    {0, UA_NODEIDTYPE_NUMERIC, {344}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {346}}, /* .binaryEncodingId */
    sizeof(UA_SignedSoftwareCertificate), /* .memSize */
    UA_TYPES_SIGNEDSOFTWARECERTIFICATE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    SignedSoftwareCertificate_members  /* .members */
    UA_TYPENAME("SignedSoftwareCertificate") /* .typeName */
},
/* SessionAuthenticationToken */
{
    {0, UA_NODEIDTYPE_NUMERIC, {388}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_SessionAuthenticationToken), /* .memSize */
    UA_TYPES_SESSIONAUTHENTICATIONTOKEN, /* .typeIndex */
    UA_DATATYPEKIND_NODEID, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    0, /* .membersSize */
    SessionAuthenticationToken_members  /* .members */
    UA_TYPENAME("SessionAuthenticationToken") /* .typeName */
},
/* SignatureData */
{
    {0, UA_NODEIDTYPE_NUMERIC, {456}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {458}}, /* .binaryEncodingId */
    sizeof(UA_SignatureData), /* .memSize */
    UA_TYPES_SIGNATUREDATA, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    SignatureData_members  /* .members */
    UA_TYPENAME("SignatureData") /* .typeName */
},
/* CreateSessionRequest */
{
    {0, UA_NODEIDTYPE_NUMERIC, {459}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {461}}, /* .binaryEncodingId */
    sizeof(UA_CreateSessionRequest), /* .memSize */
    UA_TYPES_CREATESESSIONREQUEST, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    9, /* .membersSize */
    CreateSessionRequest_members  /* .members */
    UA_TYPENAME("CreateSessionRequest") /* .typeName */
},
/* CreateSessionResponse */
{
    {0, UA_NODEIDTYPE_NUMERIC, {462}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {464}}, /* .binaryEncodingId */
    sizeof(UA_CreateSessionResponse), /* .memSize */
    UA_TYPES_CREATESESSIONRESPONSE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    10, /* .membersSize */
    CreateSessionResponse_members  /* .members */
    UA_TYPENAME("CreateSessionResponse") /* .typeName */
},
/* UserIdentityToken */
{
    {0, UA_NODEIDTYPE_NUMERIC, {316}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {318}}, /* .binaryEncodingId */
    sizeof(UA_UserIdentityToken), /* .memSize */
    UA_TYPES_USERIDENTITYTOKEN, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    1, /* .membersSize */
    UserIdentityToken_members  /* .members */
    UA_TYPENAME("UserIdentityToken") /* .typeName */
},
/* AnonymousIdentityToken */
{
    {0, UA_NODEIDTYPE_NUMERIC, {319}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {321}}, /* .binaryEncodingId */
    sizeof(UA_AnonymousIdentityToken), /* .memSize */
    UA_TYPES_ANONYMOUSIDENTITYTOKEN, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    1, /* .membersSize */
    AnonymousIdentityToken_members  /* .members */
    UA_TYPENAME("AnonymousIdentityToken") /* .typeName */
},
/* UserNameIdentityToken */
{
    {0, UA_NODEIDTYPE_NUMERIC, {322}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {324}}, /* .binaryEncodingId */
    sizeof(UA_UserNameIdentityToken), /* .memSize */
    UA_TYPES_USERNAMEIDENTITYTOKEN, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    4, /* .membersSize */
    UserNameIdentityToken_members  /* .members */
    UA_TYPENAME("UserNameIdentityToken") /* .typeName */
},
/* X509IdentityToken */
{
    {0, UA_NODEIDTYPE_NUMERIC, {325}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {327}}, /* .binaryEncodingId */
    sizeof(UA_X509IdentityToken), /* .memSize */
    UA_TYPES_X509IDENTITYTOKEN, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    X509IdentityToken_members  /* .members */
    UA_TYPENAME("X509IdentityToken") /* .typeName */
},
/* IssuedIdentityToken */
{
    {0, UA_NODEIDTYPE_NUMERIC, {938}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {940}}, /* .binaryEncodingId */
    sizeof(UA_IssuedIdentityToken), /* .memSize */
    UA_TYPES_ISSUEDIDENTITYTOKEN, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    IssuedIdentityToken_members  /* .members */
    UA_TYPENAME("IssuedIdentityToken") /* .typeName */
},
/* RsaEncryptedSecret */
{
    {0, UA_NODEIDTYPE_NUMERIC, {17545}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_RsaEncryptedSecret), /* .memSize */
    UA_TYPES_RSAENCRYPTEDSECRET, /* .typeIndex */
    UA_DATATYPEKIND_BYTESTRING, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    0, /* .membersSize */
    RsaEncryptedSecret_members  /* .members */
    UA_TYPENAME("RsaEncryptedSecret") /* .typeName */
},
/* ActivateSessionRequest */
{
    {0, UA_NODEIDTYPE_NUMERIC, {465}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {467}}, /* .binaryEncodingId */
    sizeof(UA_ActivateSessionRequest), /* .memSize */
    UA_TYPES_ACTIVATESESSIONREQUEST, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    6, /* .membersSize */
    ActivateSessionRequest_members  /* .members */
    UA_TYPENAME("ActivateSessionRequest") /* .typeName */
},
/* ActivateSessionResponse */
{
    {0, UA_NODEIDTYPE_NUMERIC, {468}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {470}}, /* .binaryEncodingId */
    sizeof(UA_ActivateSessionResponse), /* .memSize */
    UA_TYPES_ACTIVATESESSIONRESPONSE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    4, /* .membersSize */
    ActivateSessionResponse_members  /* .members */
    UA_TYPENAME("ActivateSessionResponse") /* .typeName */
},
/* CloseSessionRequest */
{
    {0, UA_NODEIDTYPE_NUMERIC, {471}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {473}}, /* .binaryEncodingId */
    sizeof(UA_CloseSessionRequest), /* .memSize */
    UA_TYPES_CLOSESESSIONREQUEST, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    CloseSessionRequest_members  /* .members */
    UA_TYPENAME("CloseSessionRequest") /* .typeName */
},
/* CloseSessionResponse */
{
    {0, UA_NODEIDTYPE_NUMERIC, {474}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {476}}, /* .binaryEncodingId */
    sizeof(UA_CloseSessionResponse), /* .memSize */
    UA_TYPES_CLOSESESSIONRESPONSE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    1, /* .membersSize */
    CloseSessionResponse_members  /* .members */
    UA_TYPENAME("CloseSessionResponse") /* .typeName */
},
/* CancelRequest */
{
    {0, UA_NODEIDTYPE_NUMERIC, {477}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {479}}, /* .binaryEncodingId */
    sizeof(UA_CancelRequest), /* .memSize */
    UA_TYPES_CANCELREQUEST, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    CancelRequest_members  /* .members */
    UA_TYPENAME("CancelRequest") /* .typeName */
},
/* CancelResponse */
{
    {0, UA_NODEIDTYPE_NUMERIC, {480}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {482}}, /* .binaryEncodingId */
    sizeof(UA_CancelResponse), /* .memSize */
    UA_TYPES_CANCELRESPONSE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    CancelResponse_members  /* .members */
    UA_TYPENAME("CancelResponse") /* .typeName */
},
/* NodeAttributesMask */
{
    {0, UA_NODEIDTYPE_NUMERIC, {348}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_NodeAttributesMask), /* .memSize */
    UA_TYPES_INT32, /* .typeIndex */
    UA_DATATYPEKIND_ENUM, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    NodeAttributesMask_members  /* .members */
    UA_TYPENAME("NodeAttributesMask") /* .typeName */
},
/* NodeAttributes */
{
    {0, UA_NODEIDTYPE_NUMERIC, {349}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {351}}, /* .binaryEncodingId */
    sizeof(UA_NodeAttributes), /* .memSize */
    UA_TYPES_NODEATTRIBUTES, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    5, /* .membersSize */
    NodeAttributes_members  /* .members */
    UA_TYPENAME("NodeAttributes") /* .typeName */
},
/* ObjectAttributes */
{
    {0, UA_NODEIDTYPE_NUMERIC, {352}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {354}}, /* .binaryEncodingId */
    sizeof(UA_ObjectAttributes), /* .memSize */
    UA_TYPES_OBJECTATTRIBUTES, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    6, /* .membersSize */
    ObjectAttributes_members  /* .members */
    UA_TYPENAME("ObjectAttributes") /* .typeName */
},
/* VariableAttributes */
{
    {0, UA_NODEIDTYPE_NUMERIC, {355}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {357}}, /* .binaryEncodingId */
    sizeof(UA_VariableAttributes), /* .memSize */
    UA_TYPES_VARIABLEATTRIBUTES, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    13, /* .membersSize */
    VariableAttributes_members  /* .members */
    UA_TYPENAME("VariableAttributes") /* .typeName */
},
/* MethodAttributes */
{
    {0, UA_NODEIDTYPE_NUMERIC, {358}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {360}}, /* .binaryEncodingId */
    sizeof(UA_MethodAttributes), /* .memSize */
    UA_TYPES_METHODATTRIBUTES, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    7, /* .membersSize */
    MethodAttributes_members  /* .members */
    UA_TYPENAME("MethodAttributes") /* .typeName */
},
/* ObjectTypeAttributes */
{
    {0, UA_NODEIDTYPE_NUMERIC, {361}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {363}}, /* .binaryEncodingId */
    sizeof(UA_ObjectTypeAttributes), /* .memSize */
    UA_TYPES_OBJECTTYPEATTRIBUTES, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    6, /* .membersSize */
    ObjectTypeAttributes_members  /* .members */
    UA_TYPENAME("ObjectTypeAttributes") /* .typeName */
},
/* VariableTypeAttributes */
{
    {0, UA_NODEIDTYPE_NUMERIC, {364}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {366}}, /* .binaryEncodingId */
    sizeof(UA_VariableTypeAttributes), /* .memSize */
    UA_TYPES_VARIABLETYPEATTRIBUTES, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    10, /* .membersSize */
    VariableTypeAttributes_members  /* .members */
    UA_TYPENAME("VariableTypeAttributes") /* .typeName */
},
/* ReferenceTypeAttributes */
{
    {0, UA_NODEIDTYPE_NUMERIC, {367}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {369}}, /* .binaryEncodingId */
    sizeof(UA_ReferenceTypeAttributes), /* .memSize */
    UA_TYPES_REFERENCETYPEATTRIBUTES, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    8, /* .membersSize */
    ReferenceTypeAttributes_members  /* .members */
    UA_TYPENAME("ReferenceTypeAttributes") /* .typeName */
},
/* DataTypeAttributes */
{
    {0, UA_NODEIDTYPE_NUMERIC, {370}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {372}}, /* .binaryEncodingId */
    sizeof(UA_DataTypeAttributes), /* .memSize */
    UA_TYPES_DATATYPEATTRIBUTES, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    6, /* .membersSize */
    DataTypeAttributes_members  /* .members */
    UA_TYPENAME("DataTypeAttributes") /* .typeName */
},
/* ViewAttributes */
{
    {0, UA_NODEIDTYPE_NUMERIC, {373}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {375}}, /* .binaryEncodingId */
    sizeof(UA_ViewAttributes), /* .memSize */
    UA_TYPES_VIEWATTRIBUTES, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    7, /* .membersSize */
    ViewAttributes_members  /* .members */
    UA_TYPENAME("ViewAttributes") /* .typeName */
},
/* GenericAttributeValue */
{
    {0, UA_NODEIDTYPE_NUMERIC, {17606}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {17610}}, /* .binaryEncodingId */
    sizeof(UA_GenericAttributeValue), /* .memSize */
    UA_TYPES_GENERICATTRIBUTEVALUE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    GenericAttributeValue_members  /* .members */
    UA_TYPENAME("GenericAttributeValue") /* .typeName */
},
/* GenericAttributes */
{
    {0, UA_NODEIDTYPE_NUMERIC, {17607}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {17611}}, /* .binaryEncodingId */
    sizeof(UA_GenericAttributes), /* .memSize */
    UA_TYPES_GENERICATTRIBUTES, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    6, /* .membersSize */
    GenericAttributes_members  /* .members */
    UA_TYPENAME("GenericAttributes") /* .typeName */
},
/* AddNodesItem */
{
    {0, UA_NODEIDTYPE_NUMERIC, {376}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {378}}, /* .binaryEncodingId */
    sizeof(UA_AddNodesItem), /* .memSize */
    UA_TYPES_ADDNODESITEM, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    7, /* .membersSize */
    AddNodesItem_members  /* .members */
    UA_TYPENAME("AddNodesItem") /* .typeName */
},
/* AddNodesResult */
{
    {0, UA_NODEIDTYPE_NUMERIC, {483}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {485}}, /* .binaryEncodingId */
    sizeof(UA_AddNodesResult), /* .memSize */
    UA_TYPES_ADDNODESRESULT, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    AddNodesResult_members  /* .members */
    UA_TYPENAME("AddNodesResult") /* .typeName */
},
/* AddNodesRequest */
{
    {0, UA_NODEIDTYPE_NUMERIC, {486}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {488}}, /* .binaryEncodingId */
    sizeof(UA_AddNodesRequest), /* .memSize */
    UA_TYPES_ADDNODESREQUEST, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    AddNodesRequest_members  /* .members */
    UA_TYPENAME("AddNodesRequest") /* .typeName */
},
/* AddNodesResponse */
{
    {0, UA_NODEIDTYPE_NUMERIC, {489}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {491}}, /* .binaryEncodingId */
    sizeof(UA_AddNodesResponse), /* .memSize */
    UA_TYPES_ADDNODESRESPONSE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    AddNodesResponse_members  /* .members */
    UA_TYPENAME("AddNodesResponse") /* .typeName */
},
/* AddReferencesItem */
{
    {0, UA_NODEIDTYPE_NUMERIC, {379}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {381}}, /* .binaryEncodingId */
    sizeof(UA_AddReferencesItem), /* .memSize */
    UA_TYPES_ADDREFERENCESITEM, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    6, /* .membersSize */
    AddReferencesItem_members  /* .members */
    UA_TYPENAME("AddReferencesItem") /* .typeName */
},
/* AddReferencesRequest */
{
    {0, UA_NODEIDTYPE_NUMERIC, {492}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {494}}, /* .binaryEncodingId */
    sizeof(UA_AddReferencesRequest), /* .memSize */
    UA_TYPES_ADDREFERENCESREQUEST, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    AddReferencesRequest_members  /* .members */
    UA_TYPENAME("AddReferencesRequest") /* .typeName */
},
/* AddReferencesResponse */
{
    {0, UA_NODEIDTYPE_NUMERIC, {495}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {497}}, /* .binaryEncodingId */
    sizeof(UA_AddReferencesResponse), /* .memSize */
    UA_TYPES_ADDREFERENCESRESPONSE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    AddReferencesResponse_members  /* .members */
    UA_TYPENAME("AddReferencesResponse") /* .typeName */
},
/* DeleteNodesItem */
{
    {0, UA_NODEIDTYPE_NUMERIC, {382}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {384}}, /* .binaryEncodingId */
    sizeof(UA_DeleteNodesItem), /* .memSize */
    UA_TYPES_DELETENODESITEM, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    DeleteNodesItem_members  /* .members */
    UA_TYPENAME("DeleteNodesItem") /* .typeName */
},
/* DeleteNodesRequest */
{
    {0, UA_NODEIDTYPE_NUMERIC, {498}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {500}}, /* .binaryEncodingId */
    sizeof(UA_DeleteNodesRequest), /* .memSize */
    UA_TYPES_DELETENODESREQUEST, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    DeleteNodesRequest_members  /* .members */
    UA_TYPENAME("DeleteNodesRequest") /* .typeName */
},
/* DeleteNodesResponse */
{
    {0, UA_NODEIDTYPE_NUMERIC, {501}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {503}}, /* .binaryEncodingId */
    sizeof(UA_DeleteNodesResponse), /* .memSize */
    UA_TYPES_DELETENODESRESPONSE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    DeleteNodesResponse_members  /* .members */
    UA_TYPENAME("DeleteNodesResponse") /* .typeName */
},
/* DeleteReferencesItem */
{
    {0, UA_NODEIDTYPE_NUMERIC, {385}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {387}}, /* .binaryEncodingId */
    sizeof(UA_DeleteReferencesItem), /* .memSize */
    UA_TYPES_DELETEREFERENCESITEM, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    5, /* .membersSize */
    DeleteReferencesItem_members  /* .members */
    UA_TYPENAME("DeleteReferencesItem") /* .typeName */
},
/* DeleteReferencesRequest */
{
    {0, UA_NODEIDTYPE_NUMERIC, {504}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {506}}, /* .binaryEncodingId */
    sizeof(UA_DeleteReferencesRequest), /* .memSize */
    UA_TYPES_DELETEREFERENCESREQUEST, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    DeleteReferencesRequest_members  /* .members */
    UA_TYPENAME("DeleteReferencesRequest") /* .typeName */
},
/* DeleteReferencesResponse */
{
    {0, UA_NODEIDTYPE_NUMERIC, {507}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {509}}, /* .binaryEncodingId */
    sizeof(UA_DeleteReferencesResponse), /* .memSize */
    UA_TYPES_DELETEREFERENCESRESPONSE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    DeleteReferencesResponse_members  /* .members */
    UA_TYPENAME("DeleteReferencesResponse") /* .typeName */
},
/* AttributeWriteMask */
{
    {0, UA_NODEIDTYPE_NUMERIC, {347}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_AttributeWriteMask), /* .memSize */
    UA_TYPES_UINT32, /* .typeIndex */
    UA_DATATYPEKIND_UINT32, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    AttributeWriteMask_members  /* .members */
    UA_TYPENAME("AttributeWriteMask") /* .typeName */
},
/* BrowseDirection */
{
    {0, UA_NODEIDTYPE_NUMERIC, {510}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_BrowseDirection), /* .memSize */
    UA_TYPES_INT32, /* .typeIndex */
    UA_DATATYPEKIND_ENUM, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    BrowseDirection_members  /* .members */
    UA_TYPENAME("BrowseDirection") /* .typeName */
},
/* ViewDescription */
{
    {0, UA_NODEIDTYPE_NUMERIC, {511}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {513}}, /* .binaryEncodingId */
    sizeof(UA_ViewDescription), /* .memSize */
    UA_TYPES_VIEWDESCRIPTION, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    ViewDescription_members  /* .members */
    UA_TYPENAME("ViewDescription") /* .typeName */
},
/* BrowseDescription */
{
    {0, UA_NODEIDTYPE_NUMERIC, {514}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {516}}, /* .binaryEncodingId */
    sizeof(UA_BrowseDescription), /* .memSize */
    UA_TYPES_BROWSEDESCRIPTION, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    6, /* .membersSize */
    BrowseDescription_members  /* .members */
    UA_TYPENAME("BrowseDescription") /* .typeName */
},
/* BrowseResultMask */
{
    {0, UA_NODEIDTYPE_NUMERIC, {517}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_BrowseResultMask), /* .memSize */
    UA_TYPES_INT32, /* .typeIndex */
    UA_DATATYPEKIND_ENUM, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    BrowseResultMask_members  /* .members */
    UA_TYPENAME("BrowseResultMask") /* .typeName */
},
/* ReferenceDescription */
{
    {0, UA_NODEIDTYPE_NUMERIC, {518}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {520}}, /* .binaryEncodingId */
    sizeof(UA_ReferenceDescription), /* .memSize */
    UA_TYPES_REFERENCEDESCRIPTION, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    7, /* .membersSize */
    ReferenceDescription_members  /* .members */
    UA_TYPENAME("ReferenceDescription") /* .typeName */
},
/* ContinuationPoint */
{
    {0, UA_NODEIDTYPE_NUMERIC, {521}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_ContinuationPoint), /* .memSize */
    UA_TYPES_CONTINUATIONPOINT, /* .typeIndex */
    UA_DATATYPEKIND_BYTESTRING, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    0, /* .membersSize */
    ContinuationPoint_members  /* .members */
    UA_TYPENAME("ContinuationPoint") /* .typeName */
},
/* BrowseResult */
{
    {0, UA_NODEIDTYPE_NUMERIC, {522}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {524}}, /* .binaryEncodingId */
    sizeof(UA_BrowseResult), /* .memSize */
    UA_TYPES_BROWSERESULT, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    BrowseResult_members  /* .members */
    UA_TYPENAME("BrowseResult") /* .typeName */
},
/* BrowseRequest */
{
    {0, UA_NODEIDTYPE_NUMERIC, {525}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {527}}, /* .binaryEncodingId */
    sizeof(UA_BrowseRequest), /* .memSize */
    UA_TYPES_BROWSEREQUEST, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    4, /* .membersSize */
    BrowseRequest_members  /* .members */
    UA_TYPENAME("BrowseRequest") /* .typeName */
},
/* BrowseResponse */
{
    {0, UA_NODEIDTYPE_NUMERIC, {528}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {530}}, /* .binaryEncodingId */
    sizeof(UA_BrowseResponse), /* .memSize */
    UA_TYPES_BROWSERESPONSE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    BrowseResponse_members  /* .members */
    UA_TYPENAME("BrowseResponse") /* .typeName */
},
/* BrowseNextRequest */
{
    {0, UA_NODEIDTYPE_NUMERIC, {531}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {533}}, /* .binaryEncodingId */
    sizeof(UA_BrowseNextRequest), /* .memSize */
    UA_TYPES_BROWSENEXTREQUEST, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    BrowseNextRequest_members  /* .members */
    UA_TYPENAME("BrowseNextRequest") /* .typeName */
},
/* BrowseNextResponse */
{
    {0, UA_NODEIDTYPE_NUMERIC, {534}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {536}}, /* .binaryEncodingId */
    sizeof(UA_BrowseNextResponse), /* .memSize */
    UA_TYPES_BROWSENEXTRESPONSE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    BrowseNextResponse_members  /* .members */
    UA_TYPENAME("BrowseNextResponse") /* .typeName */
},
/* RelativePathElement */
{
    {0, UA_NODEIDTYPE_NUMERIC, {537}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {539}}, /* .binaryEncodingId */
    sizeof(UA_RelativePathElement), /* .memSize */
    UA_TYPES_RELATIVEPATHELEMENT, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    4, /* .membersSize */
    RelativePathElement_members  /* .members */
    UA_TYPENAME("RelativePathElement") /* .typeName */
},
/* RelativePath */
{
    {0, UA_NODEIDTYPE_NUMERIC, {540}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {542}}, /* .binaryEncodingId */
    sizeof(UA_RelativePath), /* .memSize */
    UA_TYPES_RELATIVEPATH, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    1, /* .membersSize */
    RelativePath_members  /* .members */
    UA_TYPENAME("RelativePath") /* .typeName */
},
/* BrowsePath */
{
    {0, UA_NODEIDTYPE_NUMERIC, {543}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {545}}, /* .binaryEncodingId */
    sizeof(UA_BrowsePath), /* .memSize */
    UA_TYPES_BROWSEPATH, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    BrowsePath_members  /* .members */
    UA_TYPENAME("BrowsePath") /* .typeName */
},
/* BrowsePathTarget */
{
    {0, UA_NODEIDTYPE_NUMERIC, {546}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {548}}, /* .binaryEncodingId */
    sizeof(UA_BrowsePathTarget), /* .memSize */
    UA_TYPES_BROWSEPATHTARGET, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    BrowsePathTarget_members  /* .members */
    UA_TYPENAME("BrowsePathTarget") /* .typeName */
},
/* BrowsePathResult */
{
    {0, UA_NODEIDTYPE_NUMERIC, {549}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {551}}, /* .binaryEncodingId */
    sizeof(UA_BrowsePathResult), /* .memSize */
    UA_TYPES_BROWSEPATHRESULT, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    BrowsePathResult_members  /* .members */
    UA_TYPENAME("BrowsePathResult") /* .typeName */
},
/* TranslateBrowsePathsToNodeIdsRequest */
{
    {0, UA_NODEIDTYPE_NUMERIC, {552}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {554}}, /* .binaryEncodingId */
    sizeof(UA_TranslateBrowsePathsToNodeIdsRequest), /* .memSize */
    UA_TYPES_TRANSLATEBROWSEPATHSTONODEIDSREQUEST, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    TranslateBrowsePathsToNodeIdsRequest_members  /* .members */
    UA_TYPENAME("TranslateBrowsePathsToNodeIdsRequest") /* .typeName */
},
/* TranslateBrowsePathsToNodeIdsResponse */
{
    {0, UA_NODEIDTYPE_NUMERIC, {555}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {557}}, /* .binaryEncodingId */
    sizeof(UA_TranslateBrowsePathsToNodeIdsResponse), /* .memSize */
    UA_TYPES_TRANSLATEBROWSEPATHSTONODEIDSRESPONSE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    TranslateBrowsePathsToNodeIdsResponse_members  /* .members */
    UA_TYPENAME("TranslateBrowsePathsToNodeIdsResponse") /* .typeName */
},
/* RegisterNodesRequest */
{
    {0, UA_NODEIDTYPE_NUMERIC, {558}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {560}}, /* .binaryEncodingId */
    sizeof(UA_RegisterNodesRequest), /* .memSize */
    UA_TYPES_REGISTERNODESREQUEST, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    RegisterNodesRequest_members  /* .members */
    UA_TYPENAME("RegisterNodesRequest") /* .typeName */
},
/* RegisterNodesResponse */
{
    {0, UA_NODEIDTYPE_NUMERIC, {561}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {563}}, /* .binaryEncodingId */
    sizeof(UA_RegisterNodesResponse), /* .memSize */
    UA_TYPES_REGISTERNODESRESPONSE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    RegisterNodesResponse_members  /* .members */
    UA_TYPENAME("RegisterNodesResponse") /* .typeName */
},
/* UnregisterNodesRequest */
{
    {0, UA_NODEIDTYPE_NUMERIC, {564}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {566}}, /* .binaryEncodingId */
    sizeof(UA_UnregisterNodesRequest), /* .memSize */
    UA_TYPES_UNREGISTERNODESREQUEST, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    UnregisterNodesRequest_members  /* .members */
    UA_TYPENAME("UnregisterNodesRequest") /* .typeName */
},
/* UnregisterNodesResponse */
{
    {0, UA_NODEIDTYPE_NUMERIC, {567}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {569}}, /* .binaryEncodingId */
    sizeof(UA_UnregisterNodesResponse), /* .memSize */
    UA_TYPES_UNREGISTERNODESRESPONSE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    1, /* .membersSize */
    UnregisterNodesResponse_members  /* .members */
    UA_TYPENAME("UnregisterNodesResponse") /* .typeName */
},
/* Counter */
{
    {0, UA_NODEIDTYPE_NUMERIC, {289}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_Counter), /* .memSize */
    UA_TYPES_COUNTER, /* .typeIndex */
    UA_DATATYPEKIND_UINT32, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    0, /* .membersSize */
    Counter_members  /* .members */
    UA_TYPENAME("Counter") /* .typeName */
},
/* OpaqueNumericRange */
{
    {0, UA_NODEIDTYPE_NUMERIC, {291}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_OpaqueNumericRange), /* .memSize */
    UA_TYPES_OPAQUENUMERICRANGE, /* .typeIndex */
    UA_DATATYPEKIND_STRING, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    0, /* .membersSize */
    OpaqueNumericRange_members  /* .members */
    UA_TYPENAME("OpaqueNumericRange") /* .typeName */
},
/* Time */
{
    {0, UA_NODEIDTYPE_NUMERIC, {292}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_Time), /* .memSize */
    UA_TYPES_TIME, /* .typeIndex */
    UA_DATATYPEKIND_STRING, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    0, /* .membersSize */
    Time_members  /* .members */
    UA_TYPENAME("Time") /* .typeName */
},
/* Date */
{
    {0, UA_NODEIDTYPE_NUMERIC, {293}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_Date), /* .memSize */
    UA_TYPES_DATE, /* .typeIndex */
    UA_DATATYPEKIND_DATETIME, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    0, /* .membersSize */
    Date_members  /* .members */
    UA_TYPENAME("Date") /* .typeName */
},
/* EndpointConfiguration */
{
    {0, UA_NODEIDTYPE_NUMERIC, {331}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {333}}, /* .binaryEncodingId */
    sizeof(UA_EndpointConfiguration), /* .memSize */
    UA_TYPES_ENDPOINTCONFIGURATION, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    true, /* .pointerFree */
    false, /* .overlayable */
    9, /* .membersSize */
    EndpointConfiguration_members  /* .members */
    UA_TYPENAME("EndpointConfiguration") /* .typeName */
},
/* QueryDataDescription */
{
    {0, UA_NODEIDTYPE_NUMERIC, {570}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {572}}, /* .binaryEncodingId */
    sizeof(UA_QueryDataDescription), /* .memSize */
    UA_TYPES_QUERYDATADESCRIPTION, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    QueryDataDescription_members  /* .members */
    UA_TYPENAME("QueryDataDescription") /* .typeName */
},
/* NodeTypeDescription */
{
    {0, UA_NODEIDTYPE_NUMERIC, {573}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {575}}, /* .binaryEncodingId */
    sizeof(UA_NodeTypeDescription), /* .memSize */
    UA_TYPES_NODETYPEDESCRIPTION, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    NodeTypeDescription_members  /* .members */
    UA_TYPENAME("NodeTypeDescription") /* .typeName */
},
/* FilterOperator */
{
    {0, UA_NODEIDTYPE_NUMERIC, {576}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_FilterOperator), /* .memSize */
    UA_TYPES_INT32, /* .typeIndex */
    UA_DATATYPEKIND_ENUM, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    FilterOperator_members  /* .members */
    UA_TYPENAME("FilterOperator") /* .typeName */
},
/* QueryDataSet */
{
    {0, UA_NODEIDTYPE_NUMERIC, {577}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {579}}, /* .binaryEncodingId */
    sizeof(UA_QueryDataSet), /* .memSize */
    UA_TYPES_QUERYDATASET, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    QueryDataSet_members  /* .members */
    UA_TYPENAME("QueryDataSet") /* .typeName */
},
/* NodeReference */
{
    {0, UA_NODEIDTYPE_NUMERIC, {580}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {582}}, /* .binaryEncodingId */
    sizeof(UA_NodeReference), /* .memSize */
    UA_TYPES_NODEREFERENCE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    4, /* .membersSize */
    NodeReference_members  /* .members */
    UA_TYPENAME("NodeReference") /* .typeName */
},
/* ContentFilterElement */
{
    {0, UA_NODEIDTYPE_NUMERIC, {583}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {585}}, /* .binaryEncodingId */
    sizeof(UA_ContentFilterElement), /* .memSize */
    UA_TYPES_CONTENTFILTERELEMENT, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    ContentFilterElement_members  /* .members */
    UA_TYPENAME("ContentFilterElement") /* .typeName */
},
/* ContentFilter */
{
    {0, UA_NODEIDTYPE_NUMERIC, {586}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {588}}, /* .binaryEncodingId */
    sizeof(UA_ContentFilter), /* .memSize */
    UA_TYPES_CONTENTFILTER, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    1, /* .membersSize */
    ContentFilter_members  /* .members */
    UA_TYPENAME("ContentFilter") /* .typeName */
},
/* FilterOperand */
{
    {0, UA_NODEIDTYPE_NUMERIC, {589}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {591}}, /* .binaryEncodingId */
    sizeof(UA_FilterOperand), /* .memSize */
    UA_TYPES_FILTEROPERAND, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    true, /* .pointerFree */
    false, /* .overlayable */
    0, /* .membersSize */
    FilterOperand_members  /* .members */
    UA_TYPENAME("FilterOperand") /* .typeName */
},
/* ElementOperand */
{
    {0, UA_NODEIDTYPE_NUMERIC, {592}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {594}}, /* .binaryEncodingId */
    sizeof(UA_ElementOperand), /* .memSize */
    UA_TYPES_ELEMENTOPERAND, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    true, /* .pointerFree */
    false, /* .overlayable */
    1, /* .membersSize */
    ElementOperand_members  /* .members */
    UA_TYPENAME("ElementOperand") /* .typeName */
},
/* LiteralOperand */
{
    {0, UA_NODEIDTYPE_NUMERIC, {595}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {597}}, /* .binaryEncodingId */
    sizeof(UA_LiteralOperand), /* .memSize */
    UA_TYPES_LITERALOPERAND, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    1, /* .membersSize */
    LiteralOperand_members  /* .members */
    UA_TYPENAME("LiteralOperand") /* .typeName */
},
/* AttributeOperand */
{
    {0, UA_NODEIDTYPE_NUMERIC, {598}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {600}}, /* .binaryEncodingId */
    sizeof(UA_AttributeOperand), /* .memSize */
    UA_TYPES_ATTRIBUTEOPERAND, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    5, /* .membersSize */
    AttributeOperand_members  /* .members */
    UA_TYPENAME("AttributeOperand") /* .typeName */
},
/* SimpleAttributeOperand */
{
    {0, UA_NODEIDTYPE_NUMERIC, {601}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {603}}, /* .binaryEncodingId */
    sizeof(UA_SimpleAttributeOperand), /* .memSize */
    UA_TYPES_SIMPLEATTRIBUTEOPERAND, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    4, /* .membersSize */
    SimpleAttributeOperand_members  /* .members */
    UA_TYPENAME("SimpleAttributeOperand") /* .typeName */
},
/* ContentFilterElementResult */
{
    {0, UA_NODEIDTYPE_NUMERIC, {604}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {606}}, /* .binaryEncodingId */
    sizeof(UA_ContentFilterElementResult), /* .memSize */
    UA_TYPES_CONTENTFILTERELEMENTRESULT, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    ContentFilterElementResult_members  /* .members */
    UA_TYPENAME("ContentFilterElementResult") /* .typeName */
},
/* ContentFilterResult */
{
    {0, UA_NODEIDTYPE_NUMERIC, {607}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {609}}, /* .binaryEncodingId */
    sizeof(UA_ContentFilterResult), /* .memSize */
    UA_TYPES_CONTENTFILTERRESULT, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    ContentFilterResult_members  /* .members */
    UA_TYPENAME("ContentFilterResult") /* .typeName */
},
/* ParsingResult */
{
    {0, UA_NODEIDTYPE_NUMERIC, {610}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {612}}, /* .binaryEncodingId */
    sizeof(UA_ParsingResult), /* .memSize */
    UA_TYPES_PARSINGRESULT, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    ParsingResult_members  /* .members */
    UA_TYPENAME("ParsingResult") /* .typeName */
},
/* QueryFirstRequest */
{
    {0, UA_NODEIDTYPE_NUMERIC, {613}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {615}}, /* .binaryEncodingId */
    sizeof(UA_QueryFirstRequest), /* .memSize */
    UA_TYPES_QUERYFIRSTREQUEST, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    6, /* .membersSize */
    QueryFirstRequest_members  /* .members */
    UA_TYPENAME("QueryFirstRequest") /* .typeName */
},
/* QueryFirstResponse */
{
    {0, UA_NODEIDTYPE_NUMERIC, {616}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {618}}, /* .binaryEncodingId */
    sizeof(UA_QueryFirstResponse), /* .memSize */
    UA_TYPES_QUERYFIRSTRESPONSE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    6, /* .membersSize */
    QueryFirstResponse_members  /* .members */
    UA_TYPENAME("QueryFirstResponse") /* .typeName */
},
/* QueryNextRequest */
{
    {0, UA_NODEIDTYPE_NUMERIC, {619}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {621}}, /* .binaryEncodingId */
    sizeof(UA_QueryNextRequest), /* .memSize */
    UA_TYPES_QUERYNEXTREQUEST, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    QueryNextRequest_members  /* .members */
    UA_TYPENAME("QueryNextRequest") /* .typeName */
},
/* QueryNextResponse */
{
    {0, UA_NODEIDTYPE_NUMERIC, {622}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {624}}, /* .binaryEncodingId */
    sizeof(UA_QueryNextResponse), /* .memSize */
    UA_TYPES_QUERYNEXTRESPONSE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    QueryNextResponse_members  /* .members */
    UA_TYPENAME("QueryNextResponse") /* .typeName */
},
/* TimestampsToReturn */
{
    {0, UA_NODEIDTYPE_NUMERIC, {625}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_TimestampsToReturn), /* .memSize */
    UA_TYPES_INT32, /* .typeIndex */
    UA_DATATYPEKIND_ENUM, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    TimestampsToReturn_members  /* .members */
    UA_TYPENAME("TimestampsToReturn") /* .typeName */
},
/* ReadValueId */
{
    {0, UA_NODEIDTYPE_NUMERIC, {626}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {628}}, /* .binaryEncodingId */
    sizeof(UA_ReadValueId), /* .memSize */
    UA_TYPES_READVALUEID, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    4, /* .membersSize */
    ReadValueId_members  /* .members */
    UA_TYPENAME("ReadValueId") /* .typeName */
},
/* ReadRequest */
{
    {0, UA_NODEIDTYPE_NUMERIC, {629}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {631}}, /* .binaryEncodingId */
    sizeof(UA_ReadRequest), /* .memSize */
    UA_TYPES_READREQUEST, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    4, /* .membersSize */
    ReadRequest_members  /* .members */
    UA_TYPENAME("ReadRequest") /* .typeName */
},
/* ReadResponse */
{
    {0, UA_NODEIDTYPE_NUMERIC, {632}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {634}}, /* .binaryEncodingId */
    sizeof(UA_ReadResponse), /* .memSize */
    UA_TYPES_READRESPONSE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    ReadResponse_members  /* .members */
    UA_TYPENAME("ReadResponse") /* .typeName */
},
/* HistoryReadValueId */
{
    {0, UA_NODEIDTYPE_NUMERIC, {635}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {637}}, /* .binaryEncodingId */
    sizeof(UA_HistoryReadValueId), /* .memSize */
    UA_TYPES_HISTORYREADVALUEID, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    4, /* .membersSize */
    HistoryReadValueId_members  /* .members */
    UA_TYPENAME("HistoryReadValueId") /* .typeName */
},
/* HistoryReadResult */
{
    {0, UA_NODEIDTYPE_NUMERIC, {638}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {640}}, /* .binaryEncodingId */
    sizeof(UA_HistoryReadResult), /* .memSize */
    UA_TYPES_HISTORYREADRESULT, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    HistoryReadResult_members  /* .members */
    UA_TYPENAME("HistoryReadResult") /* .typeName */
},
/* HistoryReadDetails */
{
    {0, UA_NODEIDTYPE_NUMERIC, {641}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {643}}, /* .binaryEncodingId */
    sizeof(UA_HistoryReadDetails), /* .memSize */
    UA_TYPES_HISTORYREADDETAILS, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    true, /* .pointerFree */
    false, /* .overlayable */
    0, /* .membersSize */
    HistoryReadDetails_members  /* .members */
    UA_TYPENAME("HistoryReadDetails") /* .typeName */
},
/* ReadRawModifiedDetails */
{
    {0, UA_NODEIDTYPE_NUMERIC, {647}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {649}}, /* .binaryEncodingId */
    sizeof(UA_ReadRawModifiedDetails), /* .memSize */
    UA_TYPES_READRAWMODIFIEDDETAILS, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    true, /* .pointerFree */
    false, /* .overlayable */
    5, /* .membersSize */
    ReadRawModifiedDetails_members  /* .members */
    UA_TYPENAME("ReadRawModifiedDetails") /* .typeName */
},
/* ReadAtTimeDetails */
{
    {0, UA_NODEIDTYPE_NUMERIC, {653}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {655}}, /* .binaryEncodingId */
    sizeof(UA_ReadAtTimeDetails), /* .memSize */
    UA_TYPES_READATTIMEDETAILS, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    ReadAtTimeDetails_members  /* .members */
    UA_TYPENAME("ReadAtTimeDetails") /* .typeName */
},
/* ReadAnnotationDataDetails */
{
    {0, UA_NODEIDTYPE_NUMERIC, {23497}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {23500}}, /* .binaryEncodingId */
    sizeof(UA_ReadAnnotationDataDetails), /* .memSize */
    UA_TYPES_READANNOTATIONDATADETAILS, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    1, /* .membersSize */
    ReadAnnotationDataDetails_members  /* .members */
    UA_TYPENAME("ReadAnnotationDataDetails") /* .typeName */
},
/* HistoryData */
{
    {0, UA_NODEIDTYPE_NUMERIC, {656}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {658}}, /* .binaryEncodingId */
    sizeof(UA_HistoryData), /* .memSize */
    UA_TYPES_HISTORYDATA, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    1, /* .membersSize */
    HistoryData_members  /* .members */
    UA_TYPENAME("HistoryData") /* .typeName */
},
/* HistoryReadRequest */
{
    {0, UA_NODEIDTYPE_NUMERIC, {662}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {664}}, /* .binaryEncodingId */
    sizeof(UA_HistoryReadRequest), /* .memSize */
    UA_TYPES_HISTORYREADREQUEST, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    5, /* .membersSize */
    HistoryReadRequest_members  /* .members */
    UA_TYPENAME("HistoryReadRequest") /* .typeName */
},
/* HistoryReadResponse */
{
    {0, UA_NODEIDTYPE_NUMERIC, {665}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {667}}, /* .binaryEncodingId */
    sizeof(UA_HistoryReadResponse), /* .memSize */
    UA_TYPES_HISTORYREADRESPONSE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    HistoryReadResponse_members  /* .members */
    UA_TYPENAME("HistoryReadResponse") /* .typeName */
},
/* WriteValue */
{
    {0, UA_NODEIDTYPE_NUMERIC, {668}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {670}}, /* .binaryEncodingId */
    sizeof(UA_WriteValue), /* .memSize */
    UA_TYPES_WRITEVALUE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    4, /* .membersSize */
    WriteValue_members  /* .members */
    UA_TYPENAME("WriteValue") /* .typeName */
},
/* WriteRequest */
{
    {0, UA_NODEIDTYPE_NUMERIC, {671}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {673}}, /* .binaryEncodingId */
    sizeof(UA_WriteRequest), /* .memSize */
    UA_TYPES_WRITEREQUEST, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    WriteRequest_members  /* .members */
    UA_TYPENAME("WriteRequest") /* .typeName */
},
/* WriteResponse */
{
    {0, UA_NODEIDTYPE_NUMERIC, {674}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {676}}, /* .binaryEncodingId */
    sizeof(UA_WriteResponse), /* .memSize */
    UA_TYPES_WRITERESPONSE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    WriteResponse_members  /* .members */
    UA_TYPENAME("WriteResponse") /* .typeName */
},
/* HistoryUpdateDetails */
{
    {0, UA_NODEIDTYPE_NUMERIC, {677}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {679}}, /* .binaryEncodingId */
    sizeof(UA_HistoryUpdateDetails), /* .memSize */
    UA_TYPES_HISTORYUPDATEDETAILS, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    1, /* .membersSize */
    HistoryUpdateDetails_members  /* .members */
    UA_TYPENAME("HistoryUpdateDetails") /* .typeName */
},
/* HistoryUpdateType */
{
    {0, UA_NODEIDTYPE_NUMERIC, {11234}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_HistoryUpdateType), /* .memSize */
    UA_TYPES_INT32, /* .typeIndex */
    UA_DATATYPEKIND_ENUM, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    HistoryUpdateType_members  /* .members */
    UA_TYPENAME("HistoryUpdateType") /* .typeName */
},
/* PerformUpdateType */
{
    {0, UA_NODEIDTYPE_NUMERIC, {11293}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_PerformUpdateType), /* .memSize */
    UA_TYPES_INT32, /* .typeIndex */
    UA_DATATYPEKIND_ENUM, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    PerformUpdateType_members  /* .members */
    UA_TYPENAME("PerformUpdateType") /* .typeName */
},
/* UpdateDataDetails */
{
    {0, UA_NODEIDTYPE_NUMERIC, {680}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {682}}, /* .binaryEncodingId */
    sizeof(UA_UpdateDataDetails), /* .memSize */
    UA_TYPES_UPDATEDATADETAILS, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    UpdateDataDetails_members  /* .members */
    UA_TYPENAME("UpdateDataDetails") /* .typeName */
},
/* UpdateStructureDataDetails */
{
    {0, UA_NODEIDTYPE_NUMERIC, {11295}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {11300}}, /* .binaryEncodingId */
    sizeof(UA_UpdateStructureDataDetails), /* .memSize */
    UA_TYPES_UPDATESTRUCTUREDATADETAILS, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    UpdateStructureDataDetails_members  /* .members */
    UA_TYPENAME("UpdateStructureDataDetails") /* .typeName */
},
/* DeleteRawModifiedDetails */
{
    {0, UA_NODEIDTYPE_NUMERIC, {686}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {688}}, /* .binaryEncodingId */
    sizeof(UA_DeleteRawModifiedDetails), /* .memSize */
    UA_TYPES_DELETERAWMODIFIEDDETAILS, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    4, /* .membersSize */
    DeleteRawModifiedDetails_members  /* .members */
    UA_TYPENAME("DeleteRawModifiedDetails") /* .typeName */
},
/* DeleteAtTimeDetails */
{
    {0, UA_NODEIDTYPE_NUMERIC, {689}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {691}}, /* .binaryEncodingId */
    sizeof(UA_DeleteAtTimeDetails), /* .memSize */
    UA_TYPES_DELETEATTIMEDETAILS, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    DeleteAtTimeDetails_members  /* .members */
    UA_TYPENAME("DeleteAtTimeDetails") /* .typeName */
},
/* DeleteEventDetails */
{
    {0, UA_NODEIDTYPE_NUMERIC, {692}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {694}}, /* .binaryEncodingId */
    sizeof(UA_DeleteEventDetails), /* .memSize */
    UA_TYPES_DELETEEVENTDETAILS, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    DeleteEventDetails_members  /* .members */
    UA_TYPENAME("DeleteEventDetails") /* .typeName */
},
/* HistoryUpdateResult */
{
    {0, UA_NODEIDTYPE_NUMERIC, {695}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {697}}, /* .binaryEncodingId */
    sizeof(UA_HistoryUpdateResult), /* .memSize */
    UA_TYPES_HISTORYUPDATERESULT, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    HistoryUpdateResult_members  /* .members */
    UA_TYPENAME("HistoryUpdateResult") /* .typeName */
},
/* HistoryUpdateRequest */
{
    {0, UA_NODEIDTYPE_NUMERIC, {698}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {700}}, /* .binaryEncodingId */
    sizeof(UA_HistoryUpdateRequest), /* .memSize */
    UA_TYPES_HISTORYUPDATEREQUEST, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    HistoryUpdateRequest_members  /* .members */
    UA_TYPENAME("HistoryUpdateRequest") /* .typeName */
},
/* HistoryUpdateResponse */
{
    {0, UA_NODEIDTYPE_NUMERIC, {701}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {703}}, /* .binaryEncodingId */
    sizeof(UA_HistoryUpdateResponse), /* .memSize */
    UA_TYPES_HISTORYUPDATERESPONSE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    HistoryUpdateResponse_members  /* .members */
    UA_TYPENAME("HistoryUpdateResponse") /* .typeName */
},
/* CallMethodRequest */
{
    {0, UA_NODEIDTYPE_NUMERIC, {704}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {706}}, /* .binaryEncodingId */
    sizeof(UA_CallMethodRequest), /* .memSize */
    UA_TYPES_CALLMETHODREQUEST, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    CallMethodRequest_members  /* .members */
    UA_TYPENAME("CallMethodRequest") /* .typeName */
},
/* CallMethodResult */
{
    {0, UA_NODEIDTYPE_NUMERIC, {707}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {709}}, /* .binaryEncodingId */
    sizeof(UA_CallMethodResult), /* .memSize */
    UA_TYPES_CALLMETHODRESULT, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    4, /* .membersSize */
    CallMethodResult_members  /* .members */
    UA_TYPENAME("CallMethodResult") /* .typeName */
},
/* CallRequest */
{
    {0, UA_NODEIDTYPE_NUMERIC, {710}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {712}}, /* .binaryEncodingId */
    sizeof(UA_CallRequest), /* .memSize */
    UA_TYPES_CALLREQUEST, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    CallRequest_members  /* .members */
    UA_TYPENAME("CallRequest") /* .typeName */
},
/* CallResponse */
{
    {0, UA_NODEIDTYPE_NUMERIC, {713}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {715}}, /* .binaryEncodingId */
    sizeof(UA_CallResponse), /* .memSize */
    UA_TYPES_CALLRESPONSE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    CallResponse_members  /* .members */
    UA_TYPENAME("CallResponse") /* .typeName */
},
/* MonitoringMode */
{
    {0, UA_NODEIDTYPE_NUMERIC, {716}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_MonitoringMode), /* .memSize */
    UA_TYPES_INT32, /* .typeIndex */
    UA_DATATYPEKIND_ENUM, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    MonitoringMode_members  /* .members */
    UA_TYPENAME("MonitoringMode") /* .typeName */
},
/* DataChangeTrigger */
{
    {0, UA_NODEIDTYPE_NUMERIC, {717}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_DataChangeTrigger), /* .memSize */
    UA_TYPES_INT32, /* .typeIndex */
    UA_DATATYPEKIND_ENUM, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    DataChangeTrigger_members  /* .members */
    UA_TYPENAME("DataChangeTrigger") /* .typeName */
},
/* DeadbandType */
{
    {0, UA_NODEIDTYPE_NUMERIC, {718}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_DeadbandType), /* .memSize */
    UA_TYPES_INT32, /* .typeIndex */
    UA_DATATYPEKIND_ENUM, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    DeadbandType_members  /* .members */
    UA_TYPENAME("DeadbandType") /* .typeName */
},
/* MonitoringFilter */
{
    {0, UA_NODEIDTYPE_NUMERIC, {719}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {721}}, /* .binaryEncodingId */
    sizeof(UA_MonitoringFilter), /* .memSize */
    UA_TYPES_MONITORINGFILTER, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    true, /* .pointerFree */
    false, /* .overlayable */
    0, /* .membersSize */
    MonitoringFilter_members  /* .members */
    UA_TYPENAME("MonitoringFilter") /* .typeName */
},
/* DataChangeFilter */
{
    {0, UA_NODEIDTYPE_NUMERIC, {722}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {724}}, /* .binaryEncodingId */
    sizeof(UA_DataChangeFilter), /* .memSize */
    UA_TYPES_DATACHANGEFILTER, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    true, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    DataChangeFilter_members  /* .members */
    UA_TYPENAME("DataChangeFilter") /* .typeName */
},
/* EventFilter */
{
    {0, UA_NODEIDTYPE_NUMERIC, {725}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {727}}, /* .binaryEncodingId */
    sizeof(UA_EventFilter), /* .memSize */
    UA_TYPES_EVENTFILTER, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    EventFilter_members  /* .members */
    UA_TYPENAME("EventFilter") /* .typeName */
},
/* AggregateConfiguration */
{
    {0, UA_NODEIDTYPE_NUMERIC, {948}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {950}}, /* .binaryEncodingId */
    sizeof(UA_AggregateConfiguration), /* .memSize */
    UA_TYPES_AGGREGATECONFIGURATION, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    true, /* .pointerFree */
    false, /* .overlayable */
    5, /* .membersSize */
    AggregateConfiguration_members  /* .members */
    UA_TYPENAME("AggregateConfiguration") /* .typeName */
},
/* AggregateFilter */
{
    {0, UA_NODEIDTYPE_NUMERIC, {728}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {730}}, /* .binaryEncodingId */
    sizeof(UA_AggregateFilter), /* .memSize */
    UA_TYPES_AGGREGATEFILTER, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    4, /* .membersSize */
    AggregateFilter_members  /* .members */
    UA_TYPENAME("AggregateFilter") /* .typeName */
},
/* MonitoringFilterResult */
{
    {0, UA_NODEIDTYPE_NUMERIC, {731}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {733}}, /* .binaryEncodingId */
    sizeof(UA_MonitoringFilterResult), /* .memSize */
    UA_TYPES_MONITORINGFILTERRESULT, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    true, /* .pointerFree */
    false, /* .overlayable */
    0, /* .membersSize */
    MonitoringFilterResult_members  /* .members */
    UA_TYPENAME("MonitoringFilterResult") /* .typeName */
},
/* EventFilterResult */
{
    {0, UA_NODEIDTYPE_NUMERIC, {734}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {736}}, /* .binaryEncodingId */
    sizeof(UA_EventFilterResult), /* .memSize */
    UA_TYPES_EVENTFILTERRESULT, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    EventFilterResult_members  /* .members */
    UA_TYPENAME("EventFilterResult") /* .typeName */
},
/* AggregateFilterResult */
{
    {0, UA_NODEIDTYPE_NUMERIC, {737}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {739}}, /* .binaryEncodingId */
    sizeof(UA_AggregateFilterResult), /* .memSize */
    UA_TYPES_AGGREGATEFILTERRESULT, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    true, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    AggregateFilterResult_members  /* .members */
    UA_TYPENAME("AggregateFilterResult") /* .typeName */
},
/* MonitoringParameters */
{
    {0, UA_NODEIDTYPE_NUMERIC, {740}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {742}}, /* .binaryEncodingId */
    sizeof(UA_MonitoringParameters), /* .memSize */
    UA_TYPES_MONITORINGPARAMETERS, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    5, /* .membersSize */
    MonitoringParameters_members  /* .members */
    UA_TYPENAME("MonitoringParameters") /* .typeName */
},
/* MonitoredItemCreateRequest */
{
    {0, UA_NODEIDTYPE_NUMERIC, {743}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {745}}, /* .binaryEncodingId */
    sizeof(UA_MonitoredItemCreateRequest), /* .memSize */
    UA_TYPES_MONITOREDITEMCREATEREQUEST, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    MonitoredItemCreateRequest_members  /* .members */
    UA_TYPENAME("MonitoredItemCreateRequest") /* .typeName */
},
/* MonitoredItemCreateResult */
{
    {0, UA_NODEIDTYPE_NUMERIC, {746}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {748}}, /* .binaryEncodingId */
    sizeof(UA_MonitoredItemCreateResult), /* .memSize */
    UA_TYPES_MONITOREDITEMCREATERESULT, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    5, /* .membersSize */
    MonitoredItemCreateResult_members  /* .members */
    UA_TYPENAME("MonitoredItemCreateResult") /* .typeName */
},
/* CreateMonitoredItemsRequest */
{
    {0, UA_NODEIDTYPE_NUMERIC, {749}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {751}}, /* .binaryEncodingId */
    sizeof(UA_CreateMonitoredItemsRequest), /* .memSize */
    UA_TYPES_CREATEMONITOREDITEMSREQUEST, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    4, /* .membersSize */
    CreateMonitoredItemsRequest_members  /* .members */
    UA_TYPENAME("CreateMonitoredItemsRequest") /* .typeName */
},
/* CreateMonitoredItemsResponse */
{
    {0, UA_NODEIDTYPE_NUMERIC, {752}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {754}}, /* .binaryEncodingId */
    sizeof(UA_CreateMonitoredItemsResponse), /* .memSize */
    UA_TYPES_CREATEMONITOREDITEMSRESPONSE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    CreateMonitoredItemsResponse_members  /* .members */
    UA_TYPENAME("CreateMonitoredItemsResponse") /* .typeName */
},
/* MonitoredItemModifyRequest */
{
    {0, UA_NODEIDTYPE_NUMERIC, {755}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {757}}, /* .binaryEncodingId */
    sizeof(UA_MonitoredItemModifyRequest), /* .memSize */
    UA_TYPES_MONITOREDITEMMODIFYREQUEST, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    MonitoredItemModifyRequest_members  /* .members */
    UA_TYPENAME("MonitoredItemModifyRequest") /* .typeName */
},
/* MonitoredItemModifyResult */
{
    {0, UA_NODEIDTYPE_NUMERIC, {758}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {760}}, /* .binaryEncodingId */
    sizeof(UA_MonitoredItemModifyResult), /* .memSize */
    UA_TYPES_MONITOREDITEMMODIFYRESULT, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    4, /* .membersSize */
    MonitoredItemModifyResult_members  /* .members */
    UA_TYPENAME("MonitoredItemModifyResult") /* .typeName */
},
/* ModifyMonitoredItemsRequest */
{
    {0, UA_NODEIDTYPE_NUMERIC, {761}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {763}}, /* .binaryEncodingId */
    sizeof(UA_ModifyMonitoredItemsRequest), /* .memSize */
    UA_TYPES_MODIFYMONITOREDITEMSREQUEST, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    4, /* .membersSize */
    ModifyMonitoredItemsRequest_members  /* .members */
    UA_TYPENAME("ModifyMonitoredItemsRequest") /* .typeName */
},
/* ModifyMonitoredItemsResponse */
{
    {0, UA_NODEIDTYPE_NUMERIC, {764}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {766}}, /* .binaryEncodingId */
    sizeof(UA_ModifyMonitoredItemsResponse), /* .memSize */
    UA_TYPES_MODIFYMONITOREDITEMSRESPONSE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    ModifyMonitoredItemsResponse_members  /* .members */
    UA_TYPENAME("ModifyMonitoredItemsResponse") /* .typeName */
},
/* SetMonitoringModeRequest */
{
    {0, UA_NODEIDTYPE_NUMERIC, {767}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {769}}, /* .binaryEncodingId */
    sizeof(UA_SetMonitoringModeRequest), /* .memSize */
    UA_TYPES_SETMONITORINGMODEREQUEST, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    4, /* .membersSize */
    SetMonitoringModeRequest_members  /* .members */
    UA_TYPENAME("SetMonitoringModeRequest") /* .typeName */
},
/* SetMonitoringModeResponse */
{
    {0, UA_NODEIDTYPE_NUMERIC, {770}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {772}}, /* .binaryEncodingId */
    sizeof(UA_SetMonitoringModeResponse), /* .memSize */
    UA_TYPES_SETMONITORINGMODERESPONSE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    SetMonitoringModeResponse_members  /* .members */
    UA_TYPENAME("SetMonitoringModeResponse") /* .typeName */
},
/* SetTriggeringRequest */
{
    {0, UA_NODEIDTYPE_NUMERIC, {773}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {775}}, /* .binaryEncodingId */
    sizeof(UA_SetTriggeringRequest), /* .memSize */
    UA_TYPES_SETTRIGGERINGREQUEST, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    5, /* .membersSize */
    SetTriggeringRequest_members  /* .members */
    UA_TYPENAME("SetTriggeringRequest") /* .typeName */
},
/* SetTriggeringResponse */
{
    {0, UA_NODEIDTYPE_NUMERIC, {776}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {778}}, /* .binaryEncodingId */
    sizeof(UA_SetTriggeringResponse), /* .memSize */
    UA_TYPES_SETTRIGGERINGRESPONSE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    5, /* .membersSize */
    SetTriggeringResponse_members  /* .members */
    UA_TYPENAME("SetTriggeringResponse") /* .typeName */
},
/* DeleteMonitoredItemsRequest */
{
    {0, UA_NODEIDTYPE_NUMERIC, {779}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {781}}, /* .binaryEncodingId */
    sizeof(UA_DeleteMonitoredItemsRequest), /* .memSize */
    UA_TYPES_DELETEMONITOREDITEMSREQUEST, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    DeleteMonitoredItemsRequest_members  /* .members */
    UA_TYPENAME("DeleteMonitoredItemsRequest") /* .typeName */
},
/* DeleteMonitoredItemsResponse */
{
    {0, UA_NODEIDTYPE_NUMERIC, {782}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {784}}, /* .binaryEncodingId */
    sizeof(UA_DeleteMonitoredItemsResponse), /* .memSize */
    UA_TYPES_DELETEMONITOREDITEMSRESPONSE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    DeleteMonitoredItemsResponse_members  /* .members */
    UA_TYPENAME("DeleteMonitoredItemsResponse") /* .typeName */
},
/* CreateSubscriptionRequest */
{
    {0, UA_NODEIDTYPE_NUMERIC, {785}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {787}}, /* .binaryEncodingId */
    sizeof(UA_CreateSubscriptionRequest), /* .memSize */
    UA_TYPES_CREATESUBSCRIPTIONREQUEST, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    7, /* .membersSize */
    CreateSubscriptionRequest_members  /* .members */
    UA_TYPENAME("CreateSubscriptionRequest") /* .typeName */
},
/* CreateSubscriptionResponse */
{
    {0, UA_NODEIDTYPE_NUMERIC, {788}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {790}}, /* .binaryEncodingId */
    sizeof(UA_CreateSubscriptionResponse), /* .memSize */
    UA_TYPES_CREATESUBSCRIPTIONRESPONSE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    5, /* .membersSize */
    CreateSubscriptionResponse_members  /* .members */
    UA_TYPENAME("CreateSubscriptionResponse") /* .typeName */
},
/* ModifySubscriptionRequest */
{
    {0, UA_NODEIDTYPE_NUMERIC, {791}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {793}}, /* .binaryEncodingId */
    sizeof(UA_ModifySubscriptionRequest), /* .memSize */
    UA_TYPES_MODIFYSUBSCRIPTIONREQUEST, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    7, /* .membersSize */
    ModifySubscriptionRequest_members  /* .members */
    UA_TYPENAME("ModifySubscriptionRequest") /* .typeName */
},
/* ModifySubscriptionResponse */
{
    {0, UA_NODEIDTYPE_NUMERIC, {794}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {796}}, /* .binaryEncodingId */
    sizeof(UA_ModifySubscriptionResponse), /* .memSize */
    UA_TYPES_MODIFYSUBSCRIPTIONRESPONSE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    4, /* .membersSize */
    ModifySubscriptionResponse_members  /* .members */
    UA_TYPENAME("ModifySubscriptionResponse") /* .typeName */
},
/* SetPublishingModeRequest */
{
    {0, UA_NODEIDTYPE_NUMERIC, {797}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {799}}, /* .binaryEncodingId */
    sizeof(UA_SetPublishingModeRequest), /* .memSize */
    UA_TYPES_SETPUBLISHINGMODEREQUEST, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    SetPublishingModeRequest_members  /* .members */
    UA_TYPENAME("SetPublishingModeRequest") /* .typeName */
},
/* SetPublishingModeResponse */
{
    {0, UA_NODEIDTYPE_NUMERIC, {800}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {802}}, /* .binaryEncodingId */
    sizeof(UA_SetPublishingModeResponse), /* .memSize */
    UA_TYPES_SETPUBLISHINGMODERESPONSE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    SetPublishingModeResponse_members  /* .members */
    UA_TYPENAME("SetPublishingModeResponse") /* .typeName */
},
/* NotificationMessage */
{
    {0, UA_NODEIDTYPE_NUMERIC, {803}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {805}}, /* .binaryEncodingId */
    sizeof(UA_NotificationMessage), /* .memSize */
    UA_TYPES_NOTIFICATIONMESSAGE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    NotificationMessage_members  /* .members */
    UA_TYPENAME("NotificationMessage") /* .typeName */
},
/* NotificationData */
{
    {0, UA_NODEIDTYPE_NUMERIC, {945}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {947}}, /* .binaryEncodingId */
    sizeof(UA_NotificationData), /* .memSize */
    UA_TYPES_NOTIFICATIONDATA, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    true, /* .pointerFree */
    false, /* .overlayable */
    0, /* .membersSize */
    NotificationData_members  /* .members */
    UA_TYPENAME("NotificationData") /* .typeName */
},
/* MonitoredItemNotification */
{
    {0, UA_NODEIDTYPE_NUMERIC, {806}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {808}}, /* .binaryEncodingId */
    sizeof(UA_MonitoredItemNotification), /* .memSize */
    UA_TYPES_MONITOREDITEMNOTIFICATION, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    MonitoredItemNotification_members  /* .members */
    UA_TYPENAME("MonitoredItemNotification") /* .typeName */
},
/* EventFieldList */
{
    {0, UA_NODEIDTYPE_NUMERIC, {917}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {919}}, /* .binaryEncodingId */
    sizeof(UA_EventFieldList), /* .memSize */
    UA_TYPES_EVENTFIELDLIST, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    EventFieldList_members  /* .members */
    UA_TYPENAME("EventFieldList") /* .typeName */
},
/* HistoryEventFieldList */
{
    {0, UA_NODEIDTYPE_NUMERIC, {920}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {922}}, /* .binaryEncodingId */
    sizeof(UA_HistoryEventFieldList), /* .memSize */
    UA_TYPES_HISTORYEVENTFIELDLIST, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    1, /* .membersSize */
    HistoryEventFieldList_members  /* .members */
    UA_TYPENAME("HistoryEventFieldList") /* .typeName */
},
/* StatusChangeNotification */
{
    {0, UA_NODEIDTYPE_NUMERIC, {818}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {820}}, /* .binaryEncodingId */
    sizeof(UA_StatusChangeNotification), /* .memSize */
    UA_TYPES_STATUSCHANGENOTIFICATION, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    StatusChangeNotification_members  /* .members */
    UA_TYPENAME("StatusChangeNotification") /* .typeName */
},
/* SubscriptionAcknowledgement */
{
    {0, UA_NODEIDTYPE_NUMERIC, {821}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {823}}, /* .binaryEncodingId */
    sizeof(UA_SubscriptionAcknowledgement), /* .memSize */
    UA_TYPES_SUBSCRIPTIONACKNOWLEDGEMENT, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    true, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    SubscriptionAcknowledgement_members  /* .members */
    UA_TYPENAME("SubscriptionAcknowledgement") /* .typeName */
},
/* PublishRequest */
{
    {0, UA_NODEIDTYPE_NUMERIC, {824}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {826}}, /* .binaryEncodingId */
    sizeof(UA_PublishRequest), /* .memSize */
    UA_TYPES_PUBLISHREQUEST, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    PublishRequest_members  /* .members */
    UA_TYPENAME("PublishRequest") /* .typeName */
},
/* PublishResponse */
{
    {0, UA_NODEIDTYPE_NUMERIC, {827}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {829}}, /* .binaryEncodingId */
    sizeof(UA_PublishResponse), /* .memSize */
    UA_TYPES_PUBLISHRESPONSE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    7, /* .membersSize */
    PublishResponse_members  /* .members */
    UA_TYPENAME("PublishResponse") /* .typeName */
},
/* RepublishRequest */
{
    {0, UA_NODEIDTYPE_NUMERIC, {830}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {832}}, /* .binaryEncodingId */
    sizeof(UA_RepublishRequest), /* .memSize */
    UA_TYPES_REPUBLISHREQUEST, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    RepublishRequest_members  /* .members */
    UA_TYPENAME("RepublishRequest") /* .typeName */
},
/* RepublishResponse */
{
    {0, UA_NODEIDTYPE_NUMERIC, {833}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {835}}, /* .binaryEncodingId */
    sizeof(UA_RepublishResponse), /* .memSize */
    UA_TYPES_REPUBLISHRESPONSE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    RepublishResponse_members  /* .members */
    UA_TYPENAME("RepublishResponse") /* .typeName */
},
/* TransferResult */
{
    {0, UA_NODEIDTYPE_NUMERIC, {836}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {838}}, /* .binaryEncodingId */
    sizeof(UA_TransferResult), /* .memSize */
    UA_TYPES_TRANSFERRESULT, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    TransferResult_members  /* .members */
    UA_TYPENAME("TransferResult") /* .typeName */
},
/* TransferSubscriptionsRequest */
{
    {0, UA_NODEIDTYPE_NUMERIC, {839}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {841}}, /* .binaryEncodingId */
    sizeof(UA_TransferSubscriptionsRequest), /* .memSize */
    UA_TYPES_TRANSFERSUBSCRIPTIONSREQUEST, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    TransferSubscriptionsRequest_members  /* .members */
    UA_TYPENAME("TransferSubscriptionsRequest") /* .typeName */
},
/* TransferSubscriptionsResponse */
{
    {0, UA_NODEIDTYPE_NUMERIC, {842}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {844}}, /* .binaryEncodingId */
    sizeof(UA_TransferSubscriptionsResponse), /* .memSize */
    UA_TYPES_TRANSFERSUBSCRIPTIONSRESPONSE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    TransferSubscriptionsResponse_members  /* .members */
    UA_TYPENAME("TransferSubscriptionsResponse") /* .typeName */
},
/* DeleteSubscriptionsRequest */
{
    {0, UA_NODEIDTYPE_NUMERIC, {845}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {847}}, /* .binaryEncodingId */
    sizeof(UA_DeleteSubscriptionsRequest), /* .memSize */
    UA_TYPES_DELETESUBSCRIPTIONSREQUEST, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    DeleteSubscriptionsRequest_members  /* .members */
    UA_TYPENAME("DeleteSubscriptionsRequest") /* .typeName */
},
/* DeleteSubscriptionsResponse */
{
    {0, UA_NODEIDTYPE_NUMERIC, {848}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {850}}, /* .binaryEncodingId */
    sizeof(UA_DeleteSubscriptionsResponse), /* .memSize */
    UA_TYPES_DELETESUBSCRIPTIONSRESPONSE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    DeleteSubscriptionsResponse_members  /* .members */
    UA_TYPENAME("DeleteSubscriptionsResponse") /* .typeName */
},
/* BuildInfo */
{
    {0, UA_NODEIDTYPE_NUMERIC, {338}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {340}}, /* .binaryEncodingId */
    sizeof(UA_BuildInfo), /* .memSize */
    UA_TYPES_BUILDINFO, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    6, /* .membersSize */
    BuildInfo_members  /* .members */
    UA_TYPENAME("BuildInfo") /* .typeName */
},
/* RedundancySupport */
{
    {0, UA_NODEIDTYPE_NUMERIC, {851}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_RedundancySupport), /* .memSize */
    UA_TYPES_INT32, /* .typeIndex */
    UA_DATATYPEKIND_ENUM, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    RedundancySupport_members  /* .members */
    UA_TYPENAME("RedundancySupport") /* .typeName */
},
/* ServerState */
{
    {0, UA_NODEIDTYPE_NUMERIC, {852}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_ServerState), /* .memSize */
    UA_TYPES_INT32, /* .typeIndex */
    UA_DATATYPEKIND_ENUM, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    ServerState_members  /* .members */
    UA_TYPENAME("ServerState") /* .typeName */
},
/* RedundantServerDataType */
{
    {0, UA_NODEIDTYPE_NUMERIC, {853}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {855}}, /* .binaryEncodingId */
    sizeof(UA_RedundantServerDataType), /* .memSize */
    UA_TYPES_REDUNDANTSERVERDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    RedundantServerDataType_members  /* .members */
    UA_TYPENAME("RedundantServerDataType") /* .typeName */
},
/* EndpointUrlListDataType */
{
    {0, UA_NODEIDTYPE_NUMERIC, {11943}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {11957}}, /* .binaryEncodingId */
    sizeof(UA_EndpointUrlListDataType), /* .memSize */
    UA_TYPES_ENDPOINTURLLISTDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    1, /* .membersSize */
    EndpointUrlListDataType_members  /* .members */
    UA_TYPENAME("EndpointUrlListDataType") /* .typeName */
},
/* NetworkGroupDataType */
{
    {0, UA_NODEIDTYPE_NUMERIC, {11944}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {11958}}, /* .binaryEncodingId */
    sizeof(UA_NetworkGroupDataType), /* .memSize */
    UA_TYPES_NETWORKGROUPDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    NetworkGroupDataType_members  /* .members */
    UA_TYPENAME("NetworkGroupDataType") /* .typeName */
},
/* SamplingIntervalDiagnosticsDataType */
{
    {0, UA_NODEIDTYPE_NUMERIC, {856}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {858}}, /* .binaryEncodingId */
    sizeof(UA_SamplingIntervalDiagnosticsDataType), /* .memSize */
    UA_TYPES_SAMPLINGINTERVALDIAGNOSTICSDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    true, /* .pointerFree */
    false, /* .overlayable */
    4, /* .membersSize */
    SamplingIntervalDiagnosticsDataType_members  /* .members */
    UA_TYPENAME("SamplingIntervalDiagnosticsDataType") /* .typeName */
},
/* ServerDiagnosticsSummaryDataType */
{
    {0, UA_NODEIDTYPE_NUMERIC, {859}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {861}}, /* .binaryEncodingId */
    sizeof(UA_ServerDiagnosticsSummaryDataType), /* .memSize */
    UA_TYPES_SERVERDIAGNOSTICSSUMMARYDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    true, /* .pointerFree */
    false, /* .overlayable */
    12, /* .membersSize */
    ServerDiagnosticsSummaryDataType_members  /* .members */
    UA_TYPENAME("ServerDiagnosticsSummaryDataType") /* .typeName */
},
/* ServerStatusDataType */
{
    {0, UA_NODEIDTYPE_NUMERIC, {862}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {864}}, /* .binaryEncodingId */
    sizeof(UA_ServerStatusDataType), /* .memSize */
    UA_TYPES_SERVERSTATUSDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    6, /* .membersSize */
    ServerStatusDataType_members  /* .members */
    UA_TYPENAME("ServerStatusDataType") /* .typeName */
},
/* SessionSecurityDiagnosticsDataType */
{
    {0, UA_NODEIDTYPE_NUMERIC, {868}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {870}}, /* .binaryEncodingId */
    sizeof(UA_SessionSecurityDiagnosticsDataType), /* .memSize */
    UA_TYPES_SESSIONSECURITYDIAGNOSTICSDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    9, /* .membersSize */
    SessionSecurityDiagnosticsDataType_members  /* .members */
    UA_TYPENAME("SessionSecurityDiagnosticsDataType") /* .typeName */
},
/* ServiceCounterDataType */
{
    {0, UA_NODEIDTYPE_NUMERIC, {871}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {873}}, /* .binaryEncodingId */
    sizeof(UA_ServiceCounterDataType), /* .memSize */
    UA_TYPES_SERVICECOUNTERDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    true, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    ServiceCounterDataType_members  /* .members */
    UA_TYPENAME("ServiceCounterDataType") /* .typeName */
},
/* StatusResult */
{
    {0, UA_NODEIDTYPE_NUMERIC, {299}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {301}}, /* .binaryEncodingId */
    sizeof(UA_StatusResult), /* .memSize */
    UA_TYPES_STATUSRESULT, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    StatusResult_members  /* .members */
    UA_TYPENAME("StatusResult") /* .typeName */
},
/* SubscriptionDiagnosticsDataType */
{
    {0, UA_NODEIDTYPE_NUMERIC, {874}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {876}}, /* .binaryEncodingId */
    sizeof(UA_SubscriptionDiagnosticsDataType), /* .memSize */
    UA_TYPES_SUBSCRIPTIONDIAGNOSTICSDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    31, /* .membersSize */
    SubscriptionDiagnosticsDataType_members  /* .members */
    UA_TYPENAME("SubscriptionDiagnosticsDataType") /* .typeName */
},
/* ModelChangeStructureVerbMask */
{
    {0, UA_NODEIDTYPE_NUMERIC, {11941}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_ModelChangeStructureVerbMask), /* .memSize */
    UA_TYPES_INT32, /* .typeIndex */
    UA_DATATYPEKIND_ENUM, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    ModelChangeStructureVerbMask_members  /* .members */
    UA_TYPENAME("ModelChangeStructureVerbMask") /* .typeName */
},
/* ModelChangeStructureDataType */
{
    {0, UA_NODEIDTYPE_NUMERIC, {877}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {879}}, /* .binaryEncodingId */
    sizeof(UA_ModelChangeStructureDataType), /* .memSize */
    UA_TYPES_MODELCHANGESTRUCTUREDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    ModelChangeStructureDataType_members  /* .members */
    UA_TYPENAME("ModelChangeStructureDataType") /* .typeName */
},
/* SemanticChangeStructureDataType */
{
    {0, UA_NODEIDTYPE_NUMERIC, {897}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {899}}, /* .binaryEncodingId */
    sizeof(UA_SemanticChangeStructureDataType), /* .memSize */
    UA_TYPES_SEMANTICCHANGESTRUCTUREDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    SemanticChangeStructureDataType_members  /* .members */
    UA_TYPENAME("SemanticChangeStructureDataType") /* .typeName */
},
/* Range */
{
    {0, UA_NODEIDTYPE_NUMERIC, {884}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {886}}, /* .binaryEncodingId */
    sizeof(UA_Range), /* .memSize */
    UA_TYPES_RANGE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    true, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    Range_members  /* .members */
    UA_TYPENAME("Range") /* .typeName */
},
/* EUInformation */
{
    {0, UA_NODEIDTYPE_NUMERIC, {887}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {889}}, /* .binaryEncodingId */
    sizeof(UA_EUInformation), /* .memSize */
    UA_TYPES_EUINFORMATION, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    4, /* .membersSize */
    EUInformation_members  /* .members */
    UA_TYPENAME("EUInformation") /* .typeName */
},
/* AxisScaleEnumeration */
{
    {0, UA_NODEIDTYPE_NUMERIC, {12077}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_AxisScaleEnumeration), /* .memSize */
    UA_TYPES_INT32, /* .typeIndex */
    UA_DATATYPEKIND_ENUM, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    AxisScaleEnumeration_members  /* .members */
    UA_TYPENAME("AxisScaleEnumeration") /* .typeName */
},
/* ComplexNumberType */
{
    {0, UA_NODEIDTYPE_NUMERIC, {12171}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {12181}}, /* .binaryEncodingId */
    sizeof(UA_ComplexNumberType), /* .memSize */
    UA_TYPES_COMPLEXNUMBERTYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    true, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    ComplexNumberType_members  /* .members */
    UA_TYPENAME("ComplexNumberType") /* .typeName */
},
/* DoubleComplexNumberType */
{
    {0, UA_NODEIDTYPE_NUMERIC, {12172}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {12182}}, /* .binaryEncodingId */
    sizeof(UA_DoubleComplexNumberType), /* .memSize */
    UA_TYPES_DOUBLECOMPLEXNUMBERTYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    true, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    DoubleComplexNumberType_members  /* .members */
    UA_TYPENAME("DoubleComplexNumberType") /* .typeName */
},
/* AxisInformation */
{
    {0, UA_NODEIDTYPE_NUMERIC, {12079}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {12089}}, /* .binaryEncodingId */
    sizeof(UA_AxisInformation), /* .memSize */
    UA_TYPES_AXISINFORMATION, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    5, /* .membersSize */
    AxisInformation_members  /* .members */
    UA_TYPENAME("AxisInformation") /* .typeName */
},
/* XVType */
{
    {0, UA_NODEIDTYPE_NUMERIC, {12080}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {12090}}, /* .binaryEncodingId */
    sizeof(UA_XVType), /* .memSize */
    UA_TYPES_XVTYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    true, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    XVType_members  /* .members */
    UA_TYPENAME("XVType") /* .typeName */
},
/* ProgramDiagnosticDataType */
{
    {0, UA_NODEIDTYPE_NUMERIC, {894}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {896}}, /* .binaryEncodingId */
    sizeof(UA_ProgramDiagnosticDataType), /* .memSize */
    UA_TYPES_PROGRAMDIAGNOSTICDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    10, /* .membersSize */
    ProgramDiagnosticDataType_members  /* .members */
    UA_TYPENAME("ProgramDiagnosticDataType") /* .typeName */
},
/* ProgramDiagnostic2DataType */
{
    {0, UA_NODEIDTYPE_NUMERIC, {15396}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {15397}}, /* .binaryEncodingId */
    sizeof(UA_ProgramDiagnostic2DataType), /* .memSize */
    UA_TYPES_PROGRAMDIAGNOSTIC2DATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    12, /* .membersSize */
    ProgramDiagnostic2DataType_members  /* .members */
    UA_TYPENAME("ProgramDiagnostic2DataType") /* .typeName */
},
/* Annotation */
{
    {0, UA_NODEIDTYPE_NUMERIC, {891}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {893}}, /* .binaryEncodingId */
    sizeof(UA_Annotation), /* .memSize */
    UA_TYPES_ANNOTATION, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    Annotation_members  /* .members */
    UA_TYPENAME("Annotation") /* .typeName */
},
/* ExceptionDeviationFormat */
{
    {0, UA_NODEIDTYPE_NUMERIC, {890}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_ExceptionDeviationFormat), /* .memSize */
    UA_TYPES_INT32, /* .typeIndex */
    UA_DATATYPEKIND_ENUM, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    ExceptionDeviationFormat_members  /* .members */
    UA_TYPENAME("ExceptionDeviationFormat") /* .typeName */
},
/* EndpointType */
{
    {0, UA_NODEIDTYPE_NUMERIC, {15528}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {15671}}, /* .binaryEncodingId */
    sizeof(UA_EndpointType), /* .memSize */
    UA_TYPES_ENDPOINTTYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    4, /* .membersSize */
    EndpointType_members  /* .members */
    UA_TYPENAME("EndpointType") /* .typeName */
},
/* StructureDescription */
{
    {0, UA_NODEIDTYPE_NUMERIC, {15487}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {126}}, /* .binaryEncodingId */
    sizeof(UA_StructureDescription), /* .memSize */
    UA_TYPES_STRUCTUREDESCRIPTION, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    StructureDescription_members  /* .members */
    UA_TYPENAME("StructureDescription") /* .typeName */
},
/* FieldMetaData */
{
    {0, UA_NODEIDTYPE_NUMERIC, {14524}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {14839}}, /* .binaryEncodingId */
    sizeof(UA_FieldMetaData), /* .memSize */
    UA_TYPES_FIELDMETADATA, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    10, /* .membersSize */
    FieldMetaData_members  /* .members */
    UA_TYPENAME("FieldMetaData") /* .typeName */
},
/* PublishedEventsDataType */
{
    {0, UA_NODEIDTYPE_NUMERIC, {15582}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {15681}}, /* .binaryEncodingId */
    sizeof(UA_PublishedEventsDataType), /* .memSize */
    UA_TYPES_PUBLISHEDEVENTSDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    PublishedEventsDataType_members  /* .members */
    UA_TYPENAME("PublishedEventsDataType") /* .typeName */
},
/* PubSubGroupDataType */
{
    {0, UA_NODEIDTYPE_NUMERIC, {15609}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {15689}}, /* .binaryEncodingId */
    sizeof(UA_PubSubGroupDataType), /* .memSize */
    UA_TYPES_PUBSUBGROUPDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    7, /* .membersSize */
    PubSubGroupDataType_members  /* .members */
    UA_TYPENAME("PubSubGroupDataType") /* .typeName */
},
/* WriterGroupDataType */
{
    {0, UA_NODEIDTYPE_NUMERIC, {15480}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {21150}}, /* .binaryEncodingId */
    sizeof(UA_WriterGroupDataType), /* .memSize */
    UA_TYPES_WRITERGROUPDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    16, /* .membersSize */
    WriterGroupDataType_members  /* .members */
    UA_TYPENAME("WriterGroupDataType") /* .typeName */
},
/* FieldTargetDataType */
{
    {0, UA_NODEIDTYPE_NUMERIC, {14744}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {14848}}, /* .binaryEncodingId */
    sizeof(UA_FieldTargetDataType), /* .memSize */
    UA_TYPES_FIELDTARGETDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    7, /* .membersSize */
    FieldTargetDataType_members  /* .members */
    UA_TYPENAME("FieldTargetDataType") /* .typeName */
},
/* SubscribedDataSetMirrorDataType */
{
    {0, UA_NODEIDTYPE_NUMERIC, {15635}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {15713}}, /* .binaryEncodingId */
    sizeof(UA_SubscribedDataSetMirrorDataType), /* .memSize */
    UA_TYPES_SUBSCRIBEDDATASETMIRRORDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    SubscribedDataSetMirrorDataType_members  /* .members */
    UA_TYPENAME("SubscribedDataSetMirrorDataType") /* .typeName */
},
/* EnumDefinition */
{
    {0, UA_NODEIDTYPE_NUMERIC, {100}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {123}}, /* .binaryEncodingId */
    sizeof(UA_EnumDefinition), /* .memSize */
    UA_TYPES_ENUMDEFINITION, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    1, /* .membersSize */
    EnumDefinition_members  /* .members */
    UA_TYPENAME("EnumDefinition") /* .typeName */
},
/* ReadEventDetails */
{
    {0, UA_NODEIDTYPE_NUMERIC, {644}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {646}}, /* .binaryEncodingId */
    sizeof(UA_ReadEventDetails), /* .memSize */
    UA_TYPES_READEVENTDETAILS, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    4, /* .membersSize */
    ReadEventDetails_members  /* .members */
    UA_TYPENAME("ReadEventDetails") /* .typeName */
},
/* ReadProcessedDetails */
{
    {0, UA_NODEIDTYPE_NUMERIC, {650}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {652}}, /* .binaryEncodingId */
    sizeof(UA_ReadProcessedDetails), /* .memSize */
    UA_TYPES_READPROCESSEDDETAILS, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    5, /* .membersSize */
    ReadProcessedDetails_members  /* .members */
    UA_TYPENAME("ReadProcessedDetails") /* .typeName */
},
/* ModificationInfo */
{
    {0, UA_NODEIDTYPE_NUMERIC, {11216}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {11226}}, /* .binaryEncodingId */
    sizeof(UA_ModificationInfo), /* .memSize */
    UA_TYPES_MODIFICATIONINFO, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    ModificationInfo_members  /* .members */
    UA_TYPENAME("ModificationInfo") /* .typeName */
},
/* HistoryModifiedData */
{
    {0, UA_NODEIDTYPE_NUMERIC, {11217}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {11227}}, /* .binaryEncodingId */
    sizeof(UA_HistoryModifiedData), /* .memSize */
    UA_TYPES_HISTORYMODIFIEDDATA, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    HistoryModifiedData_members  /* .members */
    UA_TYPENAME("HistoryModifiedData") /* .typeName */
},
/* HistoryEvent */
{
    {0, UA_NODEIDTYPE_NUMERIC, {659}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {661}}, /* .binaryEncodingId */
    sizeof(UA_HistoryEvent), /* .memSize */
    UA_TYPES_HISTORYEVENT, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    1, /* .membersSize */
    HistoryEvent_members  /* .members */
    UA_TYPENAME("HistoryEvent") /* .typeName */
},
/* UpdateEventDetails */
{
    {0, UA_NODEIDTYPE_NUMERIC, {683}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {685}}, /* .binaryEncodingId */
    sizeof(UA_UpdateEventDetails), /* .memSize */
    UA_TYPES_UPDATEEVENTDETAILS, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    4, /* .membersSize */
    UpdateEventDetails_members  /* .members */
    UA_TYPENAME("UpdateEventDetails") /* .typeName */
},
/* DataChangeNotification */
{
    {0, UA_NODEIDTYPE_NUMERIC, {809}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {811}}, /* .binaryEncodingId */
    sizeof(UA_DataChangeNotification), /* .memSize */
    UA_TYPES_DATACHANGENOTIFICATION, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    DataChangeNotification_members  /* .members */
    UA_TYPENAME("DataChangeNotification") /* .typeName */
},
/* EventNotificationList */
{
    {0, UA_NODEIDTYPE_NUMERIC, {914}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {916}}, /* .binaryEncodingId */
    sizeof(UA_EventNotificationList), /* .memSize */
    UA_TYPES_EVENTNOTIFICATIONLIST, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    1, /* .membersSize */
    EventNotificationList_members  /* .members */
    UA_TYPENAME("EventNotificationList") /* .typeName */
},
/* SessionDiagnosticsDataType */
{
    {0, UA_NODEIDTYPE_NUMERIC, {865}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {867}}, /* .binaryEncodingId */
    sizeof(UA_SessionDiagnosticsDataType), /* .memSize */
    UA_TYPES_SESSIONDIAGNOSTICSDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    43, /* .membersSize */
    SessionDiagnosticsDataType_members  /* .members */
    UA_TYPENAME("SessionDiagnosticsDataType") /* .typeName */
},
/* EnumDescription */
{
    {0, UA_NODEIDTYPE_NUMERIC, {15488}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {127}}, /* .binaryEncodingId */
    sizeof(UA_EnumDescription), /* .memSize */
    UA_TYPES_ENUMDESCRIPTION, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    4, /* .membersSize */
    EnumDescription_members  /* .members */
    UA_TYPENAME("EnumDescription") /* .typeName */
},
/* UABinaryFileDataType */
{
    {0, UA_NODEIDTYPE_NUMERIC, {15006}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {15422}}, /* .binaryEncodingId */
    sizeof(UA_UABinaryFileDataType), /* .memSize */
    UA_TYPES_UABINARYFILEDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    7, /* .membersSize */
    UABinaryFileDataType_members  /* .members */
    UA_TYPENAME("UABinaryFileDataType") /* .typeName */
},
/* DataSetMetaDataType */
{
    {0, UA_NODEIDTYPE_NUMERIC, {14523}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {124}}, /* .binaryEncodingId */
    sizeof(UA_DataSetMetaDataType), /* .memSize */
    UA_TYPES_DATASETMETADATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    9, /* .membersSize */
    DataSetMetaDataType_members  /* .members */
    UA_TYPENAME("DataSetMetaDataType") /* .typeName */
},
/* PublishedDataSetDataType */
{
    {0, UA_NODEIDTYPE_NUMERIC, {15578}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {15677}}, /* .binaryEncodingId */
    sizeof(UA_PublishedDataSetDataType), /* .memSize */
    UA_TYPES_PUBLISHEDDATASETDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    5, /* .membersSize */
    PublishedDataSetDataType_members  /* .members */
    UA_TYPENAME("PublishedDataSetDataType") /* .typeName */
},
/* DataSetReaderDataType */
{
    {0, UA_NODEIDTYPE_NUMERIC, {15623}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {15703}}, /* .binaryEncodingId */
    sizeof(UA_DataSetReaderDataType), /* .memSize */
    UA_TYPES_DATASETREADERDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    17, /* .membersSize */
    DataSetReaderDataType_members  /* .members */
    UA_TYPENAME("DataSetReaderDataType") /* .typeName */
},
/* TargetVariablesDataType */
{
    {0, UA_NODEIDTYPE_NUMERIC, {15631}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {15712}}, /* .binaryEncodingId */
    sizeof(UA_TargetVariablesDataType), /* .memSize */
    UA_TYPES_TARGETVARIABLESDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    1, /* .membersSize */
    TargetVariablesDataType_members  /* .members */
    UA_TYPENAME("TargetVariablesDataType") /* .typeName */
},
/* DataTypeSchemaHeader */
{
    {0, UA_NODEIDTYPE_NUMERIC, {15534}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {15676}}, /* .binaryEncodingId */
    sizeof(UA_DataTypeSchemaHeader), /* .memSize */
    UA_TYPES_DATATYPESCHEMAHEADER, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    4, /* .membersSize */
    DataTypeSchemaHeader_members  /* .members */
    UA_TYPENAME("DataTypeSchemaHeader") /* .typeName */
},
/* ReaderGroupDataType */
{
    {0, UA_NODEIDTYPE_NUMERIC, {15520}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {21153}}, /* .binaryEncodingId */
    sizeof(UA_ReaderGroupDataType), /* .memSize */
    UA_TYPES_READERGROUPDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    10, /* .membersSize */
    ReaderGroupDataType_members  /* .members */
    UA_TYPENAME("ReaderGroupDataType") /* .typeName */
},
/* PubSubConnectionDataType */
{
    {0, UA_NODEIDTYPE_NUMERIC, {15617}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {15694}}, /* .binaryEncodingId */
    sizeof(UA_PubSubConnectionDataType), /* .memSize */
    UA_TYPES_PUBSUBCONNECTIONDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    9, /* .membersSize */
    PubSubConnectionDataType_members  /* .members */
    UA_TYPENAME("PubSubConnectionDataType") /* .typeName */
},
/* PubSubConfigurationDataType */
{
    {0, UA_NODEIDTYPE_NUMERIC, {15530}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {21154}}, /* .binaryEncodingId */
    sizeof(UA_PubSubConfigurationDataType), /* .memSize */
    UA_TYPES_PUBSUBCONFIGURATIONDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    PubSubConfigurationDataType_members  /* .members */
    UA_TYPENAME("PubSubConfigurationDataType") /* .typeName */
},
};

