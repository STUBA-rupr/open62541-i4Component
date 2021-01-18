/* Generated from testtypes.bsd with script C:/Projects/open62541-i4Component/tools/generate_datatypes.py
 * on host VM-WIN16-FEI by user rudolf at 2021-01-18 02:59:41 */

#include "types_testnodeset_generated.h"

/* Point */
static UA_DataTypeMember Point_members[2] = {
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
    offsetof(UA_Point, y) - offsetof(UA_Point, x) - sizeof(UA_Double), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Y") /* .memberName */
},};

/* NestedPoint */
static UA_DataTypeMember NestedPoint_members[3] = {
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
    offsetof(UA_NestedPoint, y) - offsetof(UA_NestedPoint, x) - sizeof(UA_Double), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Y") /* .memberName */
},
{
    UA_TYPES_TESTNODESET_POINT, /* .memberTypeIndex */
    offsetof(UA_NestedPoint, point1) - offsetof(UA_NestedPoint, y) - sizeof(UA_Double), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Point1") /* .memberName */
},};

/* PointWithArray */
static UA_DataTypeMember PointWithArray_members[4] = {
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
    offsetof(UA_PointWithArray, y) - offsetof(UA_PointWithArray, x) - sizeof(UA_Double), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Y") /* .memberName */
},
{
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_PointWithArray, z) - offsetof(UA_PointWithArray, y) - sizeof(UA_Double), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Z") /* .memberName */
},
{
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_PointWithArray, array1Size) - offsetof(UA_PointWithArray, z) - sizeof(UA_Double), /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Array1") /* .memberName */
},};

/* PointWithPointArray */
static UA_DataTypeMember PointWithPointArray_members[4] = {
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
    offsetof(UA_PointWithPointArray, y) - offsetof(UA_PointWithPointArray, x) - sizeof(UA_Double), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Y") /* .memberName */
},
{
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_PointWithPointArray, z) - offsetof(UA_PointWithPointArray, y) - sizeof(UA_Double), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Z") /* .memberName */
},
{
    UA_TYPES_TESTNODESET_POINT, /* .memberTypeIndex */
    offsetof(UA_PointWithPointArray, array1Size) - offsetof(UA_PointWithPointArray, z) - sizeof(UA_Double), /* .padding */
    false, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Array1") /* .memberName */
},};
const UA_DataType UA_TYPES_TESTNODESET[UA_TYPES_TESTNODESET_COUNT] = {
/* Point */
{
    {2, UA_NODEIDTYPE_NUMERIC, {10001}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {5002}}, /* .binaryEncodingId */
    sizeof(UA_Point), /* .memSize */
    UA_TYPES_TESTNODESET_POINT, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    true, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    Point_members  /* .members */
    UA_TYPENAME("Point") /* .typeName */
},
/* NestedPoint */
{
    {2, UA_NODEIDTYPE_NUMERIC, {10008}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {5003}}, /* .binaryEncodingId */
    sizeof(UA_NestedPoint), /* .memSize */
    UA_TYPES_TESTNODESET_NESTEDPOINT, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    true, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    NestedPoint_members  /* .members */
    UA_TYPENAME("NestedPoint") /* .typeName */
},
/* PointWithArray */
{
    {2, UA_NODEIDTYPE_NUMERIC, {3003}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {5004}}, /* .binaryEncodingId */
    sizeof(UA_PointWithArray), /* .memSize */
    UA_TYPES_TESTNODESET_POINTWITHARRAY, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    4, /* .membersSize */
    PointWithArray_members  /* .members */
    UA_TYPENAME("PointWithArray") /* .typeName */
},
/* PointWithPointArray */
{
    {2, UA_NODEIDTYPE_NUMERIC, {3004}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_PointWithPointArray), /* .memSize */
    UA_TYPES_TESTNODESET_POINTWITHPOINTARRAY, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    4, /* .membersSize */
    PointWithPointArray_members  /* .members */
    UA_TYPENAME("PointWithPointArray") /* .typeName */
},
};

