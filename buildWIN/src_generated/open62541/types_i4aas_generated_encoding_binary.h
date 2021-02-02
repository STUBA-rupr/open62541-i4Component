/* Generated from Opc.Ua.i4aas.Types.bsd with script C:/Projects/open62541-i4Component/tools/generate_datatypes.py
 * on host VM-WIN16-FEI by user rudolf at 2021-01-29 05:05:32 */

#ifndef TYPES_I4AAS_GENERATED_ENCODING_BINARY_H_
#define TYPES_I4AAS_GENERATED_ENCODING_BINARY_H_

#ifdef UA_ENABLE_AMALGAMATION
# include "open62541.h"
#else
# include "ua_types_encoding_binary.h"
# include "types_i4aas_generated.h"
#endif



/* IdType */
static UA_INLINE size_t
UA_IdType_calcSizeBinary(const UA_IdType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_I4AAS[UA_TYPES_I4AAS_IDTYPE]);
}
static UA_INLINE UA_StatusCode
UA_IdType_encodeBinary(const UA_IdType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_I4AAS[UA_TYPES_I4AAS_IDTYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_IdType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_IdType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_I4AAS[UA_TYPES_I4AAS_IDTYPE], NULL);
}

#endif /* TYPES_I4AAS_GENERATED_ENCODING_BINARY_H_ */
