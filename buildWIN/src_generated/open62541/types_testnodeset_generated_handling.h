/* Generated from testtypes.bsd with script C:/Projects/open62541-i4Component/tools/generate_datatypes.py
 * on host VM-WIN16-FEI by user rudolf at 2021-01-18 02:59:41 */

#ifndef TYPES_TESTNODESET_GENERATED_HANDLING_H_
#define TYPES_TESTNODESET_GENERATED_HANDLING_H_

#include "types_testnodeset_generated.h"

_UA_BEGIN_DECLS

#if defined(__GNUC__) && __GNUC__ >= 4 && __GNUC_MINOR__ >= 6
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wmissing-field-initializers"
# pragma GCC diagnostic ignored "-Wmissing-braces"
#endif


/* Point */
static UA_INLINE void
UA_Point_init(UA_Point *p) {
    memset(p, 0, sizeof(UA_Point));
}

static UA_INLINE UA_Point *
UA_Point_new(void) {
    return (UA_Point*)UA_new(&UA_TYPES_TESTNODESET[UA_TYPES_TESTNODESET_POINT]);
}

static UA_INLINE UA_StatusCode
UA_Point_copy(const UA_Point *src, UA_Point *dst) {
    return UA_copy(src, dst, &UA_TYPES_TESTNODESET[UA_TYPES_TESTNODESET_POINT]);
}

UA_DEPRECATED static UA_INLINE void
UA_Point_deleteMembers(UA_Point *p) {
    UA_clear(p, &UA_TYPES_TESTNODESET[UA_TYPES_TESTNODESET_POINT]);
}

static UA_INLINE void
UA_Point_clear(UA_Point *p) {
    UA_clear(p, &UA_TYPES_TESTNODESET[UA_TYPES_TESTNODESET_POINT]);
}

static UA_INLINE void
UA_Point_delete(UA_Point *p) {
    UA_delete(p, &UA_TYPES_TESTNODESET[UA_TYPES_TESTNODESET_POINT]);
}

/* NestedPoint */
static UA_INLINE void
UA_NestedPoint_init(UA_NestedPoint *p) {
    memset(p, 0, sizeof(UA_NestedPoint));
}

static UA_INLINE UA_NestedPoint *
UA_NestedPoint_new(void) {
    return (UA_NestedPoint*)UA_new(&UA_TYPES_TESTNODESET[UA_TYPES_TESTNODESET_NESTEDPOINT]);
}

static UA_INLINE UA_StatusCode
UA_NestedPoint_copy(const UA_NestedPoint *src, UA_NestedPoint *dst) {
    return UA_copy(src, dst, &UA_TYPES_TESTNODESET[UA_TYPES_TESTNODESET_NESTEDPOINT]);
}

UA_DEPRECATED static UA_INLINE void
UA_NestedPoint_deleteMembers(UA_NestedPoint *p) {
    UA_clear(p, &UA_TYPES_TESTNODESET[UA_TYPES_TESTNODESET_NESTEDPOINT]);
}

static UA_INLINE void
UA_NestedPoint_clear(UA_NestedPoint *p) {
    UA_clear(p, &UA_TYPES_TESTNODESET[UA_TYPES_TESTNODESET_NESTEDPOINT]);
}

static UA_INLINE void
UA_NestedPoint_delete(UA_NestedPoint *p) {
    UA_delete(p, &UA_TYPES_TESTNODESET[UA_TYPES_TESTNODESET_NESTEDPOINT]);
}

/* PointWithArray */
static UA_INLINE void
UA_PointWithArray_init(UA_PointWithArray *p) {
    memset(p, 0, sizeof(UA_PointWithArray));
}

static UA_INLINE UA_PointWithArray *
UA_PointWithArray_new(void) {
    return (UA_PointWithArray*)UA_new(&UA_TYPES_TESTNODESET[UA_TYPES_TESTNODESET_POINTWITHARRAY]);
}

static UA_INLINE UA_StatusCode
UA_PointWithArray_copy(const UA_PointWithArray *src, UA_PointWithArray *dst) {
    return UA_copy(src, dst, &UA_TYPES_TESTNODESET[UA_TYPES_TESTNODESET_POINTWITHARRAY]);
}

UA_DEPRECATED static UA_INLINE void
UA_PointWithArray_deleteMembers(UA_PointWithArray *p) {
    UA_clear(p, &UA_TYPES_TESTNODESET[UA_TYPES_TESTNODESET_POINTWITHARRAY]);
}

static UA_INLINE void
UA_PointWithArray_clear(UA_PointWithArray *p) {
    UA_clear(p, &UA_TYPES_TESTNODESET[UA_TYPES_TESTNODESET_POINTWITHARRAY]);
}

static UA_INLINE void
UA_PointWithArray_delete(UA_PointWithArray *p) {
    UA_delete(p, &UA_TYPES_TESTNODESET[UA_TYPES_TESTNODESET_POINTWITHARRAY]);
}

/* PointWithPointArray */
static UA_INLINE void
UA_PointWithPointArray_init(UA_PointWithPointArray *p) {
    memset(p, 0, sizeof(UA_PointWithPointArray));
}

static UA_INLINE UA_PointWithPointArray *
UA_PointWithPointArray_new(void) {
    return (UA_PointWithPointArray*)UA_new(&UA_TYPES_TESTNODESET[UA_TYPES_TESTNODESET_POINTWITHPOINTARRAY]);
}

static UA_INLINE UA_StatusCode
UA_PointWithPointArray_copy(const UA_PointWithPointArray *src, UA_PointWithPointArray *dst) {
    return UA_copy(src, dst, &UA_TYPES_TESTNODESET[UA_TYPES_TESTNODESET_POINTWITHPOINTARRAY]);
}

UA_DEPRECATED static UA_INLINE void
UA_PointWithPointArray_deleteMembers(UA_PointWithPointArray *p) {
    UA_clear(p, &UA_TYPES_TESTNODESET[UA_TYPES_TESTNODESET_POINTWITHPOINTARRAY]);
}

static UA_INLINE void
UA_PointWithPointArray_clear(UA_PointWithPointArray *p) {
    UA_clear(p, &UA_TYPES_TESTNODESET[UA_TYPES_TESTNODESET_POINTWITHPOINTARRAY]);
}

static UA_INLINE void
UA_PointWithPointArray_delete(UA_PointWithPointArray *p) {
    UA_delete(p, &UA_TYPES_TESTNODESET[UA_TYPES_TESTNODESET_POINTWITHPOINTARRAY]);
}

#if defined(__GNUC__) && __GNUC__ >= 4 && __GNUC_MINOR__ >= 6
# pragma GCC diagnostic pop
#endif

_UA_END_DECLS

#endif /* TYPES_TESTNODESET_GENERATED_HANDLING_H_ */
