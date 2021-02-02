/* Generated from Opc.Ua.i4aas.Types.bsd with script C:/Projects/open62541-i4Component/tools/generate_datatypes.py
 * on host VM-WIN16-FEI by user rudolf at 2021-01-29 05:05:32 */

#include "types_i4aas_generated.h"

/* IdType */
#define IdType_members NULL
const UA_DataType UA_TYPES_I4AAS[UA_TYPES_I4AAS_COUNT] = {
/* IdType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {0}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_IdType), /* .memSize */
    UA_TYPES_INT32, /* .typeIndex */
    UA_DATATYPEKIND_ENUM, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    IdType_members  /* .members */
    UA_TYPENAME("IdType") /* .typeName */
},
};

