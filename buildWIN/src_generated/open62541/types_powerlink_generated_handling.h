/* Generated from Opc.Ua.POWERLINK.NodeSet2.bsd with script C:/Projects/open62541-i4Component/tools/generate_datatypes.py
 * on host VM-WIN16-FEI by user rudolf at 2021-01-18 02:59:41 */

#ifndef TYPES_POWERLINK_GENERATED_HANDLING_H_
#define TYPES_POWERLINK_GENERATED_HANDLING_H_

#include "types_powerlink_generated.h"

_UA_BEGIN_DECLS

#if defined(__GNUC__) && __GNUC__ >= 4 && __GNUC_MINOR__ >= 6
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wmissing-field-initializers"
# pragma GCC diagnostic ignored "-Wmissing-braces"
#endif


/* ErrorRegisterBits */
static UA_INLINE void
UA_ErrorRegisterBits_init(UA_ErrorRegisterBits *p) {
    memset(p, 0, sizeof(UA_ErrorRegisterBits));
}

static UA_INLINE UA_ErrorRegisterBits *
UA_ErrorRegisterBits_new(void) {
    return (UA_ErrorRegisterBits*)UA_new(&UA_TYPES_POWERLINK[UA_TYPES_POWERLINK_ERRORREGISTERBITS]);
}

static UA_INLINE UA_StatusCode
UA_ErrorRegisterBits_copy(const UA_ErrorRegisterBits *src, UA_ErrorRegisterBits *dst) {
    return UA_copy(src, dst, &UA_TYPES_POWERLINK[UA_TYPES_POWERLINK_ERRORREGISTERBITS]);
}

UA_DEPRECATED static UA_INLINE void
UA_ErrorRegisterBits_deleteMembers(UA_ErrorRegisterBits *p) {
    UA_clear(p, &UA_TYPES_POWERLINK[UA_TYPES_POWERLINK_ERRORREGISTERBITS]);
}

static UA_INLINE void
UA_ErrorRegisterBits_clear(UA_ErrorRegisterBits *p) {
    UA_clear(p, &UA_TYPES_POWERLINK[UA_TYPES_POWERLINK_ERRORREGISTERBITS]);
}

static UA_INLINE void
UA_ErrorRegisterBits_delete(UA_ErrorRegisterBits *p) {
    UA_delete(p, &UA_TYPES_POWERLINK[UA_TYPES_POWERLINK_ERRORREGISTERBITS]);
}

/* PowerlinkAttribute */
static UA_INLINE void
UA_PowerlinkAttribute_init(UA_PowerlinkAttribute *p) {
    memset(p, 0, sizeof(UA_PowerlinkAttribute));
}

static UA_INLINE UA_PowerlinkAttribute *
UA_PowerlinkAttribute_new(void) {
    return (UA_PowerlinkAttribute*)UA_new(&UA_TYPES_POWERLINK[UA_TYPES_POWERLINK_POWERLINKATTRIBUTE]);
}

static UA_INLINE UA_StatusCode
UA_PowerlinkAttribute_copy(const UA_PowerlinkAttribute *src, UA_PowerlinkAttribute *dst) {
    return UA_copy(src, dst, &UA_TYPES_POWERLINK[UA_TYPES_POWERLINK_POWERLINKATTRIBUTE]);
}

UA_DEPRECATED static UA_INLINE void
UA_PowerlinkAttribute_deleteMembers(UA_PowerlinkAttribute *p) {
    UA_clear(p, &UA_TYPES_POWERLINK[UA_TYPES_POWERLINK_POWERLINKATTRIBUTE]);
}

static UA_INLINE void
UA_PowerlinkAttribute_clear(UA_PowerlinkAttribute *p) {
    UA_clear(p, &UA_TYPES_POWERLINK[UA_TYPES_POWERLINK_POWERLINKATTRIBUTE]);
}

static UA_INLINE void
UA_PowerlinkAttribute_delete(UA_PowerlinkAttribute *p) {
    UA_delete(p, &UA_TYPES_POWERLINK[UA_TYPES_POWERLINK_POWERLINKATTRIBUTE]);
}

/* PowerlinkErrorEntryDataType */
static UA_INLINE void
UA_PowerlinkErrorEntryDataType_init(UA_PowerlinkErrorEntryDataType *p) {
    memset(p, 0, sizeof(UA_PowerlinkErrorEntryDataType));
}

static UA_INLINE UA_PowerlinkErrorEntryDataType *
UA_PowerlinkErrorEntryDataType_new(void) {
    return (UA_PowerlinkErrorEntryDataType*)UA_new(&UA_TYPES_POWERLINK[UA_TYPES_POWERLINK_POWERLINKERRORENTRYDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_PowerlinkErrorEntryDataType_copy(const UA_PowerlinkErrorEntryDataType *src, UA_PowerlinkErrorEntryDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_POWERLINK[UA_TYPES_POWERLINK_POWERLINKERRORENTRYDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_PowerlinkErrorEntryDataType_deleteMembers(UA_PowerlinkErrorEntryDataType *p) {
    UA_clear(p, &UA_TYPES_POWERLINK[UA_TYPES_POWERLINK_POWERLINKERRORENTRYDATATYPE]);
}

static UA_INLINE void
UA_PowerlinkErrorEntryDataType_clear(UA_PowerlinkErrorEntryDataType *p) {
    UA_clear(p, &UA_TYPES_POWERLINK[UA_TYPES_POWERLINK_POWERLINKERRORENTRYDATATYPE]);
}

static UA_INLINE void
UA_PowerlinkErrorEntryDataType_delete(UA_PowerlinkErrorEntryDataType *p) {
    UA_delete(p, &UA_TYPES_POWERLINK[UA_TYPES_POWERLINK_POWERLINKERRORENTRYDATATYPE]);
}

/* PowerlinkIpAddressDataType */
static UA_INLINE void
UA_PowerlinkIpAddressDataType_init(UA_PowerlinkIpAddressDataType *p) {
    memset(p, 0, sizeof(UA_PowerlinkIpAddressDataType));
}

static UA_INLINE UA_PowerlinkIpAddressDataType *
UA_PowerlinkIpAddressDataType_new(void) {
    return (UA_PowerlinkIpAddressDataType*)UA_new(&UA_TYPES_POWERLINK[UA_TYPES_POWERLINK_POWERLINKIPADDRESSDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_PowerlinkIpAddressDataType_copy(const UA_PowerlinkIpAddressDataType *src, UA_PowerlinkIpAddressDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_POWERLINK[UA_TYPES_POWERLINK_POWERLINKIPADDRESSDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_PowerlinkIpAddressDataType_deleteMembers(UA_PowerlinkIpAddressDataType *p) {
    UA_clear(p, &UA_TYPES_POWERLINK[UA_TYPES_POWERLINK_POWERLINKIPADDRESSDATATYPE]);
}

static UA_INLINE void
UA_PowerlinkIpAddressDataType_clear(UA_PowerlinkIpAddressDataType *p) {
    UA_clear(p, &UA_TYPES_POWERLINK[UA_TYPES_POWERLINK_POWERLINKIPADDRESSDATATYPE]);
}

static UA_INLINE void
UA_PowerlinkIpAddressDataType_delete(UA_PowerlinkIpAddressDataType *p) {
    UA_delete(p, &UA_TYPES_POWERLINK[UA_TYPES_POWERLINK_POWERLINKIPADDRESSDATATYPE]);
}

/* PowerlinkPDOMappingEntryDataType */
static UA_INLINE void
UA_PowerlinkPDOMappingEntryDataType_init(UA_PowerlinkPDOMappingEntryDataType *p) {
    memset(p, 0, sizeof(UA_PowerlinkPDOMappingEntryDataType));
}

static UA_INLINE UA_PowerlinkPDOMappingEntryDataType *
UA_PowerlinkPDOMappingEntryDataType_new(void) {
    return (UA_PowerlinkPDOMappingEntryDataType*)UA_new(&UA_TYPES_POWERLINK[UA_TYPES_POWERLINK_POWERLINKPDOMAPPINGENTRYDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_PowerlinkPDOMappingEntryDataType_copy(const UA_PowerlinkPDOMappingEntryDataType *src, UA_PowerlinkPDOMappingEntryDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_POWERLINK[UA_TYPES_POWERLINK_POWERLINKPDOMAPPINGENTRYDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_PowerlinkPDOMappingEntryDataType_deleteMembers(UA_PowerlinkPDOMappingEntryDataType *p) {
    UA_clear(p, &UA_TYPES_POWERLINK[UA_TYPES_POWERLINK_POWERLINKPDOMAPPINGENTRYDATATYPE]);
}

static UA_INLINE void
UA_PowerlinkPDOMappingEntryDataType_clear(UA_PowerlinkPDOMappingEntryDataType *p) {
    UA_clear(p, &UA_TYPES_POWERLINK[UA_TYPES_POWERLINK_POWERLINKPDOMAPPINGENTRYDATATYPE]);
}

static UA_INLINE void
UA_PowerlinkPDOMappingEntryDataType_delete(UA_PowerlinkPDOMappingEntryDataType *p) {
    UA_delete(p, &UA_TYPES_POWERLINK[UA_TYPES_POWERLINK_POWERLINKPDOMAPPINGENTRYDATATYPE]);
}

/* PowerlinkNMTResetCmdEnumeration */
static UA_INLINE void
UA_PowerlinkNMTResetCmdEnumeration_init(UA_PowerlinkNMTResetCmdEnumeration *p) {
    memset(p, 0, sizeof(UA_PowerlinkNMTResetCmdEnumeration));
}

static UA_INLINE UA_PowerlinkNMTResetCmdEnumeration *
UA_PowerlinkNMTResetCmdEnumeration_new(void) {
    return (UA_PowerlinkNMTResetCmdEnumeration*)UA_new(&UA_TYPES_POWERLINK[UA_TYPES_POWERLINK_POWERLINKNMTRESETCMDENUMERATION]);
}

static UA_INLINE UA_StatusCode
UA_PowerlinkNMTResetCmdEnumeration_copy(const UA_PowerlinkNMTResetCmdEnumeration *src, UA_PowerlinkNMTResetCmdEnumeration *dst) {
    return UA_copy(src, dst, &UA_TYPES_POWERLINK[UA_TYPES_POWERLINK_POWERLINKNMTRESETCMDENUMERATION]);
}

UA_DEPRECATED static UA_INLINE void
UA_PowerlinkNMTResetCmdEnumeration_deleteMembers(UA_PowerlinkNMTResetCmdEnumeration *p) {
    UA_clear(p, &UA_TYPES_POWERLINK[UA_TYPES_POWERLINK_POWERLINKNMTRESETCMDENUMERATION]);
}

static UA_INLINE void
UA_PowerlinkNMTResetCmdEnumeration_clear(UA_PowerlinkNMTResetCmdEnumeration *p) {
    UA_clear(p, &UA_TYPES_POWERLINK[UA_TYPES_POWERLINK_POWERLINKNMTRESETCMDENUMERATION]);
}

static UA_INLINE void
UA_PowerlinkNMTResetCmdEnumeration_delete(UA_PowerlinkNMTResetCmdEnumeration *p) {
    UA_delete(p, &UA_TYPES_POWERLINK[UA_TYPES_POWERLINK_POWERLINKNMTRESETCMDENUMERATION]);
}

/* PowerlinkNMTStateEnumeration */
static UA_INLINE void
UA_PowerlinkNMTStateEnumeration_init(UA_PowerlinkNMTStateEnumeration *p) {
    memset(p, 0, sizeof(UA_PowerlinkNMTStateEnumeration));
}

static UA_INLINE UA_PowerlinkNMTStateEnumeration *
UA_PowerlinkNMTStateEnumeration_new(void) {
    return (UA_PowerlinkNMTStateEnumeration*)UA_new(&UA_TYPES_POWERLINK[UA_TYPES_POWERLINK_POWERLINKNMTSTATEENUMERATION]);
}

static UA_INLINE UA_StatusCode
UA_PowerlinkNMTStateEnumeration_copy(const UA_PowerlinkNMTStateEnumeration *src, UA_PowerlinkNMTStateEnumeration *dst) {
    return UA_copy(src, dst, &UA_TYPES_POWERLINK[UA_TYPES_POWERLINK_POWERLINKNMTSTATEENUMERATION]);
}

UA_DEPRECATED static UA_INLINE void
UA_PowerlinkNMTStateEnumeration_deleteMembers(UA_PowerlinkNMTStateEnumeration *p) {
    UA_clear(p, &UA_TYPES_POWERLINK[UA_TYPES_POWERLINK_POWERLINKNMTSTATEENUMERATION]);
}

static UA_INLINE void
UA_PowerlinkNMTStateEnumeration_clear(UA_PowerlinkNMTStateEnumeration *p) {
    UA_clear(p, &UA_TYPES_POWERLINK[UA_TYPES_POWERLINK_POWERLINKNMTSTATEENUMERATION]);
}

static UA_INLINE void
UA_PowerlinkNMTStateEnumeration_delete(UA_PowerlinkNMTStateEnumeration *p) {
    UA_delete(p, &UA_TYPES_POWERLINK[UA_TYPES_POWERLINK_POWERLINKNMTSTATEENUMERATION]);
}

#if defined(__GNUC__) && __GNUC__ >= 4 && __GNUC_MINOR__ >= 6
# pragma GCC diagnostic pop
#endif

_UA_END_DECLS

#endif /* TYPES_POWERLINK_GENERATED_HANDLING_H_ */
