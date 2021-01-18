/* Generated from testtypes.bsd with script C:/Projects/open62541-i4Component/tools/generate_datatypes.py * on host VM-WIN16-FEI by user rudolf at 2021-01-18 02:59:41 */

#ifndef TYPES_TESTNODESET_GENERATED_H_
#define TYPES_TESTNODESET_GENERATED_H_

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
#define UA_TYPES_TESTNODESET_COUNT 4
extern UA_EXPORT const UA_DataType UA_TYPES_TESTNODESET[UA_TYPES_TESTNODESET_COUNT];

/**
 * Point
 * ^^^^^
 */
typedef struct {
    UA_Double x;
    UA_Double y;
} UA_Point;

#define UA_TYPES_TESTNODESET_POINT 0

/**
 * NestedPoint
 * ^^^^^^^^^^^
 */
typedef struct {
    UA_Double x;
    UA_Double y;
    UA_Point point1;
} UA_NestedPoint;

#define UA_TYPES_TESTNODESET_NESTEDPOINT 1

/**
 * PointWithArray
 * ^^^^^^^^^^^^^^
 */
typedef struct {
    UA_Double x;
    UA_Double y;
    UA_Double z;
    size_t array1Size;
    UA_Double *array1;
} UA_PointWithArray;

#define UA_TYPES_TESTNODESET_POINTWITHARRAY 2

/**
 * PointWithPointArray
 * ^^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_Double x;
    UA_Double y;
    UA_Double z;
    size_t array1Size;
    UA_Point *array1;
} UA_PointWithPointArray;

#define UA_TYPES_TESTNODESET_POINTWITHPOINTARRAY 3


_UA_END_DECLS

#endif /* TYPES_TESTNODESET_GENERATED_H_ */
