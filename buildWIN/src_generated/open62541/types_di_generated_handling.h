/* Generated from Opc.Ua.Di.Types.bsd with script C:/Projects/open62541-i4Component/tools/generate_datatypes.py
 * on host VM-WIN16-FEI by user rudolf at 2021-01-18 02:59:41 */

#ifndef TYPES_DI_GENERATED_HANDLING_H_
#define TYPES_DI_GENERATED_HANDLING_H_

#include "types_di_generated.h"

_UA_BEGIN_DECLS

#if defined(__GNUC__) && __GNUC__ >= 4 && __GNUC_MINOR__ >= 6
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wmissing-field-initializers"
# pragma GCC diagnostic ignored "-Wmissing-braces"
#endif


/* DeviceHealthEnumeration */
static UA_INLINE void
UA_DeviceHealthEnumeration_init(UA_DeviceHealthEnumeration *p) {
    memset(p, 0, sizeof(UA_DeviceHealthEnumeration));
}

static UA_INLINE UA_DeviceHealthEnumeration *
UA_DeviceHealthEnumeration_new(void) {
    return (UA_DeviceHealthEnumeration*)UA_new(&UA_TYPES_DI[UA_TYPES_DI_DEVICEHEALTHENUMERATION]);
}

static UA_INLINE UA_StatusCode
UA_DeviceHealthEnumeration_copy(const UA_DeviceHealthEnumeration *src, UA_DeviceHealthEnumeration *dst) {
    return UA_copy(src, dst, &UA_TYPES_DI[UA_TYPES_DI_DEVICEHEALTHENUMERATION]);
}

UA_DEPRECATED static UA_INLINE void
UA_DeviceHealthEnumeration_deleteMembers(UA_DeviceHealthEnumeration *p) {
    UA_clear(p, &UA_TYPES_DI[UA_TYPES_DI_DEVICEHEALTHENUMERATION]);
}

static UA_INLINE void
UA_DeviceHealthEnumeration_clear(UA_DeviceHealthEnumeration *p) {
    UA_clear(p, &UA_TYPES_DI[UA_TYPES_DI_DEVICEHEALTHENUMERATION]);
}

static UA_INLINE void
UA_DeviceHealthEnumeration_delete(UA_DeviceHealthEnumeration *p) {
    UA_delete(p, &UA_TYPES_DI[UA_TYPES_DI_DEVICEHEALTHENUMERATION]);
}

/* FetchResultDataType */
static UA_INLINE void
UA_FetchResultDataType_init(UA_FetchResultDataType *p) {
    memset(p, 0, sizeof(UA_FetchResultDataType));
}

static UA_INLINE UA_FetchResultDataType *
UA_FetchResultDataType_new(void) {
    return (UA_FetchResultDataType*)UA_new(&UA_TYPES_DI[UA_TYPES_DI_FETCHRESULTDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_FetchResultDataType_copy(const UA_FetchResultDataType *src, UA_FetchResultDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_DI[UA_TYPES_DI_FETCHRESULTDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_FetchResultDataType_deleteMembers(UA_FetchResultDataType *p) {
    UA_clear(p, &UA_TYPES_DI[UA_TYPES_DI_FETCHRESULTDATATYPE]);
}

static UA_INLINE void
UA_FetchResultDataType_clear(UA_FetchResultDataType *p) {
    UA_clear(p, &UA_TYPES_DI[UA_TYPES_DI_FETCHRESULTDATATYPE]);
}

static UA_INLINE void
UA_FetchResultDataType_delete(UA_FetchResultDataType *p) {
    UA_delete(p, &UA_TYPES_DI[UA_TYPES_DI_FETCHRESULTDATATYPE]);
}

/* TransferResultErrorDataType */
static UA_INLINE void
UA_TransferResultErrorDataType_init(UA_TransferResultErrorDataType *p) {
    memset(p, 0, sizeof(UA_TransferResultErrorDataType));
}

static UA_INLINE UA_TransferResultErrorDataType *
UA_TransferResultErrorDataType_new(void) {
    return (UA_TransferResultErrorDataType*)UA_new(&UA_TYPES_DI[UA_TYPES_DI_TRANSFERRESULTERRORDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_TransferResultErrorDataType_copy(const UA_TransferResultErrorDataType *src, UA_TransferResultErrorDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_DI[UA_TYPES_DI_TRANSFERRESULTERRORDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_TransferResultErrorDataType_deleteMembers(UA_TransferResultErrorDataType *p) {
    UA_clear(p, &UA_TYPES_DI[UA_TYPES_DI_TRANSFERRESULTERRORDATATYPE]);
}

static UA_INLINE void
UA_TransferResultErrorDataType_clear(UA_TransferResultErrorDataType *p) {
    UA_clear(p, &UA_TYPES_DI[UA_TYPES_DI_TRANSFERRESULTERRORDATATYPE]);
}

static UA_INLINE void
UA_TransferResultErrorDataType_delete(UA_TransferResultErrorDataType *p) {
    UA_delete(p, &UA_TYPES_DI[UA_TYPES_DI_TRANSFERRESULTERRORDATATYPE]);
}

/* ParameterResultDataType */
static UA_INLINE void
UA_ParameterResultDataType_init(UA_ParameterResultDataType *p) {
    memset(p, 0, sizeof(UA_ParameterResultDataType));
}

static UA_INLINE UA_ParameterResultDataType *
UA_ParameterResultDataType_new(void) {
    return (UA_ParameterResultDataType*)UA_new(&UA_TYPES_DI[UA_TYPES_DI_PARAMETERRESULTDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_ParameterResultDataType_copy(const UA_ParameterResultDataType *src, UA_ParameterResultDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_DI[UA_TYPES_DI_PARAMETERRESULTDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_ParameterResultDataType_deleteMembers(UA_ParameterResultDataType *p) {
    UA_clear(p, &UA_TYPES_DI[UA_TYPES_DI_PARAMETERRESULTDATATYPE]);
}

static UA_INLINE void
UA_ParameterResultDataType_clear(UA_ParameterResultDataType *p) {
    UA_clear(p, &UA_TYPES_DI[UA_TYPES_DI_PARAMETERRESULTDATATYPE]);
}

static UA_INLINE void
UA_ParameterResultDataType_delete(UA_ParameterResultDataType *p) {
    UA_delete(p, &UA_TYPES_DI[UA_TYPES_DI_PARAMETERRESULTDATATYPE]);
}

/* TransferResultDataDataType */
static UA_INLINE void
UA_TransferResultDataDataType_init(UA_TransferResultDataDataType *p) {
    memset(p, 0, sizeof(UA_TransferResultDataDataType));
}

static UA_INLINE UA_TransferResultDataDataType *
UA_TransferResultDataDataType_new(void) {
    return (UA_TransferResultDataDataType*)UA_new(&UA_TYPES_DI[UA_TYPES_DI_TRANSFERRESULTDATADATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_TransferResultDataDataType_copy(const UA_TransferResultDataDataType *src, UA_TransferResultDataDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_DI[UA_TYPES_DI_TRANSFERRESULTDATADATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_TransferResultDataDataType_deleteMembers(UA_TransferResultDataDataType *p) {
    UA_clear(p, &UA_TYPES_DI[UA_TYPES_DI_TRANSFERRESULTDATADATATYPE]);
}

static UA_INLINE void
UA_TransferResultDataDataType_clear(UA_TransferResultDataDataType *p) {
    UA_clear(p, &UA_TYPES_DI[UA_TYPES_DI_TRANSFERRESULTDATADATATYPE]);
}

static UA_INLINE void
UA_TransferResultDataDataType_delete(UA_TransferResultDataDataType *p) {
    UA_delete(p, &UA_TYPES_DI[UA_TYPES_DI_TRANSFERRESULTDATADATATYPE]);
}

#if defined(__GNUC__) && __GNUC__ >= 4 && __GNUC_MINOR__ >= 6
# pragma GCC diagnostic pop
#endif

_UA_END_DECLS

#endif /* TYPES_DI_GENERATED_HANDLING_H_ */
