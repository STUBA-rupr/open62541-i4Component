/* Generated from Custom.Opc.Ua.Transport.bsd with script C:/Projects/open62541-i4Component/tools/generate_datatypes.py * on host VM-WIN16-FEI by user rudolf at 2021-01-19 07:00:15 */

#ifndef TRANSPORT_GENERATED_H_
#define TRANSPORT_GENERATED_H_

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
#define UA_TRANSPORT_COUNT 9
extern UA_EXPORT const UA_DataType UA_TRANSPORT[UA_TRANSPORT_COUNT];

/**
 * MessageType
 * ^^^^^^^^^^^
 * Message Type and whether the message contains an intermediate chunk */
typedef enum {
    UA_MESSAGETYPE_ACK = 0x4B4341,
    UA_MESSAGETYPE_HEL = 0x4C4548,
    UA_MESSAGETYPE_MSG = 0x47534D,
    UA_MESSAGETYPE_OPN = 0x4E504F,
    UA_MESSAGETYPE_CLO = 0x4F4C43,
    UA_MESSAGETYPE_ERR = 0x525245,
    UA_MESSAGETYPE_INVALID = 0x0,
    __UA_MESSAGETYPE_FORCE32BIT = 0x7fffffff
} UA_MessageType;
UA_STATIC_ASSERT(sizeof(UA_MessageType) == sizeof(UA_Int32), enum_must_be_32bit);

#define UA_TRANSPORT_MESSAGETYPE 0

/**
 * ChunkType
 * ^^^^^^^^^
 * Type of the chunk */
typedef enum {
    UA_CHUNKTYPE_FINAL = 0x46000000,
    UA_CHUNKTYPE_INTERMEDIATE = 0x43000000,
    UA_CHUNKTYPE_ABORT = 0x41000000,
    __UA_CHUNKTYPE_FORCE32BIT = 0x7fffffff
} UA_ChunkType;
UA_STATIC_ASSERT(sizeof(UA_ChunkType) == sizeof(UA_Int32), enum_must_be_32bit);

#define UA_TRANSPORT_CHUNKTYPE 1

/**
 * TcpMessageHeader
 * ^^^^^^^^^^^^^^^^
 * TCP Header */
typedef struct {
    UA_UInt32 messageTypeAndChunkType;
    UA_UInt32 messageSize;
} UA_TcpMessageHeader;

#define UA_TRANSPORT_TCPMESSAGEHEADER 2

/**
 * TcpHelloMessage
 * ^^^^^^^^^^^^^^^
 * Hello Message */
typedef struct {
    UA_UInt32 protocolVersion;
    UA_UInt32 receiveBufferSize;
    UA_UInt32 sendBufferSize;
    UA_UInt32 maxMessageSize;
    UA_UInt32 maxChunkCount;
    UA_String endpointUrl;
} UA_TcpHelloMessage;

#define UA_TRANSPORT_TCPHELLOMESSAGE 3

/**
 * TcpAcknowledgeMessage
 * ^^^^^^^^^^^^^^^^^^^^^
 * Acknowledge Message */
typedef struct {
    UA_UInt32 protocolVersion;
    UA_UInt32 receiveBufferSize;
    UA_UInt32 sendBufferSize;
    UA_UInt32 maxMessageSize;
    UA_UInt32 maxChunkCount;
} UA_TcpAcknowledgeMessage;

#define UA_TRANSPORT_TCPACKNOWLEDGEMESSAGE 4

/**
 * TcpErrorMessage
 * ^^^^^^^^^^^^^^^
 * Error Message */
typedef struct {
    UA_UInt32 error;
    UA_String reason;
} UA_TcpErrorMessage;

#define UA_TRANSPORT_TCPERRORMESSAGE 5

/**
 * AsymmetricAlgorithmSecurityHeader
 * ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
 * Asymmetric Security Header */
typedef struct {
    UA_ByteString securityPolicyUri;
    UA_ByteString senderCertificate;
    UA_ByteString receiverCertificateThumbprint;
} UA_AsymmetricAlgorithmSecurityHeader;

#define UA_TRANSPORT_ASYMMETRICALGORITHMSECURITYHEADER 6

/**
 * SymmetricAlgorithmSecurityHeader
 * ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
 * Symmetric Security Header */
typedef struct {
    UA_UInt32 tokenId;
} UA_SymmetricAlgorithmSecurityHeader;

#define UA_TRANSPORT_SYMMETRICALGORITHMSECURITYHEADER 7

/**
 * SequenceHeader
 * ^^^^^^^^^^^^^^
 * Secure Layer Sequence Header */
typedef struct {
    UA_UInt32 sequenceNumber;
    UA_UInt32 requestId;
} UA_SequenceHeader;

#define UA_TRANSPORT_SEQUENCEHEADER 8


_UA_END_DECLS

#endif /* TRANSPORT_GENERATED_H_ */
