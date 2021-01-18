/* Generated from Opc.Ua.POWERLINK.NodeSet2.bsd with script C:/Projects/open62541-i4Component/tools/generate_datatypes.py * on host VM-WIN16-FEI by user rudolf at 2021-01-18 02:59:41 */

#ifndef TYPES_POWERLINK_GENERATED_H_
#define TYPES_POWERLINK_GENERATED_H_

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
#define UA_TYPES_POWERLINK_COUNT 7
extern UA_EXPORT const UA_DataType UA_TYPES_POWERLINK[UA_TYPES_POWERLINK_COUNT];

/**
 * ErrorRegisterBits
 * ^^^^^^^^^^^^^^^^^
 * Represents the values of the POWERLINK ErrorRegister  */
typedef struct {
    UA_ByteString value;
    UA_ByteString validBits;
} UA_ErrorRegisterBits;

#define UA_TYPES_POWERLINK_ERRORREGISTERBITS 0

/**
 * PowerlinkAttribute
 * ^^^^^^^^^^^^^^^^^^
 * Represents the POWERLINK entry attributes */
typedef struct {
    UA_ByteString value;
    UA_ByteString validBits;
} UA_PowerlinkAttribute;

#define UA_TYPES_POWERLINK_POWERLINKATTRIBUTE 1

/**
 * PowerlinkErrorEntryDataType
 * ^^^^^^^^^^^^^^^^^^^^^^^^^^^
 * Represents the entries of the POWERLINK Object ERR_History_ADOM (Object 1003h, SubIndex 1..254) */
typedef struct {
    UA_UInt16 entryType;
    UA_UInt16 errorCode;
    UA_UInt64 timeStamp;
    UA_UInt64 additionalInformation;
} UA_PowerlinkErrorEntryDataType;

#define UA_TYPES_POWERLINK_POWERLINKERRORENTRYDATATYPE 2

/**
 * PowerlinkIpAddressDataType
 * ^^^^^^^^^^^^^^^^^^^^^^^^^^
 * Structure DataType PowerlinkIpAddressDataType to represent POWERLINK Objects of the POWERLINK data type IP_ADDRESS */
typedef struct {
    UA_Byte b1;
    UA_Byte b2;
    UA_Byte b3;
    UA_Byte b4;
} UA_PowerlinkIpAddressDataType;

#define UA_TYPES_POWERLINK_POWERLINKIPADDRESSDATATYPE 3

/**
 * PowerlinkPDOMappingEntryDataType
 * ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
 * Structure DataType PowerlinkPDOMappingEntryDataType to represent the entries of POWERLINK Objects like PDO_RxCommParam_00h_REC */
typedef struct {
    UA_UInt16 length;
    UA_UInt16 offset;
    UA_Byte reserved;
    UA_Byte subIndex;
    UA_UInt16 index;
} UA_PowerlinkPDOMappingEntryDataType;

#define UA_TYPES_POWERLINK_POWERLINKPDOMAPPINGENTRYDATATYPE 4

/**
 * PowerlinkNMTResetCmdEnumeration
 * ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
 * This DataType is an Enumeration that represents the NMT reset commands for POWERLINK */
typedef enum {
    UA_POWERLINKNMTRESETCMDENUMERATION_NMTRESETNODE = 40,
    UA_POWERLINKNMTRESETCMDENUMERATION_NMTRESETCOMMUNICATION = 41,
    UA_POWERLINKNMTRESETCMDENUMERATION_NMTRESETCONFIGURATION = 42,
    UA_POWERLINKNMTRESETCMDENUMERATION_NMTSWRESET = 43,
    UA_POWERLINKNMTRESETCMDENUMERATION_NMTINVALIDSERVICE = 255,
    __UA_POWERLINKNMTRESETCMDENUMERATION_FORCE32BIT = 0x7fffffff
} UA_PowerlinkNMTResetCmdEnumeration;
UA_STATIC_ASSERT(sizeof(UA_PowerlinkNMTResetCmdEnumeration) == sizeof(UA_Int32), enum_must_be_32bit);

#define UA_TYPES_POWERLINK_POWERLINKNMTRESETCMDENUMERATION 5

/**
 * PowerlinkNMTStateEnumeration
 * ^^^^^^^^^^^^^^^^^^^^^^^^^^^^
 * This DataType is an enumeration that represents the NMT State */
typedef enum {
    UA_POWERLINKNMTSTATEENUMERATION_NMT_GS_OFF = 0,
    UA_POWERLINKNMTSTATEENUMERATION_NMT_GS_INITIALISING = 25,
    UA_POWERLINKNMTSTATEENUMERATION_NMT_GS_RESET_APPLICATION = 41,
    UA_POWERLINKNMTSTATEENUMERATION_NMT_GS_RESET_COMMUNICATION = 57,
    UA_POWERLINKNMTSTATEENUMERATION_NMT_GS_RESET_CONFIGURATION = 121,
    UA_POWERLINKNMTSTATEENUMERATION_NMT_XS_NOT_ACTIVE = 28,
    UA_POWERLINKNMTSTATEENUMERATION_NMT_XS_PRE_OPERATIONAL_1 = 29,
    UA_POWERLINKNMTSTATEENUMERATION_NMT_XS_PRE_OPERATIONAL_2 = 93,
    UA_POWERLINKNMTSTATEENUMERATION_NMT_XS_READY_TO_OPERATE = 109,
    UA_POWERLINKNMTSTATEENUMERATION_NMT_XS_OPERATIONAL = 253,
    UA_POWERLINKNMTSTATEENUMERATION_NMT_CS_STOPPED = 77,
    UA_POWERLINKNMTSTATEENUMERATION_NMT_XS_BASIC_ETHERNET = 30,
    __UA_POWERLINKNMTSTATEENUMERATION_FORCE32BIT = 0x7fffffff
} UA_PowerlinkNMTStateEnumeration;
UA_STATIC_ASSERT(sizeof(UA_PowerlinkNMTStateEnumeration) == sizeof(UA_Int32), enum_must_be_32bit);

#define UA_TYPES_POWERLINK_POWERLINKNMTSTATEENUMERATION 6


_UA_END_DECLS

#endif /* TYPES_POWERLINK_GENERATED_H_ */
