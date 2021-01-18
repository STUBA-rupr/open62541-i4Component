/* Generated from Opc.Ua.Di.Types.bsd with script C:/Projects/open62541-i4Component/tools/generate_datatypes.py
 * on host VM-WIN16-FEI by user rudolf at 2021-01-18 02:59:41 */

#ifndef TYPES_DI_GENERATED_ENCODING_BINARY_H_
#define TYPES_DI_GENERATED_ENCODING_BINARY_H_

#ifdef UA_ENABLE_AMALGAMATION
# include "open62541.h"
#else
# include "ua_types_encoding_binary.h"
# include "types_di_generated.h"
#endif



/* DeviceHealthEnumeration */
static UA_INLINE size_t
UA_DeviceHealthEnumeration_calcSizeBinary(const UA_DeviceHealthEnumeration *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_DI[UA_TYPES_DI_DEVICEHEALTHENUMERATION]);
}
static UA_INLINE UA_StatusCode
UA_DeviceHealthEnumeration_encodeBinary(const UA_DeviceHealthEnumeration *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_DI[UA_TYPES_DI_DEVICEHEALTHENUMERATION], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_DeviceHealthEnumeration_decodeBinary(const UA_ByteString *src, size_t *offset, UA_DeviceHealthEnumeration *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_DI[UA_TYPES_DI_DEVICEHEALTHENUMERATION], NULL);
}

/* FetchResultDataType */
static UA_INLINE size_t
UA_FetchResultDataType_calcSizeBinary(const UA_FetchResultDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_DI[UA_TYPES_DI_FETCHRESULTDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_FetchResultDataType_encodeBinary(const UA_FetchResultDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_DI[UA_TYPES_DI_FETCHRESULTDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_FetchResultDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_FetchResultDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_DI[UA_TYPES_DI_FETCHRESULTDATATYPE], NULL);
}

/* TransferResultErrorDataType */
static UA_INLINE size_t
UA_TransferResultErrorDataType_calcSizeBinary(const UA_TransferResultErrorDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_DI[UA_TYPES_DI_TRANSFERRESULTERRORDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_TransferResultErrorDataType_encodeBinary(const UA_TransferResultErrorDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_DI[UA_TYPES_DI_TRANSFERRESULTERRORDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_TransferResultErrorDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_TransferResultErrorDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_DI[UA_TYPES_DI_TRANSFERRESULTERRORDATATYPE], NULL);
}

/* ParameterResultDataType */
static UA_INLINE size_t
UA_ParameterResultDataType_calcSizeBinary(const UA_ParameterResultDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_DI[UA_TYPES_DI_PARAMETERRESULTDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_ParameterResultDataType_encodeBinary(const UA_ParameterResultDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_DI[UA_TYPES_DI_PARAMETERRESULTDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_ParameterResultDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_ParameterResultDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_DI[UA_TYPES_DI_PARAMETERRESULTDATATYPE], NULL);
}

/* TransferResultDataDataType */
static UA_INLINE size_t
UA_TransferResultDataDataType_calcSizeBinary(const UA_TransferResultDataDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_DI[UA_TYPES_DI_TRANSFERRESULTDATADATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_TransferResultDataDataType_encodeBinary(const UA_TransferResultDataDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_DI[UA_TYPES_DI_TRANSFERRESULTDATADATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_TransferResultDataDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_TransferResultDataDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_DI[UA_TYPES_DI_TRANSFERRESULTDATADATATYPE], NULL);
}

#endif /* TYPES_DI_GENERATED_ENCODING_BINARY_H_ */
