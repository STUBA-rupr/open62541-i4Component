/* WARNING: This is a generated file.
 * Any manual changes will be overwritten. */

#include "namespace_testnodeset_generated.h"


/* PointWithPointArray - ns=1;i=3004 */

static UA_StatusCode function_namespace_testnodeset_generated_0_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "PointWithPointArray");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[1], 3004),
UA_NODEID_NUMERIC(ns[0], 22),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "PointWithPointArray"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_testnodeset_generated_0_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 3004)
);
}

/* PointWithArray - ns=1;i=3003 */

static UA_StatusCode function_namespace_testnodeset_generated_1_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "PointWithArray");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[1], 3003),
UA_NODEID_NUMERIC(ns[0], 22),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "PointWithArray"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_testnodeset_generated_1_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 3003)
);
}

/* Default Binary - ns=1;i=5004 */

static UA_StatusCode function_namespace_testnodeset_generated_2_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Default Binary");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 5004),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "Default Binary"),
UA_NODEID_NUMERIC(ns[0], 76),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5004), UA_NODEID_NUMERIC(ns[0], 38), UA_EXPANDEDNODEID_NUMERIC(ns[1], 3003), false);
return retVal;
}

static UA_StatusCode function_namespace_testnodeset_generated_2_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5004)
);
}

/* NestedPoint - ns=1;i=10008 */

static UA_StatusCode function_namespace_testnodeset_generated_3_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "NestedPoint");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[1], 10008),
UA_NODEID_NUMERIC(ns[0], 22),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "NestedPoint"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_testnodeset_generated_3_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 10008)
);
}

/* Default Binary - ns=1;i=5003 */

static UA_StatusCode function_namespace_testnodeset_generated_4_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Default Binary");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 5003),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "Default Binary"),
UA_NODEID_NUMERIC(ns[0], 76),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5003), UA_NODEID_NUMERIC(ns[0], 38), UA_EXPANDEDNODEID_NUMERIC(ns[1], 10008), false);
return retVal;
}

static UA_StatusCode function_namespace_testnodeset_generated_4_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5003)
);
}

/* Point - ns=1;i=10001 */

static UA_StatusCode function_namespace_testnodeset_generated_5_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Point");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[1], 10001),
UA_NODEID_NUMERIC(ns[0], 22),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "Point"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_testnodeset_generated_5_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 10001)
);
}

/* Default Binary - ns=1;i=5002 */

static UA_StatusCode function_namespace_testnodeset_generated_6_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Default Binary");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 5002),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "Default Binary"),
UA_NODEID_NUMERIC(ns[0], 76),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5002), UA_NODEID_NUMERIC(ns[0], 38), UA_EXPANDEDNODEID_NUMERIC(ns[1], 10001), false);
return retVal;
}

static UA_StatusCode function_namespace_testnodeset_generated_6_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5002)
);
}

/* Enum_scalar_noInit - ns=1;i=15963 */

static UA_StatusCode function_namespace_testnodeset_generated_7_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 256);
attr.displayName = UA_LOCALIZEDTEXT("", "Enum_scalar_noInit");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "A list of IdTypes for nodes which are the same in every server that exposes them.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 15963),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "Enum_scalar_noInit"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_testnodeset_generated_7_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 15963)
);
}

/* Enum_init - ns=1;i=15962 */

static UA_StatusCode function_namespace_testnodeset_generated_8_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 7;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 256);
UA_Int32 variablenode_ns_1_i_15962_variant_DataContents[7];
variablenode_ns_1_i_15962_variant_DataContents[0] = (UA_Int32) 0;
variablenode_ns_1_i_15962_variant_DataContents[1] = (UA_Int32) 1;
variablenode_ns_1_i_15962_variant_DataContents[2] = (UA_Int32) 3;
variablenode_ns_1_i_15962_variant_DataContents[3] = (UA_Int32) 4;
variablenode_ns_1_i_15962_variant_DataContents[4] = (UA_Int32) 5;
variablenode_ns_1_i_15962_variant_DataContents[5] = (UA_Int32) 6;
variablenode_ns_1_i_15962_variant_DataContents[6] = (UA_Int32) 7;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_15962_variant_DataContents, (UA_Int32) 7, &UA_TYPES[UA_TYPES_IDTYPE]);
attr.displayName = UA_LOCALIZEDTEXT("", "Enum_init");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "A list of IdTypes for nodes which are the same in every server that exposes them.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 15962),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "Enum_1dim_init"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_testnodeset_generated_8_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 15962)
);
}

/* UInt32_init - ns=1;i=5102 */

static UA_StatusCode function_namespace_testnodeset_generated_9_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 3;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7);
UA_UInt32 variablenode_ns_1_i_5102_variant_DataContents[3];
variablenode_ns_1_i_5102_variant_DataContents[0] = (UA_UInt32) 1;
variablenode_ns_1_i_5102_variant_DataContents[1] = (UA_UInt32) 2;
variablenode_ns_1_i_5102_variant_DataContents[2] = (UA_UInt32) 3;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_5102_variant_DataContents, (UA_Int32) 3, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "UInt32_init");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 5102),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[1], "UInt32_init"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_testnodeset_generated_9_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5102)
);
}

/* Double_init - ns=1;i=5101 */

static UA_StatusCode function_namespace_testnodeset_generated_10_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11);
UA_Double *variablenode_ns_1_i_5101_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_1_i_5101_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_1_i_5101_variant_DataContents);
*variablenode_ns_1_i_5101_variant_DataContents = (UA_Double) 42;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_5101_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "Double_init");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 5101),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[1], "Double_init"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_1_i_5101_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5101), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_namespace_testnodeset_generated_10_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5101)
);
}

/* NotBuiltinTypes - ns=1;i=5001 */

static UA_StatusCode function_namespace_testnodeset_generated_11_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "NotBuiltinTypes");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 5001),
UA_NODEID_NUMERIC(ns[0], 85),
UA_NODEID_NUMERIC(ns[0], 35),
UA_QUALIFIEDNAME(ns[1], "NotBuiltinTypes"),
UA_NODEID_NUMERIC(ns[0], 61),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_testnodeset_generated_11_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5001)
);
}

/* Point_1dim_noInit - ns=1;i=10007 */

static UA_StatusCode function_namespace_testnodeset_generated_12_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[1], 10001);
attr.displayName = UA_LOCALIZEDTEXT("", "Point_1dim_noInit");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 10007),
UA_NODEID_NUMERIC(ns[1], 5001),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "Point_1dim_noInit"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_testnodeset_generated_12_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 10007)
);
}

/* NestedPoint_scalar_noInit - ns=1;i=6009 */

static UA_StatusCode function_namespace_testnodeset_generated_13_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[1], 10008);
attr.displayName = UA_LOCALIZEDTEXT("", "NestedPoint_scalar_noInit");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6009),
UA_NODEID_NUMERIC(ns[1], 5001),
UA_NODEID_NUMERIC(ns[0], 35),
UA_QUALIFIEDNAME(ns[1], "NestedPoint_scalar_noInit"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_testnodeset_generated_13_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6009)
);
}

/* PointWithArray_scalar_noInit - ns=1;i=6008 */

static UA_StatusCode function_namespace_testnodeset_generated_14_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[1], 3003);

UA_STACKARRAY(UA_PointWithArray, variablenode_ns_1_i_6008_PointWithArray_0, 1);
UA_init(variablenode_ns_1_i_6008_PointWithArray_0, &UA_TYPES_TESTNODESET[UA_TYPES_TESTNODESET_POINTWITHARRAY]);
variablenode_ns_1_i_6008_PointWithArray_0->x = (UA_Double) 1.1;
variablenode_ns_1_i_6008_PointWithArray_0->y = (UA_Double) 2.2;
variablenode_ns_1_i_6008_PointWithArray_0->z = (UA_Double) 3.3;
variablenode_ns_1_i_6008_PointWithArray_0->array1Size = (UA_Int32) 2;
UA_STACKARRAY(UA_Double, variablenode_ns_1_i_6008_PointWithArray_0_array1, 2);
UA_init(variablenode_ns_1_i_6008_PointWithArray_0_array1, &UA_TYPES[UA_TYPES_DOUBLE]);
variablenode_ns_1_i_6008_PointWithArray_0_array1[0] = (UA_Double) 11.1;
variablenode_ns_1_i_6008_PointWithArray_0_array1[1] = (UA_Double) 12.1;
variablenode_ns_1_i_6008_PointWithArray_0->array1Size = 2;
variablenode_ns_1_i_6008_PointWithArray_0->array1 = variablenode_ns_1_i_6008_PointWithArray_0_array1;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6008_PointWithArray_0, &UA_TYPES_TESTNODESET[UA_TYPES_TESTNODESET_POINTWITHARRAY]);
attr.displayName = UA_LOCALIZEDTEXT("", "PointWithArray_scalar_noInit");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6008),
UA_NODEID_NUMERIC(ns[1], 5001),
UA_NODEID_NUMERIC(ns[0], 35),
UA_QUALIFIEDNAME(ns[1], "PointWithArray_scalar_noInit"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

return retVal;
}

static UA_StatusCode function_namespace_testnodeset_generated_14_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6008)
);
}

/* Frame - ns=1;i=15235 */

static UA_StatusCode function_namespace_testnodeset_generated_15_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 18814);

UA_STACKARRAY(UA_ThreeDFrame, variablenode_ns_1_i_15235_ThreeDFrame_0, 1);
UA_init(variablenode_ns_1_i_15235_ThreeDFrame_0, &UA_TYPES[UA_TYPES_THREEDFRAME]);
variablenode_ns_1_i_15235_ThreeDFrame_0->cartesianCoordinates.x = (UA_Double) 0.123;
variablenode_ns_1_i_15235_ThreeDFrame_0->cartesianCoordinates.y = (UA_Double) 456.7;
variablenode_ns_1_i_15235_ThreeDFrame_0->cartesianCoordinates.z = (UA_Double) 89;
variablenode_ns_1_i_15235_ThreeDFrame_0->orientation.a = (UA_Double) 0.12;
variablenode_ns_1_i_15235_ThreeDFrame_0->orientation.b = (UA_Double) 3.4;
variablenode_ns_1_i_15235_ThreeDFrame_0->orientation.c = (UA_Double) 56;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_15235_ThreeDFrame_0, &UA_TYPES[UA_TYPES_THREEDFRAME]);
attr.displayName = UA_LOCALIZEDTEXT("", "Frame");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Three Dimensional Frame data");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 15235),
UA_NODEID_NUMERIC(ns[1], 5001),
UA_NODEID_NUMERIC(ns[0], 35),
UA_QUALIFIEDNAME(ns[1], "Frame"),
UA_NODEID_NUMERIC(ns[0], 18791),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

return retVal;
}

static UA_StatusCode function_namespace_testnodeset_generated_15_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 15235)
);
}

/* PointWithArray_scalar_noInit - ns=1;i=6010 */

static UA_StatusCode function_namespace_testnodeset_generated_16_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[1], 3004);
attr.displayName = UA_LOCALIZEDTEXT("", "PointWithArray_scalar_noInit");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6010),
UA_NODEID_NUMERIC(ns[1], 5001),
UA_NODEID_NUMERIC(ns[0], 35),
UA_QUALIFIEDNAME(ns[1], "PointWithPointArray_scalar_noInit"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_testnodeset_generated_16_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6010)
);
}

/* Point_2dim_init - ns=1;i=10006 */

static UA_StatusCode function_namespace_testnodeset_generated_17_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
attr.valueRank = 2;
attr.arrayDimensionsSize = 2;
UA_UInt32 arrayDimensions[2];
arrayDimensions[0] = 2;
arrayDimensions[1] = 2;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[1], 10001);
UA_Point variablenode_ns_1_i_10006_variant_DataContents[4];

UA_init(&variablenode_ns_1_i_10006_variant_DataContents[0], &UA_TYPES_TESTNODESET[UA_TYPES_TESTNODESET_POINT]);
variablenode_ns_1_i_10006_variant_DataContents[0].x = (UA_Double) 1;
variablenode_ns_1_i_10006_variant_DataContents[0].y = (UA_Double) 2;

UA_init(&variablenode_ns_1_i_10006_variant_DataContents[1], &UA_TYPES_TESTNODESET[UA_TYPES_TESTNODESET_POINT]);
variablenode_ns_1_i_10006_variant_DataContents[1].x = (UA_Double) 3;
variablenode_ns_1_i_10006_variant_DataContents[1].y = (UA_Double) 4;

UA_init(&variablenode_ns_1_i_10006_variant_DataContents[2], &UA_TYPES_TESTNODESET[UA_TYPES_TESTNODESET_POINT]);
variablenode_ns_1_i_10006_variant_DataContents[2].x = (UA_Double) 5;
variablenode_ns_1_i_10006_variant_DataContents[2].y = (UA_Double) 6;

UA_init(&variablenode_ns_1_i_10006_variant_DataContents[3], &UA_TYPES_TESTNODESET[UA_TYPES_TESTNODESET_POINT]);
variablenode_ns_1_i_10006_variant_DataContents[3].x = (UA_Double) 7;
variablenode_ns_1_i_10006_variant_DataContents[3].y = (UA_Double) 8;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_10006_variant_DataContents, (UA_Int32) 4, &UA_TYPES_TESTNODESET[UA_TYPES_TESTNODESET_POINT]);
attr.value.arrayDimensionsSize = attr.arrayDimensionsSize;
attr.value.arrayDimensions = attr.arrayDimensions;
attr.displayName = UA_LOCALIZEDTEXT("", "Point_2dim_init");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 10006),
UA_NODEID_NUMERIC(ns[1], 5001),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "Point_2dim_init"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);




return retVal;
}

static UA_StatusCode function_namespace_testnodeset_generated_17_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 10006)
);
}

/* Point_scalar_noInit - ns=1;i=10005 */

static UA_StatusCode function_namespace_testnodeset_generated_18_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[1], 10001);
attr.displayName = UA_LOCALIZEDTEXT("", "Point_scalar_noInit");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 10005),
UA_NODEID_NUMERIC(ns[1], 5001),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "Point_scalar_noInit"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_testnodeset_generated_18_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 10005)
);
}

/* Point_1dim_init - ns=1;i=10004 */

static UA_StatusCode function_namespace_testnodeset_generated_19_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 4;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[1], 10001);
UA_Point variablenode_ns_1_i_10004_variant_DataContents[4];

UA_init(&variablenode_ns_1_i_10004_variant_DataContents[0], &UA_TYPES_TESTNODESET[UA_TYPES_TESTNODESET_POINT]);
variablenode_ns_1_i_10004_variant_DataContents[0].x = (UA_Double) 1;
variablenode_ns_1_i_10004_variant_DataContents[0].y = (UA_Double) 2;

UA_init(&variablenode_ns_1_i_10004_variant_DataContents[1], &UA_TYPES_TESTNODESET[UA_TYPES_TESTNODESET_POINT]);
variablenode_ns_1_i_10004_variant_DataContents[1].x = (UA_Double) 3;
variablenode_ns_1_i_10004_variant_DataContents[1].y = (UA_Double) 4;

UA_init(&variablenode_ns_1_i_10004_variant_DataContents[2], &UA_TYPES_TESTNODESET[UA_TYPES_TESTNODESET_POINT]);
variablenode_ns_1_i_10004_variant_DataContents[2].x = (UA_Double) 5;
variablenode_ns_1_i_10004_variant_DataContents[2].y = (UA_Double) 6;

UA_init(&variablenode_ns_1_i_10004_variant_DataContents[3], &UA_TYPES_TESTNODESET[UA_TYPES_TESTNODESET_POINT]);
variablenode_ns_1_i_10004_variant_DataContents[3].x = (UA_Double) 7;
variablenode_ns_1_i_10004_variant_DataContents[3].y = (UA_Double) 8;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_10004_variant_DataContents, (UA_Int32) 4, &UA_TYPES_TESTNODESET[UA_TYPES_TESTNODESET_POINT]);
attr.displayName = UA_LOCALIZEDTEXT("", "Point_1dim_init");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 10004),
UA_NODEID_NUMERIC(ns[1], 5001),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "Point_1dim_init"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);




return retVal;
}

static UA_StatusCode function_namespace_testnodeset_generated_19_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 10004)
);
}

/* Point_scalar_init - ns=1;i=10002 */

static UA_StatusCode function_namespace_testnodeset_generated_20_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[1], 10001);

UA_STACKARRAY(UA_Point, variablenode_ns_1_i_10002_Point_0, 1);
UA_init(variablenode_ns_1_i_10002_Point_0, &UA_TYPES_TESTNODESET[UA_TYPES_TESTNODESET_POINT]);
variablenode_ns_1_i_10002_Point_0->x = (UA_Double) 1;
variablenode_ns_1_i_10002_Point_0->y = (UA_Double) 2;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_10002_Point_0, &UA_TYPES_TESTNODESET[UA_TYPES_TESTNODESET_POINT]);
attr.displayName = UA_LOCALIZEDTEXT("", "Point_scalar_init");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 10002),
UA_NODEID_NUMERIC(ns[1], 5001),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "Point_scalar_init"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

return retVal;
}

static UA_StatusCode function_namespace_testnodeset_generated_20_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 10002)
);
}

/* BuiltinTypes - ns=1;i=5100 */

static UA_StatusCode function_namespace_testnodeset_generated_21_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "BuiltinTypes");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 5100),
UA_NODEID_NUMERIC(ns[0], 85),
UA_NODEID_NUMERIC(ns[0], 35),
UA_QUALIFIEDNAME(ns[1], "BuiltinTypes"),
UA_NODEID_NUMERIC(ns[0], 61),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_testnodeset_generated_21_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5100)
);
}

/* InputArguments_scalar_init - ns=1;i=11493 */

static UA_StatusCode function_namespace_testnodeset_generated_22_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296);

UA_STACKARRAY(UA_Argument, variablenode_ns_1_i_11493_Argument_0, 1);
UA_init(variablenode_ns_1_i_11493_Argument_0, &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_11493_Argument_0->name = UA_STRING("argName");
variablenode_ns_1_i_11493_Argument_0->dataType = UA_NODEID_NUMERIC(ns[0], 1);
variablenode_ns_1_i_11493_Argument_0->valueRank = (UA_Int32) -1;
variablenode_ns_1_i_11493_Argument_0->description = UA_LOCALIZEDTEXT("en", "myDescritipon");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_11493_Argument_0, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments_scalar_init");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 11493),
UA_NODEID_NUMERIC(ns[1], 5100),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "InputArguments_scalar_init"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

return retVal;
}

static UA_StatusCode function_namespace_testnodeset_generated_22_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 11493)
);
}

/* Int32_scalar_noInit_ValueRank=-2 - ns=1;i=8004 */

static UA_StatusCode function_namespace_testnodeset_generated_23_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
attr.displayName = UA_LOCALIZEDTEXT("", "Int32_scalar_noInit_ValueRank=-2");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 8004),
UA_NODEID_NUMERIC(ns[1], 5100),
UA_NODEID_NUMERIC(ns[0], 35),
UA_QUALIFIEDNAME(ns[1], "Int32_scalar_noInit_ValueRank=-2"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_testnodeset_generated_23_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 8004)
);
}

/* ApplicationTye_1dim_noInit - ns=1;i=16003 */

static UA_StatusCode function_namespace_testnodeset_generated_24_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 307);
UA_Int32 variablenode_ns_1_i_16003_variant_DataContents[4];
variablenode_ns_1_i_16003_variant_DataContents[0] = (UA_Int32) 0;
variablenode_ns_1_i_16003_variant_DataContents[1] = (UA_Int32) 1;
variablenode_ns_1_i_16003_variant_DataContents[2] = (UA_Int32) 2;
variablenode_ns_1_i_16003_variant_DataContents[3] = (UA_Int32) 3;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_16003_variant_DataContents, (UA_Int32) 4, &UA_TYPES[UA_TYPES_APPLICATIONTYPE]);
attr.displayName = UA_LOCALIZEDTEXT("", "ApplicationTye_1dim_noInit");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 16003),
UA_NODEID_NUMERIC(ns[1], 5100),
UA_NODEID_NUMERIC(ns[0], 35),
UA_QUALIFIEDNAME(ns[1], "ApplicationTye_1dim_noInit"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_testnodeset_generated_24_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 16003)
);
}

/* Int32_2dim_noInit_ValueRank=2 - ns=1;i=8008 */

static UA_StatusCode function_namespace_testnodeset_generated_25_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
attr.valueRank = 2;
attr.arrayDimensionsSize = 2;
UA_UInt32 arrayDimensions[2];
arrayDimensions[0] = 0;
arrayDimensions[1] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
attr.displayName = UA_LOCALIZEDTEXT("", "Int32_2dim_noInit_ValueRank=2");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 8008),
UA_NODEID_NUMERIC(ns[1], 5100),
UA_NODEID_NUMERIC(ns[0], 35),
UA_QUALIFIEDNAME(ns[1], "Int32_2dim_noInit_ValueRank=2"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_testnodeset_generated_25_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 8008)
);
}

/* Int32_1dim_noInit_ValueRank=1 - ns=1;i=8007 */

static UA_StatusCode function_namespace_testnodeset_generated_26_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
attr.displayName = UA_LOCALIZEDTEXT("", "Int32_1dim_noInit_ValueRank=1");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 8007),
UA_NODEID_NUMERIC(ns[1], 5100),
UA_NODEID_NUMERIC(ns[0], 35),
UA_QUALIFIEDNAME(ns[1], "Int32_1dim_noInit_ValueRank=1"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_testnodeset_generated_26_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 8007)
);
}

/* Int32_scalar_noInit_withoutValueRank - ns=1;i=8001 */

static UA_StatusCode function_namespace_testnodeset_generated_27_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
attr.displayName = UA_LOCALIZEDTEXT("", "Int32_scalar_noInit_withoutValueRank");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 8001),
UA_NODEID_NUMERIC(ns[1], 5100),
UA_NODEID_NUMERIC(ns[0], 35),
UA_QUALIFIEDNAME(ns[1], "Int32_scalar_noInit_withoutValueRank"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_testnodeset_generated_27_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 8001)
);
}

/* Int32_1dim_Init_ValueRank=-3 - ns=1;i=8003 */

static UA_StatusCode function_namespace_testnodeset_generated_28_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
attr.valueRank = -3;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
UA_Int32 variablenode_ns_1_i_8003_variant_DataContents[2];
variablenode_ns_1_i_8003_variant_DataContents[0] = (UA_Int32) 1;
variablenode_ns_1_i_8003_variant_DataContents[1] = (UA_Int32) 2;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_8003_variant_DataContents, (UA_Int32) 2, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "Int32_1dim_Init_ValueRank=-3");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 8003),
UA_NODEID_NUMERIC(ns[1], 5100),
UA_NODEID_NUMERIC(ns[0], 35),
UA_QUALIFIEDNAME(ns[1], "Int32_1dim_Init_ValueRank=-3"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_testnodeset_generated_28_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 8003)
);
}

/* Int32_scalar_noInit_ValueRank=0 - ns=1;i=8006 */

static UA_StatusCode function_namespace_testnodeset_generated_29_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
attr.valueRank = 0;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
attr.displayName = UA_LOCALIZEDTEXT("", "Int32_scalar_noInit_ValueRank=0");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 8006),
UA_NODEID_NUMERIC(ns[1], 5100),
UA_NODEID_NUMERIC(ns[0], 35),
UA_QUALIFIEDNAME(ns[1], "Int32_OneOrMoreDim_noInit_ValueRank=0"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_testnodeset_generated_29_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 8006)
);
}

/* Int32_3dim_noInit_ValueRank=2 - ns=1;i=8009 */

static UA_StatusCode function_namespace_testnodeset_generated_30_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
attr.valueRank = 3;
attr.arrayDimensionsSize = 3;
UA_UInt32 arrayDimensions[3];
arrayDimensions[0] = 0;
arrayDimensions[1] = 0;
arrayDimensions[2] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
attr.displayName = UA_LOCALIZEDTEXT("", "Int32_3dim_noInit_ValueRank=2");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 8009),
UA_NODEID_NUMERIC(ns[1], 5100),
UA_NODEID_NUMERIC(ns[0], 35),
UA_QUALIFIEDNAME(ns[1], "Int32_3dim_noInit_ValueRank=2"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_testnodeset_generated_30_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 8009)
);
}

/* Int32_2dim_init - ns=1;i=6003 */

static UA_StatusCode function_namespace_testnodeset_generated_31_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
attr.valueRank = 2;
attr.arrayDimensionsSize = 2;
UA_UInt32 arrayDimensions[2];
arrayDimensions[0] = 3;
arrayDimensions[1] = 2;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
UA_Int32 variablenode_ns_1_i_6003_variant_DataContents[6];
variablenode_ns_1_i_6003_variant_DataContents[0] = (UA_Int32) 11;
variablenode_ns_1_i_6003_variant_DataContents[1] = (UA_Int32) 21;
variablenode_ns_1_i_6003_variant_DataContents[2] = (UA_Int32) 31;
variablenode_ns_1_i_6003_variant_DataContents[3] = (UA_Int32) 12;
variablenode_ns_1_i_6003_variant_DataContents[4] = (UA_Int32) 22;
variablenode_ns_1_i_6003_variant_DataContents[5] = (UA_Int32) 32;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_6003_variant_DataContents, (UA_Int32) 6, &UA_TYPES[UA_TYPES_INT32]);
attr.value.arrayDimensionsSize = attr.arrayDimensionsSize;
attr.value.arrayDimensions = attr.arrayDimensions;
attr.displayName = UA_LOCALIZEDTEXT("", "Int32_2dim_init");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6003),
UA_NODEID_NUMERIC(ns[1], 5100),
UA_NODEID_NUMERIC(ns[0], 35),
UA_QUALIFIEDNAME(ns[1], "Int32_2dim_init"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_testnodeset_generated_31_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6003)
);
}

/* String_scalar_init - ns=1;i=16001 */

static UA_StatusCode function_namespace_testnodeset_generated_32_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_16001_variant_DataContents =  UA_String_new();
if (!variablenode_ns_1_i_16001_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_1_i_16001_variant_DataContents);
*variablenode_ns_1_i_16001_variant_DataContents = UA_STRING_ALLOC("Hello World");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_16001_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "String_scalar_init");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 16001),
UA_NODEID_NUMERIC(ns[1], 5100),
UA_NODEID_NUMERIC(ns[0], 35),
UA_QUALIFIEDNAME(ns[1], "String_scalar_init"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_16001_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_testnodeset_generated_32_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 16001)
);
}

/* Int32_scalar_Init_ValueRank=-3 - ns=1;i=8002 */

static UA_StatusCode function_namespace_testnodeset_generated_33_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
attr.valueRank = -3;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
UA_Int32 *variablenode_ns_1_i_8002_variant_DataContents =  UA_Int32_new();
if (!variablenode_ns_1_i_8002_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Int32_init(variablenode_ns_1_i_8002_variant_DataContents);
*variablenode_ns_1_i_8002_variant_DataContents = (UA_Int32) 1;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_8002_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "Int32_scalar_Init_ValueRank=-3");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 8002),
UA_NODEID_NUMERIC(ns[1], 5100),
UA_NODEID_NUMERIC(ns[0], 35),
UA_QUALIFIEDNAME(ns[1], "Int32_scalar_Init_ValueRank=-3"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int32_delete(variablenode_ns_1_i_8002_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_testnodeset_generated_33_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 8002)
);
}

/* Int32_scalar_noInit_ValueRank=-1 - ns=1;i=8005 */

static UA_StatusCode function_namespace_testnodeset_generated_34_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
UA_Int32 *variablenode_ns_1_i_8005_variant_DataContents =  UA_Int32_new();
if (!variablenode_ns_1_i_8005_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Int32_init(variablenode_ns_1_i_8005_variant_DataContents);
*variablenode_ns_1_i_8005_variant_DataContents = (UA_Int32) 1;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_8005_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "Int32_scalar_noInit_ValueRank=-1");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 8005),
UA_NODEID_NUMERIC(ns[1], 5100),
UA_NODEID_NUMERIC(ns[0], 35),
UA_QUALIFIEDNAME(ns[1], "Int32_scalar_noInit_ValueRank=-1"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int32_delete(variablenode_ns_1_i_8005_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_testnodeset_generated_34_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 8005)
);
}

/* ByteString_scalar_init - ns=1;i=16002 */
static const UA_Byte variablenode_ns_1_i_16002_variant_DataContents_byteArray[10] = {72, 101, 108, 108, 111, 87, 111, 114, 108, 100};



static UA_StatusCode function_namespace_testnodeset_generated_35_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 15);
UA_ByteString *variablenode_ns_1_i_16002_variant_DataContents =  UA_ByteString_new();
if (!variablenode_ns_1_i_16002_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_ByteString_init(variablenode_ns_1_i_16002_variant_DataContents);
variablenode_ns_1_i_16002_variant_DataContents->length = 10;
variablenode_ns_1_i_16002_variant_DataContents->data = (UA_Byte *)(void*)(uintptr_t)variablenode_ns_1_i_16002_variant_DataContents_byteArray;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_16002_variant_DataContents, &UA_TYPES[UA_TYPES_BYTESTRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "ByteString_scalar_init");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 16002),
UA_NODEID_NUMERIC(ns[1], 5100),
UA_NODEID_NUMERIC(ns[0], 35),
UA_QUALIFIEDNAME(ns[1], "ByteString_scalar_init"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
variablenode_ns_1_i_16002_variant_DataContents->data = NULL;
variablenode_ns_1_i_16002_variant_DataContents->length = 0;
UA_ByteString_delete(variablenode_ns_1_i_16002_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_testnodeset_generated_35_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 16002)
);
}

/* Opc.Ua.Testnodeset - ns=1;i=7617 */
static const UA_Byte variablenode_ns_1_i_7617_variant_DataContents_byteArray[1245] = {60, 111, 112, 99, 58, 84, 121, 112, 101, 68, 105, 99, 116, 105, 111, 110, 97, 114, 121, 10, 32, 32, 120, 109, 108, 110, 115, 58, 111, 112, 99, 61, 34, 104, 116, 116, 112, 58, 47, 47, 111, 112, 99, 102, 111, 117, 110, 100, 97, 116, 105, 111, 110, 46, 111, 114, 103, 47, 66, 105, 110, 97, 114, 121, 83, 99, 104, 101, 109, 97, 47, 34, 10, 32, 32, 120, 109, 108, 110, 115, 58, 120, 115, 105, 61, 34, 104, 116, 116, 112, 58, 47, 47, 119, 119, 119, 46, 119, 51, 46, 111, 114, 103, 47, 50, 48, 48, 49, 47, 88, 77, 76, 83, 99, 104, 101, 109, 97, 45, 105, 110, 115, 116, 97, 110, 99, 101, 34, 10, 32, 32, 120, 109, 108, 110, 115, 58, 117, 97, 61, 34, 104, 116, 116, 112, 58, 47, 47, 111, 112, 99, 102, 111, 117, 110, 100, 97, 116, 105, 111, 110, 46, 111, 114, 103, 47, 85, 65, 47, 34, 10, 32, 32, 120, 109, 108, 110, 115, 58, 116, 110, 115, 61, 34, 104, 116, 116, 112, 58, 47, 47, 121, 111, 117, 114, 111, 114, 103, 97, 110, 105, 115, 97, 116, 105, 111, 110, 46, 111, 114, 103, 47, 116, 101, 115, 116, 47, 34, 10, 32, 32, 68, 101, 102, 97, 117, 108, 116, 66, 121, 116, 101, 79, 114, 100, 101, 114, 61, 34, 76, 105, 116, 116, 108, 101, 69, 110, 100, 105, 97, 110, 34, 10, 32, 32, 84, 97, 114, 103, 101, 116, 78, 97, 109, 101, 115, 112, 97, 99, 101, 61, 34, 104, 116, 116, 112, 58, 47, 47, 121, 111, 117, 114, 111, 114, 103, 97, 110, 105, 115, 97, 116, 105, 111, 110, 46, 111, 114, 103, 47, 116, 101, 115, 116, 47, 34, 10, 62, 10, 32, 32, 60, 111, 112, 99, 58, 73, 109, 112, 111, 114, 116, 32, 78, 97, 109, 101, 115, 112, 97, 99, 101, 61, 34, 104, 116, 116, 112, 58, 47, 47, 111, 112, 99, 102, 111, 117, 110, 100, 97, 116, 105, 111, 110, 46, 111, 114, 103, 47, 85, 65, 47, 34, 32, 76, 111, 99, 97, 116, 105, 111, 110, 61, 34, 79, 112, 99, 46, 85, 97, 46, 66, 105, 110, 97, 114, 121, 83, 99, 104, 101, 109, 97, 46, 98, 115, 100, 34, 47, 62, 10, 10, 32, 32, 60, 111, 112, 99, 58, 83, 116, 114, 117, 99, 116, 117, 114, 101, 100, 84, 121, 112, 101, 32, 78, 97, 109, 101, 61, 34, 80, 111, 105, 110, 116, 34, 32, 66, 97, 115, 101, 84, 121, 112, 101, 61, 34, 117, 97, 58, 69, 120, 116, 101, 110, 115, 105, 111, 110, 79, 98, 106, 101, 99, 116, 34, 62, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 70, 105, 101, 108, 100, 32, 78, 97, 109, 101, 61, 34, 120, 34, 32, 84, 121, 112, 101, 78, 97, 109, 101, 61, 34, 111, 112, 99, 58, 68, 111, 117, 98, 108, 101, 34, 32, 47, 62, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 70, 105, 101, 108, 100, 32, 78, 97, 109, 101, 61, 34, 121, 34, 32, 84, 121, 112, 101, 78, 97, 109, 101, 61, 34, 111, 112, 99, 58, 68, 111, 117, 98, 108, 101, 34, 32, 47, 62, 10, 32, 32, 60, 47, 111, 112, 99, 58, 83, 116, 114, 117, 99, 116, 117, 114, 101, 100, 84, 121, 112, 101, 62, 10, 10, 32, 32, 60, 111, 112, 99, 58, 83, 116, 114, 117, 99, 116, 117, 114, 101, 100, 84, 121, 112, 101, 32, 78, 97, 109, 101, 61, 34, 78, 101, 115, 116, 101, 100, 80, 111, 105, 110, 116, 34, 32, 66, 97, 115, 101, 84, 121, 112, 101, 61, 34, 117, 97, 58, 69, 120, 116, 101, 110, 115, 105, 111, 110, 79, 98, 106, 101, 99, 116, 34, 62, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 70, 105, 101, 108, 100, 32, 78, 97, 109, 101, 61, 34, 120, 34, 32, 84, 121, 112, 101, 78, 97, 109, 101, 61, 34, 111, 112, 99, 58, 68, 111, 117, 98, 108, 101, 34, 32, 47, 62, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 70, 105, 101, 108, 100, 32, 78, 97, 109, 101, 61, 34, 121, 34, 32, 84, 121, 112, 101, 78, 97, 109, 101, 61, 34, 111, 112, 99, 58, 68, 111, 117, 98, 108, 101, 34, 32, 47, 62, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 70, 105, 101, 108, 100, 32, 78, 97, 109, 101, 61, 34, 112, 111, 105, 110, 116, 49, 34, 32, 84, 121, 112, 101, 78, 97, 109, 101, 61, 34, 116, 110, 115, 58, 80, 111, 105, 110, 116, 34, 32, 47, 62, 10, 32, 32, 60, 47, 111, 112, 99, 58, 83, 116, 114, 117, 99, 116, 117, 114, 101, 100, 84, 121, 112, 101, 62, 10, 10, 32, 32, 32, 60, 111, 112, 99, 58, 83, 116, 114, 117, 99, 116, 117, 114, 101, 100, 84, 121, 112, 101, 32, 78, 97, 109, 101, 61, 34, 80, 111, 105, 110, 116, 87, 105, 116, 104, 65, 114, 114, 97, 121, 34, 32, 66, 97, 115, 101, 84, 121, 112, 101, 61, 34, 117, 97, 58, 69, 120, 116, 101, 110, 115, 105, 111, 110, 79, 98, 106, 101, 99, 116, 34, 62, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 70, 105, 101, 108, 100, 32, 78, 97, 109, 101, 61, 34, 120, 34, 32, 84, 121, 112, 101, 78, 97, 109, 101, 61, 34, 111, 112, 99, 58, 68, 111, 117, 98, 108, 101, 34, 32, 47, 62, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 70, 105, 101, 108, 100, 32, 78, 97, 109, 101, 61, 34, 121, 34, 32, 84, 121, 112, 101, 78, 97, 109, 101, 61, 34, 111, 112, 99, 58, 68, 111, 117, 98, 108, 101, 34, 32, 47, 62, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 70, 105, 101, 108, 100, 32, 78, 97, 109, 101, 61, 34, 122, 34, 32, 84, 121, 112, 101, 78, 97, 109, 101, 61, 34, 111, 112, 99, 58, 68, 111, 117, 98, 108, 101, 34, 32, 47, 62, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 70, 105, 101, 108, 100, 32, 78, 97, 109, 101, 61, 34, 97, 114, 114, 97, 121, 49, 83, 105, 122, 101, 34, 32, 84, 121, 112, 101, 78, 97, 109, 101, 61, 34, 111, 112, 99, 58, 85, 73, 110, 116, 51, 50, 34, 32, 47, 62, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 70, 105, 101, 108, 100, 32, 78, 97, 109, 101, 61, 34, 97, 114, 114, 97, 121, 49, 34, 32, 84, 121, 112, 101, 78, 97, 109, 101, 61, 34, 111, 112, 99, 58, 68, 111, 117, 98, 108, 101, 34, 32, 76, 101, 110, 103, 116, 104, 70, 105, 101, 108, 100, 61, 34, 97, 114, 114, 97, 121, 49, 83, 105, 122, 101, 34, 32, 47, 62, 10, 32, 32, 60, 47, 111, 112, 99, 58, 83, 116, 114, 117, 99, 116, 117, 114, 101, 100, 84, 121, 112, 101, 62, 10, 10, 60, 47, 111, 112, 99, 58, 84, 121, 112, 101, 68, 105, 99, 116, 105, 111, 110, 97, 114, 121, 62};



static UA_StatusCode function_namespace_testnodeset_generated_36_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 15);
UA_ByteString *variablenode_ns_1_i_7617_variant_DataContents =  UA_ByteString_new();
if (!variablenode_ns_1_i_7617_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_ByteString_init(variablenode_ns_1_i_7617_variant_DataContents);
variablenode_ns_1_i_7617_variant_DataContents->length = 1245;
variablenode_ns_1_i_7617_variant_DataContents->data = (UA_Byte *)(void*)(uintptr_t)variablenode_ns_1_i_7617_variant_DataContents_byteArray;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_7617_variant_DataContents, &UA_TYPES[UA_TYPES_BYTESTRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Opc.Ua.Testnodeset");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 7617),
UA_NODEID_NUMERIC(ns[0], 93),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "Opc.Ua.Testnodeset"),
UA_NODEID_NUMERIC(ns[0], 72),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
variablenode_ns_1_i_7617_variant_DataContents->data = NULL;
variablenode_ns_1_i_7617_variant_DataContents->length = 0;
UA_ByteString_delete(variablenode_ns_1_i_7617_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_testnodeset_generated_36_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 7617)
);
}

/* NestedPoint - ns=1;i=12214 */

static UA_StatusCode function_namespace_testnodeset_generated_37_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_12214_variant_DataContents =  UA_String_new();
if (!variablenode_ns_1_i_12214_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_1_i_12214_variant_DataContents);
*variablenode_ns_1_i_12214_variant_DataContents = UA_STRING_ALLOC("NestedPoint");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_12214_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "NestedPoint");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 12214),
UA_NODEID_NUMERIC(ns[1], 7617),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "NestedPoint"),
UA_NODEID_NUMERIC(ns[0], 69),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_12214_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 12214), UA_NODEID_NUMERIC(ns[0], 39), UA_EXPANDEDNODEID_NUMERIC(ns[1], 5003), false);
return retVal;
}

static UA_StatusCode function_namespace_testnodeset_generated_37_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 12214)
);
}

/* PointWithArray - ns=1;i=12215 */

static UA_StatusCode function_namespace_testnodeset_generated_38_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_12215_variant_DataContents =  UA_String_new();
if (!variablenode_ns_1_i_12215_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_1_i_12215_variant_DataContents);
*variablenode_ns_1_i_12215_variant_DataContents = UA_STRING_ALLOC("PointWithArray");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_12215_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "PointWithArray");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 12215),
UA_NODEID_NUMERIC(ns[1], 7617),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "PointWithArray"),
UA_NODEID_NUMERIC(ns[0], 69),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_12215_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 12215), UA_NODEID_NUMERIC(ns[0], 39), UA_EXPANDEDNODEID_NUMERIC(ns[1], 5004), false);
return retVal;
}

static UA_StatusCode function_namespace_testnodeset_generated_38_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 12215)
);
}

/* Point - ns=1;i=12213 */

static UA_StatusCode function_namespace_testnodeset_generated_39_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_12213_variant_DataContents =  UA_String_new();
if (!variablenode_ns_1_i_12213_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_1_i_12213_variant_DataContents);
*variablenode_ns_1_i_12213_variant_DataContents = UA_STRING_ALLOC("Point");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_12213_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Point");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 12213),
UA_NODEID_NUMERIC(ns[1], 7617),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "Point"),
UA_NODEID_NUMERIC(ns[0], 69),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_12213_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 12213), UA_NODEID_NUMERIC(ns[0], 39), UA_EXPANDEDNODEID_NUMERIC(ns[1], 5002), false);
return retVal;
}

static UA_StatusCode function_namespace_testnodeset_generated_39_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 12213)
);
}

UA_StatusCode namespace_testnodeset_generated(UA_Server *server) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
/* Use namespace ids generated by the server */
UA_UInt16 ns[2];
ns[0] = UA_Server_addNamespace(server, "http://opcfoundation.org/UA/");
ns[1] = UA_Server_addNamespace(server, "http://yourorganisation.org/test/");
bool dummy = (
!(retVal = function_namespace_testnodeset_generated_0_begin(server, ns))
&& !(retVal = function_namespace_testnodeset_generated_1_begin(server, ns))
&& !(retVal = function_namespace_testnodeset_generated_2_begin(server, ns))
&& !(retVal = function_namespace_testnodeset_generated_3_begin(server, ns))
&& !(retVal = function_namespace_testnodeset_generated_4_begin(server, ns))
&& !(retVal = function_namespace_testnodeset_generated_5_begin(server, ns))
&& !(retVal = function_namespace_testnodeset_generated_6_begin(server, ns))
&& !(retVal = function_namespace_testnodeset_generated_7_begin(server, ns))
&& !(retVal = function_namespace_testnodeset_generated_8_begin(server, ns))
&& !(retVal = function_namespace_testnodeset_generated_9_begin(server, ns))
&& !(retVal = function_namespace_testnodeset_generated_10_begin(server, ns))
&& !(retVal = function_namespace_testnodeset_generated_11_begin(server, ns))
&& !(retVal = function_namespace_testnodeset_generated_12_begin(server, ns))
&& !(retVal = function_namespace_testnodeset_generated_13_begin(server, ns))
&& !(retVal = function_namespace_testnodeset_generated_14_begin(server, ns))
&& !(retVal = function_namespace_testnodeset_generated_15_begin(server, ns))
&& !(retVal = function_namespace_testnodeset_generated_16_begin(server, ns))
&& !(retVal = function_namespace_testnodeset_generated_17_begin(server, ns))
&& !(retVal = function_namespace_testnodeset_generated_18_begin(server, ns))
&& !(retVal = function_namespace_testnodeset_generated_19_begin(server, ns))
&& !(retVal = function_namespace_testnodeset_generated_20_begin(server, ns))
&& !(retVal = function_namespace_testnodeset_generated_21_begin(server, ns))
&& !(retVal = function_namespace_testnodeset_generated_22_begin(server, ns))
&& !(retVal = function_namespace_testnodeset_generated_23_begin(server, ns))
&& !(retVal = function_namespace_testnodeset_generated_24_begin(server, ns))
&& !(retVal = function_namespace_testnodeset_generated_25_begin(server, ns))
&& !(retVal = function_namespace_testnodeset_generated_26_begin(server, ns))
&& !(retVal = function_namespace_testnodeset_generated_27_begin(server, ns))
&& !(retVal = function_namespace_testnodeset_generated_28_begin(server, ns))
&& !(retVal = function_namespace_testnodeset_generated_29_begin(server, ns))
&& !(retVal = function_namespace_testnodeset_generated_30_begin(server, ns))
&& !(retVal = function_namespace_testnodeset_generated_31_begin(server, ns))
&& !(retVal = function_namespace_testnodeset_generated_32_begin(server, ns))
&& !(retVal = function_namespace_testnodeset_generated_33_begin(server, ns))
&& !(retVal = function_namespace_testnodeset_generated_34_begin(server, ns))
&& !(retVal = function_namespace_testnodeset_generated_35_begin(server, ns))
&& !(retVal = function_namespace_testnodeset_generated_36_begin(server, ns))
&& !(retVal = function_namespace_testnodeset_generated_37_begin(server, ns))
&& !(retVal = function_namespace_testnodeset_generated_38_begin(server, ns))
&& !(retVal = function_namespace_testnodeset_generated_39_begin(server, ns))
&& !(retVal = function_namespace_testnodeset_generated_39_finish(server, ns))
&& !(retVal = function_namespace_testnodeset_generated_38_finish(server, ns))
&& !(retVal = function_namespace_testnodeset_generated_37_finish(server, ns))
&& !(retVal = function_namespace_testnodeset_generated_36_finish(server, ns))
&& !(retVal = function_namespace_testnodeset_generated_35_finish(server, ns))
&& !(retVal = function_namespace_testnodeset_generated_34_finish(server, ns))
&& !(retVal = function_namespace_testnodeset_generated_33_finish(server, ns))
&& !(retVal = function_namespace_testnodeset_generated_32_finish(server, ns))
&& !(retVal = function_namespace_testnodeset_generated_31_finish(server, ns))
&& !(retVal = function_namespace_testnodeset_generated_30_finish(server, ns))
&& !(retVal = function_namespace_testnodeset_generated_29_finish(server, ns))
&& !(retVal = function_namespace_testnodeset_generated_28_finish(server, ns))
&& !(retVal = function_namespace_testnodeset_generated_27_finish(server, ns))
&& !(retVal = function_namespace_testnodeset_generated_26_finish(server, ns))
&& !(retVal = function_namespace_testnodeset_generated_25_finish(server, ns))
&& !(retVal = function_namespace_testnodeset_generated_24_finish(server, ns))
&& !(retVal = function_namespace_testnodeset_generated_23_finish(server, ns))
&& !(retVal = function_namespace_testnodeset_generated_22_finish(server, ns))
&& !(retVal = function_namespace_testnodeset_generated_21_finish(server, ns))
&& !(retVal = function_namespace_testnodeset_generated_20_finish(server, ns))
&& !(retVal = function_namespace_testnodeset_generated_19_finish(server, ns))
&& !(retVal = function_namespace_testnodeset_generated_18_finish(server, ns))
&& !(retVal = function_namespace_testnodeset_generated_17_finish(server, ns))
&& !(retVal = function_namespace_testnodeset_generated_16_finish(server, ns))
&& !(retVal = function_namespace_testnodeset_generated_15_finish(server, ns))
&& !(retVal = function_namespace_testnodeset_generated_14_finish(server, ns))
&& !(retVal = function_namespace_testnodeset_generated_13_finish(server, ns))
&& !(retVal = function_namespace_testnodeset_generated_12_finish(server, ns))
&& !(retVal = function_namespace_testnodeset_generated_11_finish(server, ns))
&& !(retVal = function_namespace_testnodeset_generated_10_finish(server, ns))
&& !(retVal = function_namespace_testnodeset_generated_9_finish(server, ns))
&& !(retVal = function_namespace_testnodeset_generated_8_finish(server, ns))
&& !(retVal = function_namespace_testnodeset_generated_7_finish(server, ns))
&& !(retVal = function_namespace_testnodeset_generated_6_finish(server, ns))
&& !(retVal = function_namespace_testnodeset_generated_5_finish(server, ns))
&& !(retVal = function_namespace_testnodeset_generated_4_finish(server, ns))
&& !(retVal = function_namespace_testnodeset_generated_3_finish(server, ns))
&& !(retVal = function_namespace_testnodeset_generated_2_finish(server, ns))
&& !(retVal = function_namespace_testnodeset_generated_1_finish(server, ns))
&& !(retVal = function_namespace_testnodeset_generated_0_finish(server, ns))
); (void)(dummy);
return retVal;
}
