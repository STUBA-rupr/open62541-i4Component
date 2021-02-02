/* Generated from Opc.Ua.i4aas.Types.bsd with script C:/Projects/open62541-i4Component/tools/generate_datatypes.py
 * on host VM-WIN16-FEI by user rudolf at 2021-01-29 05:05:32 */

#ifndef TYPES_I4AAS_GENERATED_HANDLING_H_
#define TYPES_I4AAS_GENERATED_HANDLING_H_

#include "types_i4aas_generated.h"

_UA_BEGIN_DECLS

#if defined(__GNUC__) && __GNUC__ >= 4 && __GNUC_MINOR__ >= 6
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wmissing-field-initializers"
# pragma GCC diagnostic ignored "-Wmissing-braces"
#endif


/* IdType */
static UA_INLINE void
UA_IdType_init(UA_IdType *p) {
    memset(p, 0, sizeof(UA_IdType));
}

static UA_INLINE UA_IdType *
UA_IdType_new(void) {
    return (UA_IdType*)UA_new(&UA_TYPES_I4AAS[UA_TYPES_I4AAS_IDTYPE]);
}

static UA_INLINE UA_StatusCode
UA_IdType_copy(const UA_IdType *src, UA_IdType *dst) {
    return UA_copy(src, dst, &UA_TYPES_I4AAS[UA_TYPES_I4AAS_IDTYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_IdType_deleteMembers(UA_IdType *p) {
    UA_clear(p, &UA_TYPES_I4AAS[UA_TYPES_I4AAS_IDTYPE]);
}

static UA_INLINE void
UA_IdType_clear(UA_IdType *p) {
    UA_clear(p, &UA_TYPES_I4AAS[UA_TYPES_I4AAS_IDTYPE]);
}

static UA_INLINE void
UA_IdType_delete(UA_IdType *p) {
    UA_delete(p, &UA_TYPES_I4AAS[UA_TYPES_I4AAS_IDTYPE]);
}

#if defined(__GNUC__) && __GNUC__ >= 4 && __GNUC_MINOR__ >= 6
# pragma GCC diagnostic pop
#endif

_UA_END_DECLS

#endif /* TYPES_I4AAS_GENERATED_HANDLING_H_ */
