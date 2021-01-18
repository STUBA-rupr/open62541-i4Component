/* Generated from Opc.Ua.POWERLINK.NodeSet2.bsd with script C:/Projects/open62541-i4Component/tools/generate_datatypes.py
 * on host VM-WIN16-FEI by user rudolf at 2021-01-18 02:59:41 */

#ifndef TYPES_POWERLINK_GENERATED_ENCODING_BINARY_H_
#define TYPES_POWERLINK_GENERATED_ENCODING_BINARY_H_

#ifdef UA_ENABLE_AMALGAMATION
# include "open62541.h"
#else
# include "ua_types_encoding_binary.h"
# include "types_powerlink_generated.h"
#endif



/* ErrorRegisterBits */
static UA_INLINE size_t
UA_ErrorRegisterBits_calcSizeBinary(const UA_ErrorRegisterBits *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_POWERLINK[UA_TYPES_POWERLINK_ERRORREGISTERBITS]);
}
static UA_INLINE UA_StatusCode
UA_ErrorRegisterBits_encodeBinary(const UA_ErrorRegisterBits *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_POWERLINK[UA_TYPES_POWERLINK_ERRORREGISTERBITS], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_ErrorRegisterBits_decodeBinary(const UA_ByteString *src, size_t *offset, UA_ErrorRegisterBits *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_POWERLINK[UA_TYPES_POWERLINK_ERRORREGISTERBITS], NULL);
}

/* PowerlinkAttribute */
static UA_INLINE size_t
UA_PowerlinkAttribute_calcSizeBinary(const UA_PowerlinkAttribute *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_POWERLINK[UA_TYPES_POWERLINK_POWERLINKATTRIBUTE]);
}
static UA_INLINE UA_StatusCode
UA_PowerlinkAttribute_encodeBinary(const UA_PowerlinkAttribute *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_POWERLINK[UA_TYPES_POWERLINK_POWERLINKATTRIBUTE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_PowerlinkAttribute_decodeBinary(const UA_ByteString *src, size_t *offset, UA_PowerlinkAttribute *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_POWERLINK[UA_TYPES_POWERLINK_POWERLINKATTRIBUTE], NULL);
}

/* PowerlinkErrorEntryDataType */
static UA_INLINE size_t
UA_PowerlinkErrorEntryDataType_calcSizeBinary(const UA_PowerlinkErrorEntryDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_POWERLINK[UA_TYPES_POWERLINK_POWERLINKERRORENTRYDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_PowerlinkErrorEntryDataType_encodeBinary(const UA_PowerlinkErrorEntryDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_POWERLINK[UA_TYPES_POWERLINK_POWERLINKERRORENTRYDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_PowerlinkErrorEntryDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_PowerlinkErrorEntryDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_POWERLINK[UA_TYPES_POWERLINK_POWERLINKERRORENTRYDATATYPE], NULL);
}

/* PowerlinkIpAddressDataType */
static UA_INLINE size_t
UA_PowerlinkIpAddressDataType_calcSizeBinary(const UA_PowerlinkIpAddressDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_POWERLINK[UA_TYPES_POWERLINK_POWERLINKIPADDRESSDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_PowerlinkIpAddressDataType_encodeBinary(const UA_PowerlinkIpAddressDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_POWERLINK[UA_TYPES_POWERLINK_POWERLINKIPADDRESSDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_PowerlinkIpAddressDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_PowerlinkIpAddressDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_POWERLINK[UA_TYPES_POWERLINK_POWERLINKIPADDRESSDATATYPE], NULL);
}

/* PowerlinkPDOMappingEntryDataType */
static UA_INLINE size_t
UA_PowerlinkPDOMappingEntryDataType_calcSizeBinary(const UA_PowerlinkPDOMappingEntryDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_POWERLINK[UA_TYPES_POWERLINK_POWERLINKPDOMAPPINGENTRYDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_PowerlinkPDOMappingEntryDataType_encodeBinary(const UA_PowerlinkPDOMappingEntryDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_POWERLINK[UA_TYPES_POWERLINK_POWERLINKPDOMAPPINGENTRYDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_PowerlinkPDOMappingEntryDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_PowerlinkPDOMappingEntryDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_POWERLINK[UA_TYPES_POWERLINK_POWERLINKPDOMAPPINGENTRYDATATYPE], NULL);
}

/* PowerlinkNMTResetCmdEnumeration */
static UA_INLINE size_t
UA_PowerlinkNMTResetCmdEnumeration_calcSizeBinary(const UA_PowerlinkNMTResetCmdEnumeration *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_POWERLINK[UA_TYPES_POWERLINK_POWERLINKNMTRESETCMDENUMERATION]);
}
static UA_INLINE UA_StatusCode
UA_PowerlinkNMTResetCmdEnumeration_encodeBinary(const UA_PowerlinkNMTResetCmdEnumeration *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_POWERLINK[UA_TYPES_POWERLINK_POWERLINKNMTRESETCMDENUMERATION], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_PowerlinkNMTResetCmdEnumeration_decodeBinary(const UA_ByteString *src, size_t *offset, UA_PowerlinkNMTResetCmdEnumeration *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_POWERLINK[UA_TYPES_POWERLINK_POWERLINKNMTRESETCMDENUMERATION], NULL);
}

/* PowerlinkNMTStateEnumeration */
static UA_INLINE size_t
UA_PowerlinkNMTStateEnumeration_calcSizeBinary(const UA_PowerlinkNMTStateEnumeration *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_POWERLINK[UA_TYPES_POWERLINK_POWERLINKNMTSTATEENUMERATION]);
}
static UA_INLINE UA_StatusCode
UA_PowerlinkNMTStateEnumeration_encodeBinary(const UA_PowerlinkNMTStateEnumeration *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_POWERLINK[UA_TYPES_POWERLINK_POWERLINKNMTSTATEENUMERATION], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_PowerlinkNMTStateEnumeration_decodeBinary(const UA_ByteString *src, size_t *offset, UA_PowerlinkNMTStateEnumeration *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_POWERLINK[UA_TYPES_POWERLINK_POWERLINKNMTSTATEENUMERATION], NULL);
}

#endif /* TYPES_POWERLINK_GENERATED_ENCODING_BINARY_H_ */
