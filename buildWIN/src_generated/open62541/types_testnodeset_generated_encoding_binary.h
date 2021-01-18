/* Generated from testtypes.bsd with script C:/Projects/open62541-i4Component/tools/generate_datatypes.py
 * on host VM-WIN16-FEI by user rudolf at 2021-01-18 02:59:41 */

#ifndef TYPES_TESTNODESET_GENERATED_ENCODING_BINARY_H_
#define TYPES_TESTNODESET_GENERATED_ENCODING_BINARY_H_

#ifdef UA_ENABLE_AMALGAMATION
# include "open62541.h"
#else
# include "ua_types_encoding_binary.h"
# include "types_testnodeset_generated.h"
#endif



/* Point */
static UA_INLINE size_t
UA_Point_calcSizeBinary(const UA_Point *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_TESTNODESET[UA_TYPES_TESTNODESET_POINT]);
}
static UA_INLINE UA_StatusCode
UA_Point_encodeBinary(const UA_Point *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_TESTNODESET[UA_TYPES_TESTNODESET_POINT], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_Point_decodeBinary(const UA_ByteString *src, size_t *offset, UA_Point *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_TESTNODESET[UA_TYPES_TESTNODESET_POINT], NULL);
}

/* NestedPoint */
static UA_INLINE size_t
UA_NestedPoint_calcSizeBinary(const UA_NestedPoint *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_TESTNODESET[UA_TYPES_TESTNODESET_NESTEDPOINT]);
}
static UA_INLINE UA_StatusCode
UA_NestedPoint_encodeBinary(const UA_NestedPoint *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_TESTNODESET[UA_TYPES_TESTNODESET_NESTEDPOINT], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_NestedPoint_decodeBinary(const UA_ByteString *src, size_t *offset, UA_NestedPoint *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_TESTNODESET[UA_TYPES_TESTNODESET_NESTEDPOINT], NULL);
}

/* PointWithArray */
static UA_INLINE size_t
UA_PointWithArray_calcSizeBinary(const UA_PointWithArray *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_TESTNODESET[UA_TYPES_TESTNODESET_POINTWITHARRAY]);
}
static UA_INLINE UA_StatusCode
UA_PointWithArray_encodeBinary(const UA_PointWithArray *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_TESTNODESET[UA_TYPES_TESTNODESET_POINTWITHARRAY], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_PointWithArray_decodeBinary(const UA_ByteString *src, size_t *offset, UA_PointWithArray *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_TESTNODESET[UA_TYPES_TESTNODESET_POINTWITHARRAY], NULL);
}

/* PointWithPointArray */
static UA_INLINE size_t
UA_PointWithPointArray_calcSizeBinary(const UA_PointWithPointArray *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_TESTNODESET[UA_TYPES_TESTNODESET_POINTWITHPOINTARRAY]);
}
static UA_INLINE UA_StatusCode
UA_PointWithPointArray_encodeBinary(const UA_PointWithPointArray *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_TESTNODESET[UA_TYPES_TESTNODESET_POINTWITHPOINTARRAY], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_PointWithPointArray_decodeBinary(const UA_ByteString *src, size_t *offset, UA_PointWithPointArray *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_TESTNODESET[UA_TYPES_TESTNODESET_POINTWITHPOINTARRAY], NULL);
}

#endif /* TYPES_TESTNODESET_GENERATED_ENCODING_BINARY_H_ */
