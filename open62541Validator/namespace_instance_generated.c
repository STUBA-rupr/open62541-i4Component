/* WARNING: This is a generated file.
 * Any manual changes will be overwritten. */

#include "namespace_instance_generated.h"


/* Dictionaries - ns=2;i=96 */

static UA_StatusCode function_namespace_instance_generated_0_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Dictionaries");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Dictionaries");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 96),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "Dictionaries"),
UA_NODEID_NUMERIC(ns[0], 17591),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_0_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 96)
);
}

/* DictionaryEntries - ns=2;i=98 */

static UA_StatusCode function_namespace_instance_generated_1_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "DictionaryEntries");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "DictionaryEntries");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 98),
UA_NODEID_NUMERIC(ns[2], 96),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "DictionaryEntries"),
UA_NODEID_NUMERIC(ns[0], 17591),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_1_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 98)
);
}

/* 0173-1#02-AAO677#002 - ns=2;i=641 */

static UA_StatusCode function_namespace_instance_generated_2_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "0173-1#02-AAO677#002");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "0173-1#02-AAO677#002");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 641),
UA_NODEID_NUMERIC(ns[2], 98),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "0173-1#02-AAO677#002"),
UA_NODEID_NUMERIC(ns[1], 3),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_2_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 641)
);
}

/* 0173-1#01-ADN198#009 - ns=2;i=640 */

static UA_StatusCode function_namespace_instance_generated_3_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "0173-1#01-ADN198#009");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "0173-1#01-ADN198#009");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 640),
UA_NODEID_NUMERIC(ns[2], 98),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "0173-1#01-ADN198#009"),
UA_NODEID_NUMERIC(ns[1], 3),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_3_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 640)
);
}

/* 0173-1#02-AAW338#001 - ns=2;i=642 */

static UA_StatusCode function_namespace_instance_generated_4_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "0173-1#02-AAW338#001");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "0173-1#02-AAW338#001");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 642),
UA_NODEID_NUMERIC(ns[2], 98),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "0173-1#02-AAW338#001"),
UA_NODEID_NUMERIC(ns[1], 3),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_4_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 642)
);
}

/* 0173-1#02-AAO694#001 - ns=2;i=643 */

static UA_StatusCode function_namespace_instance_generated_5_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "0173-1#02-AAO694#001");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "0173-1#02-AAO694#001");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 643),
UA_NODEID_NUMERIC(ns[2], 98),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "0173-1#02-AAO694#001"),
UA_NODEID_NUMERIC(ns[1], 3),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_5_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 643)
);
}

/* ConceptDescriptions - ns=2;i=97 */

static UA_StatusCode function_namespace_instance_generated_6_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ConceptDescriptions");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "ConceptDescriptions");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 97),
UA_NODEID_NUMERIC(ns[2], 96),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "ConceptDescriptions"),
UA_NODEID_NUMERIC(ns[0], 17591),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_6_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 97)
);
}

/* www.example.com/ids/cd/9070_4140_1012_6743 - ns=2;i=99 */

static UA_StatusCode function_namespace_instance_generated_7_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "www.example.com/ids/cd/9070_4140_1012_6743");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "ambient temperature");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 99),
UA_NODEID_NUMERIC(ns[2], 97),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "www.example.com/ids/cd/9070_4140_1012_6743"),
UA_NODEID_NUMERIC(ns[0], 0),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_7_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 99)
);
}

/* DataSpecificationIEC61360 - ns=2;i=106 */

static UA_StatusCode function_namespace_instance_generated_8_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "DataSpecificationIEC61360");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "DataSpecificationIEC61360");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 106),
UA_NODEID_NUMERIC(ns[2], 99),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "DataSpecificationIEC61360"),
UA_NODEID_NUMERIC(ns[1], 3001),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_8_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 106)
);
}

/* ShortName - ns=2;i=108 */

static UA_StatusCode function_namespace_instance_generated_9_begin(UA_Server *server, UA_UInt16* ns) {
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
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21);
UA_LocalizedText variablenode_ns_2_i_108_variant_DataContents[1];
variablenode_ns_2_i_108_variant_DataContents[0] = UA_LOCALIZEDTEXT("EN?", "value");
UA_Variant_setArray(&attr.value, &variablenode_ns_2_i_108_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_LOCALIZEDTEXT]);
attr.displayName = UA_LOCALIZEDTEXT("", "ShortName");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "ShortName");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 108),
UA_NODEID_NUMERIC(ns[2], 106),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "ShortName"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_9_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 108)
);
}

/* PreferredName - ns=2;i=107 */

static UA_StatusCode function_namespace_instance_generated_10_begin(UA_Server *server, UA_UInt16* ns) {
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
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21);
UA_LocalizedText variablenode_ns_2_i_107_variant_DataContents[1];
variablenode_ns_2_i_107_variant_DataContents[0] = UA_LOCALIZEDTEXT("en", "temparature");
UA_Variant_setArray(&attr.value, &variablenode_ns_2_i_107_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_LOCALIZEDTEXT]);
attr.displayName = UA_LOCALIZEDTEXT("", "PreferredName");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "PreferredName");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 107),
UA_NODEID_NUMERIC(ns[2], 106),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "PreferredName"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_10_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 107)
);
}

/* DataType - ns=2;i=110 */

static UA_StatusCode function_namespace_instance_generated_11_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_110_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_110_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_110_variant_DataContents);
*variablenode_ns_2_i_110_variant_DataContents = UA_STRING_ALLOC("REAL_MEASURE");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_110_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "DataType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "DataType");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 110),
UA_NODEID_NUMERIC(ns[2], 106),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "DataType"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_110_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_11_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 110)
);
}

/* Identification - ns=2;i=101 */

static UA_StatusCode function_namespace_instance_generated_12_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Identification");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Identification");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 101),
UA_NODEID_NUMERIC(ns[2], 99),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "Identification"),
UA_NODEID_NUMERIC(ns[1], 1000),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_12_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 101)
);
}

/* Id - ns=2;i=103 */

static UA_StatusCode function_namespace_instance_generated_13_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_103_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_103_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_103_variant_DataContents);
*variablenode_ns_2_i_103_variant_DataContents = UA_STRING_ALLOC("www.example.com/ids/cd/9070_4140_1012_6743");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_103_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Id");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Id");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 103),
UA_NODEID_NUMERIC(ns[2], 101),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Id"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_103_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_13_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 103)
);
}

/* IdType - ns=2;i=102 */

static UA_StatusCode function_namespace_instance_generated_14_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_102_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_102_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_102_variant_DataContents);
*variablenode_ns_2_i_102_variant_DataContents = UA_STRING_ALLOC("IRI");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_102_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "IdType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "IdType");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 102),
UA_NODEID_NUMERIC(ns[2], 101),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "IdType"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_102_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_14_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 102)
);
}

/* DataSpecification - ns=2;i=104 */

static UA_StatusCode function_namespace_instance_generated_15_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "DataSpecification");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "DataSpecification");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 104),
UA_NODEID_NUMERIC(ns[2], 99),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "DataSpecification"),
UA_NODEID_NUMERIC(ns[1], 1005),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_15_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 104)
);
}

/* Keys - ns=2;i=105 */

static UA_StatusCode function_namespace_instance_generated_16_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_105_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_105_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_105_variant_DataContents);
*variablenode_ns_2_i_105_variant_DataContents = UA_STRING_ALLOC("(GlobalReference)(no-local)[IRI]http://admin-shell.io/DataSpecificationTemplates/DataSpecificationIEC61360/2/0");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_105_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Keys");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Keys");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 105),
UA_NODEID_NUMERIC(ns[2], 104),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Keys"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_105_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_16_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 105)
);
}

/* Category - ns=2;i=100 */

static UA_StatusCode function_namespace_instance_generated_17_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_100_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_100_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_100_variant_DataContents);
*variablenode_ns_2_i_100_variant_DataContents = UA_STRING_ALLOC("PROPERTY");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_100_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Category");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Category");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 100),
UA_NODEID_NUMERIC(ns[2], 99),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Category"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_100_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 100), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_17_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 100)
);
}

/* https://www.phi-ware.com/ids/cd/1381_3162_1102_0495 - ns=2;i=123 */

static UA_StatusCode function_namespace_instance_generated_18_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "https://www.phi-ware.com/ids/cd/1381_3162_1102_0495");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "atmospherical pressure");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 123),
UA_NODEID_NUMERIC(ns[2], 97),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "https://www.phi-ware.com/ids/cd/1381_3162_1102_0495"),
UA_NODEID_NUMERIC(ns[0], 0),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_18_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 123)
);
}

/* DataSpecificationIEC61360 - ns=2;i=130 */

static UA_StatusCode function_namespace_instance_generated_19_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "DataSpecificationIEC61360");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "DataSpecificationIEC61360");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 130),
UA_NODEID_NUMERIC(ns[2], 123),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "DataSpecificationIEC61360"),
UA_NODEID_NUMERIC(ns[1], 3001),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_19_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 130)
);
}

/* ShortName - ns=2;i=132 */

static UA_StatusCode function_namespace_instance_generated_20_begin(UA_Server *server, UA_UInt16* ns) {
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
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21);
UA_LocalizedText variablenode_ns_2_i_132_variant_DataContents[1];
variablenode_ns_2_i_132_variant_DataContents[0] = UA_LOCALIZEDTEXT("EN?", "value");
UA_Variant_setArray(&attr.value, &variablenode_ns_2_i_132_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_LOCALIZEDTEXT]);
attr.displayName = UA_LOCALIZEDTEXT("", "ShortName");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "ShortName");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 132),
UA_NODEID_NUMERIC(ns[2], 130),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "ShortName"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_20_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 132)
);
}

/* DataType - ns=2;i=134 */

static UA_StatusCode function_namespace_instance_generated_21_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_134_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_134_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_134_variant_DataContents);
*variablenode_ns_2_i_134_variant_DataContents = UA_STRING_ALLOC("REAL_MEASURE");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_134_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "DataType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "DataType");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 134),
UA_NODEID_NUMERIC(ns[2], 130),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "DataType"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_134_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_21_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 134)
);
}

/* PreferredName - ns=2;i=131 */

static UA_StatusCode function_namespace_instance_generated_22_begin(UA_Server *server, UA_UInt16* ns) {
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
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21);
UA_LocalizedText variablenode_ns_2_i_131_variant_DataContents[1];
variablenode_ns_2_i_131_variant_DataContents[0] = UA_LOCALIZEDTEXT("en", "pressure");
UA_Variant_setArray(&attr.value, &variablenode_ns_2_i_131_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_LOCALIZEDTEXT]);
attr.displayName = UA_LOCALIZEDTEXT("", "PreferredName");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "PreferredName");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 131),
UA_NODEID_NUMERIC(ns[2], 130),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "PreferredName"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_22_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 131)
);
}

/* Identification - ns=2;i=125 */

static UA_StatusCode function_namespace_instance_generated_23_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Identification");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Identification");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 125),
UA_NODEID_NUMERIC(ns[2], 123),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "Identification"),
UA_NODEID_NUMERIC(ns[1], 1000),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_23_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 125)
);
}

/* IdType - ns=2;i=126 */

static UA_StatusCode function_namespace_instance_generated_24_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_126_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_126_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_126_variant_DataContents);
*variablenode_ns_2_i_126_variant_DataContents = UA_STRING_ALLOC("IRI");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_126_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "IdType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "IdType");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 126),
UA_NODEID_NUMERIC(ns[2], 125),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "IdType"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_126_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_24_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 126)
);
}

/* Id - ns=2;i=127 */

static UA_StatusCode function_namespace_instance_generated_25_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_127_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_127_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_127_variant_DataContents);
*variablenode_ns_2_i_127_variant_DataContents = UA_STRING_ALLOC("https://www.phi-ware.com/ids/cd/1381_3162_1102_0495");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_127_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Id");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Id");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 127),
UA_NODEID_NUMERIC(ns[2], 125),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Id"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_127_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_25_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 127)
);
}

/* DataSpecification - ns=2;i=128 */

static UA_StatusCode function_namespace_instance_generated_26_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "DataSpecification");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "DataSpecification");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 128),
UA_NODEID_NUMERIC(ns[2], 123),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "DataSpecification"),
UA_NODEID_NUMERIC(ns[1], 1005),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_26_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 128)
);
}

/* Keys - ns=2;i=129 */

static UA_StatusCode function_namespace_instance_generated_27_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_129_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_129_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_129_variant_DataContents);
*variablenode_ns_2_i_129_variant_DataContents = UA_STRING_ALLOC("(GlobalReference)(no-local)[IRI]http://admin-shell.io/DataSpecificationTemplates/DataSpecificationIEC61360/2/0");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_129_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Keys");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Keys");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 129),
UA_NODEID_NUMERIC(ns[2], 128),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Keys"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_129_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_27_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 129)
);
}

/* Category - ns=2;i=124 */

static UA_StatusCode function_namespace_instance_generated_28_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_124_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_124_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_124_variant_DataContents);
*variablenode_ns_2_i_124_variant_DataContents = UA_STRING_ALLOC("PROPERTY");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_124_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Category");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Category");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 124),
UA_NODEID_NUMERIC(ns[2], 123),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Category"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_124_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 124), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_28_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 124)
);
}

/* https://www.phi-ware.com/ids/cd/7281_3162_1102_1618 - ns=2;i=111 */

static UA_StatusCode function_namespace_instance_generated_29_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "https://www.phi-ware.com/ids/cd/7281_3162_1102_1618");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "relative humidity");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 111),
UA_NODEID_NUMERIC(ns[2], 97),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "https://www.phi-ware.com/ids/cd/7281_3162_1102_1618"),
UA_NODEID_NUMERIC(ns[0], 0),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_29_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 111)
);
}

/* Identification - ns=2;i=113 */

static UA_StatusCode function_namespace_instance_generated_30_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Identification");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Identification");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 113),
UA_NODEID_NUMERIC(ns[2], 111),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "Identification"),
UA_NODEID_NUMERIC(ns[1], 1000),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_30_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 113)
);
}

/* Id - ns=2;i=115 */

static UA_StatusCode function_namespace_instance_generated_31_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_115_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_115_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_115_variant_DataContents);
*variablenode_ns_2_i_115_variant_DataContents = UA_STRING_ALLOC("https://www.phi-ware.com/ids/cd/7281_3162_1102_1618");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_115_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Id");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Id");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 115),
UA_NODEID_NUMERIC(ns[2], 113),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Id"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_115_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_31_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 115)
);
}

/* IdType - ns=2;i=114 */

static UA_StatusCode function_namespace_instance_generated_32_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_114_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_114_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_114_variant_DataContents);
*variablenode_ns_2_i_114_variant_DataContents = UA_STRING_ALLOC("IRI");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_114_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "IdType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "IdType");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 114),
UA_NODEID_NUMERIC(ns[2], 113),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "IdType"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_114_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_32_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 114)
);
}

/* DataSpecificationIEC61360 - ns=2;i=118 */

static UA_StatusCode function_namespace_instance_generated_33_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "DataSpecificationIEC61360");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "DataSpecificationIEC61360");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 118),
UA_NODEID_NUMERIC(ns[2], 111),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "DataSpecificationIEC61360"),
UA_NODEID_NUMERIC(ns[1], 3001),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_33_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 118)
);
}

/* PreferredName - ns=2;i=119 */

static UA_StatusCode function_namespace_instance_generated_34_begin(UA_Server *server, UA_UInt16* ns) {
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
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21);
UA_LocalizedText variablenode_ns_2_i_119_variant_DataContents[1];
variablenode_ns_2_i_119_variant_DataContents[0] = UA_LOCALIZEDTEXT("en", "humidity");
UA_Variant_setArray(&attr.value, &variablenode_ns_2_i_119_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_LOCALIZEDTEXT]);
attr.displayName = UA_LOCALIZEDTEXT("", "PreferredName");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "PreferredName");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 119),
UA_NODEID_NUMERIC(ns[2], 118),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "PreferredName"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_34_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 119)
);
}

/* ShortName - ns=2;i=120 */

static UA_StatusCode function_namespace_instance_generated_35_begin(UA_Server *server, UA_UInt16* ns) {
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
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21);
UA_LocalizedText variablenode_ns_2_i_120_variant_DataContents[1];
variablenode_ns_2_i_120_variant_DataContents[0] = UA_LOCALIZEDTEXT("EN?", "value");
UA_Variant_setArray(&attr.value, &variablenode_ns_2_i_120_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_LOCALIZEDTEXT]);
attr.displayName = UA_LOCALIZEDTEXT("", "ShortName");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "ShortName");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 120),
UA_NODEID_NUMERIC(ns[2], 118),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "ShortName"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_35_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 120)
);
}

/* DataType - ns=2;i=122 */

static UA_StatusCode function_namespace_instance_generated_36_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_122_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_122_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_122_variant_DataContents);
*variablenode_ns_2_i_122_variant_DataContents = UA_STRING_ALLOC("REAL_MEASURE");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_122_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "DataType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "DataType");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 122),
UA_NODEID_NUMERIC(ns[2], 118),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "DataType"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_122_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_36_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 122)
);
}

/* DataSpecification - ns=2;i=116 */

static UA_StatusCode function_namespace_instance_generated_37_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "DataSpecification");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "DataSpecification");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 116),
UA_NODEID_NUMERIC(ns[2], 111),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "DataSpecification"),
UA_NODEID_NUMERIC(ns[1], 1005),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_37_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 116)
);
}

/* Keys - ns=2;i=117 */

static UA_StatusCode function_namespace_instance_generated_38_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_117_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_117_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_117_variant_DataContents);
*variablenode_ns_2_i_117_variant_DataContents = UA_STRING_ALLOC("(GlobalReference)(no-local)[IRI]http://admin-shell.io/DataSpecificationTemplates/DataSpecificationIEC61360/2/0");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_117_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Keys");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Keys");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 117),
UA_NODEID_NUMERIC(ns[2], 116),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Keys"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_117_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_38_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 117)
);
}

/* Category - ns=2;i=112 */

static UA_StatusCode function_namespace_instance_generated_39_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_112_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_112_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_112_variant_DataContents);
*variablenode_ns_2_i_112_variant_DataContents = UA_STRING_ALLOC("PROPERTY");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_112_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Category");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Category");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 112),
UA_NODEID_NUMERIC(ns[2], 111),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Category"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_112_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 112), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_39_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 112)
);
}

/* AASROOT - ns=2;i=95 */

static UA_StatusCode function_namespace_instance_generated_40_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "AASROOT");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 95),
UA_NODEID_NUMERIC(ns[0], 85),
UA_NODEID_NUMERIC(ns[0], 35),
UA_QUALIFIEDNAME(ns[0], "AASROOT"),
UA_NODEID_NUMERIC(ns[0], 61),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_40_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 95)
);
}

/* AssetAdministrationShell:EcI4.0 - ns=2;i=135 */

static UA_StatusCode function_namespace_instance_generated_41_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "AssetAdministrationShell:EcI4.0");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 135),
UA_NODEID_NUMERIC(ns[2], 95),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "EcI4.0"),
UA_NODEID_NUMERIC(ns[1], 1024),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_41_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 135)
);
}

/* Identification - ns=2;i=137 */

static UA_StatusCode function_namespace_instance_generated_42_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Identification");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Identification");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 137),
UA_NODEID_NUMERIC(ns[2], 135),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "Identification"),
UA_NODEID_NUMERIC(ns[1], 1000),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_42_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 137)
);
}

/* Id - ns=2;i=139 */

static UA_StatusCode function_namespace_instance_generated_43_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_139_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_139_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_139_variant_DataContents);
*variablenode_ns_2_i_139_variant_DataContents = UA_STRING_ALLOC("www.phi-ware.com.com/ids/aas/1263_9052_1102_6574");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_139_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Id");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Id");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 139),
UA_NODEID_NUMERIC(ns[2], 137),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Id"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_139_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_43_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 139)
);
}

/* IdType - ns=2;i=138 */

static UA_StatusCode function_namespace_instance_generated_44_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_138_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_138_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_138_variant_DataContents);
*variablenode_ns_2_i_138_variant_DataContents = UA_STRING_ALLOC("IRI");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_138_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "IdType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "IdType");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 138),
UA_NODEID_NUMERIC(ns[2], 137),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "IdType"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_138_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_44_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 138)
);
}

/* Submodel:X-NUCLEO-IKS01A3 - ns=2;i=446 */

static UA_StatusCode function_namespace_instance_generated_45_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Submodel:X-NUCLEO-IKS01A3");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Motion MEMS and environmental sensor expansion board for STM32 Nucleo");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 446),
UA_NODEID_NUMERIC(ns[2], 135),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "X-NUCLEO-IKS01A3"),
UA_NODEID_NUMERIC(ns[1], 1007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_45_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 446)
);
}

/* TechnicalData - ns=2;i=490 */

static UA_StatusCode function_namespace_instance_generated_46_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "TechnicalData");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 490),
UA_NODEID_NUMERIC(ns[2], 446),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "TechnicalData"),
UA_NODEID_NUMERIC(ns[1], 1010),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_46_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 490)
);
}

/* AllowDuplicates - ns=2;i=495 */

static UA_StatusCode function_namespace_instance_generated_47_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1);
UA_Boolean *variablenode_ns_2_i_495_variant_DataContents =  UA_Boolean_new();
if (!variablenode_ns_2_i_495_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Boolean_init(variablenode_ns_2_i_495_variant_DataContents);
*variablenode_ns_2_i_495_variant_DataContents = (UA_Boolean) false;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_495_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
attr.displayName = UA_LOCALIZEDTEXT("", "AllowDuplicates");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "AllowDuplicates");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 495),
UA_NODEID_NUMERIC(ns[2], 490),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "AllowDuplicates"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Boolean_delete(variablenode_ns_2_i_495_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_47_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 495)
);
}

/* SemanticId - ns=2;i=492 */

static UA_StatusCode function_namespace_instance_generated_48_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SemanticId");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "SemanticId");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 492),
UA_NODEID_NUMERIC(ns[2], 490),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "SemanticId"),
UA_NODEID_NUMERIC(ns[1], 1005),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_48_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 492)
);
}

/* Keys - ns=2;i=493 */

static UA_StatusCode function_namespace_instance_generated_49_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "Keys");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Keys");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 493),
UA_NODEID_NUMERIC(ns[2], 492),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Keys"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_49_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 493)
);
}

/* pressureSensor - ns=2;i=517 */

static UA_StatusCode function_namespace_instance_generated_50_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "pressureSensor");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 517),
UA_NODEID_NUMERIC(ns[2], 490),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "pressureSensor"),
UA_NODEID_NUMERIC(ns[1], 1009),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_50_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 517)
);
}

/* Kind - ns=2;i=521 */

static UA_StatusCode function_namespace_instance_generated_51_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_521_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_521_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_521_variant_DataContents);
*variablenode_ns_2_i_521_variant_DataContents = UA_STRING_ALLOC("Instance");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_521_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Kind");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Kind");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 521),
UA_NODEID_NUMERIC(ns[2], 517),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Kind"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_521_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_51_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 521)
);
}

/* Category - ns=2;i=518 */

static UA_StatusCode function_namespace_instance_generated_52_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_518_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_518_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_518_variant_DataContents);
*variablenode_ns_2_i_518_variant_DataContents = UA_STRING_ALLOC("CONSTANT");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_518_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Category");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Category");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 518),
UA_NODEID_NUMERIC(ns[2], 517),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Category"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_518_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 518), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_52_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 518)
);
}

/* ValueType - ns=2;i=522 */

static UA_StatusCode function_namespace_instance_generated_53_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_522_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_522_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_522_variant_DataContents);
*variablenode_ns_2_i_522_variant_DataContents = UA_STRING_ALLOC("string");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_522_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "ValueType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "ValueType");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 522),
UA_NODEID_NUMERIC(ns[2], 517),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "ValueType"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_522_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_53_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 522)
);
}

/* SemanticId - ns=2;i=519 */

static UA_StatusCode function_namespace_instance_generated_54_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SemanticId");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "SemanticId");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 519),
UA_NODEID_NUMERIC(ns[2], 517),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "SemanticId"),
UA_NODEID_NUMERIC(ns[1], 1005),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_54_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 519)
);
}

/* Keys - ns=2;i=520 */

static UA_StatusCode function_namespace_instance_generated_55_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "Keys");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Keys");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 520),
UA_NODEID_NUMERIC(ns[2], 519),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Keys"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_55_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 520)
);
}

/* Value - ns=2;i=523 */

static UA_StatusCode function_namespace_instance_generated_56_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_523_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_523_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_523_variant_DataContents);
*variablenode_ns_2_i_523_variant_DataContents = UA_STRING_ALLOC("LPS22HH");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_523_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Value");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Value");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 523),
UA_NODEID_NUMERIC(ns[2], 517),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Value"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_523_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_56_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 523)
);
}

/* temperatureSensor - ns=2;i=524 */

static UA_StatusCode function_namespace_instance_generated_57_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "temperatureSensor");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 524),
UA_NODEID_NUMERIC(ns[2], 490),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "temperatureSensor"),
UA_NODEID_NUMERIC(ns[1], 1009),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_57_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 524)
);
}

/* ValueType - ns=2;i=529 */

static UA_StatusCode function_namespace_instance_generated_58_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_529_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_529_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_529_variant_DataContents);
*variablenode_ns_2_i_529_variant_DataContents = UA_STRING_ALLOC("string");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_529_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "ValueType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "ValueType");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 529),
UA_NODEID_NUMERIC(ns[2], 524),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "ValueType"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_529_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_58_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 529)
);
}

/* Kind - ns=2;i=528 */

static UA_StatusCode function_namespace_instance_generated_59_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_528_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_528_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_528_variant_DataContents);
*variablenode_ns_2_i_528_variant_DataContents = UA_STRING_ALLOC("Instance");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_528_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Kind");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Kind");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 528),
UA_NODEID_NUMERIC(ns[2], 524),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Kind"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_528_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_59_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 528)
);
}

/* SemanticId - ns=2;i=526 */

static UA_StatusCode function_namespace_instance_generated_60_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SemanticId");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "SemanticId");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 526),
UA_NODEID_NUMERIC(ns[2], 524),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "SemanticId"),
UA_NODEID_NUMERIC(ns[1], 1005),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_60_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 526)
);
}

/* Keys - ns=2;i=527 */

static UA_StatusCode function_namespace_instance_generated_61_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "Keys");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Keys");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 527),
UA_NODEID_NUMERIC(ns[2], 526),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Keys"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_61_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 527)
);
}

/* Value - ns=2;i=530 */

static UA_StatusCode function_namespace_instance_generated_62_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_530_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_530_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_530_variant_DataContents);
*variablenode_ns_2_i_530_variant_DataContents = UA_STRING_ALLOC("STTS751");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_530_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Value");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Value");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 530),
UA_NODEID_NUMERIC(ns[2], 524),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Value"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_530_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_62_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 530)
);
}

/* Category - ns=2;i=525 */

static UA_StatusCode function_namespace_instance_generated_63_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_525_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_525_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_525_variant_DataContents);
*variablenode_ns_2_i_525_variant_DataContents = UA_STRING_ALLOC("CONSTANT");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_525_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Category");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Category");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 525),
UA_NODEID_NUMERIC(ns[2], 524),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Category"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_525_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 525), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_63_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 525)
);
}

/* accelerometer - ns=2;i=496 */

static UA_StatusCode function_namespace_instance_generated_64_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "accelerometer");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 496),
UA_NODEID_NUMERIC(ns[2], 490),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "accelerometer"),
UA_NODEID_NUMERIC(ns[1], 1009),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_64_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 496)
);
}

/* Value - ns=2;i=502 */

static UA_StatusCode function_namespace_instance_generated_65_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_502_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_502_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_502_variant_DataContents);
*variablenode_ns_2_i_502_variant_DataContents = UA_STRING_ALLOC("LSM6DSO");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_502_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Value");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Value");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 502),
UA_NODEID_NUMERIC(ns[2], 496),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Value"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_502_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_65_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 502)
);
}

/* SemanticId - ns=2;i=498 */

static UA_StatusCode function_namespace_instance_generated_66_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SemanticId");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "SemanticId");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 498),
UA_NODEID_NUMERIC(ns[2], 496),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "SemanticId"),
UA_NODEID_NUMERIC(ns[1], 1005),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_66_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 498)
);
}

/* Keys - ns=2;i=499 */

static UA_StatusCode function_namespace_instance_generated_67_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "Keys");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Keys");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 499),
UA_NODEID_NUMERIC(ns[2], 498),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Keys"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_67_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 499)
);
}

/* Kind - ns=2;i=500 */

static UA_StatusCode function_namespace_instance_generated_68_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_500_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_500_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_500_variant_DataContents);
*variablenode_ns_2_i_500_variant_DataContents = UA_STRING_ALLOC("Instance");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_500_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Kind");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Kind");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 500),
UA_NODEID_NUMERIC(ns[2], 496),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Kind"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_500_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_68_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 500)
);
}

/* ValueType - ns=2;i=501 */

static UA_StatusCode function_namespace_instance_generated_69_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_501_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_501_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_501_variant_DataContents);
*variablenode_ns_2_i_501_variant_DataContents = UA_STRING_ALLOC("string");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_501_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "ValueType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "ValueType");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 501),
UA_NODEID_NUMERIC(ns[2], 496),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "ValueType"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_501_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_69_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 501)
);
}

/* Category - ns=2;i=497 */

static UA_StatusCode function_namespace_instance_generated_70_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_497_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_497_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_497_variant_DataContents);
*variablenode_ns_2_i_497_variant_DataContents = UA_STRING_ALLOC("CONSTANT");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_497_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Category");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Category");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 497),
UA_NODEID_NUMERIC(ns[2], 496),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Category"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_497_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 497), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_70_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 497)
);
}

/* humiditySensor - ns=2;i=531 */

static UA_StatusCode function_namespace_instance_generated_71_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "humiditySensor");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 531),
UA_NODEID_NUMERIC(ns[2], 490),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "humiditySensor"),
UA_NODEID_NUMERIC(ns[1], 1009),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_71_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 531)
);
}

/* Category - ns=2;i=532 */

static UA_StatusCode function_namespace_instance_generated_72_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_532_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_532_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_532_variant_DataContents);
*variablenode_ns_2_i_532_variant_DataContents = UA_STRING_ALLOC("CONSTANT");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_532_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Category");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Category");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 532),
UA_NODEID_NUMERIC(ns[2], 531),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Category"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_532_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 532), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_72_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 532)
);
}

/* ValueType - ns=2;i=536 */

static UA_StatusCode function_namespace_instance_generated_73_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_536_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_536_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_536_variant_DataContents);
*variablenode_ns_2_i_536_variant_DataContents = UA_STRING_ALLOC("string");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_536_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "ValueType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "ValueType");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 536),
UA_NODEID_NUMERIC(ns[2], 531),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "ValueType"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_536_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_73_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 536)
);
}

/* SemanticId - ns=2;i=533 */

static UA_StatusCode function_namespace_instance_generated_74_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SemanticId");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "SemanticId");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 533),
UA_NODEID_NUMERIC(ns[2], 531),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "SemanticId"),
UA_NODEID_NUMERIC(ns[1], 1005),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_74_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 533)
);
}

/* Keys - ns=2;i=534 */

static UA_StatusCode function_namespace_instance_generated_75_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "Keys");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Keys");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 534),
UA_NODEID_NUMERIC(ns[2], 533),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Keys"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_75_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 534)
);
}

/* Kind - ns=2;i=535 */

static UA_StatusCode function_namespace_instance_generated_76_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_535_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_535_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_535_variant_DataContents);
*variablenode_ns_2_i_535_variant_DataContents = UA_STRING_ALLOC("Instance");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_535_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Kind");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Kind");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 535),
UA_NODEID_NUMERIC(ns[2], 531),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Kind"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_535_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_76_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 535)
);
}

/* Value - ns=2;i=537 */

static UA_StatusCode function_namespace_instance_generated_77_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_537_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_537_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_537_variant_DataContents);
*variablenode_ns_2_i_537_variant_DataContents = UA_STRING_ALLOC("HTS221");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_537_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Value");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Value");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 537),
UA_NODEID_NUMERIC(ns[2], 531),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Value"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_537_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_77_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 537)
);
}

/* accelerometer - ns=2;i=510 */

static UA_StatusCode function_namespace_instance_generated_78_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "accelerometer");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Internal RAM memory");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 510),
UA_NODEID_NUMERIC(ns[2], 490),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "accelerometer"),
UA_NODEID_NUMERIC(ns[1], 1009),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_78_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 510)
);
}

/* Value - ns=2;i=516 */

static UA_StatusCode function_namespace_instance_generated_79_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_516_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_516_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_516_variant_DataContents);
*variablenode_ns_2_i_516_variant_DataContents = UA_STRING_ALLOC("LIS2DW12");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_516_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Value");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Value");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 516),
UA_NODEID_NUMERIC(ns[2], 510),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Value"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_516_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_79_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 516)
);
}

/* Category - ns=2;i=511 */

static UA_StatusCode function_namespace_instance_generated_80_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_511_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_511_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_511_variant_DataContents);
*variablenode_ns_2_i_511_variant_DataContents = UA_STRING_ALLOC("CONSTANT");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_511_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Category");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Category");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 511),
UA_NODEID_NUMERIC(ns[2], 510),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Category"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_511_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 511), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_80_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 511)
);
}

/* ValueType - ns=2;i=515 */

static UA_StatusCode function_namespace_instance_generated_81_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_515_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_515_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_515_variant_DataContents);
*variablenode_ns_2_i_515_variant_DataContents = UA_STRING_ALLOC("string");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_515_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "ValueType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "ValueType");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 515),
UA_NODEID_NUMERIC(ns[2], 510),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "ValueType"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_515_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_81_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 515)
);
}

/* SemanticId - ns=2;i=512 */

static UA_StatusCode function_namespace_instance_generated_82_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SemanticId");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "SemanticId");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 512),
UA_NODEID_NUMERIC(ns[2], 510),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "SemanticId"),
UA_NODEID_NUMERIC(ns[1], 1005),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_82_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 512)
);
}

/* Keys - ns=2;i=513 */

static UA_StatusCode function_namespace_instance_generated_83_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "Keys");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Keys");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 513),
UA_NODEID_NUMERIC(ns[2], 512),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Keys"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_83_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 513)
);
}

/* Kind - ns=2;i=514 */

static UA_StatusCode function_namespace_instance_generated_84_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_514_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_514_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_514_variant_DataContents);
*variablenode_ns_2_i_514_variant_DataContents = UA_STRING_ALLOC("Instance");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_514_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Kind");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Kind");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 514),
UA_NODEID_NUMERIC(ns[2], 510),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Kind"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_514_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_84_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 514)
);
}

/* magnetometer - ns=2;i=503 */

static UA_StatusCode function_namespace_instance_generated_85_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "magnetometer");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 503),
UA_NODEID_NUMERIC(ns[2], 490),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "magnetometer"),
UA_NODEID_NUMERIC(ns[1], 1009),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_85_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 503)
);
}

/* Kind - ns=2;i=507 */

static UA_StatusCode function_namespace_instance_generated_86_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_507_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_507_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_507_variant_DataContents);
*variablenode_ns_2_i_507_variant_DataContents = UA_STRING_ALLOC("Instance");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_507_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Kind");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Kind");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 507),
UA_NODEID_NUMERIC(ns[2], 503),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Kind"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_507_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_86_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 507)
);
}

/* ValueType - ns=2;i=508 */

static UA_StatusCode function_namespace_instance_generated_87_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_508_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_508_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_508_variant_DataContents);
*variablenode_ns_2_i_508_variant_DataContents = UA_STRING_ALLOC("string");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_508_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "ValueType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "ValueType");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 508),
UA_NODEID_NUMERIC(ns[2], 503),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "ValueType"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_508_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_87_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 508)
);
}

/* Category - ns=2;i=504 */

static UA_StatusCode function_namespace_instance_generated_88_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_504_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_504_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_504_variant_DataContents);
*variablenode_ns_2_i_504_variant_DataContents = UA_STRING_ALLOC("CONSTANT");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_504_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Category");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Category");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 504),
UA_NODEID_NUMERIC(ns[2], 503),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Category"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_504_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 504), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_88_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 504)
);
}

/* SemanticId - ns=2;i=505 */

static UA_StatusCode function_namespace_instance_generated_89_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SemanticId");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "SemanticId");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 505),
UA_NODEID_NUMERIC(ns[2], 503),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "SemanticId"),
UA_NODEID_NUMERIC(ns[1], 1005),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_89_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 505)
);
}

/* Keys - ns=2;i=506 */

static UA_StatusCode function_namespace_instance_generated_90_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "Keys");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Keys");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 506),
UA_NODEID_NUMERIC(ns[2], 505),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Keys"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_90_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 506)
);
}

/* Value - ns=2;i=509 */

static UA_StatusCode function_namespace_instance_generated_91_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_509_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_509_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_509_variant_DataContents);
*variablenode_ns_2_i_509_variant_DataContents = UA_STRING_ALLOC("LIS2MDL");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_509_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Value");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Value");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 509),
UA_NODEID_NUMERIC(ns[2], 503),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Value"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_509_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_91_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 509)
);
}

/* Kind - ns=2;i=494 */

static UA_StatusCode function_namespace_instance_generated_92_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_494_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_494_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_494_variant_DataContents);
*variablenode_ns_2_i_494_variant_DataContents = UA_STRING_ALLOC("Instance");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_494_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Kind");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Kind");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 494),
UA_NODEID_NUMERIC(ns[2], 490),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Kind"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_494_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_92_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 494)
);
}

/* Category - ns=2;i=491 */

static UA_StatusCode function_namespace_instance_generated_93_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_491_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_491_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_491_variant_DataContents);
*variablenode_ns_2_i_491_variant_DataContents = UA_STRING_ALLOC("CONSTANT");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_491_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Category");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Category");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 491),
UA_NODEID_NUMERIC(ns[2], 490),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Category"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_491_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 491), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_93_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 491)
);
}

/* Category - ns=2;i=447 */

static UA_StatusCode function_namespace_instance_generated_94_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_447_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_447_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_447_variant_DataContents);
*variablenode_ns_2_i_447_variant_DataContents = UA_STRING_ALLOC("CONSTANT");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_447_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Category");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Category");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 447),
UA_NODEID_NUMERIC(ns[2], 446),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Category"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_447_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 447), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_94_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 447)
);
}

/* Administration - ns=2;i=451 */

static UA_StatusCode function_namespace_instance_generated_95_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Administration");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Administration");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 451),
UA_NODEID_NUMERIC(ns[2], 446),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "Administration"),
UA_NODEID_NUMERIC(ns[1], 1001),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_95_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 451)
);
}

/* Revision - ns=2;i=453 */

static UA_StatusCode function_namespace_instance_generated_96_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_453_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_453_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_453_variant_DataContents);
*variablenode_ns_2_i_453_variant_DataContents = UA_STRING_ALLOC("");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_453_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Revision");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Revision");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 453),
UA_NODEID_NUMERIC(ns[2], 451),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Revision"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_453_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_96_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 453)
);
}

/* Version - ns=2;i=452 */

static UA_StatusCode function_namespace_instance_generated_97_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_452_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_452_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_452_variant_DataContents);
*variablenode_ns_2_i_452_variant_DataContents = UA_STRING_ALLOC("");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_452_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Version");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Version");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 452),
UA_NODEID_NUMERIC(ns[2], 451),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Version"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_452_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_97_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 452)
);
}

/* Identification - ns=2;i=457 */

static UA_StatusCode function_namespace_instance_generated_98_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Identification");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 457),
UA_NODEID_NUMERIC(ns[2], 446),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "Identification"),
UA_NODEID_NUMERIC(ns[1], 1010),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_98_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 457)
);
}

/* AllowDuplicates - ns=2;i=462 */

static UA_StatusCode function_namespace_instance_generated_99_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1);
UA_Boolean *variablenode_ns_2_i_462_variant_DataContents =  UA_Boolean_new();
if (!variablenode_ns_2_i_462_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Boolean_init(variablenode_ns_2_i_462_variant_DataContents);
*variablenode_ns_2_i_462_variant_DataContents = (UA_Boolean) false;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_462_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
attr.displayName = UA_LOCALIZEDTEXT("", "AllowDuplicates");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "AllowDuplicates");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 462),
UA_NODEID_NUMERIC(ns[2], 457),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "AllowDuplicates"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Boolean_delete(variablenode_ns_2_i_462_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_99_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 462)
);
}

/* ProductDesignation - ns=2;i=470 */

static UA_StatusCode function_namespace_instance_generated_100_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ProductDesignation");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 470),
UA_NODEID_NUMERIC(ns[2], 457),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "ProductDesignation"),
UA_NODEID_NUMERIC(ns[1], 1009),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_100_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 470)
);
}

/* ValueType - ns=2;i=475 */

static UA_StatusCode function_namespace_instance_generated_101_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_475_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_475_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_475_variant_DataContents);
*variablenode_ns_2_i_475_variant_DataContents = UA_STRING_ALLOC("string");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_475_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "ValueType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "ValueType");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 475),
UA_NODEID_NUMERIC(ns[2], 470),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "ValueType"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_475_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_101_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 475)
);
}

/* Kind - ns=2;i=474 */

static UA_StatusCode function_namespace_instance_generated_102_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_474_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_474_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_474_variant_DataContents);
*variablenode_ns_2_i_474_variant_DataContents = UA_STRING_ALLOC("Instance");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_474_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Kind");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Kind");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 474),
UA_NODEID_NUMERIC(ns[2], 470),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Kind"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_474_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_102_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 474)
);
}

/* Category - ns=2;i=471 */

static UA_StatusCode function_namespace_instance_generated_103_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_471_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_471_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_471_variant_DataContents);
*variablenode_ns_2_i_471_variant_DataContents = UA_STRING_ALLOC("CONSTANT");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_471_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Category");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Category");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 471),
UA_NODEID_NUMERIC(ns[2], 470),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Category"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_471_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 471), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_103_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 471)
);
}

/* SemanticId - ns=2;i=472 */

static UA_StatusCode function_namespace_instance_generated_104_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SemanticId");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "SemanticId");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 472),
UA_NODEID_NUMERIC(ns[2], 470),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "SemanticId"),
UA_NODEID_NUMERIC(ns[1], 1005),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_104_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 472)
);
}

/* Keys - ns=2;i=473 */

static UA_StatusCode function_namespace_instance_generated_105_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "Keys");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Keys");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 473),
UA_NODEID_NUMERIC(ns[2], 472),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Keys"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_105_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 473)
);
}

/* Value - ns=2;i=476 */

static UA_StatusCode function_namespace_instance_generated_106_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_476_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_476_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_476_variant_DataContents);
*variablenode_ns_2_i_476_variant_DataContents = UA_STRING_ALLOC("Extension Board");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_476_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Value");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Value");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 476),
UA_NODEID_NUMERIC(ns[2], 470),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Value"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_476_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_106_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 476)
);
}

/* SerialNumber - ns=2;i=477 */

static UA_StatusCode function_namespace_instance_generated_107_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SerialNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 477),
UA_NODEID_NUMERIC(ns[2], 457),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "SerialNumber"),
UA_NODEID_NUMERIC(ns[1], 1009),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_107_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 477)
);
}

/* ValueType - ns=2;i=482 */

static UA_StatusCode function_namespace_instance_generated_108_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_482_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_482_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_482_variant_DataContents);
*variablenode_ns_2_i_482_variant_DataContents = UA_STRING_ALLOC("string");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_482_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "ValueType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "ValueType");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 482),
UA_NODEID_NUMERIC(ns[2], 477),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "ValueType"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_482_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_108_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 482)
);
}

/* Category - ns=2;i=478 */

static UA_StatusCode function_namespace_instance_generated_109_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_478_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_478_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_478_variant_DataContents);
*variablenode_ns_2_i_478_variant_DataContents = UA_STRING_ALLOC("CONSTANT");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_478_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Category");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Category");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 478),
UA_NODEID_NUMERIC(ns[2], 477),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Category"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_478_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 478), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_109_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 478)
);
}

/* SemanticId - ns=2;i=479 */

static UA_StatusCode function_namespace_instance_generated_110_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SemanticId");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "SemanticId");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 479),
UA_NODEID_NUMERIC(ns[2], 477),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "SemanticId"),
UA_NODEID_NUMERIC(ns[1], 1005),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_110_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 479)
);
}

/* Keys - ns=2;i=480 */

static UA_StatusCode function_namespace_instance_generated_111_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "Keys");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Keys");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 480),
UA_NODEID_NUMERIC(ns[2], 479),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Keys"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_111_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 480)
);
}

/* Value - ns=2;i=483 */

static UA_StatusCode function_namespace_instance_generated_112_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_483_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_483_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_483_variant_DataContents);
*variablenode_ns_2_i_483_variant_DataContents = UA_STRING_ALLOC("");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_483_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Value");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Value");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 483),
UA_NODEID_NUMERIC(ns[2], 477),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Value"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_483_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_112_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 483)
);
}

/* Kind - ns=2;i=481 */

static UA_StatusCode function_namespace_instance_generated_113_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_481_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_481_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_481_variant_DataContents);
*variablenode_ns_2_i_481_variant_DataContents = UA_STRING_ALLOC("Instance");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_481_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Kind");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Kind");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 481),
UA_NODEID_NUMERIC(ns[2], 477),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Kind"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_481_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_113_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 481)
);
}

/* Category - ns=2;i=458 */

static UA_StatusCode function_namespace_instance_generated_114_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_458_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_458_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_458_variant_DataContents);
*variablenode_ns_2_i_458_variant_DataContents = UA_STRING_ALLOC("CONSTANT");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_458_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Category");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Category");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 458),
UA_NODEID_NUMERIC(ns[2], 457),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Category"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_458_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 458), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_114_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 458)
);
}

/* SemanticId - ns=2;i=459 */

static UA_StatusCode function_namespace_instance_generated_115_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SemanticId");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "SemanticId");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 459),
UA_NODEID_NUMERIC(ns[2], 457),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "SemanticId"),
UA_NODEID_NUMERIC(ns[1], 1005),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_115_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 459)
);
}

/* Keys - ns=2;i=460 */

static UA_StatusCode function_namespace_instance_generated_116_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "Keys");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Keys");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 460),
UA_NODEID_NUMERIC(ns[2], 459),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Keys"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_116_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 460)
);
}

/* Manufacturer - ns=2;i=463 */

static UA_StatusCode function_namespace_instance_generated_117_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Manufacturer");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 463),
UA_NODEID_NUMERIC(ns[2], 457),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "Manufacturer"),
UA_NODEID_NUMERIC(ns[1], 1009),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_117_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 463)
);
}

/* Kind - ns=2;i=467 */

static UA_StatusCode function_namespace_instance_generated_118_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_467_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_467_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_467_variant_DataContents);
*variablenode_ns_2_i_467_variant_DataContents = UA_STRING_ALLOC("Instance");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_467_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Kind");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Kind");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 467),
UA_NODEID_NUMERIC(ns[2], 463),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Kind"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_467_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_118_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 467)
);
}

/* Value - ns=2;i=469 */

static UA_StatusCode function_namespace_instance_generated_119_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_469_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_469_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_469_variant_DataContents);
*variablenode_ns_2_i_469_variant_DataContents = UA_STRING_ALLOC("STMicroelectronics");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_469_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Value");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Value");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 469),
UA_NODEID_NUMERIC(ns[2], 463),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Value"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_469_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_119_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 469)
);
}

/* Category - ns=2;i=464 */

static UA_StatusCode function_namespace_instance_generated_120_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_464_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_464_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_464_variant_DataContents);
*variablenode_ns_2_i_464_variant_DataContents = UA_STRING_ALLOC("CONSTANT");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_464_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Category");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Category");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 464),
UA_NODEID_NUMERIC(ns[2], 463),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Category"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_464_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 464), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_120_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 464)
);
}

/* ValueType - ns=2;i=468 */

static UA_StatusCode function_namespace_instance_generated_121_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_468_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_468_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_468_variant_DataContents);
*variablenode_ns_2_i_468_variant_DataContents = UA_STRING_ALLOC("string");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_468_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "ValueType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "ValueType");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 468),
UA_NODEID_NUMERIC(ns[2], 463),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "ValueType"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_468_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_121_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 468)
);
}

/* SemanticId - ns=2;i=465 */

static UA_StatusCode function_namespace_instance_generated_122_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SemanticId");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "SemanticId");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 465),
UA_NODEID_NUMERIC(ns[2], 463),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "SemanticId"),
UA_NODEID_NUMERIC(ns[1], 1005),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_122_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 465)
);
}

/* Keys - ns=2;i=466 */

static UA_StatusCode function_namespace_instance_generated_123_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "Keys");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Keys");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 466),
UA_NODEID_NUMERIC(ns[2], 465),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Keys"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_123_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 466)
);
}

/* Kind - ns=2;i=461 */

static UA_StatusCode function_namespace_instance_generated_124_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_461_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_461_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_461_variant_DataContents);
*variablenode_ns_2_i_461_variant_DataContents = UA_STRING_ALLOC("Instance");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_461_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Kind");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Kind");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 461),
UA_NODEID_NUMERIC(ns[2], 457),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Kind"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_461_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_124_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 461)
);
}

/* Revision - ns=2;i=484 */

static UA_StatusCode function_namespace_instance_generated_125_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Revision");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 484),
UA_NODEID_NUMERIC(ns[2], 457),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "Revision"),
UA_NODEID_NUMERIC(ns[1], 1009),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_125_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 484)
);
}

/* Value - ns=2;i=489 */

static UA_StatusCode function_namespace_instance_generated_126_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_489_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_489_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_489_variant_DataContents);
*variablenode_ns_2_i_489_variant_DataContents = UA_STRING_ALLOC("");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_489_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Value");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Value");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 489),
UA_NODEID_NUMERIC(ns[2], 484),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Value"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_489_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_126_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 489)
);
}

/* Kind - ns=2;i=487 */

static UA_StatusCode function_namespace_instance_generated_127_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_487_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_487_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_487_variant_DataContents);
*variablenode_ns_2_i_487_variant_DataContents = UA_STRING_ALLOC("Instance");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_487_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Kind");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Kind");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 487),
UA_NODEID_NUMERIC(ns[2], 484),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Kind"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_487_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_127_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 487)
);
}

/* SemanticId - ns=2;i=485 */

static UA_StatusCode function_namespace_instance_generated_128_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SemanticId");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "SemanticId");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 485),
UA_NODEID_NUMERIC(ns[2], 484),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "SemanticId"),
UA_NODEID_NUMERIC(ns[1], 1005),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_128_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 485)
);
}

/* Keys - ns=2;i=486 */

static UA_StatusCode function_namespace_instance_generated_129_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "Keys");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Keys");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 486),
UA_NODEID_NUMERIC(ns[2], 485),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Keys"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_129_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 486)
);
}

/* ValueType - ns=2;i=488 */

static UA_StatusCode function_namespace_instance_generated_130_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_488_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_488_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_488_variant_DataContents);
*variablenode_ns_2_i_488_variant_DataContents = UA_STRING_ALLOC("string");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_488_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "ValueType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "ValueType");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 488),
UA_NODEID_NUMERIC(ns[2], 484),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "ValueType"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_488_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_130_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 488)
);
}

/* Identification - ns=2;i=448 */

static UA_StatusCode function_namespace_instance_generated_131_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Identification");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Identification");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 448),
UA_NODEID_NUMERIC(ns[2], 446),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "Identification"),
UA_NODEID_NUMERIC(ns[1], 1000),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_131_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 448)
);
}

/* IdType - ns=2;i=449 */

static UA_StatusCode function_namespace_instance_generated_132_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_449_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_449_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_449_variant_DataContents);
*variablenode_ns_2_i_449_variant_DataContents = UA_STRING_ALLOC("IRI");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_449_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "IdType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "IdType");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 449),
UA_NODEID_NUMERIC(ns[2], 448),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "IdType"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_449_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_132_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 449)
);
}

/* Id - ns=2;i=450 */

static UA_StatusCode function_namespace_instance_generated_133_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_450_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_450_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_450_variant_DataContents);
*variablenode_ns_2_i_450_variant_DataContents = UA_STRING_ALLOC("https://www.phi-ware.com/ids/sm/9473_0162_1102_0461");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_450_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Id");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Id");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 450),
UA_NODEID_NUMERIC(ns[2], 448),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Id"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_450_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_133_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 450)
);
}

/* Documentation - ns=2;i=551 */

static UA_StatusCode function_namespace_instance_generated_134_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Documentation");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 551),
UA_NODEID_NUMERIC(ns[2], 446),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "Documentation"),
UA_NODEID_NUMERIC(ns[1], 1010),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_134_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 551)
);
}

/* SemanticId - ns=2;i=553 */

static UA_StatusCode function_namespace_instance_generated_135_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SemanticId");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "SemanticId");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 553),
UA_NODEID_NUMERIC(ns[2], 551),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "SemanticId"),
UA_NODEID_NUMERIC(ns[1], 1005),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_135_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 553)
);
}

/* Keys - ns=2;i=554 */

static UA_StatusCode function_namespace_instance_generated_136_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "Keys");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Keys");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 554),
UA_NODEID_NUMERIC(ns[2], 553),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Keys"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_136_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 554)
);
}

/* AllowDuplicates - ns=2;i=556 */

static UA_StatusCode function_namespace_instance_generated_137_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1);
UA_Boolean *variablenode_ns_2_i_556_variant_DataContents =  UA_Boolean_new();
if (!variablenode_ns_2_i_556_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Boolean_init(variablenode_ns_2_i_556_variant_DataContents);
*variablenode_ns_2_i_556_variant_DataContents = (UA_Boolean) false;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_556_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
attr.displayName = UA_LOCALIZEDTEXT("", "AllowDuplicates");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "AllowDuplicates");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 556),
UA_NODEID_NUMERIC(ns[2], 551),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "AllowDuplicates"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Boolean_delete(variablenode_ns_2_i_556_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_137_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 556)
);
}

/* Kind - ns=2;i=555 */

static UA_StatusCode function_namespace_instance_generated_138_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_555_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_555_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_555_variant_DataContents);
*variablenode_ns_2_i_555_variant_DataContents = UA_STRING_ALLOC("Instance");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_555_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Kind");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Kind");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 555),
UA_NODEID_NUMERIC(ns[2], 551),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Kind"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_555_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_138_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 555)
);
}

/* User manual - ns=2;i=557 */

static UA_StatusCode function_namespace_instance_generated_139_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "User manual");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 557),
UA_NODEID_NUMERIC(ns[2], 551),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "User manual"),
UA_NODEID_NUMERIC(ns[1], 1010),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_139_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 557)
);
}

/* AllowDuplicates - ns=2;i=562 */

static UA_StatusCode function_namespace_instance_generated_140_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1);
UA_Boolean *variablenode_ns_2_i_562_variant_DataContents =  UA_Boolean_new();
if (!variablenode_ns_2_i_562_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Boolean_init(variablenode_ns_2_i_562_variant_DataContents);
*variablenode_ns_2_i_562_variant_DataContents = (UA_Boolean) false;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_562_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
attr.displayName = UA_LOCALIZEDTEXT("", "AllowDuplicates");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "AllowDuplicates");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 562),
UA_NODEID_NUMERIC(ns[2], 557),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "AllowDuplicates"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Boolean_delete(variablenode_ns_2_i_562_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_140_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 562)
);
}

/* SemanticId - ns=2;i=559 */

static UA_StatusCode function_namespace_instance_generated_141_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SemanticId");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "SemanticId");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 559),
UA_NODEID_NUMERIC(ns[2], 557),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "SemanticId"),
UA_NODEID_NUMERIC(ns[1], 1005),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_141_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 559)
);
}

/* Keys - ns=2;i=560 */

static UA_StatusCode function_namespace_instance_generated_142_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "Keys");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Keys");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 560),
UA_NODEID_NUMERIC(ns[2], 559),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Keys"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_142_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 560)
);
}

/* DigitalFile_PDF - ns=2;i=612 */

static UA_StatusCode function_namespace_instance_generated_143_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "DigitalFile_PDF");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 612),
UA_NODEID_NUMERIC(ns[2], 557),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "DigitalFile_PDF"),
UA_NODEID_NUMERIC(ns[1], 1013),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_143_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 612)
);
}

/* Kind - ns=2;i=616 */

static UA_StatusCode function_namespace_instance_generated_144_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_616_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_616_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_616_variant_DataContents);
*variablenode_ns_2_i_616_variant_DataContents = UA_STRING_ALLOC("Instance");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_616_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Kind");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Kind");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 616),
UA_NODEID_NUMERIC(ns[2], 612),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Kind"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_616_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_144_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 616)
);
}

/* MimeType - ns=2;i=617 */

static UA_StatusCode function_namespace_instance_generated_145_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_617_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_617_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_617_variant_DataContents);
*variablenode_ns_2_i_617_variant_DataContents = UA_STRING_ALLOC("application/pdf");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_617_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "MimeType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "MimeType");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 617),
UA_NODEID_NUMERIC(ns[2], 612),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "MimeType"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_617_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_145_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 617)
);
}

/* Value - ns=2;i=618 */

static UA_StatusCode function_namespace_instance_generated_146_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_618_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_618_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_618_variant_DataContents);
*variablenode_ns_2_i_618_variant_DataContents = UA_STRING_ALLOC("/aasx/files/dm00601501.pdf");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_618_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Value");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Value");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 618),
UA_NODEID_NUMERIC(ns[2], 612),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Value"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_618_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_146_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 618)
);
}

/* SemanticId - ns=2;i=614 */

static UA_StatusCode function_namespace_instance_generated_147_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SemanticId");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "SemanticId");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 614),
UA_NODEID_NUMERIC(ns[2], 612),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "SemanticId"),
UA_NODEID_NUMERIC(ns[1], 1005),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_147_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 614)
);
}

/* Keys - ns=2;i=615 */

static UA_StatusCode function_namespace_instance_generated_148_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "Keys");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Keys");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 615),
UA_NODEID_NUMERIC(ns[2], 614),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Keys"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_148_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 615)
);
}

/* File - ns=2;i=619 */

static UA_StatusCode function_namespace_instance_generated_149_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "File");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "File");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 619),
UA_NODEID_NUMERIC(ns[2], 612),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "File"),
UA_NODEID_NUMERIC(ns[0], 11575),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_149_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 619)
);
}

/* Write - ns=2;i=633 */

static UA_StatusCode function_namespace_instance_generated_150_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Write");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Write");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[2], 633),
UA_NODEID_NUMERIC(ns[2], 619),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "Write"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace_instance_generated_150_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 633)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=2;i=634 */

static UA_StatusCode function_namespace_instance_generated_151_begin(UA_Server *server, UA_UInt16* ns) {
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
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296);
UA_Argument variablenode_ns_2_i_634_variant_DataContents[2];

UA_init(&variablenode_ns_2_i_634_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_2_i_634_variant_DataContents[0].name = UA_STRING("FileHandle");
variablenode_ns_2_i_634_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 7);
variablenode_ns_2_i_634_variant_DataContents[0].valueRank = (UA_Int32) -1;
variablenode_ns_2_i_634_variant_DataContents[0].description = UA_LOCALIZEDTEXT("", "");

UA_init(&variablenode_ns_2_i_634_variant_DataContents[1], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_2_i_634_variant_DataContents[1].name = UA_STRING("Data");
variablenode_ns_2_i_634_variant_DataContents[1].dataType = UA_NODEID_NUMERIC(ns[0], 15);
variablenode_ns_2_i_634_variant_DataContents[1].valueRank = (UA_Int32) -1;
variablenode_ns_2_i_634_variant_DataContents[1].description = UA_LOCALIZEDTEXT("", "");
UA_Variant_setArray(&attr.value, &variablenode_ns_2_i_634_variant_DataContents, (UA_Int32) 2, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "InputArguments");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 634),
UA_NODEID_NUMERIC(ns[2], 633),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "InputArguments"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);


return retVal;
}

static UA_StatusCode function_namespace_instance_generated_151_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 634)
);
}

/* Writable - ns=2;i=624 */

static UA_StatusCode function_namespace_instance_generated_152_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
attr.valueRank = 0;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1);
UA_Boolean variablenode_ns_2_i_624_variant_DataContents[1];
variablenode_ns_2_i_624_variant_DataContents[0] = (UA_Boolean) true;
UA_Variant_setArray(&attr.value, &variablenode_ns_2_i_624_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_BOOLEAN]);
attr.displayName = UA_LOCALIZEDTEXT("", "Writable");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Writable");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 624),
UA_NODEID_NUMERIC(ns[2], 619),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Writable"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_152_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 624)
);
}

/* GetPosition - ns=2;i=635 */

static UA_StatusCode function_namespace_instance_generated_153_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "GetPosition");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "GetPosition");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[2], 635),
UA_NODEID_NUMERIC(ns[2], 619),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "GetPosition"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace_instance_generated_153_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 635)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* OutputArguments - ns=2;i=637 */

static UA_StatusCode function_namespace_instance_generated_154_begin(UA_Server *server, UA_UInt16* ns) {
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
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296);
UA_Argument variablenode_ns_2_i_637_variant_DataContents[1];

UA_init(&variablenode_ns_2_i_637_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_2_i_637_variant_DataContents[0].name = UA_STRING("Position");
variablenode_ns_2_i_637_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 9);
variablenode_ns_2_i_637_variant_DataContents[0].valueRank = (UA_Int32) -1;
variablenode_ns_2_i_637_variant_DataContents[0].description = UA_LOCALIZEDTEXT("", "");
UA_Variant_setArray(&attr.value, &variablenode_ns_2_i_637_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "OutputArguments");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "OutputArguments");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 637),
UA_NODEID_NUMERIC(ns[2], 635),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "OutputArguments"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

return retVal;
}

static UA_StatusCode function_namespace_instance_generated_154_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 637)
);
}

/* InputArguments - ns=2;i=636 */

static UA_StatusCode function_namespace_instance_generated_155_begin(UA_Server *server, UA_UInt16* ns) {
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
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296);
UA_Argument variablenode_ns_2_i_636_variant_DataContents[1];

UA_init(&variablenode_ns_2_i_636_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_2_i_636_variant_DataContents[0].name = UA_STRING("FileHandle");
variablenode_ns_2_i_636_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 7);
variablenode_ns_2_i_636_variant_DataContents[0].valueRank = (UA_Int32) -1;
variablenode_ns_2_i_636_variant_DataContents[0].description = UA_LOCALIZEDTEXT("", "");
UA_Variant_setArray(&attr.value, &variablenode_ns_2_i_636_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "InputArguments");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 636),
UA_NODEID_NUMERIC(ns[2], 635),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "InputArguments"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

return retVal;
}

static UA_StatusCode function_namespace_instance_generated_155_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 636)
);
}

/* SetPosition - ns=2;i=638 */

static UA_StatusCode function_namespace_instance_generated_156_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "SetPosition");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "SetPosition");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[2], 638),
UA_NODEID_NUMERIC(ns[2], 619),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "SetPosition"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace_instance_generated_156_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 638)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=2;i=639 */

static UA_StatusCode function_namespace_instance_generated_157_begin(UA_Server *server, UA_UInt16* ns) {
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
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296);
UA_Argument variablenode_ns_2_i_639_variant_DataContents[2];

UA_init(&variablenode_ns_2_i_639_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_2_i_639_variant_DataContents[0].name = UA_STRING("FileHandle");
variablenode_ns_2_i_639_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 7);
variablenode_ns_2_i_639_variant_DataContents[0].valueRank = (UA_Int32) -1;
variablenode_ns_2_i_639_variant_DataContents[0].description = UA_LOCALIZEDTEXT("", "");

UA_init(&variablenode_ns_2_i_639_variant_DataContents[1], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_2_i_639_variant_DataContents[1].name = UA_STRING("Position");
variablenode_ns_2_i_639_variant_DataContents[1].dataType = UA_NODEID_NUMERIC(ns[0], 9);
variablenode_ns_2_i_639_variant_DataContents[1].valueRank = (UA_Int32) -1;
variablenode_ns_2_i_639_variant_DataContents[1].description = UA_LOCALIZEDTEXT("", "");
UA_Variant_setArray(&attr.value, &variablenode_ns_2_i_639_variant_DataContents, (UA_Int32) 2, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "InputArguments");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 639),
UA_NODEID_NUMERIC(ns[2], 638),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "InputArguments"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);


return retVal;
}

static UA_StatusCode function_namespace_instance_generated_157_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 639)
);
}

/* Read - ns=2;i=630 */

static UA_StatusCode function_namespace_instance_generated_158_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Read");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Read");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[2], 630),
UA_NODEID_NUMERIC(ns[2], 619),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "Read"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace_instance_generated_158_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 630)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=2;i=631 */

static UA_StatusCode function_namespace_instance_generated_159_begin(UA_Server *server, UA_UInt16* ns) {
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
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296);
UA_Argument variablenode_ns_2_i_631_variant_DataContents[2];

UA_init(&variablenode_ns_2_i_631_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_2_i_631_variant_DataContents[0].name = UA_STRING("FileHandle");
variablenode_ns_2_i_631_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 7);
variablenode_ns_2_i_631_variant_DataContents[0].valueRank = (UA_Int32) -1;
variablenode_ns_2_i_631_variant_DataContents[0].description = UA_LOCALIZEDTEXT("", "");

UA_init(&variablenode_ns_2_i_631_variant_DataContents[1], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_2_i_631_variant_DataContents[1].name = UA_STRING("Length");
variablenode_ns_2_i_631_variant_DataContents[1].dataType = UA_NODEID_NUMERIC(ns[0], 6);
variablenode_ns_2_i_631_variant_DataContents[1].valueRank = (UA_Int32) -1;
variablenode_ns_2_i_631_variant_DataContents[1].description = UA_LOCALIZEDTEXT("", "");
UA_Variant_setArray(&attr.value, &variablenode_ns_2_i_631_variant_DataContents, (UA_Int32) 2, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "InputArguments");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 631),
UA_NODEID_NUMERIC(ns[2], 630),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "InputArguments"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);


return retVal;
}

static UA_StatusCode function_namespace_instance_generated_159_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 631)
);
}

/* OutputArguments - ns=2;i=632 */

static UA_StatusCode function_namespace_instance_generated_160_begin(UA_Server *server, UA_UInt16* ns) {
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
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296);
UA_Argument variablenode_ns_2_i_632_variant_DataContents[1];

UA_init(&variablenode_ns_2_i_632_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_2_i_632_variant_DataContents[0].name = UA_STRING("Data");
variablenode_ns_2_i_632_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 15);
variablenode_ns_2_i_632_variant_DataContents[0].valueRank = (UA_Int32) -1;
variablenode_ns_2_i_632_variant_DataContents[0].description = UA_LOCALIZEDTEXT("", "");
UA_Variant_setArray(&attr.value, &variablenode_ns_2_i_632_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "OutputArguments");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "OutputArguments");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 632),
UA_NODEID_NUMERIC(ns[2], 630),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "OutputArguments"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

return retVal;
}

static UA_StatusCode function_namespace_instance_generated_160_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 632)
);
}

/* MimeType - ns=2;i=620 */

static UA_StatusCode function_namespace_instance_generated_161_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
attr.valueRank = 0;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String variablenode_ns_2_i_620_variant_DataContents[1];
variablenode_ns_2_i_620_variant_DataContents[0] = UA_STRING("application/pdf");
UA_Variant_setArray(&attr.value, &variablenode_ns_2_i_620_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "MimeType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "MimeType");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 620),
UA_NODEID_NUMERIC(ns[2], 619),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "MimeType"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_161_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 620)
);
}

/* UserWritable - ns=2;i=623 */

static UA_StatusCode function_namespace_instance_generated_162_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
attr.valueRank = 0;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1);
UA_Boolean variablenode_ns_2_i_623_variant_DataContents[1];
variablenode_ns_2_i_623_variant_DataContents[0] = (UA_Boolean) true;
UA_Variant_setArray(&attr.value, &variablenode_ns_2_i_623_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_BOOLEAN]);
attr.displayName = UA_LOCALIZEDTEXT("", "UserWritable");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "UserWritable");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 623),
UA_NODEID_NUMERIC(ns[2], 619),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "UserWritable"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_162_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 623)
);
}

/* Close - ns=2;i=628 */

static UA_StatusCode function_namespace_instance_generated_163_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Close");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Close");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[2], 628),
UA_NODEID_NUMERIC(ns[2], 619),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "Close"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace_instance_generated_163_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 628)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=2;i=629 */

static UA_StatusCode function_namespace_instance_generated_164_begin(UA_Server *server, UA_UInt16* ns) {
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
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296);
UA_Argument variablenode_ns_2_i_629_variant_DataContents[1];

UA_init(&variablenode_ns_2_i_629_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_2_i_629_variant_DataContents[0].name = UA_STRING("FileHandle");
variablenode_ns_2_i_629_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 7);
variablenode_ns_2_i_629_variant_DataContents[0].valueRank = (UA_Int32) -1;
variablenode_ns_2_i_629_variant_DataContents[0].description = UA_LOCALIZEDTEXT("", "");
UA_Variant_setArray(&attr.value, &variablenode_ns_2_i_629_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "InputArguments");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 629),
UA_NODEID_NUMERIC(ns[2], 628),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "InputArguments"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

return retVal;
}

static UA_StatusCode function_namespace_instance_generated_164_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 629)
);
}

/* OpenCount - ns=2;i=621 */

static UA_StatusCode function_namespace_instance_generated_165_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
attr.valueRank = 0;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 5);
UA_UInt16 variablenode_ns_2_i_621_variant_DataContents[1];
variablenode_ns_2_i_621_variant_DataContents[0] = (UA_UInt16) 0;
UA_Variant_setArray(&attr.value, &variablenode_ns_2_i_621_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_UINT16]);
attr.displayName = UA_LOCALIZEDTEXT("", "OpenCount");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "OpenCount");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 621),
UA_NODEID_NUMERIC(ns[2], 619),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "OpenCount"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_165_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 621)
);
}

/* Size - ns=2;i=622 */

static UA_StatusCode function_namespace_instance_generated_166_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 9);
UA_UInt64 *variablenode_ns_2_i_622_variant_DataContents =  UA_UInt64_new();
if (!variablenode_ns_2_i_622_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_UInt64_init(variablenode_ns_2_i_622_variant_DataContents);
*variablenode_ns_2_i_622_variant_DataContents = (UA_UInt64) 631373;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_622_variant_DataContents, &UA_TYPES[UA_TYPES_UINT64]);
attr.displayName = UA_LOCALIZEDTEXT("", "Size");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Size");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 622),
UA_NODEID_NUMERIC(ns[2], 619),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Size"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_UInt64_delete(variablenode_ns_2_i_622_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_166_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 622)
);
}

/* Open - ns=2;i=625 */

static UA_StatusCode function_namespace_instance_generated_167_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Open");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Open");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[2], 625),
UA_NODEID_NUMERIC(ns[2], 619),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "Open"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace_instance_generated_167_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 625)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=2;i=626 */

static UA_StatusCode function_namespace_instance_generated_168_begin(UA_Server *server, UA_UInt16* ns) {
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
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296);
UA_Argument variablenode_ns_2_i_626_variant_DataContents[1];

UA_init(&variablenode_ns_2_i_626_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_2_i_626_variant_DataContents[0].name = UA_STRING("Mode");
variablenode_ns_2_i_626_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 3);
variablenode_ns_2_i_626_variant_DataContents[0].valueRank = (UA_Int32) -1;
variablenode_ns_2_i_626_variant_DataContents[0].description = UA_LOCALIZEDTEXT("", "");
UA_Variant_setArray(&attr.value, &variablenode_ns_2_i_626_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "InputArguments");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 626),
UA_NODEID_NUMERIC(ns[2], 625),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "InputArguments"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

return retVal;
}

static UA_StatusCode function_namespace_instance_generated_168_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 626)
);
}

/* OutputArguments - ns=2;i=627 */

static UA_StatusCode function_namespace_instance_generated_169_begin(UA_Server *server, UA_UInt16* ns) {
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
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296);
UA_Argument variablenode_ns_2_i_627_variant_DataContents[1];

UA_init(&variablenode_ns_2_i_627_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_2_i_627_variant_DataContents[0].name = UA_STRING("FileHandle");
variablenode_ns_2_i_627_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 7);
variablenode_ns_2_i_627_variant_DataContents[0].valueRank = (UA_Int32) -1;
variablenode_ns_2_i_627_variant_DataContents[0].description = UA_LOCALIZEDTEXT("", "");
UA_Variant_setArray(&attr.value, &variablenode_ns_2_i_627_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "OutputArguments");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "OutputArguments");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 627),
UA_NODEID_NUMERIC(ns[2], 625),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "OutputArguments"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

return retVal;
}

static UA_StatusCode function_namespace_instance_generated_169_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 627)
);
}

/* Category - ns=2;i=613 */

static UA_StatusCode function_namespace_instance_generated_170_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_613_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_613_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_613_variant_DataContents);
*variablenode_ns_2_i_613_variant_DataContents = UA_STRING_ALLOC("PARAMETER");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_613_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Category");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Category");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 613),
UA_NODEID_NUMERIC(ns[2], 612),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Category"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_613_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 613), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_170_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 613)
);
}

/* DocumentId - ns=2;i=563 */

static UA_StatusCode function_namespace_instance_generated_171_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "DocumentId");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 563),
UA_NODEID_NUMERIC(ns[2], 557),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "DocumentId"),
UA_NODEID_NUMERIC(ns[1], 1009),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_171_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 563)
);
}

/* Kind - ns=2;i=567 */

static UA_StatusCode function_namespace_instance_generated_172_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_567_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_567_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_567_variant_DataContents);
*variablenode_ns_2_i_567_variant_DataContents = UA_STRING_ALLOC("Instance");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_567_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Kind");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Kind");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 567),
UA_NODEID_NUMERIC(ns[2], 563),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Kind"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_567_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_172_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 567)
);
}

/* Value - ns=2;i=569 */

static UA_StatusCode function_namespace_instance_generated_173_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_569_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_569_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_569_variant_DataContents);
*variablenode_ns_2_i_569_variant_DataContents = UA_STRING_ALLOC("UM2559");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_569_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Value");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Value");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 569),
UA_NODEID_NUMERIC(ns[2], 563),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Value"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_569_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_173_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 569)
);
}

/* Category - ns=2;i=564 */

static UA_StatusCode function_namespace_instance_generated_174_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_564_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_564_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_564_variant_DataContents);
*variablenode_ns_2_i_564_variant_DataContents = UA_STRING_ALLOC("CONSTANT");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_564_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Category");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Category");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 564),
UA_NODEID_NUMERIC(ns[2], 563),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Category"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_564_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 564), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_174_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 564)
);
}

/* SemanticId - ns=2;i=565 */

static UA_StatusCode function_namespace_instance_generated_175_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SemanticId");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "SemanticId");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 565),
UA_NODEID_NUMERIC(ns[2], 563),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "SemanticId"),
UA_NODEID_NUMERIC(ns[1], 1005),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_175_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 565)
);
}

/* Keys - ns=2;i=566 */

static UA_StatusCode function_namespace_instance_generated_176_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "Keys");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Keys");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 566),
UA_NODEID_NUMERIC(ns[2], 565),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Keys"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_176_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 566)
);
}

/* ValueType - ns=2;i=568 */

static UA_StatusCode function_namespace_instance_generated_177_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_568_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_568_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_568_variant_DataContents);
*variablenode_ns_2_i_568_variant_DataContents = UA_STRING_ALLOC("string");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_568_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "ValueType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "ValueType");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 568),
UA_NODEID_NUMERIC(ns[2], 563),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "ValueType"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_568_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_177_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 568)
);
}

/* PreviewImage - ns=2;i=584 */

static UA_StatusCode function_namespace_instance_generated_178_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "PreviewImage");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 584),
UA_NODEID_NUMERIC(ns[2], 557),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "PreviewImage"),
UA_NODEID_NUMERIC(ns[1], 1013),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_178_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 584)
);
}

/* Kind - ns=2;i=588 */

static UA_StatusCode function_namespace_instance_generated_179_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_588_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_588_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_588_variant_DataContents);
*variablenode_ns_2_i_588_variant_DataContents = UA_STRING_ALLOC("Instance");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_588_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Kind");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Kind");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 588),
UA_NODEID_NUMERIC(ns[2], 584),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Kind"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_588_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_179_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 588)
);
}

/* File - ns=2;i=591 */

static UA_StatusCode function_namespace_instance_generated_180_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "File");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "File");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 591),
UA_NODEID_NUMERIC(ns[2], 584),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "File"),
UA_NODEID_NUMERIC(ns[0], 11575),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_180_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 591)
);
}

/* MimeType - ns=2;i=592 */

static UA_StatusCode function_namespace_instance_generated_181_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
attr.valueRank = 0;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String variablenode_ns_2_i_592_variant_DataContents[1];
variablenode_ns_2_i_592_variant_DataContents[0] = UA_STRING("image/jpeg");
UA_Variant_setArray(&attr.value, &variablenode_ns_2_i_592_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "MimeType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "MimeType");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 592),
UA_NODEID_NUMERIC(ns[2], 591),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "MimeType"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_181_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 592)
);
}

/* OpenCount - ns=2;i=593 */

static UA_StatusCode function_namespace_instance_generated_182_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
attr.valueRank = 0;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 5);
UA_UInt16 variablenode_ns_2_i_593_variant_DataContents[1];
variablenode_ns_2_i_593_variant_DataContents[0] = (UA_UInt16) 0;
UA_Variant_setArray(&attr.value, &variablenode_ns_2_i_593_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_UINT16]);
attr.displayName = UA_LOCALIZEDTEXT("", "OpenCount");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "OpenCount");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 593),
UA_NODEID_NUMERIC(ns[2], 591),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "OpenCount"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_182_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 593)
);
}

/* Close - ns=2;i=600 */

static UA_StatusCode function_namespace_instance_generated_183_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Close");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Close");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[2], 600),
UA_NODEID_NUMERIC(ns[2], 591),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "Close"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace_instance_generated_183_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 600)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=2;i=601 */

static UA_StatusCode function_namespace_instance_generated_184_begin(UA_Server *server, UA_UInt16* ns) {
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
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296);
UA_Argument variablenode_ns_2_i_601_variant_DataContents[1];

UA_init(&variablenode_ns_2_i_601_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_2_i_601_variant_DataContents[0].name = UA_STRING("FileHandle");
variablenode_ns_2_i_601_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 7);
variablenode_ns_2_i_601_variant_DataContents[0].valueRank = (UA_Int32) -1;
variablenode_ns_2_i_601_variant_DataContents[0].description = UA_LOCALIZEDTEXT("", "");
UA_Variant_setArray(&attr.value, &variablenode_ns_2_i_601_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "InputArguments");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 601),
UA_NODEID_NUMERIC(ns[2], 600),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "InputArguments"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

return retVal;
}

static UA_StatusCode function_namespace_instance_generated_184_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 601)
);
}

/* SetPosition - ns=2;i=610 */

static UA_StatusCode function_namespace_instance_generated_185_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "SetPosition");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "SetPosition");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[2], 610),
UA_NODEID_NUMERIC(ns[2], 591),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "SetPosition"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace_instance_generated_185_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 610)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=2;i=611 */

static UA_StatusCode function_namespace_instance_generated_186_begin(UA_Server *server, UA_UInt16* ns) {
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
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296);
UA_Argument variablenode_ns_2_i_611_variant_DataContents[2];

UA_init(&variablenode_ns_2_i_611_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_2_i_611_variant_DataContents[0].name = UA_STRING("FileHandle");
variablenode_ns_2_i_611_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 7);
variablenode_ns_2_i_611_variant_DataContents[0].valueRank = (UA_Int32) -1;
variablenode_ns_2_i_611_variant_DataContents[0].description = UA_LOCALIZEDTEXT("", "");

UA_init(&variablenode_ns_2_i_611_variant_DataContents[1], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_2_i_611_variant_DataContents[1].name = UA_STRING("Position");
variablenode_ns_2_i_611_variant_DataContents[1].dataType = UA_NODEID_NUMERIC(ns[0], 9);
variablenode_ns_2_i_611_variant_DataContents[1].valueRank = (UA_Int32) -1;
variablenode_ns_2_i_611_variant_DataContents[1].description = UA_LOCALIZEDTEXT("", "");
UA_Variant_setArray(&attr.value, &variablenode_ns_2_i_611_variant_DataContents, (UA_Int32) 2, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "InputArguments");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 611),
UA_NODEID_NUMERIC(ns[2], 610),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "InputArguments"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);


return retVal;
}

static UA_StatusCode function_namespace_instance_generated_186_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 611)
);
}

/* Writable - ns=2;i=596 */

static UA_StatusCode function_namespace_instance_generated_187_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
attr.valueRank = 0;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1);
UA_Boolean variablenode_ns_2_i_596_variant_DataContents[1];
variablenode_ns_2_i_596_variant_DataContents[0] = (UA_Boolean) true;
UA_Variant_setArray(&attr.value, &variablenode_ns_2_i_596_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_BOOLEAN]);
attr.displayName = UA_LOCALIZEDTEXT("", "Writable");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Writable");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 596),
UA_NODEID_NUMERIC(ns[2], 591),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Writable"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_187_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 596)
);
}

/* Open - ns=2;i=597 */

static UA_StatusCode function_namespace_instance_generated_188_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Open");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Open");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[2], 597),
UA_NODEID_NUMERIC(ns[2], 591),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "Open"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace_instance_generated_188_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 597)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=2;i=598 */

static UA_StatusCode function_namespace_instance_generated_189_begin(UA_Server *server, UA_UInt16* ns) {
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
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296);
UA_Argument variablenode_ns_2_i_598_variant_DataContents[1];

UA_init(&variablenode_ns_2_i_598_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_2_i_598_variant_DataContents[0].name = UA_STRING("Mode");
variablenode_ns_2_i_598_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 3);
variablenode_ns_2_i_598_variant_DataContents[0].valueRank = (UA_Int32) -1;
variablenode_ns_2_i_598_variant_DataContents[0].description = UA_LOCALIZEDTEXT("", "");
UA_Variant_setArray(&attr.value, &variablenode_ns_2_i_598_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "InputArguments");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 598),
UA_NODEID_NUMERIC(ns[2], 597),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "InputArguments"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

return retVal;
}

static UA_StatusCode function_namespace_instance_generated_189_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 598)
);
}

/* OutputArguments - ns=2;i=599 */

static UA_StatusCode function_namespace_instance_generated_190_begin(UA_Server *server, UA_UInt16* ns) {
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
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296);
UA_Argument variablenode_ns_2_i_599_variant_DataContents[1];

UA_init(&variablenode_ns_2_i_599_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_2_i_599_variant_DataContents[0].name = UA_STRING("FileHandle");
variablenode_ns_2_i_599_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 7);
variablenode_ns_2_i_599_variant_DataContents[0].valueRank = (UA_Int32) -1;
variablenode_ns_2_i_599_variant_DataContents[0].description = UA_LOCALIZEDTEXT("", "");
UA_Variant_setArray(&attr.value, &variablenode_ns_2_i_599_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "OutputArguments");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "OutputArguments");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 599),
UA_NODEID_NUMERIC(ns[2], 597),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "OutputArguments"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

return retVal;
}

static UA_StatusCode function_namespace_instance_generated_190_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 599)
);
}

/* GetPosition - ns=2;i=607 */

static UA_StatusCode function_namespace_instance_generated_191_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "GetPosition");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "GetPosition");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[2], 607),
UA_NODEID_NUMERIC(ns[2], 591),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "GetPosition"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace_instance_generated_191_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 607)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=2;i=608 */

static UA_StatusCode function_namespace_instance_generated_192_begin(UA_Server *server, UA_UInt16* ns) {
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
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296);
UA_Argument variablenode_ns_2_i_608_variant_DataContents[1];

UA_init(&variablenode_ns_2_i_608_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_2_i_608_variant_DataContents[0].name = UA_STRING("FileHandle");
variablenode_ns_2_i_608_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 7);
variablenode_ns_2_i_608_variant_DataContents[0].valueRank = (UA_Int32) -1;
variablenode_ns_2_i_608_variant_DataContents[0].description = UA_LOCALIZEDTEXT("", "");
UA_Variant_setArray(&attr.value, &variablenode_ns_2_i_608_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "InputArguments");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 608),
UA_NODEID_NUMERIC(ns[2], 607),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "InputArguments"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

return retVal;
}

static UA_StatusCode function_namespace_instance_generated_192_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 608)
);
}

/* OutputArguments - ns=2;i=609 */

static UA_StatusCode function_namespace_instance_generated_193_begin(UA_Server *server, UA_UInt16* ns) {
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
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296);
UA_Argument variablenode_ns_2_i_609_variant_DataContents[1];

UA_init(&variablenode_ns_2_i_609_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_2_i_609_variant_DataContents[0].name = UA_STRING("Position");
variablenode_ns_2_i_609_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 9);
variablenode_ns_2_i_609_variant_DataContents[0].valueRank = (UA_Int32) -1;
variablenode_ns_2_i_609_variant_DataContents[0].description = UA_LOCALIZEDTEXT("", "");
UA_Variant_setArray(&attr.value, &variablenode_ns_2_i_609_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "OutputArguments");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "OutputArguments");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 609),
UA_NODEID_NUMERIC(ns[2], 607),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "OutputArguments"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

return retVal;
}

static UA_StatusCode function_namespace_instance_generated_193_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 609)
);
}

/* Read - ns=2;i=602 */

static UA_StatusCode function_namespace_instance_generated_194_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Read");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Read");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[2], 602),
UA_NODEID_NUMERIC(ns[2], 591),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "Read"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace_instance_generated_194_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 602)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=2;i=603 */

static UA_StatusCode function_namespace_instance_generated_195_begin(UA_Server *server, UA_UInt16* ns) {
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
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296);
UA_Argument variablenode_ns_2_i_603_variant_DataContents[2];

UA_init(&variablenode_ns_2_i_603_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_2_i_603_variant_DataContents[0].name = UA_STRING("FileHandle");
variablenode_ns_2_i_603_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 7);
variablenode_ns_2_i_603_variant_DataContents[0].valueRank = (UA_Int32) -1;
variablenode_ns_2_i_603_variant_DataContents[0].description = UA_LOCALIZEDTEXT("", "");

UA_init(&variablenode_ns_2_i_603_variant_DataContents[1], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_2_i_603_variant_DataContents[1].name = UA_STRING("Length");
variablenode_ns_2_i_603_variant_DataContents[1].dataType = UA_NODEID_NUMERIC(ns[0], 6);
variablenode_ns_2_i_603_variant_DataContents[1].valueRank = (UA_Int32) -1;
variablenode_ns_2_i_603_variant_DataContents[1].description = UA_LOCALIZEDTEXT("", "");
UA_Variant_setArray(&attr.value, &variablenode_ns_2_i_603_variant_DataContents, (UA_Int32) 2, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "InputArguments");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 603),
UA_NODEID_NUMERIC(ns[2], 602),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "InputArguments"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);


return retVal;
}

static UA_StatusCode function_namespace_instance_generated_195_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 603)
);
}

/* OutputArguments - ns=2;i=604 */

static UA_StatusCode function_namespace_instance_generated_196_begin(UA_Server *server, UA_UInt16* ns) {
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
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296);
UA_Argument variablenode_ns_2_i_604_variant_DataContents[1];

UA_init(&variablenode_ns_2_i_604_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_2_i_604_variant_DataContents[0].name = UA_STRING("Data");
variablenode_ns_2_i_604_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 15);
variablenode_ns_2_i_604_variant_DataContents[0].valueRank = (UA_Int32) -1;
variablenode_ns_2_i_604_variant_DataContents[0].description = UA_LOCALIZEDTEXT("", "");
UA_Variant_setArray(&attr.value, &variablenode_ns_2_i_604_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "OutputArguments");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "OutputArguments");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 604),
UA_NODEID_NUMERIC(ns[2], 602),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "OutputArguments"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

return retVal;
}

static UA_StatusCode function_namespace_instance_generated_196_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 604)
);
}

/* Write - ns=2;i=605 */

static UA_StatusCode function_namespace_instance_generated_197_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Write");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Write");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[2], 605),
UA_NODEID_NUMERIC(ns[2], 591),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "Write"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace_instance_generated_197_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 605)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=2;i=606 */

static UA_StatusCode function_namespace_instance_generated_198_begin(UA_Server *server, UA_UInt16* ns) {
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
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296);
UA_Argument variablenode_ns_2_i_606_variant_DataContents[2];

UA_init(&variablenode_ns_2_i_606_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_2_i_606_variant_DataContents[0].name = UA_STRING("FileHandle");
variablenode_ns_2_i_606_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 7);
variablenode_ns_2_i_606_variant_DataContents[0].valueRank = (UA_Int32) -1;
variablenode_ns_2_i_606_variant_DataContents[0].description = UA_LOCALIZEDTEXT("", "");

UA_init(&variablenode_ns_2_i_606_variant_DataContents[1], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_2_i_606_variant_DataContents[1].name = UA_STRING("Data");
variablenode_ns_2_i_606_variant_DataContents[1].dataType = UA_NODEID_NUMERIC(ns[0], 15);
variablenode_ns_2_i_606_variant_DataContents[1].valueRank = (UA_Int32) -1;
variablenode_ns_2_i_606_variant_DataContents[1].description = UA_LOCALIZEDTEXT("", "");
UA_Variant_setArray(&attr.value, &variablenode_ns_2_i_606_variant_DataContents, (UA_Int32) 2, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "InputArguments");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 606),
UA_NODEID_NUMERIC(ns[2], 605),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "InputArguments"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);


return retVal;
}

static UA_StatusCode function_namespace_instance_generated_198_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 606)
);
}

/* UserWritable - ns=2;i=595 */

static UA_StatusCode function_namespace_instance_generated_199_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
attr.valueRank = 0;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1);
UA_Boolean variablenode_ns_2_i_595_variant_DataContents[1];
variablenode_ns_2_i_595_variant_DataContents[0] = (UA_Boolean) true;
UA_Variant_setArray(&attr.value, &variablenode_ns_2_i_595_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_BOOLEAN]);
attr.displayName = UA_LOCALIZEDTEXT("", "UserWritable");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "UserWritable");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 595),
UA_NODEID_NUMERIC(ns[2], 591),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "UserWritable"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_199_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 595)
);
}

/* Size - ns=2;i=594 */

static UA_StatusCode function_namespace_instance_generated_200_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 9);
UA_UInt64 *variablenode_ns_2_i_594_variant_DataContents =  UA_UInt64_new();
if (!variablenode_ns_2_i_594_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_UInt64_init(variablenode_ns_2_i_594_variant_DataContents);
*variablenode_ns_2_i_594_variant_DataContents = (UA_UInt64) 80761;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_594_variant_DataContents, &UA_TYPES[UA_TYPES_UINT64]);
attr.displayName = UA_LOCALIZEDTEXT("", "Size");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Size");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 594),
UA_NODEID_NUMERIC(ns[2], 591),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Size"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_UInt64_delete(variablenode_ns_2_i_594_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_200_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 594)
);
}

/* Category - ns=2;i=585 */

static UA_StatusCode function_namespace_instance_generated_201_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_585_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_585_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_585_variant_DataContents);
*variablenode_ns_2_i_585_variant_DataContents = UA_STRING_ALLOC("PARAMETER");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_585_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Category");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Category");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 585),
UA_NODEID_NUMERIC(ns[2], 584),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Category"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_585_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 585), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_201_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 585)
);
}

/* SemanticId - ns=2;i=586 */

static UA_StatusCode function_namespace_instance_generated_202_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SemanticId");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "SemanticId");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 586),
UA_NODEID_NUMERIC(ns[2], 584),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "SemanticId"),
UA_NODEID_NUMERIC(ns[1], 1005),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_202_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 586)
);
}

/* Keys - ns=2;i=587 */

static UA_StatusCode function_namespace_instance_generated_203_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "Keys");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Keys");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 587),
UA_NODEID_NUMERIC(ns[2], 586),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Keys"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_203_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 587)
);
}

/* MimeType - ns=2;i=589 */

static UA_StatusCode function_namespace_instance_generated_204_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_589_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_589_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_589_variant_DataContents);
*variablenode_ns_2_i_589_variant_DataContents = UA_STRING_ALLOC("image/jpeg");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_589_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "MimeType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "MimeType");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 589),
UA_NODEID_NUMERIC(ns[2], 584),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "MimeType"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_589_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_204_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 589)
);
}

/* Value - ns=2;i=590 */

static UA_StatusCode function_namespace_instance_generated_205_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_590_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_590_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_590_variant_DataContents);
*variablenode_ns_2_i_590_variant_DataContents = UA_STRING_ALLOC("/aasx/files/Xnucleoiks01a3.JPG");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_590_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Value");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Value");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 590),
UA_NODEID_NUMERIC(ns[2], 584),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Value"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_590_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_205_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 590)
);
}

/* Kind - ns=2;i=561 */

static UA_StatusCode function_namespace_instance_generated_206_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_561_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_561_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_561_variant_DataContents);
*variablenode_ns_2_i_561_variant_DataContents = UA_STRING_ALLOC("Instance");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_561_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Kind");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Kind");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 561),
UA_NODEID_NUMERIC(ns[2], 557),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Kind"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_561_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_206_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 561)
);
}

/* Language - ns=2;i=577 */

static UA_StatusCode function_namespace_instance_generated_207_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Language");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 577),
UA_NODEID_NUMERIC(ns[2], 557),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "Language"),
UA_NODEID_NUMERIC(ns[1], 1009),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_207_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 577)
);
}

/* Category - ns=2;i=578 */

static UA_StatusCode function_namespace_instance_generated_208_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_578_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_578_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_578_variant_DataContents);
*variablenode_ns_2_i_578_variant_DataContents = UA_STRING_ALLOC("CONSTANT");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_578_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Category");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Category");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 578),
UA_NODEID_NUMERIC(ns[2], 577),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Category"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_578_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 578), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_208_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 578)
);
}

/* ValueType - ns=2;i=582 */

static UA_StatusCode function_namespace_instance_generated_209_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_582_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_582_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_582_variant_DataContents);
*variablenode_ns_2_i_582_variant_DataContents = UA_STRING_ALLOC("string");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_582_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "ValueType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "ValueType");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 582),
UA_NODEID_NUMERIC(ns[2], 577),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "ValueType"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_582_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_209_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 582)
);
}

/* Kind - ns=2;i=581 */

static UA_StatusCode function_namespace_instance_generated_210_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_581_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_581_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_581_variant_DataContents);
*variablenode_ns_2_i_581_variant_DataContents = UA_STRING_ALLOC("Instance");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_581_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Kind");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Kind");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 581),
UA_NODEID_NUMERIC(ns[2], 577),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Kind"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_581_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_210_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 581)
);
}

/* Value - ns=2;i=583 */

static UA_StatusCode function_namespace_instance_generated_211_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_583_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_583_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_583_variant_DataContents);
*variablenode_ns_2_i_583_variant_DataContents = UA_STRING_ALLOC("en-US");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_583_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Value");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Value");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 583),
UA_NODEID_NUMERIC(ns[2], 577),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Value"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_583_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_211_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 583)
);
}

/* SemanticId - ns=2;i=579 */

static UA_StatusCode function_namespace_instance_generated_212_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SemanticId");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "SemanticId");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 579),
UA_NODEID_NUMERIC(ns[2], 577),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "SemanticId"),
UA_NODEID_NUMERIC(ns[1], 1005),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_212_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 579)
);
}

/* Keys - ns=2;i=580 */

static UA_StatusCode function_namespace_instance_generated_213_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "Keys");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Keys");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 580),
UA_NODEID_NUMERIC(ns[2], 579),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Keys"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_213_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 580)
);
}

/* Title - ns=2;i=570 */

static UA_StatusCode function_namespace_instance_generated_214_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Title");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 570),
UA_NODEID_NUMERIC(ns[2], 557),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "Title"),
UA_NODEID_NUMERIC(ns[1], 1009),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_214_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 570)
);
}

/* Category - ns=2;i=571 */

static UA_StatusCode function_namespace_instance_generated_215_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_571_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_571_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_571_variant_DataContents);
*variablenode_ns_2_i_571_variant_DataContents = UA_STRING_ALLOC("CONSTANT");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_571_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Category");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Category");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 571),
UA_NODEID_NUMERIC(ns[2], 570),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Category"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_571_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 571), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_215_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 571)
);
}

/* SemanticId - ns=2;i=572 */

static UA_StatusCode function_namespace_instance_generated_216_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SemanticId");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "SemanticId");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 572),
UA_NODEID_NUMERIC(ns[2], 570),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "SemanticId"),
UA_NODEID_NUMERIC(ns[1], 1005),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_216_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 572)
);
}

/* Keys - ns=2;i=573 */

static UA_StatusCode function_namespace_instance_generated_217_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "Keys");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Keys");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 573),
UA_NODEID_NUMERIC(ns[2], 572),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Keys"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_217_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 573)
);
}

/* Value - ns=2;i=576 */

static UA_StatusCode function_namespace_instance_generated_218_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_576_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_576_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_576_variant_DataContents);
*variablenode_ns_2_i_576_variant_DataContents = UA_STRING_ALLOC("Getting started with the X-NUCLEO-IKS01A3 motion MEMS and environmental sensor expansion board for STM32 Nucleo");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_576_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Value");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Value");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 576),
UA_NODEID_NUMERIC(ns[2], 570),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Value"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_576_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_218_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 576)
);
}

/* Kind - ns=2;i=574 */

static UA_StatusCode function_namespace_instance_generated_219_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_574_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_574_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_574_variant_DataContents);
*variablenode_ns_2_i_574_variant_DataContents = UA_STRING_ALLOC("Instance");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_574_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Kind");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Kind");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 574),
UA_NODEID_NUMERIC(ns[2], 570),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Kind"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_574_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_219_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 574)
);
}

/* ValueType - ns=2;i=575 */

static UA_StatusCode function_namespace_instance_generated_220_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_575_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_575_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_575_variant_DataContents);
*variablenode_ns_2_i_575_variant_DataContents = UA_STRING_ALLOC("string");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_575_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "ValueType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "ValueType");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 575),
UA_NODEID_NUMERIC(ns[2], 570),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "ValueType"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_575_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_220_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 575)
);
}

/* Category - ns=2;i=558 */

static UA_StatusCode function_namespace_instance_generated_221_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_558_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_558_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_558_variant_DataContents);
*variablenode_ns_2_i_558_variant_DataContents = UA_STRING_ALLOC("CONSTANT");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_558_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Category");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Category");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 558),
UA_NODEID_NUMERIC(ns[2], 557),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Category"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_558_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 558), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_221_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 558)
);
}

/* Category - ns=2;i=552 */

static UA_StatusCode function_namespace_instance_generated_222_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_552_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_552_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_552_variant_DataContents);
*variablenode_ns_2_i_552_variant_DataContents = UA_STRING_ALLOC("CONSTANT");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_552_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Category");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Category");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 552),
UA_NODEID_NUMERIC(ns[2], 551),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Category"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_552_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 552), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_222_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 552)
);
}

/* OperationalData - ns=2;i=538 */

static UA_StatusCode function_namespace_instance_generated_223_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "OperationalData");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 538),
UA_NODEID_NUMERIC(ns[2], 446),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "OperationalData"),
UA_NODEID_NUMERIC(ns[1], 1010),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_223_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 538)
);
}

/* AllowDuplicates - ns=2;i=543 */

static UA_StatusCode function_namespace_instance_generated_224_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1);
UA_Boolean *variablenode_ns_2_i_543_variant_DataContents =  UA_Boolean_new();
if (!variablenode_ns_2_i_543_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Boolean_init(variablenode_ns_2_i_543_variant_DataContents);
*variablenode_ns_2_i_543_variant_DataContents = (UA_Boolean) false;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_543_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
attr.displayName = UA_LOCALIZEDTEXT("", "AllowDuplicates");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "AllowDuplicates");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 543),
UA_NODEID_NUMERIC(ns[2], 538),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "AllowDuplicates"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Boolean_delete(variablenode_ns_2_i_543_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_224_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 543)
);
}

/* Category - ns=2;i=539 */

static UA_StatusCode function_namespace_instance_generated_225_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_539_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_539_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_539_variant_DataContents);
*variablenode_ns_2_i_539_variant_DataContents = UA_STRING_ALLOC("CONSTANT");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_539_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Category");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Category");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 539),
UA_NODEID_NUMERIC(ns[2], 538),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Category"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_539_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 539), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_225_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 539)
);
}

/* SemanticId - ns=2;i=540 */

static UA_StatusCode function_namespace_instance_generated_226_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SemanticId");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "SemanticId");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 540),
UA_NODEID_NUMERIC(ns[2], 538),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "SemanticId"),
UA_NODEID_NUMERIC(ns[1], 1005),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_226_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 540)
);
}

/* Keys - ns=2;i=541 */

static UA_StatusCode function_namespace_instance_generated_227_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "Keys");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Keys");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 541),
UA_NODEID_NUMERIC(ns[2], 540),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Keys"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_227_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 541)
);
}

/* Kind - ns=2;i=542 */

static UA_StatusCode function_namespace_instance_generated_228_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_542_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_542_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_542_variant_DataContents);
*variablenode_ns_2_i_542_variant_DataContents = UA_STRING_ALLOC("Instance");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_542_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Kind");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Kind");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 542),
UA_NODEID_NUMERIC(ns[2], 538),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Kind"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_542_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_228_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 542)
);
}

/* OperatingRange - ns=2;i=544 */

static UA_StatusCode function_namespace_instance_generated_229_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "OperatingRange");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 544),
UA_NODEID_NUMERIC(ns[2], 538),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "OperatingRange"),
UA_NODEID_NUMERIC(ns[1], 1009),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_229_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 544)
);
}

/* Kind - ns=2;i=548 */

static UA_StatusCode function_namespace_instance_generated_230_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_548_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_548_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_548_variant_DataContents);
*variablenode_ns_2_i_548_variant_DataContents = UA_STRING_ALLOC("Instance");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_548_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Kind");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Kind");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 548),
UA_NODEID_NUMERIC(ns[2], 544),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Kind"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_548_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_230_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 548)
);
}

/* Value - ns=2;i=550 */

static UA_StatusCode function_namespace_instance_generated_231_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_550_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_550_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_550_variant_DataContents);
*variablenode_ns_2_i_550_variant_DataContents = UA_STRING_ALLOC("3.3 V, 250 mA");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_550_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Value");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Value");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 550),
UA_NODEID_NUMERIC(ns[2], 544),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Value"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_550_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_231_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 550)
);
}

/* ValueType - ns=2;i=549 */

static UA_StatusCode function_namespace_instance_generated_232_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_549_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_549_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_549_variant_DataContents);
*variablenode_ns_2_i_549_variant_DataContents = UA_STRING_ALLOC("string");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_549_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "ValueType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "ValueType");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 549),
UA_NODEID_NUMERIC(ns[2], 544),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "ValueType"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_549_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_232_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 549)
);
}

/* SemanticId - ns=2;i=546 */

static UA_StatusCode function_namespace_instance_generated_233_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SemanticId");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "SemanticId");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 546),
UA_NODEID_NUMERIC(ns[2], 544),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "SemanticId"),
UA_NODEID_NUMERIC(ns[1], 1005),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_233_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 546)
);
}

/* Keys - ns=2;i=547 */

static UA_StatusCode function_namespace_instance_generated_234_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "Keys");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Keys");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 547),
UA_NODEID_NUMERIC(ns[2], 546),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Keys"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_234_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 547)
);
}

/* Category - ns=2;i=545 */

static UA_StatusCode function_namespace_instance_generated_235_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_545_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_545_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_545_variant_DataContents);
*variablenode_ns_2_i_545_variant_DataContents = UA_STRING_ALLOC("CONSTANT");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_545_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Category");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Category");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 545),
UA_NODEID_NUMERIC(ns[2], 544),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Category"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_545_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 545), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_235_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 545)
);
}

/* Kind - ns=2;i=456 */

static UA_StatusCode function_namespace_instance_generated_236_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_456_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_456_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_456_variant_DataContents);
*variablenode_ns_2_i_456_variant_DataContents = UA_STRING_ALLOC("Instance");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_456_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Kind");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Kind");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 456),
UA_NODEID_NUMERIC(ns[2], 446),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Kind"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_456_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_236_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 456)
);
}

/* SemanticId - ns=2;i=454 */

static UA_StatusCode function_namespace_instance_generated_237_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SemanticId");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "SemanticId");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 454),
UA_NODEID_NUMERIC(ns[2], 446),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "SemanticId"),
UA_NODEID_NUMERIC(ns[1], 1005),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_237_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 454)
);
}

/* Keys - ns=2;i=455 */

static UA_StatusCode function_namespace_instance_generated_238_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "Keys");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Keys");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 455),
UA_NODEID_NUMERIC(ns[2], 454),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Keys"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_238_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 455)
);
}

/* Submodel:Identification - ns=2;i=156 */

static UA_StatusCode function_namespace_instance_generated_239_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Submodel:Identification");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Identification from Manufacturer");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 156),
UA_NODEID_NUMERIC(ns[2], 135),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "Identification"),
UA_NODEID_NUMERIC(ns[1], 1007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 156), UA_NODEID_NUMERIC(ns[0], 17597), UA_EXPANDEDNODEID_NUMERIC(ns[2], 640), true);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_239_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 156)
);
}

/* Identification - ns=2;i=158 */

static UA_StatusCode function_namespace_instance_generated_240_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Identification");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Identification");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 158),
UA_NODEID_NUMERIC(ns[2], 156),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "Identification"),
UA_NODEID_NUMERIC(ns[1], 1000),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_240_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 158)
);
}

/* Id - ns=2;i=160 */

static UA_StatusCode function_namespace_instance_generated_241_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_160_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_160_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_160_variant_DataContents);
*variablenode_ns_2_i_160_variant_DataContents = UA_STRING_ALLOC("https://www.phi-ware.com/ids/sm/9523_3152_1102_3708");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_160_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Id");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Id");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 160),
UA_NODEID_NUMERIC(ns[2], 158),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Id"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_160_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_241_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 160)
);
}

/* IdType - ns=2;i=159 */

static UA_StatusCode function_namespace_instance_generated_242_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_159_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_159_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_159_variant_DataContents);
*variablenode_ns_2_i_159_variant_DataContents = UA_STRING_ALLOC("IRI");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_159_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "IdType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "IdType");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 159),
UA_NODEID_NUMERIC(ns[2], 158),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "IdType"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_159_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_242_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 159)
);
}

/* SemanticId - ns=2;i=161 */

static UA_StatusCode function_namespace_instance_generated_243_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SemanticId");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "SemanticId");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 161),
UA_NODEID_NUMERIC(ns[2], 156),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "SemanticId"),
UA_NODEID_NUMERIC(ns[1], 1005),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_243_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 161)
);
}

/* Keys - ns=2;i=162 */

static UA_StatusCode function_namespace_instance_generated_244_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_162_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_162_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_162_variant_DataContents);
*variablenode_ns_2_i_162_variant_DataContents = UA_STRING_ALLOC("(GlobalReference)(no-local)[IRDI]0173-1#01-ADN198#009");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_162_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Keys");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Keys");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 162),
UA_NODEID_NUMERIC(ns[2], 161),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Keys"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_162_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_244_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 162)
);
}

/* Category - ns=2;i=157 */

static UA_StatusCode function_namespace_instance_generated_245_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_157_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_157_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_157_variant_DataContents);
*variablenode_ns_2_i_157_variant_DataContents = UA_STRING_ALLOC("CONSTANT");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_157_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Category");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Category");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 157),
UA_NODEID_NUMERIC(ns[2], 156),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Category"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_157_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 157), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_245_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 157)
);
}

/* Kind - ns=2;i=163 */

static UA_StatusCode function_namespace_instance_generated_246_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_163_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_163_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_163_variant_DataContents);
*variablenode_ns_2_i_163_variant_DataContents = UA_STRING_ALLOC("Instance");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_163_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Kind");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Kind");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 163),
UA_NODEID_NUMERIC(ns[2], 156),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Kind"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_163_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_246_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 163)
);
}

/* Manufacturer - ns=2;i=164 */

static UA_StatusCode function_namespace_instance_generated_247_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Manufacturer");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 164),
UA_NODEID_NUMERIC(ns[2], 156),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "Manufacturer"),
UA_NODEID_NUMERIC(ns[1], 1009),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 164), UA_NODEID_NUMERIC(ns[0], 17597), UA_EXPANDEDNODEID_NUMERIC(ns[2], 641), true);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_247_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 164)
);
}

/* SemanticId - ns=2;i=166 */

static UA_StatusCode function_namespace_instance_generated_248_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SemanticId");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "SemanticId");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 166),
UA_NODEID_NUMERIC(ns[2], 164),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "SemanticId"),
UA_NODEID_NUMERIC(ns[1], 1005),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_248_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 166)
);
}

/* Keys - ns=2;i=167 */

static UA_StatusCode function_namespace_instance_generated_249_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_167_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_167_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_167_variant_DataContents);
*variablenode_ns_2_i_167_variant_DataContents = UA_STRING_ALLOC("(GlobalReference)(no-local)[IRDI]0173-1#02-AAO677#002");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_167_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Keys");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Keys");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 167),
UA_NODEID_NUMERIC(ns[2], 166),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Keys"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_167_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_249_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 167)
);
}

/* Kind - ns=2;i=168 */

static UA_StatusCode function_namespace_instance_generated_250_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_168_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_168_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_168_variant_DataContents);
*variablenode_ns_2_i_168_variant_DataContents = UA_STRING_ALLOC("Instance");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_168_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Kind");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Kind");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 168),
UA_NODEID_NUMERIC(ns[2], 164),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Kind"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_168_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_250_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 168)
);
}

/* Category - ns=2;i=165 */

static UA_StatusCode function_namespace_instance_generated_251_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_165_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_165_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_165_variant_DataContents);
*variablenode_ns_2_i_165_variant_DataContents = UA_STRING_ALLOC("CONSTANT");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_165_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Category");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Category");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 165),
UA_NODEID_NUMERIC(ns[2], 164),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Category"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_165_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 165), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_251_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 165)
);
}

/* ValueType - ns=2;i=171 */

static UA_StatusCode function_namespace_instance_generated_252_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_171_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_171_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_171_variant_DataContents);
*variablenode_ns_2_i_171_variant_DataContents = UA_STRING_ALLOC("string");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_171_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "ValueType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "ValueType");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 171),
UA_NODEID_NUMERIC(ns[2], 164),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "ValueType"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_171_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_252_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 171)
);
}

/* ValueId - ns=2;i=169 */

static UA_StatusCode function_namespace_instance_generated_253_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ValueId");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "ValueId");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 169),
UA_NODEID_NUMERIC(ns[2], 164),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "ValueId"),
UA_NODEID_NUMERIC(ns[1], 1005),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_253_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 169)
);
}

/* Keys - ns=2;i=170 */

static UA_StatusCode function_namespace_instance_generated_254_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "Keys");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Keys");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 170),
UA_NODEID_NUMERIC(ns[2], 169),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Keys"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_254_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 170)
);
}

/* Value - ns=2;i=172 */

static UA_StatusCode function_namespace_instance_generated_255_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_172_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_172_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_172_variant_DataContents);
*variablenode_ns_2_i_172_variant_DataContents = UA_STRING_ALLOC("phi-ware s.r.o.");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_172_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Value");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Value");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 172),
UA_NODEID_NUMERIC(ns[2], 164),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Value"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_172_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_255_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 172)
);
}

/* ProductDesignation - ns=2;i=173 */

static UA_StatusCode function_namespace_instance_generated_256_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ProductDesignation");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 173),
UA_NODEID_NUMERIC(ns[2], 156),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "ProductDesignation"),
UA_NODEID_NUMERIC(ns[1], 1009),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 173), UA_NODEID_NUMERIC(ns[0], 17597), UA_EXPANDEDNODEID_NUMERIC(ns[2], 642), true);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_256_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 173)
);
}

/* Kind - ns=2;i=177 */

static UA_StatusCode function_namespace_instance_generated_257_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_177_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_177_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_177_variant_DataContents);
*variablenode_ns_2_i_177_variant_DataContents = UA_STRING_ALLOC("Instance");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_177_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Kind");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Kind");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 177),
UA_NODEID_NUMERIC(ns[2], 173),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Kind"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_177_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_257_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 177)
);
}

/* Value - ns=2;i=179 */

static UA_StatusCode function_namespace_instance_generated_258_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_179_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_179_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_179_variant_DataContents);
*variablenode_ns_2_i_179_variant_DataContents = UA_STRING_ALLOC("Embedded Component of Industry 4.0");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_179_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Value");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Value");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 179),
UA_NODEID_NUMERIC(ns[2], 173),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Value"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_179_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_258_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 179)
);
}

/* Category - ns=2;i=174 */

static UA_StatusCode function_namespace_instance_generated_259_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_174_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_174_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_174_variant_DataContents);
*variablenode_ns_2_i_174_variant_DataContents = UA_STRING_ALLOC("CONSTANT");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_174_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Category");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Category");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 174),
UA_NODEID_NUMERIC(ns[2], 173),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Category"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_174_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 174), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_259_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 174)
);
}

/* ValueType - ns=2;i=178 */

static UA_StatusCode function_namespace_instance_generated_260_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_178_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_178_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_178_variant_DataContents);
*variablenode_ns_2_i_178_variant_DataContents = UA_STRING_ALLOC("string");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_178_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "ValueType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "ValueType");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 178),
UA_NODEID_NUMERIC(ns[2], 173),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "ValueType"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_178_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_260_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 178)
);
}

/* SemanticId - ns=2;i=175 */

static UA_StatusCode function_namespace_instance_generated_261_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SemanticId");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "SemanticId");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 175),
UA_NODEID_NUMERIC(ns[2], 173),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "SemanticId"),
UA_NODEID_NUMERIC(ns[1], 1005),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_261_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 175)
);
}

/* Keys - ns=2;i=176 */

static UA_StatusCode function_namespace_instance_generated_262_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_176_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_176_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_176_variant_DataContents);
*variablenode_ns_2_i_176_variant_DataContents = UA_STRING_ALLOC("(GlobalReference)(no-local)[IRDI]0173-1#02-AAW338#001");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_176_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Keys");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Keys");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 176),
UA_NODEID_NUMERIC(ns[2], 175),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Keys"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_176_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_262_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 176)
);
}

/* Submodel:Documentation - ns=2;i=244 */

static UA_StatusCode function_namespace_instance_generated_263_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Submodel:Documentation");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 244),
UA_NODEID_NUMERIC(ns[2], 135),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "Documentation"),
UA_NODEID_NUMERIC(ns[1], 1007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_263_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 244)
);
}

/* Kind - ns=2;i=251 */

static UA_StatusCode function_namespace_instance_generated_264_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_251_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_251_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_251_variant_DataContents);
*variablenode_ns_2_i_251_variant_DataContents = UA_STRING_ALLOC("Instance");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_251_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Kind");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Kind");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 251),
UA_NODEID_NUMERIC(ns[2], 244),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Kind"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_251_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_264_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 251)
);
}

/* SemanticId - ns=2;i=249 */

static UA_StatusCode function_namespace_instance_generated_265_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SemanticId");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "SemanticId");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 249),
UA_NODEID_NUMERIC(ns[2], 244),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "SemanticId"),
UA_NODEID_NUMERIC(ns[1], 1005),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_265_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 249)
);
}

/* Keys - ns=2;i=250 */

static UA_StatusCode function_namespace_instance_generated_266_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "Keys");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Keys");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 250),
UA_NODEID_NUMERIC(ns[2], 249),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Keys"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_266_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 250)
);
}

/* Category - ns=2;i=245 */

static UA_StatusCode function_namespace_instance_generated_267_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_245_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_245_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_245_variant_DataContents);
*variablenode_ns_2_i_245_variant_DataContents = UA_STRING_ALLOC("CONSTANT");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_245_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Category");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Category");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 245),
UA_NODEID_NUMERIC(ns[2], 244),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Category"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_245_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 245), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_267_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 245)
);
}

/* Identification - ns=2;i=246 */

static UA_StatusCode function_namespace_instance_generated_268_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Identification");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Identification");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 246),
UA_NODEID_NUMERIC(ns[2], 244),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "Identification"),
UA_NODEID_NUMERIC(ns[1], 1000),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_268_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 246)
);
}

/* Id - ns=2;i=248 */

static UA_StatusCode function_namespace_instance_generated_269_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_248_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_248_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_248_variant_DataContents);
*variablenode_ns_2_i_248_variant_DataContents = UA_STRING_ALLOC("https://www.phi-ware.com/ids/sm/5544_3152_1102_5308");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_248_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Id");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Id");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 248),
UA_NODEID_NUMERIC(ns[2], 246),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Id"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_248_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_269_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 248)
);
}

/* IdType - ns=2;i=247 */

static UA_StatusCode function_namespace_instance_generated_270_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_247_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_247_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_247_variant_DataContents);
*variablenode_ns_2_i_247_variant_DataContents = UA_STRING_ALLOC("IRI");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_247_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "IdType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "IdType");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 247),
UA_NODEID_NUMERIC(ns[2], 246),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "IdType"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_247_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_270_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 247)
);
}

/* Asset - ns=2;i=145 */

static UA_StatusCode function_namespace_instance_generated_271_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Asset");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Embedded component for Industry 4.0");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 145),
UA_NODEID_NUMERIC(ns[2], 135),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "Asset"),
UA_NODEID_NUMERIC(ns[1], 1023),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_271_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 145)
);
}

/* Identification - ns=2;i=147 */

static UA_StatusCode function_namespace_instance_generated_272_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Identification");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Identification");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 147),
UA_NODEID_NUMERIC(ns[2], 145),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "Identification"),
UA_NODEID_NUMERIC(ns[1], 1000),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_272_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 147)
);
}

/* IdType - ns=2;i=148 */

static UA_StatusCode function_namespace_instance_generated_273_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_148_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_148_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_148_variant_DataContents);
*variablenode_ns_2_i_148_variant_DataContents = UA_STRING_ALLOC("IRI");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_148_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "IdType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "IdType");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 148),
UA_NODEID_NUMERIC(ns[2], 147),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "IdType"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_148_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_273_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 148)
);
}

/* Id - ns=2;i=149 */

static UA_StatusCode function_namespace_instance_generated_274_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_149_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_149_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_149_variant_DataContents);
*variablenode_ns_2_i_149_variant_DataContents = UA_STRING_ALLOC("https://www.phi-ware.com/ids/asset/0535_3152_1102_8824");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_149_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Id");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Id");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 149),
UA_NODEID_NUMERIC(ns[2], 147),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Id"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_149_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_274_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 149)
);
}

/* Administration - ns=2;i=150 */

static UA_StatusCode function_namespace_instance_generated_275_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Administration");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Administration");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 150),
UA_NODEID_NUMERIC(ns[2], 145),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "Administration"),
UA_NODEID_NUMERIC(ns[1], 1001),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_275_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 150)
);
}

/* Version - ns=2;i=151 */

static UA_StatusCode function_namespace_instance_generated_276_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_151_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_151_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_151_variant_DataContents);
*variablenode_ns_2_i_151_variant_DataContents = UA_STRING_ALLOC("");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_151_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Version");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Version");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 151),
UA_NODEID_NUMERIC(ns[2], 150),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Version"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_151_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_276_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 151)
);
}

/* Revision - ns=2;i=152 */

static UA_StatusCode function_namespace_instance_generated_277_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_152_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_152_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_152_variant_DataContents);
*variablenode_ns_2_i_152_variant_DataContents = UA_STRING_ALLOC("");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_152_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Revision");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Revision");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 152),
UA_NODEID_NUMERIC(ns[2], 150),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Revision"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_152_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_277_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 152)
);
}

/* Category - ns=2;i=146 */

static UA_StatusCode function_namespace_instance_generated_278_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_146_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_146_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_146_variant_DataContents);
*variablenode_ns_2_i_146_variant_DataContents = UA_STRING_ALLOC("CONSTANT");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_146_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Category");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Category");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 146),
UA_NODEID_NUMERIC(ns[2], 145),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Category"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_146_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 146), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_278_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 146)
);
}

/* Kind - ns=2;i=153 */

static UA_StatusCode function_namespace_instance_generated_279_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_153_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_153_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_153_variant_DataContents);
*variablenode_ns_2_i_153_variant_DataContents = UA_STRING_ALLOC("Instance");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_153_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Kind");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Kind");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 153),
UA_NODEID_NUMERIC(ns[2], 145),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Kind"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_153_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_279_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 153)
);
}

/* AssetIdentificationModel - ns=2;i=154 */

static UA_StatusCode function_namespace_instance_generated_280_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "AssetIdentificationModel");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "AssetIdentificationModel");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 154),
UA_NODEID_NUMERIC(ns[2], 145),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "AssetIdentificationModel"),
UA_NODEID_NUMERIC(ns[1], 1005),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_280_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 154)
);
}

/* Keys - ns=2;i=155 */

static UA_StatusCode function_namespace_instance_generated_281_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_155_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_155_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_155_variant_DataContents);
*variablenode_ns_2_i_155_variant_DataContents = UA_STRING_ALLOC("(SubmodelRef)(local)[IRI]https://www.phi-ware.com/ids/sm/9523_3152_1102_3708");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_155_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Keys");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Keys");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 155),
UA_NODEID_NUMERIC(ns[2], 154),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Keys"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_155_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_281_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 155)
);
}

/* Submodel:OperationalData - ns=2;i=188 */

static UA_StatusCode function_namespace_instance_generated_282_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Submodel:OperationalData");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 188),
UA_NODEID_NUMERIC(ns[2], 135),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "OperationalData"),
UA_NODEID_NUMERIC(ns[1], 1007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_282_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 188)
);
}

/* humidity - ns=2;i=231 */

static UA_StatusCode function_namespace_instance_generated_283_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "humidity");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 231),
UA_NODEID_NUMERIC(ns[2], 188),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "humidity"),
UA_NODEID_NUMERIC(ns[1], 1010),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 231), UA_NODEID_NUMERIC(ns[0], 17597), UA_EXPANDEDNODEID_NUMERIC(ns[2], 111), true);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_283_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 231)
);
}

/* AllowDuplicates - ns=2;i=236 */

static UA_StatusCode function_namespace_instance_generated_284_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1);
UA_Boolean *variablenode_ns_2_i_236_variant_DataContents =  UA_Boolean_new();
if (!variablenode_ns_2_i_236_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Boolean_init(variablenode_ns_2_i_236_variant_DataContents);
*variablenode_ns_2_i_236_variant_DataContents = (UA_Boolean) false;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_236_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
attr.displayName = UA_LOCALIZEDTEXT("", "AllowDuplicates");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "AllowDuplicates");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 236),
UA_NODEID_NUMERIC(ns[2], 231),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "AllowDuplicates"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Boolean_delete(variablenode_ns_2_i_236_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_284_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 236)
);
}

/* value - ns=2;i=237 */

static UA_StatusCode function_namespace_instance_generated_285_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "value");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 237),
UA_NODEID_NUMERIC(ns[2], 231),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "value"),
UA_NODEID_NUMERIC(ns[1], 1009),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 237), UA_NODEID_NUMERIC(ns[0], 17597), UA_EXPANDEDNODEID_NUMERIC(ns[2], 111), true);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_285_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 237)
);
}

/* Value - ns=2;i=243 */

static UA_StatusCode function_namespace_instance_generated_286_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 10);
UA_Float *variablenode_ns_2_i_243_variant_DataContents =  UA_Float_new();
if (!variablenode_ns_2_i_243_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Float_init(variablenode_ns_2_i_243_variant_DataContents);
*variablenode_ns_2_i_243_variant_DataContents = (UA_Float) 60.54;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_243_variant_DataContents, &UA_TYPES[UA_TYPES_FLOAT]);
attr.displayName = UA_LOCALIZEDTEXT("", "Value");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Value");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 243),
UA_NODEID_NUMERIC(ns[2], 237),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Value"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Float_delete(variablenode_ns_2_i_243_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_286_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 243)
);
}

/* Unit - ns=2;i=121 */

static UA_StatusCode function_namespace_instance_generated_287_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_121_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_121_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_121_variant_DataContents);
*variablenode_ns_2_i_121_variant_DataContents = UA_STRING_ALLOC("%");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_121_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Unit");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Unit");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 121),
UA_NODEID_NUMERIC(ns[2], 118),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Unit"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_121_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 121), UA_NODEID_NUMERIC(ns[0], 47), UA_EXPANDEDNODEID_NUMERIC(ns[2], 237), false);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_287_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 121)
);
}

/* SemanticId - ns=2;i=239 */

static UA_StatusCode function_namespace_instance_generated_288_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SemanticId");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "SemanticId");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 239),
UA_NODEID_NUMERIC(ns[2], 237),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "SemanticId"),
UA_NODEID_NUMERIC(ns[1], 1005),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_288_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 239)
);
}

/* Keys - ns=2;i=240 */

static UA_StatusCode function_namespace_instance_generated_289_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_240_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_240_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_240_variant_DataContents);
*variablenode_ns_2_i_240_variant_DataContents = UA_STRING_ALLOC("(ConceptDescription)(local)[IRI]https://www.phi-ware.com/ids/cd/7281_3162_1102_1618");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_240_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Keys");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Keys");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 240),
UA_NODEID_NUMERIC(ns[2], 239),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Keys"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_240_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_289_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 240)
);
}

/* Category - ns=2;i=238 */

static UA_StatusCode function_namespace_instance_generated_290_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_238_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_238_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_238_variant_DataContents);
*variablenode_ns_2_i_238_variant_DataContents = UA_STRING_ALLOC("PROPERTY");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_238_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Category");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Category");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 238),
UA_NODEID_NUMERIC(ns[2], 237),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Category"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_238_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 238), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_290_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 238)
);
}

/* Kind - ns=2;i=241 */

static UA_StatusCode function_namespace_instance_generated_291_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_241_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_241_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_241_variant_DataContents);
*variablenode_ns_2_i_241_variant_DataContents = UA_STRING_ALLOC("Instance");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_241_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Kind");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Kind");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 241),
UA_NODEID_NUMERIC(ns[2], 237),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Kind"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_241_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_291_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 241)
);
}

/* ValueType - ns=2;i=242 */

static UA_StatusCode function_namespace_instance_generated_292_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_242_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_242_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_242_variant_DataContents);
*variablenode_ns_2_i_242_variant_DataContents = UA_STRING_ALLOC("float");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_242_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "ValueType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "ValueType");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 242),
UA_NODEID_NUMERIC(ns[2], 237),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "ValueType"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_242_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_292_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 242)
);
}

/* range - ns=2;i=646 */

static UA_StatusCode function_namespace_instance_generated_293_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 884);

UA_STACKARRAY(UA_Range, variablenode_ns_2_i_646_Range_0, 1);
UA_init(variablenode_ns_2_i_646_Range_0, &UA_TYPES[UA_TYPES_RANGE]);
variablenode_ns_2_i_646_Range_0->low = (UA_Double) 0;
variablenode_ns_2_i_646_Range_0->high = (UA_Double) 100;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_646_Range_0, &UA_TYPES[UA_TYPES_RANGE]);
attr.displayName = UA_LOCALIZEDTEXT("", "Range");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 646),
UA_NODEID_NUMERIC(ns[2], 237),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "Range"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

return retVal;
}

static UA_StatusCode function_namespace_instance_generated_293_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 646)
);
}

/* SemanticId - ns=2;i=233 */

static UA_StatusCode function_namespace_instance_generated_294_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SemanticId");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "SemanticId");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 233),
UA_NODEID_NUMERIC(ns[2], 231),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "SemanticId"),
UA_NODEID_NUMERIC(ns[1], 1005),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_294_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 233)
);
}

/* Keys - ns=2;i=234 */

static UA_StatusCode function_namespace_instance_generated_295_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_234_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_234_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_234_variant_DataContents);
*variablenode_ns_2_i_234_variant_DataContents = UA_STRING_ALLOC("(ConceptDescription)(local)[IRI]https://www.phi-ware.com/ids/cd/7281_3162_1102_1618");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_234_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Keys");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Keys");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 234),
UA_NODEID_NUMERIC(ns[2], 233),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Keys"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_234_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_295_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 234)
);
}

/* Category - ns=2;i=232 */

static UA_StatusCode function_namespace_instance_generated_296_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_232_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_232_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_232_variant_DataContents);
*variablenode_ns_2_i_232_variant_DataContents = UA_STRING_ALLOC("CONSTANT");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_232_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Category");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Category");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 232),
UA_NODEID_NUMERIC(ns[2], 231),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Category"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_232_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 232), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_296_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 232)
);
}

/* Kind - ns=2;i=235 */

static UA_StatusCode function_namespace_instance_generated_297_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_235_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_235_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_235_variant_DataContents);
*variablenode_ns_2_i_235_variant_DataContents = UA_STRING_ALLOC("Instance");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_235_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Kind");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Kind");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 235),
UA_NODEID_NUMERIC(ns[2], 231),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Kind"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_235_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_297_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 235)
);
}

/* temperature - ns=2;i=203 */

static UA_StatusCode function_namespace_instance_generated_298_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "temperature");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 203),
UA_NODEID_NUMERIC(ns[2], 188),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "temperature"),
UA_NODEID_NUMERIC(ns[1], 1010),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 203), UA_NODEID_NUMERIC(ns[0], 17597), UA_EXPANDEDNODEID_NUMERIC(ns[2], 99), true);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_298_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 203)
);
}

/* SemanticId - ns=2;i=205 */

static UA_StatusCode function_namespace_instance_generated_299_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SemanticId");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "SemanticId");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 205),
UA_NODEID_NUMERIC(ns[2], 203),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "SemanticId"),
UA_NODEID_NUMERIC(ns[1], 1005),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_299_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 205)
);
}

/* Keys - ns=2;i=206 */

static UA_StatusCode function_namespace_instance_generated_300_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_206_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_206_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_206_variant_DataContents);
*variablenode_ns_2_i_206_variant_DataContents = UA_STRING_ALLOC("(ConceptDescription)(local)[IRI]www.example.com/ids/cd/9070_4140_1012_6743");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_206_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Keys");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Keys");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 206),
UA_NODEID_NUMERIC(ns[2], 205),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Keys"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_206_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_300_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 206)
);
}

/* Kind - ns=2;i=207 */

static UA_StatusCode function_namespace_instance_generated_301_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_207_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_207_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_207_variant_DataContents);
*variablenode_ns_2_i_207_variant_DataContents = UA_STRING_ALLOC("Instance");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_207_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Kind");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Kind");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 207),
UA_NODEID_NUMERIC(ns[2], 203),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Kind"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_207_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_301_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 207)
);
}

/* value - ns=2;i=209 */

static UA_StatusCode function_namespace_instance_generated_302_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "value");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 209),
UA_NODEID_NUMERIC(ns[2], 203),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "value"),
UA_NODEID_NUMERIC(ns[1], 1009),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 209), UA_NODEID_NUMERIC(ns[0], 17597), UA_EXPANDEDNODEID_NUMERIC(ns[2], 99), true);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_302_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 209)
);
}

/* SemanticId - ns=2;i=211 */

static UA_StatusCode function_namespace_instance_generated_303_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SemanticId");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "SemanticId");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 211),
UA_NODEID_NUMERIC(ns[2], 209),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "SemanticId"),
UA_NODEID_NUMERIC(ns[1], 1005),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_303_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 211)
);
}

/* Keys - ns=2;i=212 */

static UA_StatusCode function_namespace_instance_generated_304_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_212_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_212_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_212_variant_DataContents);
*variablenode_ns_2_i_212_variant_DataContents = UA_STRING_ALLOC("(ConceptDescription)(local)[IRI]www.example.com/ids/cd/9070_4140_1012_6743");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_212_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Keys");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Keys");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 212),
UA_NODEID_NUMERIC(ns[2], 211),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Keys"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_212_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_304_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 212)
);
}

/* ValueId - ns=2;i=214 */

static UA_StatusCode function_namespace_instance_generated_305_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ValueId");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "ValueId");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 214),
UA_NODEID_NUMERIC(ns[2], 209),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "ValueId"),
UA_NODEID_NUMERIC(ns[1], 1005),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_305_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 214)
);
}

/* Keys - ns=2;i=215 */

static UA_StatusCode function_namespace_instance_generated_306_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "Keys");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Keys");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 215),
UA_NODEID_NUMERIC(ns[2], 214),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Keys"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_306_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 215)
);
}

/* Category - ns=2;i=210 */

static UA_StatusCode function_namespace_instance_generated_307_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_210_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_210_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_210_variant_DataContents);
*variablenode_ns_2_i_210_variant_DataContents = UA_STRING_ALLOC("PROPERTY");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_210_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Category");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Category");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 210),
UA_NODEID_NUMERIC(ns[2], 209),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Category"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_210_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 210), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_307_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 210)
);
}

/* Value - ns=2;i=217 */

static UA_StatusCode function_namespace_instance_generated_308_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 10);
UA_Float *variablenode_ns_2_i_217_variant_DataContents =  UA_Float_new();
if (!variablenode_ns_2_i_217_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Float_init(variablenode_ns_2_i_217_variant_DataContents);
*variablenode_ns_2_i_217_variant_DataContents = (UA_Float) 23.51;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_217_variant_DataContents, &UA_TYPES[UA_TYPES_FLOAT]);
attr.displayName = UA_LOCALIZEDTEXT("", "Value");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Value");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 217),
UA_NODEID_NUMERIC(ns[2], 209),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Value"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Float_delete(variablenode_ns_2_i_217_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_308_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 217)
);
}

/* ValueType - ns=2;i=216 */

static UA_StatusCode function_namespace_instance_generated_309_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_216_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_216_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_216_variant_DataContents);
*variablenode_ns_2_i_216_variant_DataContents = UA_STRING_ALLOC("float");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_216_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "ValueType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "ValueType");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 216),
UA_NODEID_NUMERIC(ns[2], 209),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "ValueType"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_216_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_309_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 216)
);
}

/* Kind - ns=2;i=213 */

static UA_StatusCode function_namespace_instance_generated_310_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_213_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_213_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_213_variant_DataContents);
*variablenode_ns_2_i_213_variant_DataContents = UA_STRING_ALLOC("Instance");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_213_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Kind");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Kind");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 213),
UA_NODEID_NUMERIC(ns[2], 209),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Kind"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_213_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_310_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 213)
);
}

/* Unit - ns=2;i=109 */

static UA_StatusCode function_namespace_instance_generated_311_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_109_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_109_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_109_variant_DataContents);
*variablenode_ns_2_i_109_variant_DataContents = UA_STRING_ALLOC("degC");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_109_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Unit");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Unit");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 109),
UA_NODEID_NUMERIC(ns[2], 209),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "Unit"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_109_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 109), UA_NODEID_NUMERIC(ns[0], 46), UA_EXPANDEDNODEID_NUMERIC(ns[2], 106), false);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_311_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 109)
);
}

/* range - ns=2;i=644 */

static UA_StatusCode function_namespace_instance_generated_312_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 884);

UA_STACKARRAY(UA_Range, variablenode_ns_2_i_644_Range_0, 1);
UA_init(variablenode_ns_2_i_644_Range_0, &UA_TYPES[UA_TYPES_RANGE]);
variablenode_ns_2_i_644_Range_0->low = (UA_Double) -40;
variablenode_ns_2_i_644_Range_0->high = (UA_Double) 120;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_644_Range_0, &UA_TYPES[UA_TYPES_RANGE]);
attr.displayName = UA_LOCALIZEDTEXT("", "Range");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 644),
UA_NODEID_NUMERIC(ns[2], 209),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "Range"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

return retVal;
}

static UA_StatusCode function_namespace_instance_generated_312_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 644)
);
}

/* Category - ns=2;i=204 */

static UA_StatusCode function_namespace_instance_generated_313_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_204_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_204_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_204_variant_DataContents);
*variablenode_ns_2_i_204_variant_DataContents = UA_STRING_ALLOC("CONSTANT");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_204_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Category");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Category");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 204),
UA_NODEID_NUMERIC(ns[2], 203),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Category"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_204_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 204), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_313_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 204)
);
}

/* AllowDuplicates - ns=2;i=208 */

static UA_StatusCode function_namespace_instance_generated_314_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1);
UA_Boolean *variablenode_ns_2_i_208_variant_DataContents =  UA_Boolean_new();
if (!variablenode_ns_2_i_208_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Boolean_init(variablenode_ns_2_i_208_variant_DataContents);
*variablenode_ns_2_i_208_variant_DataContents = (UA_Boolean) false;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_208_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
attr.displayName = UA_LOCALIZEDTEXT("", "AllowDuplicates");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "AllowDuplicates");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 208),
UA_NODEID_NUMERIC(ns[2], 203),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "AllowDuplicates"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Boolean_delete(variablenode_ns_2_i_208_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_314_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 208)
);
}

/* Category - ns=2;i=189 */

static UA_StatusCode function_namespace_instance_generated_315_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_189_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_189_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_189_variant_DataContents);
*variablenode_ns_2_i_189_variant_DataContents = UA_STRING_ALLOC("CONSTANT");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_189_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Category");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Category");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 189),
UA_NODEID_NUMERIC(ns[2], 188),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Category"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_189_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 189), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_315_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 189)
);
}

/* Kind - ns=2;i=195 */

static UA_StatusCode function_namespace_instance_generated_316_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_195_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_195_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_195_variant_DataContents);
*variablenode_ns_2_i_195_variant_DataContents = UA_STRING_ALLOC("Instance");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_195_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Kind");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Kind");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 195),
UA_NODEID_NUMERIC(ns[2], 188),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Kind"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_195_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_316_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 195)
);
}

/* pressure - ns=2;i=218 */

static UA_StatusCode function_namespace_instance_generated_317_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "pressure");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 218),
UA_NODEID_NUMERIC(ns[2], 188),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "pressure"),
UA_NODEID_NUMERIC(ns[1], 1010),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 218), UA_NODEID_NUMERIC(ns[0], 17597), UA_EXPANDEDNODEID_NUMERIC(ns[2], 123), true);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_317_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 218)
);
}

/* SemanticId - ns=2;i=220 */

static UA_StatusCode function_namespace_instance_generated_318_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SemanticId");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "SemanticId");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 220),
UA_NODEID_NUMERIC(ns[2], 218),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "SemanticId"),
UA_NODEID_NUMERIC(ns[1], 1005),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_318_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 220)
);
}

/* Keys - ns=2;i=221 */

static UA_StatusCode function_namespace_instance_generated_319_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_221_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_221_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_221_variant_DataContents);
*variablenode_ns_2_i_221_variant_DataContents = UA_STRING_ALLOC("(ConceptDescription)(local)[IRI]https://www.phi-ware.com/ids/cd/1381_3162_1102_0495");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_221_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Keys");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Keys");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 221),
UA_NODEID_NUMERIC(ns[2], 220),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Keys"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_221_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_319_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 221)
);
}

/* Category - ns=2;i=219 */

static UA_StatusCode function_namespace_instance_generated_320_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_219_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_219_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_219_variant_DataContents);
*variablenode_ns_2_i_219_variant_DataContents = UA_STRING_ALLOC("CONSTANT");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_219_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Category");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Category");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 219),
UA_NODEID_NUMERIC(ns[2], 218),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Category"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_219_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 219), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_320_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 219)
);
}

/* AllowDuplicates - ns=2;i=223 */

static UA_StatusCode function_namespace_instance_generated_321_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1);
UA_Boolean *variablenode_ns_2_i_223_variant_DataContents =  UA_Boolean_new();
if (!variablenode_ns_2_i_223_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Boolean_init(variablenode_ns_2_i_223_variant_DataContents);
*variablenode_ns_2_i_223_variant_DataContents = (UA_Boolean) false;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_223_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
attr.displayName = UA_LOCALIZEDTEXT("", "AllowDuplicates");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "AllowDuplicates");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 223),
UA_NODEID_NUMERIC(ns[2], 218),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "AllowDuplicates"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Boolean_delete(variablenode_ns_2_i_223_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_321_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 223)
);
}

/* Kind - ns=2;i=222 */

static UA_StatusCode function_namespace_instance_generated_322_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_222_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_222_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_222_variant_DataContents);
*variablenode_ns_2_i_222_variant_DataContents = UA_STRING_ALLOC("Instance");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_222_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Kind");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Kind");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 222),
UA_NODEID_NUMERIC(ns[2], 218),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Kind"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_222_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_322_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 222)
);
}

/* value - ns=2;i=224 */

static UA_StatusCode function_namespace_instance_generated_323_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "value");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 224),
UA_NODEID_NUMERIC(ns[2], 218),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "value"),
UA_NODEID_NUMERIC(ns[1], 1009),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 224), UA_NODEID_NUMERIC(ns[0], 17597), UA_EXPANDEDNODEID_NUMERIC(ns[2], 123), true);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_323_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 224)
);
}

/* SemanticId - ns=2;i=226 */

static UA_StatusCode function_namespace_instance_generated_324_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SemanticId");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "SemanticId");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 226),
UA_NODEID_NUMERIC(ns[2], 224),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "SemanticId"),
UA_NODEID_NUMERIC(ns[1], 1005),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_324_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 226)
);
}

/* Keys - ns=2;i=227 */

static UA_StatusCode function_namespace_instance_generated_325_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_227_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_227_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_227_variant_DataContents);
*variablenode_ns_2_i_227_variant_DataContents = UA_STRING_ALLOC("(ConceptDescription)(local)[IRI]https://www.phi-ware.com/ids/cd/1381_3162_1102_0495");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_227_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Keys");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Keys");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 227),
UA_NODEID_NUMERIC(ns[2], 226),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Keys"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_227_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_325_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 227)
);
}

/* Unit - ns=2;i=133 */

static UA_StatusCode function_namespace_instance_generated_326_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_133_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_133_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_133_variant_DataContents);
*variablenode_ns_2_i_133_variant_DataContents = UA_STRING_ALLOC("hPa");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_133_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Unit");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Unit");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 133),
UA_NODEID_NUMERIC(ns[2], 130),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Unit"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_133_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 133), UA_NODEID_NUMERIC(ns[0], 47), UA_EXPANDEDNODEID_NUMERIC(ns[2], 224), false);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_326_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 133)
);
}

/* Category - ns=2;i=225 */

static UA_StatusCode function_namespace_instance_generated_327_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_225_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_225_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_225_variant_DataContents);
*variablenode_ns_2_i_225_variant_DataContents = UA_STRING_ALLOC("PROPERTY");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_225_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Category");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Category");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 225),
UA_NODEID_NUMERIC(ns[2], 224),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Category"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_225_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 225), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_327_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 225)
);
}

/* Value - ns=2;i=230 */

static UA_StatusCode function_namespace_instance_generated_328_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 10);
UA_Float *variablenode_ns_2_i_230_variant_DataContents =  UA_Float_new();
if (!variablenode_ns_2_i_230_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Float_init(variablenode_ns_2_i_230_variant_DataContents);
*variablenode_ns_2_i_230_variant_DataContents = (UA_Float) 1001.2;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_230_variant_DataContents, &UA_TYPES[UA_TYPES_FLOAT]);
attr.displayName = UA_LOCALIZEDTEXT("", "Value");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Value");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 230),
UA_NODEID_NUMERIC(ns[2], 224),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Value"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Float_delete(variablenode_ns_2_i_230_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_328_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 230)
);
}

/* ValueType - ns=2;i=229 */

static UA_StatusCode function_namespace_instance_generated_329_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_229_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_229_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_229_variant_DataContents);
*variablenode_ns_2_i_229_variant_DataContents = UA_STRING_ALLOC("float");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_229_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "ValueType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "ValueType");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 229),
UA_NODEID_NUMERIC(ns[2], 224),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "ValueType"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_229_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_329_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 229)
);
}

/* range - ns=2;i=645 */

static UA_StatusCode function_namespace_instance_generated_330_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 884);

UA_STACKARRAY(UA_Range, variablenode_ns_2_i_645_Range_0, 1);
UA_init(variablenode_ns_2_i_645_Range_0, &UA_TYPES[UA_TYPES_RANGE]);
variablenode_ns_2_i_645_Range_0->low = (UA_Double) 260;
variablenode_ns_2_i_645_Range_0->high = (UA_Double) 1260;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_645_Range_0, &UA_TYPES[UA_TYPES_RANGE]);
attr.displayName = UA_LOCALIZEDTEXT("", "Range");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 645),
UA_NODEID_NUMERIC(ns[2], 224),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "Range"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

return retVal;
}

static UA_StatusCode function_namespace_instance_generated_330_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 645)
);
}

/* Kind - ns=2;i=228 */

static UA_StatusCode function_namespace_instance_generated_331_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_228_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_228_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_228_variant_DataContents);
*variablenode_ns_2_i_228_variant_DataContents = UA_STRING_ALLOC("Instance");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_228_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Kind");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Kind");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 228),
UA_NODEID_NUMERIC(ns[2], 224),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Kind"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_228_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_331_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 228)
);
}

/* endPointURL - ns=2;i=196 */

static UA_StatusCode function_namespace_instance_generated_332_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "endPointURL");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "OPC UA endpoint url");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 196),
UA_NODEID_NUMERIC(ns[2], 188),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "endPointURL"),
UA_NODEID_NUMERIC(ns[1], 1009),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 196), UA_NODEID_NUMERIC(ns[0], 17597), UA_EXPANDEDNODEID_NUMERIC(ns[2], 643), true);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_332_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 196)
);
}

/* Category - ns=2;i=197 */

static UA_StatusCode function_namespace_instance_generated_333_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_197_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_197_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_197_variant_DataContents);
*variablenode_ns_2_i_197_variant_DataContents = UA_STRING_ALLOC("CONSTANT");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_197_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Category");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Category");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 197),
UA_NODEID_NUMERIC(ns[2], 196),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Category"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_197_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 197), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_333_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 197)
);
}

/* SemanticId - ns=2;i=198 */

static UA_StatusCode function_namespace_instance_generated_334_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SemanticId");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "SemanticId");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 198),
UA_NODEID_NUMERIC(ns[2], 196),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "SemanticId"),
UA_NODEID_NUMERIC(ns[1], 1005),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_334_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 198)
);
}

/* Keys - ns=2;i=199 */

static UA_StatusCode function_namespace_instance_generated_335_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_199_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_199_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_199_variant_DataContents);
*variablenode_ns_2_i_199_variant_DataContents = UA_STRING_ALLOC("(ConceptDescription)(no-local)[IRDI]0173-1#02-AAO694#001");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_199_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Keys");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Keys");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 199),
UA_NODEID_NUMERIC(ns[2], 198),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Keys"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_199_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_335_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 199)
);
}

/* Kind - ns=2;i=200 */

static UA_StatusCode function_namespace_instance_generated_336_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_200_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_200_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_200_variant_DataContents);
*variablenode_ns_2_i_200_variant_DataContents = UA_STRING_ALLOC("Instance");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_200_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Kind");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Kind");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 200),
UA_NODEID_NUMERIC(ns[2], 196),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Kind"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_200_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_336_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 200)
);
}

/* ValueType - ns=2;i=201 */

static UA_StatusCode function_namespace_instance_generated_337_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_201_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_201_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_201_variant_DataContents);
*variablenode_ns_2_i_201_variant_DataContents = UA_STRING_ALLOC("string");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_201_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "ValueType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "ValueType");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 201),
UA_NODEID_NUMERIC(ns[2], 196),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "ValueType"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_201_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_337_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 201)
);
}

/* Value - ns=2;i=202 */

static UA_StatusCode function_namespace_instance_generated_338_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_202_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_202_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_202_variant_DataContents);
*variablenode_ns_2_i_202_variant_DataContents = UA_STRING_ALLOC("opc.tcp://192.168.0.201:9696");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_202_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Value");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Value");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 202),
UA_NODEID_NUMERIC(ns[2], 196),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Value"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_202_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_338_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 202)
);
}

/* SemanticId - ns=2;i=193 */

static UA_StatusCode function_namespace_instance_generated_339_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SemanticId");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "SemanticId");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 193),
UA_NODEID_NUMERIC(ns[2], 188),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "SemanticId"),
UA_NODEID_NUMERIC(ns[1], 1005),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_339_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 193)
);
}

/* Keys - ns=2;i=194 */

static UA_StatusCode function_namespace_instance_generated_340_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "Keys");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Keys");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 194),
UA_NODEID_NUMERIC(ns[2], 193),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Keys"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_340_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 194)
);
}

/* Identification - ns=2;i=190 */

static UA_StatusCode function_namespace_instance_generated_341_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Identification");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Identification");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 190),
UA_NODEID_NUMERIC(ns[2], 188),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "Identification"),
UA_NODEID_NUMERIC(ns[1], 1000),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_341_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 190)
);
}

/* Id - ns=2;i=192 */

static UA_StatusCode function_namespace_instance_generated_342_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_192_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_192_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_192_variant_DataContents);
*variablenode_ns_2_i_192_variant_DataContents = UA_STRING_ALLOC("https://www.phi-ware.com/ids/sm/2544_3152_1102_3163");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_192_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Id");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Id");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 192),
UA_NODEID_NUMERIC(ns[2], 190),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Id"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_192_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_342_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 192)
);
}

/* IdType - ns=2;i=191 */

static UA_StatusCode function_namespace_instance_generated_343_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_191_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_191_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_191_variant_DataContents);
*variablenode_ns_2_i_191_variant_DataContents = UA_STRING_ALLOC("IRI");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_191_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "IdType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "IdType");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 191),
UA_NODEID_NUMERIC(ns[2], 190),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "IdType"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_191_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_343_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 191)
);
}

/* Category - ns=2;i=136 */

static UA_StatusCode function_namespace_instance_generated_344_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_136_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_136_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_136_variant_DataContents);
*variablenode_ns_2_i_136_variant_DataContents = UA_STRING_ALLOC("CONSTANT");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_136_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Category");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Category");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 136),
UA_NODEID_NUMERIC(ns[2], 135),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Category"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_136_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 136), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_344_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 136)
);
}

/* Submodel:TechnicalData - ns=2;i=180 */

static UA_StatusCode function_namespace_instance_generated_345_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Submodel:TechnicalData");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 180),
UA_NODEID_NUMERIC(ns[2], 135),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "TechnicalData"),
UA_NODEID_NUMERIC(ns[1], 1007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_345_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 180)
);
}

/* Category - ns=2;i=181 */

static UA_StatusCode function_namespace_instance_generated_346_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_181_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_181_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_181_variant_DataContents);
*variablenode_ns_2_i_181_variant_DataContents = UA_STRING_ALLOC("CONSTANT");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_181_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Category");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Category");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 181),
UA_NODEID_NUMERIC(ns[2], 180),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Category"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_181_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 181), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_346_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 181)
);
}

/* Identification - ns=2;i=182 */

static UA_StatusCode function_namespace_instance_generated_347_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Identification");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Identification");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 182),
UA_NODEID_NUMERIC(ns[2], 180),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "Identification"),
UA_NODEID_NUMERIC(ns[1], 1000),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_347_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 182)
);
}

/* Id - ns=2;i=184 */

static UA_StatusCode function_namespace_instance_generated_348_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_184_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_184_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_184_variant_DataContents);
*variablenode_ns_2_i_184_variant_DataContents = UA_STRING_ALLOC("https://www.phi-ware.com/ids/sm/7444_3152_1102_0476");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_184_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Id");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Id");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 184),
UA_NODEID_NUMERIC(ns[2], 182),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Id"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_184_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_348_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 184)
);
}

/* IdType - ns=2;i=183 */

static UA_StatusCode function_namespace_instance_generated_349_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_183_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_183_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_183_variant_DataContents);
*variablenode_ns_2_i_183_variant_DataContents = UA_STRING_ALLOC("IRI");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_183_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "IdType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "IdType");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 183),
UA_NODEID_NUMERIC(ns[2], 182),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "IdType"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_183_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_349_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 183)
);
}

/* Kind - ns=2;i=187 */

static UA_StatusCode function_namespace_instance_generated_350_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_187_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_187_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_187_variant_DataContents);
*variablenode_ns_2_i_187_variant_DataContents = UA_STRING_ALLOC("Instance");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_187_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Kind");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Kind");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 187),
UA_NODEID_NUMERIC(ns[2], 180),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Kind"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_187_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_350_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 187)
);
}

/* SemanticId - ns=2;i=185 */

static UA_StatusCode function_namespace_instance_generated_351_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SemanticId");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "SemanticId");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 185),
UA_NODEID_NUMERIC(ns[2], 180),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "SemanticId"),
UA_NODEID_NUMERIC(ns[1], 1005),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_351_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 185)
);
}

/* Keys - ns=2;i=186 */

static UA_StatusCode function_namespace_instance_generated_352_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "Keys");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Keys");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 186),
UA_NODEID_NUMERIC(ns[2], 185),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Keys"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_352_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 186)
);
}

/* Submodel:STM32F769I-DISC1 - ns=2;i=252 */

static UA_StatusCode function_namespace_instance_generated_353_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Submodel:STM32F769I-DISC1");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Development kit based on STM32F769NI microcontroller.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 252),
UA_NODEID_NUMERIC(ns[2], 135),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "STM32F769I-DISC1"),
UA_NODEID_NUMERIC(ns[1], 1007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_353_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 252)
);
}

/* OperationalData - ns=2;i=337 */

static UA_StatusCode function_namespace_instance_generated_354_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "OperationalData");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 337),
UA_NODEID_NUMERIC(ns[2], 252),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "OperationalData"),
UA_NODEID_NUMERIC(ns[1], 1010),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_354_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 337)
);
}

/* Kind - ns=2;i=341 */

static UA_StatusCode function_namespace_instance_generated_355_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_341_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_341_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_341_variant_DataContents);
*variablenode_ns_2_i_341_variant_DataContents = UA_STRING_ALLOC("Instance");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_341_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Kind");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Kind");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 341),
UA_NODEID_NUMERIC(ns[2], 337),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Kind"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_341_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_355_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 341)
);
}

/* OPCUA - ns=2;i=350 */

static UA_StatusCode function_namespace_instance_generated_356_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "OPCUA");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 350),
UA_NODEID_NUMERIC(ns[2], 337),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "OPCUA"),
UA_NODEID_NUMERIC(ns[1], 1009),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_356_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 350)
);
}

/* Value - ns=2;i=356 */

static UA_StatusCode function_namespace_instance_generated_357_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_356_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_356_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_356_variant_DataContents);
*variablenode_ns_2_i_356_variant_DataContents = UA_STRING_ALLOC("open62541 server");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_356_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Value");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Value");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 356),
UA_NODEID_NUMERIC(ns[2], 350),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Value"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_356_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_357_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 356)
);
}

/* ValueType - ns=2;i=355 */

static UA_StatusCode function_namespace_instance_generated_358_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_355_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_355_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_355_variant_DataContents);
*variablenode_ns_2_i_355_variant_DataContents = UA_STRING_ALLOC("string");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_355_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "ValueType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "ValueType");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 355),
UA_NODEID_NUMERIC(ns[2], 350),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "ValueType"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_355_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_358_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 355)
);
}

/* SemanticId - ns=2;i=352 */

static UA_StatusCode function_namespace_instance_generated_359_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SemanticId");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "SemanticId");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 352),
UA_NODEID_NUMERIC(ns[2], 350),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "SemanticId"),
UA_NODEID_NUMERIC(ns[1], 1005),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_359_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 352)
);
}

/* Keys - ns=2;i=353 */

static UA_StatusCode function_namespace_instance_generated_360_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "Keys");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Keys");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 353),
UA_NODEID_NUMERIC(ns[2], 352),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Keys"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_360_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 353)
);
}

/* Category - ns=2;i=351 */

static UA_StatusCode function_namespace_instance_generated_361_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_351_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_351_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_351_variant_DataContents);
*variablenode_ns_2_i_351_variant_DataContents = UA_STRING_ALLOC("CONSTANT");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_351_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Category");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Category");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 351),
UA_NODEID_NUMERIC(ns[2], 350),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Category"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_351_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 351), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_361_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 351)
);
}

/* Kind - ns=2;i=354 */

static UA_StatusCode function_namespace_instance_generated_362_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_354_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_354_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_354_variant_DataContents);
*variablenode_ns_2_i_354_variant_DataContents = UA_STRING_ALLOC("Instance");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_354_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Kind");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Kind");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 354),
UA_NODEID_NUMERIC(ns[2], 350),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Kind"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_354_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_362_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 354)
);
}

/* AllowDuplicates - ns=2;i=342 */

static UA_StatusCode function_namespace_instance_generated_363_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1);
UA_Boolean *variablenode_ns_2_i_342_variant_DataContents =  UA_Boolean_new();
if (!variablenode_ns_2_i_342_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Boolean_init(variablenode_ns_2_i_342_variant_DataContents);
*variablenode_ns_2_i_342_variant_DataContents = (UA_Boolean) false;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_342_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
attr.displayName = UA_LOCALIZEDTEXT("", "AllowDuplicates");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "AllowDuplicates");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 342),
UA_NODEID_NUMERIC(ns[2], 337),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "AllowDuplicates"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Boolean_delete(variablenode_ns_2_i_342_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_363_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 342)
);
}

/* Category - ns=2;i=338 */

static UA_StatusCode function_namespace_instance_generated_364_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_338_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_338_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_338_variant_DataContents);
*variablenode_ns_2_i_338_variant_DataContents = UA_STRING_ALLOC("CONSTANT");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_338_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Category");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Category");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 338),
UA_NODEID_NUMERIC(ns[2], 337),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Category"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_338_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 338), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_364_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 338)
);
}

/* SemanticId - ns=2;i=339 */

static UA_StatusCode function_namespace_instance_generated_365_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SemanticId");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "SemanticId");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 339),
UA_NODEID_NUMERIC(ns[2], 337),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "SemanticId"),
UA_NODEID_NUMERIC(ns[1], 1005),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_365_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 339)
);
}

/* Keys - ns=2;i=340 */

static UA_StatusCode function_namespace_instance_generated_366_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "Keys");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Keys");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 340),
UA_NODEID_NUMERIC(ns[2], 339),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Keys"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_366_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 340)
);
}

/* OS - ns=2;i=343 */

static UA_StatusCode function_namespace_instance_generated_367_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "OS");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "FreeRTOS with LWIP middleware");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 343),
UA_NODEID_NUMERIC(ns[2], 337),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "OS"),
UA_NODEID_NUMERIC(ns[1], 1009),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_367_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 343)
);
}

/* SemanticId - ns=2;i=345 */

static UA_StatusCode function_namespace_instance_generated_368_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SemanticId");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "SemanticId");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 345),
UA_NODEID_NUMERIC(ns[2], 343),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "SemanticId"),
UA_NODEID_NUMERIC(ns[1], 1005),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_368_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 345)
);
}

/* Keys - ns=2;i=346 */

static UA_StatusCode function_namespace_instance_generated_369_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "Keys");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Keys");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 346),
UA_NODEID_NUMERIC(ns[2], 345),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Keys"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_369_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 346)
);
}

/* Value - ns=2;i=349 */

static UA_StatusCode function_namespace_instance_generated_370_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_349_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_349_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_349_variant_DataContents);
*variablenode_ns_2_i_349_variant_DataContents = UA_STRING_ALLOC("FreeRTOS");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_349_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Value");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Value");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 349),
UA_NODEID_NUMERIC(ns[2], 343),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Value"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_349_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_370_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 349)
);
}

/* Kind - ns=2;i=347 */

static UA_StatusCode function_namespace_instance_generated_371_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_347_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_347_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_347_variant_DataContents);
*variablenode_ns_2_i_347_variant_DataContents = UA_STRING_ALLOC("Instance");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_347_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Kind");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Kind");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 347),
UA_NODEID_NUMERIC(ns[2], 343),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Kind"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_347_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_371_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 347)
);
}

/* ValueType - ns=2;i=348 */

static UA_StatusCode function_namespace_instance_generated_372_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_348_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_348_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_348_variant_DataContents);
*variablenode_ns_2_i_348_variant_DataContents = UA_STRING_ALLOC("string");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_348_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "ValueType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "ValueType");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 348),
UA_NODEID_NUMERIC(ns[2], 343),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "ValueType"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_348_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_372_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 348)
);
}

/* Category - ns=2;i=344 */

static UA_StatusCode function_namespace_instance_generated_373_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_344_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_344_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_344_variant_DataContents);
*variablenode_ns_2_i_344_variant_DataContents = UA_STRING_ALLOC("CONSTANT");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_344_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Category");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Category");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 344),
UA_NODEID_NUMERIC(ns[2], 343),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Category"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_344_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 344), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_373_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 344)
);
}

/* Administration - ns=2;i=257 */

static UA_StatusCode function_namespace_instance_generated_374_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Administration");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Administration");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 257),
UA_NODEID_NUMERIC(ns[2], 252),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "Administration"),
UA_NODEID_NUMERIC(ns[1], 1001),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_374_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 257)
);
}

/* Version - ns=2;i=258 */

static UA_StatusCode function_namespace_instance_generated_375_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_258_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_258_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_258_variant_DataContents);
*variablenode_ns_2_i_258_variant_DataContents = UA_STRING_ALLOC("");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_258_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Version");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Version");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 258),
UA_NODEID_NUMERIC(ns[2], 257),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Version"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_258_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_375_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 258)
);
}

/* Revision - ns=2;i=259 */

static UA_StatusCode function_namespace_instance_generated_376_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_259_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_259_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_259_variant_DataContents);
*variablenode_ns_2_i_259_variant_DataContents = UA_STRING_ALLOC("");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_259_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Revision");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Revision");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 259),
UA_NODEID_NUMERIC(ns[2], 257),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Revision"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_259_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_376_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 259)
);
}

/* SemanticId - ns=2;i=260 */

static UA_StatusCode function_namespace_instance_generated_377_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SemanticId");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "SemanticId");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 260),
UA_NODEID_NUMERIC(ns[2], 252),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "SemanticId"),
UA_NODEID_NUMERIC(ns[1], 1005),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_377_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 260)
);
}

/* Keys - ns=2;i=261 */

static UA_StatusCode function_namespace_instance_generated_378_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "Keys");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Keys");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 261),
UA_NODEID_NUMERIC(ns[2], 260),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Keys"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_378_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 261)
);
}

/* Identification - ns=2;i=254 */

static UA_StatusCode function_namespace_instance_generated_379_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Identification");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Identification");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 254),
UA_NODEID_NUMERIC(ns[2], 252),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "Identification"),
UA_NODEID_NUMERIC(ns[1], 1000),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_379_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 254)
);
}

/* IdType - ns=2;i=255 */

static UA_StatusCode function_namespace_instance_generated_380_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_255_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_255_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_255_variant_DataContents);
*variablenode_ns_2_i_255_variant_DataContents = UA_STRING_ALLOC("IRI");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_255_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "IdType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "IdType");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 255),
UA_NODEID_NUMERIC(ns[2], 254),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "IdType"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_255_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_380_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 255)
);
}

/* Id - ns=2;i=256 */

static UA_StatusCode function_namespace_instance_generated_381_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_256_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_256_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_256_variant_DataContents);
*variablenode_ns_2_i_256_variant_DataContents = UA_STRING_ALLOC("https://www.phi-ware.com/ids/sm/6305_9062_1102_2323");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_256_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Id");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Id");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 256),
UA_NODEID_NUMERIC(ns[2], 254),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Id"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_256_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_381_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 256)
);
}

/* Kind - ns=2;i=262 */

static UA_StatusCode function_namespace_instance_generated_382_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_262_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_262_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_262_variant_DataContents);
*variablenode_ns_2_i_262_variant_DataContents = UA_STRING_ALLOC("Instance");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_262_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Kind");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Kind");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 262),
UA_NODEID_NUMERIC(ns[2], 252),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Kind"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_262_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_382_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 262)
);
}

/* TechnicalData - ns=2;i=296 */

static UA_StatusCode function_namespace_instance_generated_383_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "TechnicalData");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 296),
UA_NODEID_NUMERIC(ns[2], 252),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "TechnicalData"),
UA_NODEID_NUMERIC(ns[1], 1010),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_383_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 296)
);
}

/* SDRAM - ns=2;i=323 */

static UA_StatusCode function_namespace_instance_generated_384_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SDRAM");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Extrenal SDRAM");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 323),
UA_NODEID_NUMERIC(ns[2], 296),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "SDRAM"),
UA_NODEID_NUMERIC(ns[1], 1009),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_384_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 323)
);
}

/* SemanticId - ns=2;i=325 */

static UA_StatusCode function_namespace_instance_generated_385_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SemanticId");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "SemanticId");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 325),
UA_NODEID_NUMERIC(ns[2], 323),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "SemanticId"),
UA_NODEID_NUMERIC(ns[1], 1005),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_385_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 325)
);
}

/* Keys - ns=2;i=326 */

static UA_StatusCode function_namespace_instance_generated_386_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "Keys");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Keys");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 326),
UA_NODEID_NUMERIC(ns[2], 325),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Keys"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_386_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 326)
);
}

/* ValueType - ns=2;i=328 */

static UA_StatusCode function_namespace_instance_generated_387_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_328_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_328_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_328_variant_DataContents);
*variablenode_ns_2_i_328_variant_DataContents = UA_STRING_ALLOC("string");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_328_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "ValueType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "ValueType");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 328),
UA_NODEID_NUMERIC(ns[2], 323),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "ValueType"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_328_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_387_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 328)
);
}

/* Value - ns=2;i=329 */

static UA_StatusCode function_namespace_instance_generated_388_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_329_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_329_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_329_variant_DataContents);
*variablenode_ns_2_i_329_variant_DataContents = UA_STRING_ALLOC("128 Mbit");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_329_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Value");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Value");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 329),
UA_NODEID_NUMERIC(ns[2], 323),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Value"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_329_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_388_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 329)
);
}

/* Category - ns=2;i=324 */

static UA_StatusCode function_namespace_instance_generated_389_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_324_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_324_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_324_variant_DataContents);
*variablenode_ns_2_i_324_variant_DataContents = UA_STRING_ALLOC("CONSTANT");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_324_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Category");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Category");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 324),
UA_NODEID_NUMERIC(ns[2], 323),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Category"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_324_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 324), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_389_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 324)
);
}

/* Kind - ns=2;i=327 */

static UA_StatusCode function_namespace_instance_generated_390_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_327_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_327_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_327_variant_DataContents);
*variablenode_ns_2_i_327_variant_DataContents = UA_STRING_ALLOC("Instance");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_327_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Kind");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Kind");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 327),
UA_NODEID_NUMERIC(ns[2], 323),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Kind"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_327_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_390_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 327)
);
}

/* AllowDuplicates - ns=2;i=301 */

static UA_StatusCode function_namespace_instance_generated_391_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1);
UA_Boolean *variablenode_ns_2_i_301_variant_DataContents =  UA_Boolean_new();
if (!variablenode_ns_2_i_301_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Boolean_init(variablenode_ns_2_i_301_variant_DataContents);
*variablenode_ns_2_i_301_variant_DataContents = (UA_Boolean) false;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_301_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
attr.displayName = UA_LOCALIZEDTEXT("", "AllowDuplicates");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "AllowDuplicates");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 301),
UA_NODEID_NUMERIC(ns[2], 296),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "AllowDuplicates"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Boolean_delete(variablenode_ns_2_i_301_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_391_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 301)
);
}

/* RAM - ns=2;i=316 */

static UA_StatusCode function_namespace_instance_generated_392_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "RAM");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Internal RAM memory");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 316),
UA_NODEID_NUMERIC(ns[2], 296),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "RAM"),
UA_NODEID_NUMERIC(ns[1], 1009),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_392_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 316)
);
}

/* Value - ns=2;i=322 */

static UA_StatusCode function_namespace_instance_generated_393_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_322_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_322_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_322_variant_DataContents);
*variablenode_ns_2_i_322_variant_DataContents = UA_STRING_ALLOC("512 KByte");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_322_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Value");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Value");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 322),
UA_NODEID_NUMERIC(ns[2], 316),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Value"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_322_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_393_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 322)
);
}

/* ValueType - ns=2;i=321 */

static UA_StatusCode function_namespace_instance_generated_394_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_321_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_321_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_321_variant_DataContents);
*variablenode_ns_2_i_321_variant_DataContents = UA_STRING_ALLOC("string");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_321_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "ValueType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "ValueType");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 321),
UA_NODEID_NUMERIC(ns[2], 316),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "ValueType"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_321_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_394_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 321)
);
}

/* Kind - ns=2;i=320 */

static UA_StatusCode function_namespace_instance_generated_395_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_320_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_320_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_320_variant_DataContents);
*variablenode_ns_2_i_320_variant_DataContents = UA_STRING_ALLOC("Instance");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_320_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Kind");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Kind");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 320),
UA_NODEID_NUMERIC(ns[2], 316),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Kind"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_320_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_395_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 320)
);
}

/* Category - ns=2;i=317 */

static UA_StatusCode function_namespace_instance_generated_396_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_317_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_317_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_317_variant_DataContents);
*variablenode_ns_2_i_317_variant_DataContents = UA_STRING_ALLOC("CONSTANT");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_317_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Category");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Category");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 317),
UA_NODEID_NUMERIC(ns[2], 316),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Category"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_317_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 317), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_396_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 317)
);
}

/* SemanticId - ns=2;i=318 */

static UA_StatusCode function_namespace_instance_generated_397_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SemanticId");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "SemanticId");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 318),
UA_NODEID_NUMERIC(ns[2], 316),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "SemanticId"),
UA_NODEID_NUMERIC(ns[1], 1005),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_397_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 318)
);
}

/* Keys - ns=2;i=319 */

static UA_StatusCode function_namespace_instance_generated_398_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "Keys");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Keys");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 319),
UA_NODEID_NUMERIC(ns[2], 318),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Keys"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_398_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 319)
);
}

/* Category - ns=2;i=297 */

static UA_StatusCode function_namespace_instance_generated_399_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_297_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_297_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_297_variant_DataContents);
*variablenode_ns_2_i_297_variant_DataContents = UA_STRING_ALLOC("CONSTANT");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_297_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Category");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Category");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 297),
UA_NODEID_NUMERIC(ns[2], 296),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Category"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_297_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 297), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_399_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 297)
);
}

/* Kind - ns=2;i=300 */

static UA_StatusCode function_namespace_instance_generated_400_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_300_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_300_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_300_variant_DataContents);
*variablenode_ns_2_i_300_variant_DataContents = UA_STRING_ALLOC("Instance");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_300_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Kind");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Kind");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 300),
UA_NODEID_NUMERIC(ns[2], 296),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Kind"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_300_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_400_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 300)
);
}

/* SemanticId - ns=2;i=298 */

static UA_StatusCode function_namespace_instance_generated_401_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SemanticId");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "SemanticId");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 298),
UA_NODEID_NUMERIC(ns[2], 296),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "SemanticId"),
UA_NODEID_NUMERIC(ns[1], 1005),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_401_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 298)
);
}

/* Keys - ns=2;i=299 */

static UA_StatusCode function_namespace_instance_generated_402_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "Keys");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Keys");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 299),
UA_NODEID_NUMERIC(ns[2], 298),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Keys"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_402_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 299)
);
}

/* QSPI FLASH - ns=2;i=330 */

static UA_StatusCode function_namespace_instance_generated_403_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "QSPI FLASH");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "External QSPI FLASH");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 330),
UA_NODEID_NUMERIC(ns[2], 296),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "QSPI FLASH"),
UA_NODEID_NUMERIC(ns[1], 1009),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_403_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 330)
);
}

/* SemanticId - ns=2;i=332 */

static UA_StatusCode function_namespace_instance_generated_404_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SemanticId");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "SemanticId");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 332),
UA_NODEID_NUMERIC(ns[2], 330),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "SemanticId"),
UA_NODEID_NUMERIC(ns[1], 1005),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_404_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 332)
);
}

/* Keys - ns=2;i=333 */

static UA_StatusCode function_namespace_instance_generated_405_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "Keys");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Keys");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 333),
UA_NODEID_NUMERIC(ns[2], 332),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Keys"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_405_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 333)
);
}

/* Kind - ns=2;i=334 */

static UA_StatusCode function_namespace_instance_generated_406_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_334_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_334_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_334_variant_DataContents);
*variablenode_ns_2_i_334_variant_DataContents = UA_STRING_ALLOC("Instance");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_334_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Kind");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Kind");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 334),
UA_NODEID_NUMERIC(ns[2], 330),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Kind"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_334_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_406_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 334)
);
}

/* Category - ns=2;i=331 */

static UA_StatusCode function_namespace_instance_generated_407_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_331_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_331_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_331_variant_DataContents);
*variablenode_ns_2_i_331_variant_DataContents = UA_STRING_ALLOC("CONSTANT");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_331_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Category");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Category");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 331),
UA_NODEID_NUMERIC(ns[2], 330),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Category"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_331_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 331), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_407_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 331)
);
}

/* Value - ns=2;i=336 */

static UA_StatusCode function_namespace_instance_generated_408_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_336_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_336_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_336_variant_DataContents);
*variablenode_ns_2_i_336_variant_DataContents = UA_STRING_ALLOC("512 Mbit");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_336_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Value");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Value");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 336),
UA_NODEID_NUMERIC(ns[2], 330),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Value"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_336_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_408_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 336)
);
}

/* ValueType - ns=2;i=335 */

static UA_StatusCode function_namespace_instance_generated_409_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_335_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_335_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_335_variant_DataContents);
*variablenode_ns_2_i_335_variant_DataContents = UA_STRING_ALLOC("string");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_335_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "ValueType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "ValueType");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 335),
UA_NODEID_NUMERIC(ns[2], 330),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "ValueType"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_335_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_409_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 335)
);
}

/* FLASH - ns=2;i=309 */

static UA_StatusCode function_namespace_instance_generated_410_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "FLASH");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Internal FLASH memory");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 309),
UA_NODEID_NUMERIC(ns[2], 296),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "FLASH"),
UA_NODEID_NUMERIC(ns[1], 1009),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_410_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 309)
);
}

/* SemanticId - ns=2;i=311 */

static UA_StatusCode function_namespace_instance_generated_411_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SemanticId");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "SemanticId");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 311),
UA_NODEID_NUMERIC(ns[2], 309),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "SemanticId"),
UA_NODEID_NUMERIC(ns[1], 1005),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_411_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 311)
);
}

/* Keys - ns=2;i=312 */

static UA_StatusCode function_namespace_instance_generated_412_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "Keys");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Keys");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 312),
UA_NODEID_NUMERIC(ns[2], 311),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Keys"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_412_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 312)
);
}

/* Value - ns=2;i=315 */

static UA_StatusCode function_namespace_instance_generated_413_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_315_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_315_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_315_variant_DataContents);
*variablenode_ns_2_i_315_variant_DataContents = UA_STRING_ALLOC("2 Mbyte");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_315_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Value");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Value");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 315),
UA_NODEID_NUMERIC(ns[2], 309),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Value"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_315_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_413_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 315)
);
}

/* Kind - ns=2;i=313 */

static UA_StatusCode function_namespace_instance_generated_414_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_313_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_313_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_313_variant_DataContents);
*variablenode_ns_2_i_313_variant_DataContents = UA_STRING_ALLOC("Instance");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_313_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Kind");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Kind");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 313),
UA_NODEID_NUMERIC(ns[2], 309),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Kind"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_313_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_414_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 313)
);
}

/* ValueType - ns=2;i=314 */

static UA_StatusCode function_namespace_instance_generated_415_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_314_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_314_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_314_variant_DataContents);
*variablenode_ns_2_i_314_variant_DataContents = UA_STRING_ALLOC("string");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_314_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "ValueType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "ValueType");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 314),
UA_NODEID_NUMERIC(ns[2], 309),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "ValueType"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_314_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_415_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 314)
);
}

/* Category - ns=2;i=310 */

static UA_StatusCode function_namespace_instance_generated_416_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_310_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_310_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_310_variant_DataContents);
*variablenode_ns_2_i_310_variant_DataContents = UA_STRING_ALLOC("CONSTANT");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_310_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Category");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Category");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 310),
UA_NODEID_NUMERIC(ns[2], 309),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Category"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_310_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 310), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_416_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 310)
);
}

/* Microcontroller  - ns=2;i=302 */

static UA_StatusCode function_namespace_instance_generated_417_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Microcontroller");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 302),
UA_NODEID_NUMERIC(ns[2], 296),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "Microcontroller"),
UA_NODEID_NUMERIC(ns[1], 1009),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_417_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 302)
);
}

/* ValueType - ns=2;i=307 */

static UA_StatusCode function_namespace_instance_generated_418_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_307_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_307_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_307_variant_DataContents);
*variablenode_ns_2_i_307_variant_DataContents = UA_STRING_ALLOC("string");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_307_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "ValueType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "ValueType");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 307),
UA_NODEID_NUMERIC(ns[2], 302),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "ValueType"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_307_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_418_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 307)
);
}

/* Value - ns=2;i=308 */

static UA_StatusCode function_namespace_instance_generated_419_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_308_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_308_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_308_variant_DataContents);
*variablenode_ns_2_i_308_variant_DataContents = UA_STRING_ALLOC("STM32F769NIH6");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_308_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Value");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Value");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 308),
UA_NODEID_NUMERIC(ns[2], 302),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Value"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_308_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_419_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 308)
);
}

/* Kind - ns=2;i=306 */

static UA_StatusCode function_namespace_instance_generated_420_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_306_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_306_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_306_variant_DataContents);
*variablenode_ns_2_i_306_variant_DataContents = UA_STRING_ALLOC("Instance");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_306_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Kind");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Kind");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 306),
UA_NODEID_NUMERIC(ns[2], 302),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Kind"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_306_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_420_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 306)
);
}

/* Category - ns=2;i=303 */

static UA_StatusCode function_namespace_instance_generated_421_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_303_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_303_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_303_variant_DataContents);
*variablenode_ns_2_i_303_variant_DataContents = UA_STRING_ALLOC("CONSTANT");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_303_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Category");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Category");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 303),
UA_NODEID_NUMERIC(ns[2], 302),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Category"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_303_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 303), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_421_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 303)
);
}

/* SemanticId - ns=2;i=304 */

static UA_StatusCode function_namespace_instance_generated_422_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SemanticId");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "SemanticId");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 304),
UA_NODEID_NUMERIC(ns[2], 302),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "SemanticId"),
UA_NODEID_NUMERIC(ns[1], 1005),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_422_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 304)
);
}

/* Keys - ns=2;i=305 */

static UA_StatusCode function_namespace_instance_generated_423_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "Keys");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Keys");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 305),
UA_NODEID_NUMERIC(ns[2], 304),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Keys"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_423_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 305)
);
}

/* Category - ns=2;i=253 */

static UA_StatusCode function_namespace_instance_generated_424_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_253_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_253_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_253_variant_DataContents);
*variablenode_ns_2_i_253_variant_DataContents = UA_STRING_ALLOC("CONSTANT");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_253_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Category");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Category");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 253),
UA_NODEID_NUMERIC(ns[2], 252),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Category"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_253_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 253), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_424_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 253)
);
}

/* Identification - ns=2;i=263 */

static UA_StatusCode function_namespace_instance_generated_425_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Identification");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 263),
UA_NODEID_NUMERIC(ns[2], 252),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "Identification"),
UA_NODEID_NUMERIC(ns[1], 1010),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_425_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 263)
);
}

/* Kind - ns=2;i=267 */

static UA_StatusCode function_namespace_instance_generated_426_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_267_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_267_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_267_variant_DataContents);
*variablenode_ns_2_i_267_variant_DataContents = UA_STRING_ALLOC("Instance");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_267_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Kind");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Kind");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 267),
UA_NODEID_NUMERIC(ns[2], 263),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Kind"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_267_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_426_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 267)
);
}

/* ProductDesignation - ns=2;i=276 */

static UA_StatusCode function_namespace_instance_generated_427_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ProductDesignation");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 276),
UA_NODEID_NUMERIC(ns[2], 263),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "ProductDesignation"),
UA_NODEID_NUMERIC(ns[1], 1009),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_427_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 276)
);
}

/* ValueType - ns=2;i=281 */

static UA_StatusCode function_namespace_instance_generated_428_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_281_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_281_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_281_variant_DataContents);
*variablenode_ns_2_i_281_variant_DataContents = UA_STRING_ALLOC("string");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_281_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "ValueType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "ValueType");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 281),
UA_NODEID_NUMERIC(ns[2], 276),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "ValueType"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_281_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_428_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 281)
);
}

/* SemanticId - ns=2;i=278 */

static UA_StatusCode function_namespace_instance_generated_429_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SemanticId");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "SemanticId");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 278),
UA_NODEID_NUMERIC(ns[2], 276),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "SemanticId"),
UA_NODEID_NUMERIC(ns[1], 1005),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_429_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 278)
);
}

/* Keys - ns=2;i=279 */

static UA_StatusCode function_namespace_instance_generated_430_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "Keys");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Keys");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 279),
UA_NODEID_NUMERIC(ns[2], 278),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Keys"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_430_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 279)
);
}

/* Category - ns=2;i=277 */

static UA_StatusCode function_namespace_instance_generated_431_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_277_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_277_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_277_variant_DataContents);
*variablenode_ns_2_i_277_variant_DataContents = UA_STRING_ALLOC("CONSTANT");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_277_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Category");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Category");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 277),
UA_NODEID_NUMERIC(ns[2], 276),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Category"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_277_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 277), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_431_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 277)
);
}

/* Value - ns=2;i=282 */

static UA_StatusCode function_namespace_instance_generated_432_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_282_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_282_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_282_variant_DataContents);
*variablenode_ns_2_i_282_variant_DataContents = UA_STRING_ALLOC("Development Kit");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_282_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Value");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Value");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 282),
UA_NODEID_NUMERIC(ns[2], 276),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Value"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_282_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_432_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 282)
);
}

/* Kind - ns=2;i=280 */

static UA_StatusCode function_namespace_instance_generated_433_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_280_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_280_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_280_variant_DataContents);
*variablenode_ns_2_i_280_variant_DataContents = UA_STRING_ALLOC("Instance");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_280_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Kind");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Kind");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 280),
UA_NODEID_NUMERIC(ns[2], 276),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Kind"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_280_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_433_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 280)
);
}

/* SerialNumber - ns=2;i=283 */

static UA_StatusCode function_namespace_instance_generated_434_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SerialNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 283),
UA_NODEID_NUMERIC(ns[2], 263),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "SerialNumber"),
UA_NODEID_NUMERIC(ns[1], 1009),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_434_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 283)
);
}

/* SemanticId - ns=2;i=285 */

static UA_StatusCode function_namespace_instance_generated_435_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SemanticId");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "SemanticId");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 285),
UA_NODEID_NUMERIC(ns[2], 283),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "SemanticId"),
UA_NODEID_NUMERIC(ns[1], 1005),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_435_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 285)
);
}

/* Keys - ns=2;i=286 */

static UA_StatusCode function_namespace_instance_generated_436_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "Keys");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Keys");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 286),
UA_NODEID_NUMERIC(ns[2], 285),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Keys"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_436_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 286)
);
}

/* Category - ns=2;i=284 */

static UA_StatusCode function_namespace_instance_generated_437_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_284_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_284_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_284_variant_DataContents);
*variablenode_ns_2_i_284_variant_DataContents = UA_STRING_ALLOC("CONSTANT");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_284_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Category");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Category");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 284),
UA_NODEID_NUMERIC(ns[2], 283),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Category"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_284_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 284), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_437_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 284)
);
}

/* ValueType - ns=2;i=288 */

static UA_StatusCode function_namespace_instance_generated_438_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_288_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_288_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_288_variant_DataContents);
*variablenode_ns_2_i_288_variant_DataContents = UA_STRING_ALLOC("string");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_288_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "ValueType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "ValueType");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 288),
UA_NODEID_NUMERIC(ns[2], 283),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "ValueType"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_288_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_438_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 288)
);
}

/* Kind - ns=2;i=287 */

static UA_StatusCode function_namespace_instance_generated_439_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_287_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_287_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_287_variant_DataContents);
*variablenode_ns_2_i_287_variant_DataContents = UA_STRING_ALLOC("Instance");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_287_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Kind");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Kind");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 287),
UA_NODEID_NUMERIC(ns[2], 283),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Kind"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_287_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_439_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 287)
);
}

/* Value - ns=2;i=289 */

static UA_StatusCode function_namespace_instance_generated_440_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_289_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_289_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_289_variant_DataContents);
*variablenode_ns_2_i_289_variant_DataContents = UA_STRING_ALLOC("218150379");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_289_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Value");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Value");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 289),
UA_NODEID_NUMERIC(ns[2], 283),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Value"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_289_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_440_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 289)
);
}

/* SemanticId - ns=2;i=265 */

static UA_StatusCode function_namespace_instance_generated_441_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SemanticId");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "SemanticId");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 265),
UA_NODEID_NUMERIC(ns[2], 263),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "SemanticId"),
UA_NODEID_NUMERIC(ns[1], 1005),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_441_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 265)
);
}

/* Keys - ns=2;i=266 */

static UA_StatusCode function_namespace_instance_generated_442_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "Keys");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Keys");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 266),
UA_NODEID_NUMERIC(ns[2], 265),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Keys"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_442_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 266)
);
}

/* AllowDuplicates - ns=2;i=268 */

static UA_StatusCode function_namespace_instance_generated_443_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1);
UA_Boolean *variablenode_ns_2_i_268_variant_DataContents =  UA_Boolean_new();
if (!variablenode_ns_2_i_268_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Boolean_init(variablenode_ns_2_i_268_variant_DataContents);
*variablenode_ns_2_i_268_variant_DataContents = (UA_Boolean) false;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_268_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
attr.displayName = UA_LOCALIZEDTEXT("", "AllowDuplicates");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "AllowDuplicates");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 268),
UA_NODEID_NUMERIC(ns[2], 263),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "AllowDuplicates"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Boolean_delete(variablenode_ns_2_i_268_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_443_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 268)
);
}

/* Revision - ns=2;i=290 */

static UA_StatusCode function_namespace_instance_generated_444_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Revision");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 290),
UA_NODEID_NUMERIC(ns[2], 263),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "Revision"),
UA_NODEID_NUMERIC(ns[1], 1009),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_444_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 290)
);
}

/* Kind - ns=2;i=293 */

static UA_StatusCode function_namespace_instance_generated_445_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_293_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_293_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_293_variant_DataContents);
*variablenode_ns_2_i_293_variant_DataContents = UA_STRING_ALLOC("Instance");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_293_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Kind");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Kind");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 293),
UA_NODEID_NUMERIC(ns[2], 290),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Kind"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_293_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_445_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 293)
);
}

/* ValueType - ns=2;i=294 */

static UA_StatusCode function_namespace_instance_generated_446_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_294_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_294_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_294_variant_DataContents);
*variablenode_ns_2_i_294_variant_DataContents = UA_STRING_ALLOC("string");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_294_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "ValueType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "ValueType");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 294),
UA_NODEID_NUMERIC(ns[2], 290),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "ValueType"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_294_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_446_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 294)
);
}

/* SemanticId - ns=2;i=291 */

static UA_StatusCode function_namespace_instance_generated_447_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SemanticId");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "SemanticId");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 291),
UA_NODEID_NUMERIC(ns[2], 290),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "SemanticId"),
UA_NODEID_NUMERIC(ns[1], 1005),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_447_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 291)
);
}

/* Keys - ns=2;i=292 */

static UA_StatusCode function_namespace_instance_generated_448_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "Keys");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Keys");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 292),
UA_NODEID_NUMERIC(ns[2], 291),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Keys"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_448_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 292)
);
}

/* Value - ns=2;i=295 */

static UA_StatusCode function_namespace_instance_generated_449_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_295_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_295_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_295_variant_DataContents);
*variablenode_ns_2_i_295_variant_DataContents = UA_STRING_ALLOC("Rev B. MB1225");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_295_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Value");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Value");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 295),
UA_NODEID_NUMERIC(ns[2], 290),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Value"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_295_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_449_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 295)
);
}

/* Category - ns=2;i=264 */

static UA_StatusCode function_namespace_instance_generated_450_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_264_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_264_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_264_variant_DataContents);
*variablenode_ns_2_i_264_variant_DataContents = UA_STRING_ALLOC("CONSTANT");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_264_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Category");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Category");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 264),
UA_NODEID_NUMERIC(ns[2], 263),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Category"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_264_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 264), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_450_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 264)
);
}

/* Manufacturer - ns=2;i=269 */

static UA_StatusCode function_namespace_instance_generated_451_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Manufacturer");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 269),
UA_NODEID_NUMERIC(ns[2], 263),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "Manufacturer"),
UA_NODEID_NUMERIC(ns[1], 1009),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_451_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 269)
);
}

/* ValueType - ns=2;i=274 */

static UA_StatusCode function_namespace_instance_generated_452_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_274_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_274_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_274_variant_DataContents);
*variablenode_ns_2_i_274_variant_DataContents = UA_STRING_ALLOC("string");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_274_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "ValueType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "ValueType");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 274),
UA_NODEID_NUMERIC(ns[2], 269),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "ValueType"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_274_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_452_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 274)
);
}

/* Value - ns=2;i=275 */

static UA_StatusCode function_namespace_instance_generated_453_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_275_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_275_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_275_variant_DataContents);
*variablenode_ns_2_i_275_variant_DataContents = UA_STRING_ALLOC("STMicroelectronics");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_275_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Value");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Value");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 275),
UA_NODEID_NUMERIC(ns[2], 269),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Value"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_275_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_453_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 275)
);
}

/* Kind - ns=2;i=273 */

static UA_StatusCode function_namespace_instance_generated_454_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_273_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_273_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_273_variant_DataContents);
*variablenode_ns_2_i_273_variant_DataContents = UA_STRING_ALLOC("Instance");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_273_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Kind");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Kind");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 273),
UA_NODEID_NUMERIC(ns[2], 269),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Kind"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_273_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_454_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 273)
);
}

/* Category - ns=2;i=270 */

static UA_StatusCode function_namespace_instance_generated_455_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_270_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_270_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_270_variant_DataContents);
*variablenode_ns_2_i_270_variant_DataContents = UA_STRING_ALLOC("CONSTANT");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_270_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Category");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Category");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 270),
UA_NODEID_NUMERIC(ns[2], 269),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Category"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_270_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 270), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_455_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 270)
);
}

/* SemanticId - ns=2;i=271 */

static UA_StatusCode function_namespace_instance_generated_456_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SemanticId");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "SemanticId");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 271),
UA_NODEID_NUMERIC(ns[2], 269),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "SemanticId"),
UA_NODEID_NUMERIC(ns[1], 1005),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_456_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 271)
);
}

/* Keys - ns=2;i=272 */

static UA_StatusCode function_namespace_instance_generated_457_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "Keys");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Keys");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 272),
UA_NODEID_NUMERIC(ns[2], 271),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Keys"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_457_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 272)
);
}

/* Documentation - ns=2;i=357 */

static UA_StatusCode function_namespace_instance_generated_458_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Documentation");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 357),
UA_NODEID_NUMERIC(ns[2], 252),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "Documentation"),
UA_NODEID_NUMERIC(ns[1], 1010),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_458_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 357)
);
}

/* AllowDuplicates - ns=2;i=362 */

static UA_StatusCode function_namespace_instance_generated_459_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1);
UA_Boolean *variablenode_ns_2_i_362_variant_DataContents =  UA_Boolean_new();
if (!variablenode_ns_2_i_362_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Boolean_init(variablenode_ns_2_i_362_variant_DataContents);
*variablenode_ns_2_i_362_variant_DataContents = (UA_Boolean) false;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_362_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
attr.displayName = UA_LOCALIZEDTEXT("", "AllowDuplicates");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "AllowDuplicates");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 362),
UA_NODEID_NUMERIC(ns[2], 357),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "AllowDuplicates"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Boolean_delete(variablenode_ns_2_i_362_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_459_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 362)
);
}

/* Category - ns=2;i=358 */

static UA_StatusCode function_namespace_instance_generated_460_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_358_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_358_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_358_variant_DataContents);
*variablenode_ns_2_i_358_variant_DataContents = UA_STRING_ALLOC("CONSTANT");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_358_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Category");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Category");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 358),
UA_NODEID_NUMERIC(ns[2], 357),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Category"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_358_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 358), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_460_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 358)
);
}

/* User manual - ns=2;i=363 */

static UA_StatusCode function_namespace_instance_generated_461_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "User manual");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 363),
UA_NODEID_NUMERIC(ns[2], 357),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "User manual"),
UA_NODEID_NUMERIC(ns[1], 1010),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_461_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 363)
);
}

/* Kind - ns=2;i=367 */

static UA_StatusCode function_namespace_instance_generated_462_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_367_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_367_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_367_variant_DataContents);
*variablenode_ns_2_i_367_variant_DataContents = UA_STRING_ALLOC("Instance");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_367_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Kind");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Kind");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 367),
UA_NODEID_NUMERIC(ns[2], 363),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Kind"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_367_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_462_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 367)
);
}

/* DigitalFile_PDF - ns=2;i=418 */

static UA_StatusCode function_namespace_instance_generated_463_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "DigitalFile_PDF");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 418),
UA_NODEID_NUMERIC(ns[2], 363),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "DigitalFile_PDF"),
UA_NODEID_NUMERIC(ns[1], 1013),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_463_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 418)
);
}

/* File - ns=2;i=425 */

static UA_StatusCode function_namespace_instance_generated_464_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "File");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "File");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 425),
UA_NODEID_NUMERIC(ns[2], 418),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "File"),
UA_NODEID_NUMERIC(ns[0], 11575),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_464_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 425)
);
}

/* SetPosition - ns=2;i=444 */

static UA_StatusCode function_namespace_instance_generated_465_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "SetPosition");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "SetPosition");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[2], 444),
UA_NODEID_NUMERIC(ns[2], 425),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "SetPosition"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace_instance_generated_465_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 444)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=2;i=445 */

static UA_StatusCode function_namespace_instance_generated_466_begin(UA_Server *server, UA_UInt16* ns) {
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
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296);
UA_Argument variablenode_ns_2_i_445_variant_DataContents[2];

UA_init(&variablenode_ns_2_i_445_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_2_i_445_variant_DataContents[0].name = UA_STRING("FileHandle");
variablenode_ns_2_i_445_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 7);
variablenode_ns_2_i_445_variant_DataContents[0].valueRank = (UA_Int32) -1;
variablenode_ns_2_i_445_variant_DataContents[0].description = UA_LOCALIZEDTEXT("", "");

UA_init(&variablenode_ns_2_i_445_variant_DataContents[1], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_2_i_445_variant_DataContents[1].name = UA_STRING("Position");
variablenode_ns_2_i_445_variant_DataContents[1].dataType = UA_NODEID_NUMERIC(ns[0], 9);
variablenode_ns_2_i_445_variant_DataContents[1].valueRank = (UA_Int32) -1;
variablenode_ns_2_i_445_variant_DataContents[1].description = UA_LOCALIZEDTEXT("", "");
UA_Variant_setArray(&attr.value, &variablenode_ns_2_i_445_variant_DataContents, (UA_Int32) 2, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "InputArguments");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 445),
UA_NODEID_NUMERIC(ns[2], 444),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "InputArguments"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);


return retVal;
}

static UA_StatusCode function_namespace_instance_generated_466_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 445)
);
}

/* MimeType - ns=2;i=426 */

static UA_StatusCode function_namespace_instance_generated_467_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
attr.valueRank = 0;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String variablenode_ns_2_i_426_variant_DataContents[1];
variablenode_ns_2_i_426_variant_DataContents[0] = UA_STRING("application/pdf");
UA_Variant_setArray(&attr.value, &variablenode_ns_2_i_426_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "MimeType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "MimeType");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 426),
UA_NODEID_NUMERIC(ns[2], 425),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "MimeType"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_467_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 426)
);
}

/* Close - ns=2;i=434 */

static UA_StatusCode function_namespace_instance_generated_468_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Close");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Close");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[2], 434),
UA_NODEID_NUMERIC(ns[2], 425),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "Close"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace_instance_generated_468_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 434)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=2;i=435 */

static UA_StatusCode function_namespace_instance_generated_469_begin(UA_Server *server, UA_UInt16* ns) {
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
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296);
UA_Argument variablenode_ns_2_i_435_variant_DataContents[1];

UA_init(&variablenode_ns_2_i_435_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_2_i_435_variant_DataContents[0].name = UA_STRING("FileHandle");
variablenode_ns_2_i_435_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 7);
variablenode_ns_2_i_435_variant_DataContents[0].valueRank = (UA_Int32) -1;
variablenode_ns_2_i_435_variant_DataContents[0].description = UA_LOCALIZEDTEXT("", "");
UA_Variant_setArray(&attr.value, &variablenode_ns_2_i_435_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "InputArguments");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 435),
UA_NODEID_NUMERIC(ns[2], 434),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "InputArguments"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

return retVal;
}

static UA_StatusCode function_namespace_instance_generated_469_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 435)
);
}

/* Size - ns=2;i=428 */

static UA_StatusCode function_namespace_instance_generated_470_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 9);
UA_UInt64 *variablenode_ns_2_i_428_variant_DataContents =  UA_UInt64_new();
if (!variablenode_ns_2_i_428_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_UInt64_init(variablenode_ns_2_i_428_variant_DataContents);
*variablenode_ns_2_i_428_variant_DataContents = (UA_UInt64) 2137780;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_428_variant_DataContents, &UA_TYPES[UA_TYPES_UINT64]);
attr.displayName = UA_LOCALIZEDTEXT("", "Size");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Size");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 428),
UA_NODEID_NUMERIC(ns[2], 425),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Size"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_UInt64_delete(variablenode_ns_2_i_428_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_470_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 428)
);
}

/* Write - ns=2;i=439 */

static UA_StatusCode function_namespace_instance_generated_471_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Write");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Write");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[2], 439),
UA_NODEID_NUMERIC(ns[2], 425),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "Write"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace_instance_generated_471_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 439)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=2;i=440 */

static UA_StatusCode function_namespace_instance_generated_472_begin(UA_Server *server, UA_UInt16* ns) {
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
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296);
UA_Argument variablenode_ns_2_i_440_variant_DataContents[2];

UA_init(&variablenode_ns_2_i_440_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_2_i_440_variant_DataContents[0].name = UA_STRING("FileHandle");
variablenode_ns_2_i_440_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 7);
variablenode_ns_2_i_440_variant_DataContents[0].valueRank = (UA_Int32) -1;
variablenode_ns_2_i_440_variant_DataContents[0].description = UA_LOCALIZEDTEXT("", "");

UA_init(&variablenode_ns_2_i_440_variant_DataContents[1], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_2_i_440_variant_DataContents[1].name = UA_STRING("Data");
variablenode_ns_2_i_440_variant_DataContents[1].dataType = UA_NODEID_NUMERIC(ns[0], 15);
variablenode_ns_2_i_440_variant_DataContents[1].valueRank = (UA_Int32) -1;
variablenode_ns_2_i_440_variant_DataContents[1].description = UA_LOCALIZEDTEXT("", "");
UA_Variant_setArray(&attr.value, &variablenode_ns_2_i_440_variant_DataContents, (UA_Int32) 2, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "InputArguments");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 440),
UA_NODEID_NUMERIC(ns[2], 439),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "InputArguments"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);


return retVal;
}

static UA_StatusCode function_namespace_instance_generated_472_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 440)
);
}

/* UserWritable - ns=2;i=429 */

static UA_StatusCode function_namespace_instance_generated_473_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
attr.valueRank = 0;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1);
UA_Boolean variablenode_ns_2_i_429_variant_DataContents[1];
variablenode_ns_2_i_429_variant_DataContents[0] = (UA_Boolean) true;
UA_Variant_setArray(&attr.value, &variablenode_ns_2_i_429_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_BOOLEAN]);
attr.displayName = UA_LOCALIZEDTEXT("", "UserWritable");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "UserWritable");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 429),
UA_NODEID_NUMERIC(ns[2], 425),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "UserWritable"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_473_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 429)
);
}

/* Read - ns=2;i=436 */

static UA_StatusCode function_namespace_instance_generated_474_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Read");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Read");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[2], 436),
UA_NODEID_NUMERIC(ns[2], 425),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "Read"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace_instance_generated_474_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 436)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* OutputArguments - ns=2;i=438 */

static UA_StatusCode function_namespace_instance_generated_475_begin(UA_Server *server, UA_UInt16* ns) {
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
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296);
UA_Argument variablenode_ns_2_i_438_variant_DataContents[1];

UA_init(&variablenode_ns_2_i_438_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_2_i_438_variant_DataContents[0].name = UA_STRING("Data");
variablenode_ns_2_i_438_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 15);
variablenode_ns_2_i_438_variant_DataContents[0].valueRank = (UA_Int32) -1;
variablenode_ns_2_i_438_variant_DataContents[0].description = UA_LOCALIZEDTEXT("", "");
UA_Variant_setArray(&attr.value, &variablenode_ns_2_i_438_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "OutputArguments");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "OutputArguments");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 438),
UA_NODEID_NUMERIC(ns[2], 436),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "OutputArguments"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

return retVal;
}

static UA_StatusCode function_namespace_instance_generated_475_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 438)
);
}

/* InputArguments - ns=2;i=437 */

static UA_StatusCode function_namespace_instance_generated_476_begin(UA_Server *server, UA_UInt16* ns) {
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
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296);
UA_Argument variablenode_ns_2_i_437_variant_DataContents[2];

UA_init(&variablenode_ns_2_i_437_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_2_i_437_variant_DataContents[0].name = UA_STRING("FileHandle");
variablenode_ns_2_i_437_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 7);
variablenode_ns_2_i_437_variant_DataContents[0].valueRank = (UA_Int32) -1;
variablenode_ns_2_i_437_variant_DataContents[0].description = UA_LOCALIZEDTEXT("", "");

UA_init(&variablenode_ns_2_i_437_variant_DataContents[1], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_2_i_437_variant_DataContents[1].name = UA_STRING("Length");
variablenode_ns_2_i_437_variant_DataContents[1].dataType = UA_NODEID_NUMERIC(ns[0], 6);
variablenode_ns_2_i_437_variant_DataContents[1].valueRank = (UA_Int32) -1;
variablenode_ns_2_i_437_variant_DataContents[1].description = UA_LOCALIZEDTEXT("", "");
UA_Variant_setArray(&attr.value, &variablenode_ns_2_i_437_variant_DataContents, (UA_Int32) 2, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "InputArguments");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 437),
UA_NODEID_NUMERIC(ns[2], 436),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "InputArguments"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);


return retVal;
}

static UA_StatusCode function_namespace_instance_generated_476_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 437)
);
}

/* Open - ns=2;i=431 */

static UA_StatusCode function_namespace_instance_generated_477_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Open");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Open");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[2], 431),
UA_NODEID_NUMERIC(ns[2], 425),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "Open"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace_instance_generated_477_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 431)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* OutputArguments - ns=2;i=433 */

static UA_StatusCode function_namespace_instance_generated_478_begin(UA_Server *server, UA_UInt16* ns) {
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
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296);
UA_Argument variablenode_ns_2_i_433_variant_DataContents[1];

UA_init(&variablenode_ns_2_i_433_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_2_i_433_variant_DataContents[0].name = UA_STRING("FileHandle");
variablenode_ns_2_i_433_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 7);
variablenode_ns_2_i_433_variant_DataContents[0].valueRank = (UA_Int32) -1;
variablenode_ns_2_i_433_variant_DataContents[0].description = UA_LOCALIZEDTEXT("", "");
UA_Variant_setArray(&attr.value, &variablenode_ns_2_i_433_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "OutputArguments");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "OutputArguments");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 433),
UA_NODEID_NUMERIC(ns[2], 431),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "OutputArguments"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

return retVal;
}

static UA_StatusCode function_namespace_instance_generated_478_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 433)
);
}

/* InputArguments - ns=2;i=432 */

static UA_StatusCode function_namespace_instance_generated_479_begin(UA_Server *server, UA_UInt16* ns) {
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
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296);
UA_Argument variablenode_ns_2_i_432_variant_DataContents[1];

UA_init(&variablenode_ns_2_i_432_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_2_i_432_variant_DataContents[0].name = UA_STRING("Mode");
variablenode_ns_2_i_432_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 3);
variablenode_ns_2_i_432_variant_DataContents[0].valueRank = (UA_Int32) -1;
variablenode_ns_2_i_432_variant_DataContents[0].description = UA_LOCALIZEDTEXT("", "");
UA_Variant_setArray(&attr.value, &variablenode_ns_2_i_432_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "InputArguments");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 432),
UA_NODEID_NUMERIC(ns[2], 431),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "InputArguments"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

return retVal;
}

static UA_StatusCode function_namespace_instance_generated_479_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 432)
);
}

/* OpenCount - ns=2;i=427 */

static UA_StatusCode function_namespace_instance_generated_480_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
attr.valueRank = 0;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 5);
UA_UInt16 variablenode_ns_2_i_427_variant_DataContents[1];
variablenode_ns_2_i_427_variant_DataContents[0] = (UA_UInt16) 0;
UA_Variant_setArray(&attr.value, &variablenode_ns_2_i_427_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_UINT16]);
attr.displayName = UA_LOCALIZEDTEXT("", "OpenCount");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "OpenCount");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 427),
UA_NODEID_NUMERIC(ns[2], 425),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "OpenCount"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_480_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 427)
);
}

/* GetPosition - ns=2;i=441 */

static UA_StatusCode function_namespace_instance_generated_481_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "GetPosition");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "GetPosition");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[2], 441),
UA_NODEID_NUMERIC(ns[2], 425),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "GetPosition"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace_instance_generated_481_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 441)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* OutputArguments - ns=2;i=443 */

static UA_StatusCode function_namespace_instance_generated_482_begin(UA_Server *server, UA_UInt16* ns) {
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
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296);
UA_Argument variablenode_ns_2_i_443_variant_DataContents[1];

UA_init(&variablenode_ns_2_i_443_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_2_i_443_variant_DataContents[0].name = UA_STRING("Position");
variablenode_ns_2_i_443_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 9);
variablenode_ns_2_i_443_variant_DataContents[0].valueRank = (UA_Int32) -1;
variablenode_ns_2_i_443_variant_DataContents[0].description = UA_LOCALIZEDTEXT("", "");
UA_Variant_setArray(&attr.value, &variablenode_ns_2_i_443_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "OutputArguments");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "OutputArguments");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 443),
UA_NODEID_NUMERIC(ns[2], 441),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "OutputArguments"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

return retVal;
}

static UA_StatusCode function_namespace_instance_generated_482_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 443)
);
}

/* InputArguments - ns=2;i=442 */

static UA_StatusCode function_namespace_instance_generated_483_begin(UA_Server *server, UA_UInt16* ns) {
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
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296);
UA_Argument variablenode_ns_2_i_442_variant_DataContents[1];

UA_init(&variablenode_ns_2_i_442_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_2_i_442_variant_DataContents[0].name = UA_STRING("FileHandle");
variablenode_ns_2_i_442_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 7);
variablenode_ns_2_i_442_variant_DataContents[0].valueRank = (UA_Int32) -1;
variablenode_ns_2_i_442_variant_DataContents[0].description = UA_LOCALIZEDTEXT("", "");
UA_Variant_setArray(&attr.value, &variablenode_ns_2_i_442_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "InputArguments");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 442),
UA_NODEID_NUMERIC(ns[2], 441),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "InputArguments"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

return retVal;
}

static UA_StatusCode function_namespace_instance_generated_483_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 442)
);
}

/* Writable - ns=2;i=430 */

static UA_StatusCode function_namespace_instance_generated_484_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
attr.valueRank = 0;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1);
UA_Boolean variablenode_ns_2_i_430_variant_DataContents[1];
variablenode_ns_2_i_430_variant_DataContents[0] = (UA_Boolean) true;
UA_Variant_setArray(&attr.value, &variablenode_ns_2_i_430_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_BOOLEAN]);
attr.displayName = UA_LOCALIZEDTEXT("", "Writable");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Writable");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 430),
UA_NODEID_NUMERIC(ns[2], 425),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Writable"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_484_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 430)
);
}

/* SemanticId - ns=2;i=420 */

static UA_StatusCode function_namespace_instance_generated_485_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SemanticId");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "SemanticId");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 420),
UA_NODEID_NUMERIC(ns[2], 418),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "SemanticId"),
UA_NODEID_NUMERIC(ns[1], 1005),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_485_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 420)
);
}

/* Keys - ns=2;i=421 */

static UA_StatusCode function_namespace_instance_generated_486_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "Keys");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Keys");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 421),
UA_NODEID_NUMERIC(ns[2], 420),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Keys"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_486_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 421)
);
}

/* MimeType - ns=2;i=423 */

static UA_StatusCode function_namespace_instance_generated_487_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_423_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_423_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_423_variant_DataContents);
*variablenode_ns_2_i_423_variant_DataContents = UA_STRING_ALLOC("application/pdf");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_423_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "MimeType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "MimeType");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 423),
UA_NODEID_NUMERIC(ns[2], 418),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "MimeType"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_423_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_487_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 423)
);
}

/* Category - ns=2;i=419 */

static UA_StatusCode function_namespace_instance_generated_488_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_419_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_419_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_419_variant_DataContents);
*variablenode_ns_2_i_419_variant_DataContents = UA_STRING_ALLOC("PARAMETER");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_419_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Category");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Category");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 419),
UA_NODEID_NUMERIC(ns[2], 418),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Category"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_419_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 419), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_488_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 419)
);
}

/* Value - ns=2;i=424 */

static UA_StatusCode function_namespace_instance_generated_489_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_424_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_424_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_424_variant_DataContents);
*variablenode_ns_2_i_424_variant_DataContents = UA_STRING_ALLOC("/aasx/files/dm00276557.pdf");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_424_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Value");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Value");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 424),
UA_NODEID_NUMERIC(ns[2], 418),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Value"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_424_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_489_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 424)
);
}

/* Kind - ns=2;i=422 */

static UA_StatusCode function_namespace_instance_generated_490_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_422_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_422_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_422_variant_DataContents);
*variablenode_ns_2_i_422_variant_DataContents = UA_STRING_ALLOC("Instance");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_422_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Kind");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Kind");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 422),
UA_NODEID_NUMERIC(ns[2], 418),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Kind"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_422_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_490_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 422)
);
}

/* SemanticId - ns=2;i=365 */

static UA_StatusCode function_namespace_instance_generated_491_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SemanticId");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "SemanticId");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 365),
UA_NODEID_NUMERIC(ns[2], 363),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "SemanticId"),
UA_NODEID_NUMERIC(ns[1], 1005),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_491_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 365)
);
}

/* Keys - ns=2;i=366 */

static UA_StatusCode function_namespace_instance_generated_492_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "Keys");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Keys");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 366),
UA_NODEID_NUMERIC(ns[2], 365),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Keys"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_492_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 366)
);
}

/* Category - ns=2;i=364 */

static UA_StatusCode function_namespace_instance_generated_493_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_364_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_364_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_364_variant_DataContents);
*variablenode_ns_2_i_364_variant_DataContents = UA_STRING_ALLOC("CONSTANT");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_364_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Category");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Category");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 364),
UA_NODEID_NUMERIC(ns[2], 363),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Category"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_364_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 364), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_493_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 364)
);
}

/* DocumentId - ns=2;i=369 */

static UA_StatusCode function_namespace_instance_generated_494_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "DocumentId");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 369),
UA_NODEID_NUMERIC(ns[2], 363),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "DocumentId"),
UA_NODEID_NUMERIC(ns[1], 1009),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_494_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 369)
);
}

/* SemanticId - ns=2;i=371 */

static UA_StatusCode function_namespace_instance_generated_495_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SemanticId");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "SemanticId");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 371),
UA_NODEID_NUMERIC(ns[2], 369),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "SemanticId"),
UA_NODEID_NUMERIC(ns[1], 1005),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_495_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 371)
);
}

/* Keys - ns=2;i=372 */

static UA_StatusCode function_namespace_instance_generated_496_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "Keys");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Keys");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 372),
UA_NODEID_NUMERIC(ns[2], 371),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Keys"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_496_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 372)
);
}

/* ValueType - ns=2;i=374 */

static UA_StatusCode function_namespace_instance_generated_497_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_374_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_374_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_374_variant_DataContents);
*variablenode_ns_2_i_374_variant_DataContents = UA_STRING_ALLOC("string");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_374_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "ValueType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "ValueType");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 374),
UA_NODEID_NUMERIC(ns[2], 369),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "ValueType"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_374_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_497_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 374)
);
}

/* Category - ns=2;i=370 */

static UA_StatusCode function_namespace_instance_generated_498_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_370_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_370_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_370_variant_DataContents);
*variablenode_ns_2_i_370_variant_DataContents = UA_STRING_ALLOC("CONSTANT");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_370_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Category");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Category");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 370),
UA_NODEID_NUMERIC(ns[2], 369),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Category"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_370_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 370), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_498_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 370)
);
}

/* Value - ns=2;i=375 */

static UA_StatusCode function_namespace_instance_generated_499_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_375_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_375_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_375_variant_DataContents);
*variablenode_ns_2_i_375_variant_DataContents = UA_STRING_ALLOC("UM2033");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_375_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Value");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Value");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 375),
UA_NODEID_NUMERIC(ns[2], 369),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Value"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_375_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_499_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 375)
);
}

/* Kind - ns=2;i=373 */

static UA_StatusCode function_namespace_instance_generated_500_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_373_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_373_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_373_variant_DataContents);
*variablenode_ns_2_i_373_variant_DataContents = UA_STRING_ALLOC("Instance");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_373_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Kind");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Kind");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 373),
UA_NODEID_NUMERIC(ns[2], 369),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Kind"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_373_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_500_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 373)
);
}

/* Language - ns=2;i=383 */

static UA_StatusCode function_namespace_instance_generated_501_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Language");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 383),
UA_NODEID_NUMERIC(ns[2], 363),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "Language"),
UA_NODEID_NUMERIC(ns[1], 1009),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_501_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 383)
);
}

/* SemanticId - ns=2;i=385 */

static UA_StatusCode function_namespace_instance_generated_502_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SemanticId");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "SemanticId");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 385),
UA_NODEID_NUMERIC(ns[2], 383),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "SemanticId"),
UA_NODEID_NUMERIC(ns[1], 1005),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_502_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 385)
);
}

/* Keys - ns=2;i=386 */

static UA_StatusCode function_namespace_instance_generated_503_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "Keys");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Keys");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 386),
UA_NODEID_NUMERIC(ns[2], 385),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Keys"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_503_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 386)
);
}

/* ValueType - ns=2;i=388 */

static UA_StatusCode function_namespace_instance_generated_504_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_388_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_388_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_388_variant_DataContents);
*variablenode_ns_2_i_388_variant_DataContents = UA_STRING_ALLOC("string");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_388_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "ValueType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "ValueType");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 388),
UA_NODEID_NUMERIC(ns[2], 383),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "ValueType"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_388_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_504_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 388)
);
}

/* Category - ns=2;i=384 */

static UA_StatusCode function_namespace_instance_generated_505_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_384_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_384_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_384_variant_DataContents);
*variablenode_ns_2_i_384_variant_DataContents = UA_STRING_ALLOC("CONSTANT");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_384_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Category");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Category");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 384),
UA_NODEID_NUMERIC(ns[2], 383),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Category"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_384_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 384), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_505_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 384)
);
}

/* Kind - ns=2;i=387 */

static UA_StatusCode function_namespace_instance_generated_506_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_387_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_387_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_387_variant_DataContents);
*variablenode_ns_2_i_387_variant_DataContents = UA_STRING_ALLOC("Instance");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_387_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Kind");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Kind");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 387),
UA_NODEID_NUMERIC(ns[2], 383),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Kind"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_387_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_506_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 387)
);
}

/* Value - ns=2;i=389 */

static UA_StatusCode function_namespace_instance_generated_507_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_389_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_389_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_389_variant_DataContents);
*variablenode_ns_2_i_389_variant_DataContents = UA_STRING_ALLOC("en-US");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_389_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Value");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Value");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 389),
UA_NODEID_NUMERIC(ns[2], 383),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Value"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_389_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_507_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 389)
);
}

/* Title - ns=2;i=376 */

static UA_StatusCode function_namespace_instance_generated_508_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Title");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 376),
UA_NODEID_NUMERIC(ns[2], 363),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "Title"),
UA_NODEID_NUMERIC(ns[1], 1009),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_508_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 376)
);
}

/* SemanticId - ns=2;i=378 */

static UA_StatusCode function_namespace_instance_generated_509_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SemanticId");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "SemanticId");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 378),
UA_NODEID_NUMERIC(ns[2], 376),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "SemanticId"),
UA_NODEID_NUMERIC(ns[1], 1005),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_509_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 378)
);
}

/* Keys - ns=2;i=379 */

static UA_StatusCode function_namespace_instance_generated_510_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "Keys");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Keys");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 379),
UA_NODEID_NUMERIC(ns[2], 378),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Keys"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_510_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 379)
);
}

/* Value - ns=2;i=382 */

static UA_StatusCode function_namespace_instance_generated_511_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_382_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_382_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_382_variant_DataContents);
*variablenode_ns_2_i_382_variant_DataContents = UA_STRING_ALLOC("Discovery kit with STM32F769NI MCU");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_382_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Value");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Value");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 382),
UA_NODEID_NUMERIC(ns[2], 376),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Value"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_382_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_511_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 382)
);
}

/* Kind - ns=2;i=380 */

static UA_StatusCode function_namespace_instance_generated_512_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_380_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_380_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_380_variant_DataContents);
*variablenode_ns_2_i_380_variant_DataContents = UA_STRING_ALLOC("Instance");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_380_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Kind");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Kind");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 380),
UA_NODEID_NUMERIC(ns[2], 376),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Kind"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_380_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_512_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 380)
);
}

/* Category - ns=2;i=377 */

static UA_StatusCode function_namespace_instance_generated_513_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_377_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_377_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_377_variant_DataContents);
*variablenode_ns_2_i_377_variant_DataContents = UA_STRING_ALLOC("CONSTANT");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_377_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Category");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Category");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 377),
UA_NODEID_NUMERIC(ns[2], 376),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Category"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_377_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 377), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_513_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 377)
);
}

/* ValueType - ns=2;i=381 */

static UA_StatusCode function_namespace_instance_generated_514_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_381_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_381_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_381_variant_DataContents);
*variablenode_ns_2_i_381_variant_DataContents = UA_STRING_ALLOC("string");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_381_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "ValueType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "ValueType");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 381),
UA_NODEID_NUMERIC(ns[2], 376),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "ValueType"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_381_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_514_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 381)
);
}

/* PreviewImage - ns=2;i=390 */

static UA_StatusCode function_namespace_instance_generated_515_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "PreviewImage");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 390),
UA_NODEID_NUMERIC(ns[2], 363),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "PreviewImage"),
UA_NODEID_NUMERIC(ns[1], 1013),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_515_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 390)
);
}

/* Kind - ns=2;i=394 */

static UA_StatusCode function_namespace_instance_generated_516_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_394_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_394_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_394_variant_DataContents);
*variablenode_ns_2_i_394_variant_DataContents = UA_STRING_ALLOC("Instance");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_394_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Kind");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Kind");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 394),
UA_NODEID_NUMERIC(ns[2], 390),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Kind"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_394_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_516_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 394)
);
}

/* Category - ns=2;i=391 */

static UA_StatusCode function_namespace_instance_generated_517_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_391_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_391_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_391_variant_DataContents);
*variablenode_ns_2_i_391_variant_DataContents = UA_STRING_ALLOC("PARAMETER");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_391_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Category");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Category");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 391),
UA_NODEID_NUMERIC(ns[2], 390),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Category"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_391_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 391), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_517_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 391)
);
}

/* SemanticId - ns=2;i=392 */

static UA_StatusCode function_namespace_instance_generated_518_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SemanticId");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "SemanticId");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 392),
UA_NODEID_NUMERIC(ns[2], 390),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "SemanticId"),
UA_NODEID_NUMERIC(ns[1], 1005),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_518_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 392)
);
}

/* Keys - ns=2;i=393 */

static UA_StatusCode function_namespace_instance_generated_519_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "Keys");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Keys");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 393),
UA_NODEID_NUMERIC(ns[2], 392),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Keys"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_519_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 393)
);
}

/* File - ns=2;i=397 */

static UA_StatusCode function_namespace_instance_generated_520_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "File");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "File");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 397),
UA_NODEID_NUMERIC(ns[2], 390),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "File"),
UA_NODEID_NUMERIC(ns[0], 11575),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_520_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 397)
);
}

/* Size - ns=2;i=400 */

static UA_StatusCode function_namespace_instance_generated_521_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 9);
UA_UInt64 *variablenode_ns_2_i_400_variant_DataContents =  UA_UInt64_new();
if (!variablenode_ns_2_i_400_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_UInt64_init(variablenode_ns_2_i_400_variant_DataContents);
*variablenode_ns_2_i_400_variant_DataContents = (UA_UInt64) 177376;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_400_variant_DataContents, &UA_TYPES[UA_TYPES_UINT64]);
attr.displayName = UA_LOCALIZEDTEXT("", "Size");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Size");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 400),
UA_NODEID_NUMERIC(ns[2], 397),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Size"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_UInt64_delete(variablenode_ns_2_i_400_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_521_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 400)
);
}

/* Close - ns=2;i=406 */

static UA_StatusCode function_namespace_instance_generated_522_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Close");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Close");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[2], 406),
UA_NODEID_NUMERIC(ns[2], 397),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "Close"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace_instance_generated_522_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 406)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=2;i=407 */

static UA_StatusCode function_namespace_instance_generated_523_begin(UA_Server *server, UA_UInt16* ns) {
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
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296);
UA_Argument variablenode_ns_2_i_407_variant_DataContents[1];

UA_init(&variablenode_ns_2_i_407_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_2_i_407_variant_DataContents[0].name = UA_STRING("FileHandle");
variablenode_ns_2_i_407_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 7);
variablenode_ns_2_i_407_variant_DataContents[0].valueRank = (UA_Int32) -1;
variablenode_ns_2_i_407_variant_DataContents[0].description = UA_LOCALIZEDTEXT("", "");
UA_Variant_setArray(&attr.value, &variablenode_ns_2_i_407_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "InputArguments");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 407),
UA_NODEID_NUMERIC(ns[2], 406),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "InputArguments"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

return retVal;
}

static UA_StatusCode function_namespace_instance_generated_523_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 407)
);
}

/* OpenCount - ns=2;i=399 */

static UA_StatusCode function_namespace_instance_generated_524_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
attr.valueRank = 0;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 5);
UA_UInt16 variablenode_ns_2_i_399_variant_DataContents[1];
variablenode_ns_2_i_399_variant_DataContents[0] = (UA_UInt16) 0;
UA_Variant_setArray(&attr.value, &variablenode_ns_2_i_399_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_UINT16]);
attr.displayName = UA_LOCALIZEDTEXT("", "OpenCount");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "OpenCount");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 399),
UA_NODEID_NUMERIC(ns[2], 397),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "OpenCount"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_524_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 399)
);
}

/* Open - ns=2;i=403 */

static UA_StatusCode function_namespace_instance_generated_525_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Open");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Open");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[2], 403),
UA_NODEID_NUMERIC(ns[2], 397),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "Open"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace_instance_generated_525_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 403)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* OutputArguments - ns=2;i=405 */

static UA_StatusCode function_namespace_instance_generated_526_begin(UA_Server *server, UA_UInt16* ns) {
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
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296);
UA_Argument variablenode_ns_2_i_405_variant_DataContents[1];

UA_init(&variablenode_ns_2_i_405_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_2_i_405_variant_DataContents[0].name = UA_STRING("FileHandle");
variablenode_ns_2_i_405_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 7);
variablenode_ns_2_i_405_variant_DataContents[0].valueRank = (UA_Int32) -1;
variablenode_ns_2_i_405_variant_DataContents[0].description = UA_LOCALIZEDTEXT("", "");
UA_Variant_setArray(&attr.value, &variablenode_ns_2_i_405_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "OutputArguments");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "OutputArguments");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 405),
UA_NODEID_NUMERIC(ns[2], 403),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "OutputArguments"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

return retVal;
}

static UA_StatusCode function_namespace_instance_generated_526_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 405)
);
}

/* InputArguments - ns=2;i=404 */

static UA_StatusCode function_namespace_instance_generated_527_begin(UA_Server *server, UA_UInt16* ns) {
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
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296);
UA_Argument variablenode_ns_2_i_404_variant_DataContents[1];

UA_init(&variablenode_ns_2_i_404_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_2_i_404_variant_DataContents[0].name = UA_STRING("Mode");
variablenode_ns_2_i_404_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 3);
variablenode_ns_2_i_404_variant_DataContents[0].valueRank = (UA_Int32) -1;
variablenode_ns_2_i_404_variant_DataContents[0].description = UA_LOCALIZEDTEXT("", "");
UA_Variant_setArray(&attr.value, &variablenode_ns_2_i_404_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "InputArguments");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 404),
UA_NODEID_NUMERIC(ns[2], 403),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "InputArguments"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

return retVal;
}

static UA_StatusCode function_namespace_instance_generated_527_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 404)
);
}

/* Read - ns=2;i=408 */

static UA_StatusCode function_namespace_instance_generated_528_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Read");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Read");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[2], 408),
UA_NODEID_NUMERIC(ns[2], 397),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "Read"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace_instance_generated_528_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 408)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=2;i=409 */

static UA_StatusCode function_namespace_instance_generated_529_begin(UA_Server *server, UA_UInt16* ns) {
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
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296);
UA_Argument variablenode_ns_2_i_409_variant_DataContents[2];

UA_init(&variablenode_ns_2_i_409_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_2_i_409_variant_DataContents[0].name = UA_STRING("FileHandle");
variablenode_ns_2_i_409_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 7);
variablenode_ns_2_i_409_variant_DataContents[0].valueRank = (UA_Int32) -1;
variablenode_ns_2_i_409_variant_DataContents[0].description = UA_LOCALIZEDTEXT("", "");

UA_init(&variablenode_ns_2_i_409_variant_DataContents[1], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_2_i_409_variant_DataContents[1].name = UA_STRING("Length");
variablenode_ns_2_i_409_variant_DataContents[1].dataType = UA_NODEID_NUMERIC(ns[0], 6);
variablenode_ns_2_i_409_variant_DataContents[1].valueRank = (UA_Int32) -1;
variablenode_ns_2_i_409_variant_DataContents[1].description = UA_LOCALIZEDTEXT("", "");
UA_Variant_setArray(&attr.value, &variablenode_ns_2_i_409_variant_DataContents, (UA_Int32) 2, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "InputArguments");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 409),
UA_NODEID_NUMERIC(ns[2], 408),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "InputArguments"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);


return retVal;
}

static UA_StatusCode function_namespace_instance_generated_529_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 409)
);
}

/* OutputArguments - ns=2;i=410 */

static UA_StatusCode function_namespace_instance_generated_530_begin(UA_Server *server, UA_UInt16* ns) {
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
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296);
UA_Argument variablenode_ns_2_i_410_variant_DataContents[1];

UA_init(&variablenode_ns_2_i_410_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_2_i_410_variant_DataContents[0].name = UA_STRING("Data");
variablenode_ns_2_i_410_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 15);
variablenode_ns_2_i_410_variant_DataContents[0].valueRank = (UA_Int32) -1;
variablenode_ns_2_i_410_variant_DataContents[0].description = UA_LOCALIZEDTEXT("", "");
UA_Variant_setArray(&attr.value, &variablenode_ns_2_i_410_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "OutputArguments");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "OutputArguments");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 410),
UA_NODEID_NUMERIC(ns[2], 408),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "OutputArguments"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

return retVal;
}

static UA_StatusCode function_namespace_instance_generated_530_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 410)
);
}

/* MimeType - ns=2;i=398 */

static UA_StatusCode function_namespace_instance_generated_531_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
attr.valueRank = 0;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String variablenode_ns_2_i_398_variant_DataContents[1];
variablenode_ns_2_i_398_variant_DataContents[0] = UA_STRING("image/jpeg");
UA_Variant_setArray(&attr.value, &variablenode_ns_2_i_398_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "MimeType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "MimeType");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 398),
UA_NODEID_NUMERIC(ns[2], 397),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "MimeType"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_531_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 398)
);
}

/* SetPosition - ns=2;i=416 */

static UA_StatusCode function_namespace_instance_generated_532_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "SetPosition");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "SetPosition");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[2], 416),
UA_NODEID_NUMERIC(ns[2], 397),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "SetPosition"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace_instance_generated_532_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 416)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=2;i=417 */

static UA_StatusCode function_namespace_instance_generated_533_begin(UA_Server *server, UA_UInt16* ns) {
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
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296);
UA_Argument variablenode_ns_2_i_417_variant_DataContents[2];

UA_init(&variablenode_ns_2_i_417_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_2_i_417_variant_DataContents[0].name = UA_STRING("FileHandle");
variablenode_ns_2_i_417_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 7);
variablenode_ns_2_i_417_variant_DataContents[0].valueRank = (UA_Int32) -1;
variablenode_ns_2_i_417_variant_DataContents[0].description = UA_LOCALIZEDTEXT("", "");

UA_init(&variablenode_ns_2_i_417_variant_DataContents[1], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_2_i_417_variant_DataContents[1].name = UA_STRING("Position");
variablenode_ns_2_i_417_variant_DataContents[1].dataType = UA_NODEID_NUMERIC(ns[0], 9);
variablenode_ns_2_i_417_variant_DataContents[1].valueRank = (UA_Int32) -1;
variablenode_ns_2_i_417_variant_DataContents[1].description = UA_LOCALIZEDTEXT("", "");
UA_Variant_setArray(&attr.value, &variablenode_ns_2_i_417_variant_DataContents, (UA_Int32) 2, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "InputArguments");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 417),
UA_NODEID_NUMERIC(ns[2], 416),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "InputArguments"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);


return retVal;
}

static UA_StatusCode function_namespace_instance_generated_533_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 417)
);
}

/* Write - ns=2;i=411 */

static UA_StatusCode function_namespace_instance_generated_534_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Write");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Write");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[2], 411),
UA_NODEID_NUMERIC(ns[2], 397),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "Write"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace_instance_generated_534_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 411)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=2;i=412 */

static UA_StatusCode function_namespace_instance_generated_535_begin(UA_Server *server, UA_UInt16* ns) {
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
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296);
UA_Argument variablenode_ns_2_i_412_variant_DataContents[2];

UA_init(&variablenode_ns_2_i_412_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_2_i_412_variant_DataContents[0].name = UA_STRING("FileHandle");
variablenode_ns_2_i_412_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 7);
variablenode_ns_2_i_412_variant_DataContents[0].valueRank = (UA_Int32) -1;
variablenode_ns_2_i_412_variant_DataContents[0].description = UA_LOCALIZEDTEXT("", "");

UA_init(&variablenode_ns_2_i_412_variant_DataContents[1], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_2_i_412_variant_DataContents[1].name = UA_STRING("Data");
variablenode_ns_2_i_412_variant_DataContents[1].dataType = UA_NODEID_NUMERIC(ns[0], 15);
variablenode_ns_2_i_412_variant_DataContents[1].valueRank = (UA_Int32) -1;
variablenode_ns_2_i_412_variant_DataContents[1].description = UA_LOCALIZEDTEXT("", "");
UA_Variant_setArray(&attr.value, &variablenode_ns_2_i_412_variant_DataContents, (UA_Int32) 2, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "InputArguments");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 412),
UA_NODEID_NUMERIC(ns[2], 411),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "InputArguments"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);


return retVal;
}

static UA_StatusCode function_namespace_instance_generated_535_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 412)
);
}

/* Writable - ns=2;i=402 */

static UA_StatusCode function_namespace_instance_generated_536_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
attr.valueRank = 0;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1);
UA_Boolean variablenode_ns_2_i_402_variant_DataContents[1];
variablenode_ns_2_i_402_variant_DataContents[0] = (UA_Boolean) true;
UA_Variant_setArray(&attr.value, &variablenode_ns_2_i_402_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_BOOLEAN]);
attr.displayName = UA_LOCALIZEDTEXT("", "Writable");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Writable");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 402),
UA_NODEID_NUMERIC(ns[2], 397),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Writable"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_536_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 402)
);
}

/* GetPosition - ns=2;i=413 */

static UA_StatusCode function_namespace_instance_generated_537_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "GetPosition");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "GetPosition");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[2], 413),
UA_NODEID_NUMERIC(ns[2], 397),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "GetPosition"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace_instance_generated_537_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 413)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=2;i=414 */

static UA_StatusCode function_namespace_instance_generated_538_begin(UA_Server *server, UA_UInt16* ns) {
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
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296);
UA_Argument variablenode_ns_2_i_414_variant_DataContents[1];

UA_init(&variablenode_ns_2_i_414_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_2_i_414_variant_DataContents[0].name = UA_STRING("FileHandle");
variablenode_ns_2_i_414_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 7);
variablenode_ns_2_i_414_variant_DataContents[0].valueRank = (UA_Int32) -1;
variablenode_ns_2_i_414_variant_DataContents[0].description = UA_LOCALIZEDTEXT("", "");
UA_Variant_setArray(&attr.value, &variablenode_ns_2_i_414_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "InputArguments");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 414),
UA_NODEID_NUMERIC(ns[2], 413),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "InputArguments"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

return retVal;
}

static UA_StatusCode function_namespace_instance_generated_538_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 414)
);
}

/* OutputArguments - ns=2;i=415 */

static UA_StatusCode function_namespace_instance_generated_539_begin(UA_Server *server, UA_UInt16* ns) {
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
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296);
UA_Argument variablenode_ns_2_i_415_variant_DataContents[1];

UA_init(&variablenode_ns_2_i_415_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_2_i_415_variant_DataContents[0].name = UA_STRING("Position");
variablenode_ns_2_i_415_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 9);
variablenode_ns_2_i_415_variant_DataContents[0].valueRank = (UA_Int32) -1;
variablenode_ns_2_i_415_variant_DataContents[0].description = UA_LOCALIZEDTEXT("", "");
UA_Variant_setArray(&attr.value, &variablenode_ns_2_i_415_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "OutputArguments");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "OutputArguments");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 415),
UA_NODEID_NUMERIC(ns[2], 413),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "OutputArguments"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

return retVal;
}

static UA_StatusCode function_namespace_instance_generated_539_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 415)
);
}

/* UserWritable - ns=2;i=401 */

static UA_StatusCode function_namespace_instance_generated_540_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
attr.valueRank = 0;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1);
UA_Boolean variablenode_ns_2_i_401_variant_DataContents[1];
variablenode_ns_2_i_401_variant_DataContents[0] = (UA_Boolean) true;
UA_Variant_setArray(&attr.value, &variablenode_ns_2_i_401_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_BOOLEAN]);
attr.displayName = UA_LOCALIZEDTEXT("", "UserWritable");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "UserWritable");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 401),
UA_NODEID_NUMERIC(ns[2], 397),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "UserWritable"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_540_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 401)
);
}

/* MimeType - ns=2;i=395 */

static UA_StatusCode function_namespace_instance_generated_541_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_395_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_395_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_395_variant_DataContents);
*variablenode_ns_2_i_395_variant_DataContents = UA_STRING_ALLOC("image/jpeg");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_395_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "MimeType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "MimeType");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 395),
UA_NODEID_NUMERIC(ns[2], 390),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "MimeType"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_395_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_541_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 395)
);
}

/* Value - ns=2;i=396 */

static UA_StatusCode function_namespace_instance_generated_542_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_396_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_396_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_396_variant_DataContents);
*variablenode_ns_2_i_396_variant_DataContents = UA_STRING_ALLOC("/aasx/files/imageSTM32F769I-DISC1.jpg");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_396_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Value");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Value");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 396),
UA_NODEID_NUMERIC(ns[2], 390),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Value"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_396_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_542_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 396)
);
}

/* AllowDuplicates - ns=2;i=368 */

static UA_StatusCode function_namespace_instance_generated_543_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1);
UA_Boolean *variablenode_ns_2_i_368_variant_DataContents =  UA_Boolean_new();
if (!variablenode_ns_2_i_368_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Boolean_init(variablenode_ns_2_i_368_variant_DataContents);
*variablenode_ns_2_i_368_variant_DataContents = (UA_Boolean) false;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_368_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
attr.displayName = UA_LOCALIZEDTEXT("", "AllowDuplicates");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "AllowDuplicates");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 368),
UA_NODEID_NUMERIC(ns[2], 363),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "AllowDuplicates"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Boolean_delete(variablenode_ns_2_i_368_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_543_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 368)
);
}

/* SemanticId - ns=2;i=359 */

static UA_StatusCode function_namespace_instance_generated_544_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SemanticId");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "SemanticId");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 359),
UA_NODEID_NUMERIC(ns[2], 357),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "SemanticId"),
UA_NODEID_NUMERIC(ns[1], 1005),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_544_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 359)
);
}

/* Keys - ns=2;i=360 */

static UA_StatusCode function_namespace_instance_generated_545_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "Keys");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Keys");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 360),
UA_NODEID_NUMERIC(ns[2], 359),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Keys"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_545_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 360)
);
}

/* Kind - ns=2;i=361 */

static UA_StatusCode function_namespace_instance_generated_546_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_361_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_361_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_361_variant_DataContents);
*variablenode_ns_2_i_361_variant_DataContents = UA_STRING_ALLOC("Instance");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_361_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Kind");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Kind");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 361),
UA_NODEID_NUMERIC(ns[2], 357),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Kind"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_361_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_546_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 361)
);
}

/* DerivedFrom - ns=2;i=143 */

static UA_StatusCode function_namespace_instance_generated_547_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "DerivedFrom");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "DerivedFrom");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 143),
UA_NODEID_NUMERIC(ns[2], 135),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "DerivedFrom"),
UA_NODEID_NUMERIC(ns[1], 1005),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_547_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 143)
);
}

/* Keys - ns=2;i=144 */

static UA_StatusCode function_namespace_instance_generated_548_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "Keys");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Keys");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 144),
UA_NODEID_NUMERIC(ns[2], 143),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Keys"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_548_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 144)
);
}

/* Administration - ns=2;i=140 */

static UA_StatusCode function_namespace_instance_generated_549_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Administration");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Administration");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 140),
UA_NODEID_NUMERIC(ns[2], 135),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "Administration"),
UA_NODEID_NUMERIC(ns[1], 1001),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_549_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 140)
);
}

/* Version - ns=2;i=141 */

static UA_StatusCode function_namespace_instance_generated_550_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_141_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_141_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_141_variant_DataContents);
*variablenode_ns_2_i_141_variant_DataContents = UA_STRING_ALLOC("");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_141_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Version");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Version");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 141),
UA_NODEID_NUMERIC(ns[2], 140),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Version"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_141_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_550_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 141)
);
}

/* Revision - ns=2;i=142 */

static UA_StatusCode function_namespace_instance_generated_551_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_142_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_142_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_142_variant_DataContents);
*variablenode_ns_2_i_142_variant_DataContents = UA_STRING_ALLOC("");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_142_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Revision");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Revision");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 142),
UA_NODEID_NUMERIC(ns[2], 140),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Revision"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_142_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_551_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 142)
);
}

/* Administration - ns=2;i=13 */

static UA_StatusCode function_namespace_instance_generated_552_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Administration");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Administration");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 13),
UA_NODEID_NUMERIC(ns[1], 3001),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "Administration"),
UA_NODEID_NUMERIC(ns[1], 1001),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 13), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_552_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 13)
);
}

/* Version - ns=2;i=14 */

static UA_StatusCode function_namespace_instance_generated_553_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_14_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_14_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_14_variant_DataContents);
*variablenode_ns_2_i_14_variant_DataContents = UA_STRING_ALLOC("1");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_14_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Version");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Version");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 14),
UA_NODEID_NUMERIC(ns[2], 13),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Version"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_14_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_553_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 14)
);
}

/* Revision - ns=2;i=15 */

static UA_StatusCode function_namespace_instance_generated_554_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_15_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_15_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_15_variant_DataContents);
*variablenode_ns_2_i_15_variant_DataContents = UA_STRING_ALLOC("0");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_15_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Revision");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Revision");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 15),
UA_NODEID_NUMERIC(ns[2], 13),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Revision"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_15_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_554_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 15)
);
}

/* Identification - ns=2;i=10 */

static UA_StatusCode function_namespace_instance_generated_555_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Identification");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Identification");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 10),
UA_NODEID_NUMERIC(ns[1], 3001),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "Identification"),
UA_NODEID_NUMERIC(ns[1], 1000),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 10), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_555_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 10)
);
}

/* Id - ns=2;i=12 */

static UA_StatusCode function_namespace_instance_generated_556_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_12_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_12_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_12_variant_DataContents);
*variablenode_ns_2_i_12_variant_DataContents = UA_STRING_ALLOC("http://admin-shell.io/DataSpecificationTemplates/DataSpecificationIEC61360");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_12_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Id");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Id");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 12),
UA_NODEID_NUMERIC(ns[2], 10),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Id"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_12_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_556_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 12)
);
}

/* IdType - ns=2;i=11 */

static UA_StatusCode function_namespace_instance_generated_557_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_11_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_11_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_11_variant_DataContents);
*variablenode_ns_2_i_11_variant_DataContents = UA_STRING_ALLOC("URI");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_11_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "IdType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "IdType");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 11),
UA_NODEID_NUMERIC(ns[2], 10),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "IdType"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_11_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_instance_generated_557_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 11)
);
}

UA_StatusCode namespace_instance_generated(UA_Server *server) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
/* Use namespace ids generated by the server */
UA_UInt16 ns[3];
ns[0] = UA_Server_addNamespace(server, "http://opcfoundation.org/UA/");
ns[1] = UA_Server_addNamespace(server, "http://opcfoundation.org/UA/i4aas");
ns[2] = UA_Server_addNamespace(server, "http://admin-shell.io/samples/i4aas/instance");
bool dummy = (
!(retVal = function_namespace_instance_generated_0_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_1_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_2_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_3_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_4_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_5_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_6_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_7_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_8_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_9_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_10_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_11_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_12_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_13_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_14_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_15_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_16_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_17_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_18_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_19_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_20_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_21_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_22_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_23_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_24_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_25_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_26_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_27_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_28_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_29_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_30_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_31_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_32_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_33_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_34_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_35_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_36_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_37_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_38_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_39_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_40_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_41_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_42_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_43_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_44_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_45_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_46_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_47_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_48_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_49_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_50_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_51_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_52_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_53_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_54_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_55_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_56_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_57_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_58_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_59_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_60_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_61_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_62_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_63_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_64_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_65_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_66_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_67_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_68_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_69_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_70_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_71_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_72_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_73_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_74_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_75_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_76_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_77_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_78_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_79_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_80_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_81_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_82_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_83_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_84_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_85_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_86_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_87_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_88_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_89_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_90_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_91_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_92_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_93_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_94_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_95_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_96_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_97_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_98_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_99_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_100_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_101_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_102_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_103_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_104_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_105_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_106_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_107_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_108_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_109_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_110_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_111_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_112_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_113_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_114_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_115_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_116_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_117_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_118_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_119_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_120_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_121_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_122_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_123_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_124_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_125_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_126_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_127_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_128_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_129_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_130_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_131_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_132_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_133_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_134_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_135_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_136_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_137_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_138_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_139_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_140_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_141_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_142_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_143_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_144_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_145_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_146_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_147_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_148_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_149_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_150_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_151_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_152_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_153_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_154_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_155_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_156_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_157_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_158_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_159_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_160_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_161_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_162_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_163_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_164_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_165_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_166_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_167_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_168_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_169_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_170_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_171_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_172_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_173_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_174_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_175_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_176_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_177_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_178_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_179_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_180_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_181_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_182_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_183_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_184_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_185_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_186_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_187_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_188_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_189_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_190_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_191_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_192_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_193_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_194_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_195_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_196_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_197_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_198_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_199_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_200_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_201_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_202_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_203_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_204_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_205_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_206_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_207_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_208_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_209_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_210_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_211_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_212_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_213_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_214_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_215_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_216_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_217_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_218_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_219_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_220_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_221_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_222_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_223_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_224_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_225_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_226_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_227_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_228_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_229_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_230_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_231_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_232_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_233_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_234_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_235_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_236_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_237_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_238_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_239_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_240_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_241_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_242_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_243_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_244_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_245_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_246_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_247_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_248_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_249_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_250_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_251_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_252_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_253_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_254_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_255_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_256_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_257_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_258_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_259_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_260_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_261_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_262_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_263_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_264_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_265_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_266_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_267_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_268_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_269_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_270_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_271_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_272_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_273_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_274_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_275_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_276_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_277_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_278_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_279_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_280_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_281_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_282_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_283_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_284_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_285_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_286_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_287_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_288_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_289_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_290_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_291_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_292_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_293_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_294_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_295_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_296_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_297_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_298_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_299_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_300_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_301_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_302_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_303_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_304_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_305_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_306_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_307_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_308_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_309_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_310_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_311_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_312_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_313_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_314_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_315_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_316_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_317_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_318_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_319_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_320_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_321_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_322_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_323_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_324_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_325_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_326_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_327_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_328_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_329_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_330_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_331_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_332_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_333_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_334_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_335_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_336_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_337_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_338_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_339_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_340_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_341_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_342_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_343_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_344_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_345_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_346_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_347_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_348_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_349_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_350_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_351_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_352_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_353_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_354_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_355_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_356_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_357_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_358_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_359_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_360_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_361_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_362_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_363_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_364_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_365_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_366_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_367_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_368_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_369_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_370_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_371_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_372_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_373_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_374_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_375_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_376_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_377_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_378_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_379_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_380_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_381_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_382_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_383_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_384_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_385_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_386_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_387_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_388_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_389_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_390_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_391_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_392_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_393_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_394_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_395_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_396_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_397_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_398_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_399_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_400_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_401_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_402_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_403_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_404_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_405_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_406_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_407_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_408_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_409_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_410_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_411_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_412_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_413_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_414_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_415_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_416_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_417_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_418_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_419_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_420_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_421_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_422_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_423_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_424_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_425_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_426_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_427_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_428_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_429_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_430_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_431_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_432_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_433_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_434_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_435_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_436_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_437_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_438_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_439_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_440_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_441_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_442_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_443_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_444_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_445_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_446_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_447_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_448_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_449_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_450_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_451_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_452_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_453_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_454_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_455_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_456_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_457_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_458_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_459_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_460_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_461_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_462_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_463_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_464_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_465_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_466_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_467_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_468_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_469_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_470_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_471_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_472_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_473_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_474_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_475_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_476_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_477_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_478_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_479_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_480_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_481_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_482_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_483_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_484_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_485_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_486_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_487_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_488_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_489_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_490_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_491_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_492_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_493_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_494_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_495_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_496_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_497_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_498_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_499_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_500_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_501_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_502_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_503_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_504_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_505_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_506_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_507_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_508_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_509_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_510_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_511_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_512_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_513_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_514_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_515_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_516_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_517_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_518_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_519_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_520_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_521_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_522_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_523_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_524_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_525_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_526_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_527_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_528_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_529_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_530_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_531_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_532_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_533_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_534_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_535_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_536_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_537_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_538_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_539_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_540_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_541_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_542_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_543_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_544_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_545_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_546_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_547_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_548_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_549_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_550_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_551_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_552_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_553_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_554_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_555_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_556_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_557_begin(server, ns))
&& !(retVal = function_namespace_instance_generated_557_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_556_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_555_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_554_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_553_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_552_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_551_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_550_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_549_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_548_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_547_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_546_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_545_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_544_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_543_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_542_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_541_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_540_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_539_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_538_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_537_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_536_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_535_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_534_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_533_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_532_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_531_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_530_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_529_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_528_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_527_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_526_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_525_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_524_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_523_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_522_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_521_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_520_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_519_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_518_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_517_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_516_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_515_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_514_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_513_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_512_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_511_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_510_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_509_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_508_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_507_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_506_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_505_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_504_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_503_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_502_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_501_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_500_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_499_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_498_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_497_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_496_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_495_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_494_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_493_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_492_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_491_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_490_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_489_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_488_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_487_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_486_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_485_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_484_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_483_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_482_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_481_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_480_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_479_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_478_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_477_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_476_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_475_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_474_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_473_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_472_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_471_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_470_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_469_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_468_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_467_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_466_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_465_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_464_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_463_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_462_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_461_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_460_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_459_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_458_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_457_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_456_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_455_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_454_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_453_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_452_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_451_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_450_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_449_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_448_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_447_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_446_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_445_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_444_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_443_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_442_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_441_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_440_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_439_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_438_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_437_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_436_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_435_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_434_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_433_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_432_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_431_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_430_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_429_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_428_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_427_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_426_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_425_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_424_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_423_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_422_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_421_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_420_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_419_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_418_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_417_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_416_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_415_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_414_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_413_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_412_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_411_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_410_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_409_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_408_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_407_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_406_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_405_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_404_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_403_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_402_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_401_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_400_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_399_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_398_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_397_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_396_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_395_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_394_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_393_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_392_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_391_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_390_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_389_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_388_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_387_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_386_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_385_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_384_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_383_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_382_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_381_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_380_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_379_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_378_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_377_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_376_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_375_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_374_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_373_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_372_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_371_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_370_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_369_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_368_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_367_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_366_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_365_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_364_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_363_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_362_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_361_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_360_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_359_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_358_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_357_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_356_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_355_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_354_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_353_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_352_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_351_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_350_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_349_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_348_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_347_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_346_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_345_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_344_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_343_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_342_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_341_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_340_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_339_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_338_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_337_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_336_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_335_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_334_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_333_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_332_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_331_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_330_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_329_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_328_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_327_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_326_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_325_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_324_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_323_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_322_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_321_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_320_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_319_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_318_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_317_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_316_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_315_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_314_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_313_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_312_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_311_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_310_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_309_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_308_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_307_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_306_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_305_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_304_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_303_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_302_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_301_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_300_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_299_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_298_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_297_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_296_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_295_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_294_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_293_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_292_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_291_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_290_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_289_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_288_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_287_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_286_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_285_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_284_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_283_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_282_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_281_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_280_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_279_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_278_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_277_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_276_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_275_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_274_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_273_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_272_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_271_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_270_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_269_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_268_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_267_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_266_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_265_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_264_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_263_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_262_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_261_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_260_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_259_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_258_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_257_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_256_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_255_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_254_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_253_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_252_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_251_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_250_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_249_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_248_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_247_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_246_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_245_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_244_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_243_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_242_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_241_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_240_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_239_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_238_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_237_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_236_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_235_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_234_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_233_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_232_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_231_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_230_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_229_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_228_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_227_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_226_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_225_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_224_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_223_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_222_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_221_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_220_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_219_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_218_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_217_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_216_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_215_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_214_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_213_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_212_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_211_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_210_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_209_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_208_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_207_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_206_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_205_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_204_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_203_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_202_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_201_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_200_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_199_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_198_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_197_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_196_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_195_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_194_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_193_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_192_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_191_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_190_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_189_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_188_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_187_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_186_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_185_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_184_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_183_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_182_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_181_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_180_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_179_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_178_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_177_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_176_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_175_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_174_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_173_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_172_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_171_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_170_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_169_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_168_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_167_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_166_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_165_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_164_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_163_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_162_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_161_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_160_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_159_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_158_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_157_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_156_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_155_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_154_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_153_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_152_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_151_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_150_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_149_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_148_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_147_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_146_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_145_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_144_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_143_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_142_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_141_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_140_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_139_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_138_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_137_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_136_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_135_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_134_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_133_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_132_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_131_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_130_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_129_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_128_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_127_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_126_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_125_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_124_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_123_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_122_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_121_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_120_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_119_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_118_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_117_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_116_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_115_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_114_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_113_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_112_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_111_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_110_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_109_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_108_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_107_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_106_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_105_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_104_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_103_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_102_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_101_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_100_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_99_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_98_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_97_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_96_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_95_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_94_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_93_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_92_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_91_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_90_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_89_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_88_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_87_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_86_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_85_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_84_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_83_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_82_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_81_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_80_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_79_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_78_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_77_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_76_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_75_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_74_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_73_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_72_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_71_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_70_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_69_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_68_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_67_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_66_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_65_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_64_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_63_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_62_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_61_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_60_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_59_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_58_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_57_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_56_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_55_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_54_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_53_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_52_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_51_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_50_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_49_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_48_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_47_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_46_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_45_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_44_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_43_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_42_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_41_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_40_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_39_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_38_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_37_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_36_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_35_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_34_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_33_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_32_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_31_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_30_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_29_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_28_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_27_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_26_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_25_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_24_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_23_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_22_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_21_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_20_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_19_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_18_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_17_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_16_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_15_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_14_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_13_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_12_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_11_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_10_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_9_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_8_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_7_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_6_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_5_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_4_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_3_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_2_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_1_finish(server, ns))
&& !(retVal = function_namespace_instance_generated_0_finish(server, ns))
); (void)(dummy);
return retVal;
}
