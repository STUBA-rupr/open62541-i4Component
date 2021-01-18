/* Generated from Opc.Ua.POWERLINK.NodeSet2.bsd with script C:/Projects/open62541-i4Component/tools/generate_datatypes.py
 * on host VM-WIN16-FEI by user rudolf at 2021-01-18 02:59:41 */

#include "types_powerlink_generated.h"

/* ErrorRegisterBits */
static UA_DataTypeMember ErrorRegisterBits_members[2] = {
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
    offsetof(UA_ErrorRegisterBits, validBits) - offsetof(UA_ErrorRegisterBits, value) - sizeof(UA_ByteString), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ValidBits") /* .memberName */
},};

/* PowerlinkAttribute */
static UA_DataTypeMember PowerlinkAttribute_members[2] = {
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
    offsetof(UA_PowerlinkAttribute, validBits) - offsetof(UA_PowerlinkAttribute, value) - sizeof(UA_ByteString), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ValidBits") /* .memberName */
},};

/* PowerlinkErrorEntryDataType */
static UA_DataTypeMember PowerlinkErrorEntryDataType_members[4] = {
{
    UA_TYPES_UINT16, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("EntryType") /* .memberName */
},
{
    UA_TYPES_UINT16, /* .memberTypeIndex */
    offsetof(UA_PowerlinkErrorEntryDataType, errorCode) - offsetof(UA_PowerlinkErrorEntryDataType, entryType) - sizeof(UA_UInt16), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ErrorCode") /* .memberName */
},
{
    UA_TYPES_UINT64, /* .memberTypeIndex */
    offsetof(UA_PowerlinkErrorEntryDataType, timeStamp) - offsetof(UA_PowerlinkErrorEntryDataType, errorCode) - sizeof(UA_UInt16), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("TimeStamp") /* .memberName */
},
{
    UA_TYPES_UINT64, /* .memberTypeIndex */
    offsetof(UA_PowerlinkErrorEntryDataType, additionalInformation) - offsetof(UA_PowerlinkErrorEntryDataType, timeStamp) - sizeof(UA_UInt64), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("AdditionalInformation") /* .memberName */
},};

/* PowerlinkIpAddressDataType */
static UA_DataTypeMember PowerlinkIpAddressDataType_members[4] = {
{
    UA_TYPES_BYTE, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("B1") /* .memberName */
},
{
    UA_TYPES_BYTE, /* .memberTypeIndex */
    offsetof(UA_PowerlinkIpAddressDataType, b2) - offsetof(UA_PowerlinkIpAddressDataType, b1) - sizeof(UA_Byte), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("B2") /* .memberName */
},
{
    UA_TYPES_BYTE, /* .memberTypeIndex */
    offsetof(UA_PowerlinkIpAddressDataType, b3) - offsetof(UA_PowerlinkIpAddressDataType, b2) - sizeof(UA_Byte), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("B3") /* .memberName */
},
{
    UA_TYPES_BYTE, /* .memberTypeIndex */
    offsetof(UA_PowerlinkIpAddressDataType, b4) - offsetof(UA_PowerlinkIpAddressDataType, b3) - sizeof(UA_Byte), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("B4") /* .memberName */
},};

/* PowerlinkPDOMappingEntryDataType */
static UA_DataTypeMember PowerlinkPDOMappingEntryDataType_members[5] = {
{
    UA_TYPES_UINT16, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Length") /* .memberName */
},
{
    UA_TYPES_UINT16, /* .memberTypeIndex */
    offsetof(UA_PowerlinkPDOMappingEntryDataType, offset) - offsetof(UA_PowerlinkPDOMappingEntryDataType, length) - sizeof(UA_UInt16), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Offset") /* .memberName */
},
{
    UA_TYPES_BYTE, /* .memberTypeIndex */
    offsetof(UA_PowerlinkPDOMappingEntryDataType, reserved) - offsetof(UA_PowerlinkPDOMappingEntryDataType, offset) - sizeof(UA_UInt16), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Reserved") /* .memberName */
},
{
    UA_TYPES_BYTE, /* .memberTypeIndex */
    offsetof(UA_PowerlinkPDOMappingEntryDataType, subIndex) - offsetof(UA_PowerlinkPDOMappingEntryDataType, reserved) - sizeof(UA_Byte), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SubIndex") /* .memberName */
},
{
    UA_TYPES_UINT16, /* .memberTypeIndex */
    offsetof(UA_PowerlinkPDOMappingEntryDataType, index) - offsetof(UA_PowerlinkPDOMappingEntryDataType, subIndex) - sizeof(UA_Byte), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Index") /* .memberName */
},};

/* PowerlinkNMTResetCmdEnumeration */
#define PowerlinkNMTResetCmdEnumeration_members NULL

/* PowerlinkNMTStateEnumeration */
#define PowerlinkNMTStateEnumeration_members NULL
const UA_DataType UA_TYPES_POWERLINK[UA_TYPES_POWERLINK_COUNT] = {
/* ErrorRegisterBits */
{
    {3, UA_NODEIDTYPE_NUMERIC, {26}}, /* .typeId */
    {3, UA_NODEIDTYPE_NUMERIC, {36}}, /* .binaryEncodingId */
    sizeof(UA_ErrorRegisterBits), /* .memSize */
    UA_TYPES_POWERLINK_ERRORREGISTERBITS, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    ErrorRegisterBits_members  /* .members */
    UA_TYPENAME("ErrorRegisterBits") /* .typeName */
},
/* PowerlinkAttribute */
{
    {3, UA_NODEIDTYPE_NUMERIC, {25}}, /* .typeId */
    {3, UA_NODEIDTYPE_NUMERIC, {33}}, /* .binaryEncodingId */
    sizeof(UA_PowerlinkAttribute), /* .memSize */
    UA_TYPES_POWERLINK_POWERLINKATTRIBUTE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    PowerlinkAttribute_members  /* .members */
    UA_TYPENAME("PowerlinkAttribute") /* .typeName */
},
/* PowerlinkErrorEntryDataType */
{
    {3, UA_NODEIDTYPE_NUMERIC, {27}}, /* .typeId */
    {3, UA_NODEIDTYPE_NUMERIC, {53}}, /* .binaryEncodingId */
    sizeof(UA_PowerlinkErrorEntryDataType), /* .memSize */
    UA_TYPES_POWERLINK_POWERLINKERRORENTRYDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    true, /* .pointerFree */
    false, /* .overlayable */
    4, /* .membersSize */
    PowerlinkErrorEntryDataType_members  /* .members */
    UA_TYPENAME("PowerlinkErrorEntryDataType") /* .typeName */
},
/* PowerlinkIpAddressDataType */
{
    {3, UA_NODEIDTYPE_NUMERIC, {29}}, /* .typeId */
    {3, UA_NODEIDTYPE_NUMERIC, {32}}, /* .binaryEncodingId */
    sizeof(UA_PowerlinkIpAddressDataType), /* .memSize */
    UA_TYPES_POWERLINK_POWERLINKIPADDRESSDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    true, /* .pointerFree */
    false, /* .overlayable */
    4, /* .membersSize */
    PowerlinkIpAddressDataType_members  /* .members */
    UA_TYPENAME("PowerlinkIpAddressDataType") /* .typeName */
},
/* PowerlinkPDOMappingEntryDataType */
{
    {3, UA_NODEIDTYPE_NUMERIC, {30}}, /* .typeId */
    {3, UA_NODEIDTYPE_NUMERIC, {40}}, /* .binaryEncodingId */
    sizeof(UA_PowerlinkPDOMappingEntryDataType), /* .memSize */
    UA_TYPES_POWERLINK_POWERLINKPDOMAPPINGENTRYDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    true, /* .pointerFree */
    false, /* .overlayable */
    5, /* .membersSize */
    PowerlinkPDOMappingEntryDataType_members  /* .members */
    UA_TYPENAME("PowerlinkPDOMappingEntryDataType") /* .typeName */
},
/* PowerlinkNMTResetCmdEnumeration */
{
    {3, UA_NODEIDTYPE_NUMERIC, {28}}, /* .typeId */
    {3, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_PowerlinkNMTResetCmdEnumeration), /* .memSize */
    UA_TYPES_INT32, /* .typeIndex */
    UA_DATATYPEKIND_ENUM, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    PowerlinkNMTResetCmdEnumeration_members  /* .members */
    UA_TYPENAME("PowerlinkNMTResetCmdEnumeration") /* .typeName */
},
/* PowerlinkNMTStateEnumeration */
{
    {3, UA_NODEIDTYPE_NUMERIC, {24}}, /* .typeId */
    {3, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_PowerlinkNMTStateEnumeration), /* .memSize */
    UA_TYPES_INT32, /* .typeIndex */
    UA_DATATYPEKIND_ENUM, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    PowerlinkNMTStateEnumeration_members  /* .members */
    UA_TYPENAME("PowerlinkNMTStateEnumeration") /* .typeName */
},
};

