/* Generated from Opc.Ua.i4aas.Types.bsd with script C:/Projects/open62541-i4Component/tools/generate_datatypes.py * on host VM-WIN16-FEI by user rudolf at 2021-01-29 05:05:32 */

#ifndef TYPES_I4AAS_GENERATED_H_
#define TYPES_I4AAS_GENERATED_H_

#ifdef UA_ENABLE_AMALGAMATION
#include "open62541.h"
#else
#include <open62541/types.h>
#include <open62541/types_generated.h>

#endif

_UA_BEGIN_DECLS


/**
 * Every type is assigned an index in an array containing the type descriptions.
 * These descriptions are used during type handling (copying, deletion,
 * binary encoding, ...). */
#define UA_TYPES_I4AAS_COUNT 1
extern UA_EXPORT const UA_DataType UA_TYPES_I4AAS[UA_TYPES_I4AAS_COUNT];

/**
 * IdType
 * ^^^^^^
 */
typedef enum {
    UA_IDTYPE_FRAGMENTID = 1,
    UA_IDTYPE_IDSHORT = 2,
    UA_IDTYPE_IRDI = 3,
    UA_IDTYPE_IRI = 4,
    __UA_IDTYPE_FORCE32BIT = 0x7fffffff
} UA_IdType;
UA_STATIC_ASSERT(sizeof(UA_IdType) == sizeof(UA_Int32), enum_must_be_32bit);

#define UA_TYPES_I4AAS_IDTYPE 0


_UA_END_DECLS

#endif /* TYPES_I4AAS_GENERATED_H_ */
