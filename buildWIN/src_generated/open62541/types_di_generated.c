/* Generated from Opc.Ua.Di.Types.bsd with script C:/Projects/open62541-i4Component/tools/generate_datatypes.py
 * on host VM-WIN16-FEI by user rudolf at 2021-01-18 02:59:41 */

#include "types_di_generated.h"

/* DeviceHealthEnumeration */
#define DeviceHealthEnumeration_members NULL

/* FetchResultDataType */
#define FetchResultDataType_members NULL

/* TransferResultErrorDataType */
static UA_DataTypeMember TransferResultErrorDataType_members[2] = {
{
    UA_TYPES_INT32, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Status") /* .memberName */
},
{
    UA_TYPES_DIAGNOSTICINFO, /* .memberTypeIndex */
    offsetof(UA_TransferResultErrorDataType, diagnostics) - offsetof(UA_TransferResultErrorDataType, status) - sizeof(UA_Int32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Diagnostics") /* .memberName */
},};

/* ParameterResultDataType */
static UA_DataTypeMember ParameterResultDataType_members[3] = {
{
    UA_TYPES_QUALIFIEDNAME, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("NodePath") /* .memberName */
},
{
    UA_TYPES_STATUSCODE, /* .memberTypeIndex */
    offsetof(UA_ParameterResultDataType, statusCode) - offsetof(UA_ParameterResultDataType, nodePath) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("StatusCode") /* .memberName */
},
{
    UA_TYPES_DIAGNOSTICINFO, /* .memberTypeIndex */
    offsetof(UA_ParameterResultDataType, diagnostics) - offsetof(UA_ParameterResultDataType, statusCode) - sizeof(UA_StatusCode), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Diagnostics") /* .memberName */
},};

/* TransferResultDataDataType */
static UA_DataTypeMember TransferResultDataDataType_members[3] = {
{
    UA_TYPES_INT32, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SequenceNumber") /* .memberName */
},
{
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_TransferResultDataDataType, endOfResults) - offsetof(UA_TransferResultDataDataType, sequenceNumber) - sizeof(UA_Int32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("EndOfResults") /* .memberName */
},
{
    UA_TYPES_DI_PARAMETERRESULTDATATYPE, /* .memberTypeIndex */
    offsetof(UA_TransferResultDataDataType, parameterDefsSize) - offsetof(UA_TransferResultDataDataType, endOfResults) - sizeof(UA_Boolean), /* .padding */
    false, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ParameterDefs") /* .memberName */
},};
const UA_DataType UA_TYPES_DI[UA_TYPES_DI_COUNT] = {
/* DeviceHealthEnumeration */
{
    {2, UA_NODEIDTYPE_NUMERIC, {6244}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_DeviceHealthEnumeration), /* .memSize */
    UA_TYPES_INT32, /* .typeIndex */
    UA_DATATYPEKIND_ENUM, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    DeviceHealthEnumeration_members  /* .members */
    UA_TYPENAME("DeviceHealthEnumeration") /* .typeName */
},
/* FetchResultDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {6522}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {6551}}, /* .binaryEncodingId */
    sizeof(UA_FetchResultDataType), /* .memSize */
    UA_TYPES_DI_FETCHRESULTDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    true, /* .pointerFree */
    false, /* .overlayable */
    0, /* .membersSize */
    FetchResultDataType_members  /* .members */
    UA_TYPENAME("FetchResultDataType") /* .typeName */
},
/* TransferResultErrorDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15888}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15891}}, /* .binaryEncodingId */
    sizeof(UA_TransferResultErrorDataType), /* .memSize */
    UA_TYPES_DI_TRANSFERRESULTERRORDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    TransferResultErrorDataType_members  /* .members */
    UA_TYPENAME("TransferResultErrorDataType") /* .typeName */
},
/* ParameterResultDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {6525}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {6554}}, /* .binaryEncodingId */
    sizeof(UA_ParameterResultDataType), /* .memSize */
    UA_TYPES_DI_PARAMETERRESULTDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    ParameterResultDataType_members  /* .members */
    UA_TYPENAME("ParameterResultDataType") /* .typeName */
},
/* TransferResultDataDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15889}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15892}}, /* .binaryEncodingId */
    sizeof(UA_TransferResultDataDataType), /* .memSize */
    UA_TYPES_DI_TRANSFERRESULTDATADATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    TransferResultDataDataType_members  /* .members */
    UA_TYPENAME("TransferResultDataDataType") /* .typeName */
},
};

