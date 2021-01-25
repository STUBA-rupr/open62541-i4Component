

#pragma warning(disable : 4996)

#include "namespace_i4aas_generated.h"
#include "namespace_instance_generated.h"
#include "open62541.h"


#include <netioapi.h>
#include <signal.h>
#include <stdlib.h>

//#include "myNS.h"

#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN
#endif

#pragma comment(lib, "Ws2_32.lib")
#pragma comment(lib, "Iphlpapi.lib")

UA_ServerConfig *config;
UA_Server *server;

UA_Boolean running = true;
static void
stopHandler(int sig) {
    UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND, "received ctrl-c");
    running = false;
}

int main() {
    int retval;
    UA_UInt16 ns[2];

    // Allows to set smaller buffer for the connections, which can cause problems
    UA_UInt32 sendBufferSize = 16000;  // 64 KB was too much for my platform
    UA_UInt32 recvBufferSize = 16000;  // 64 KB was too much for my platform

    UA_Server *server = UA_Server_new();
	UA_ServerConfig *config = UA_Server_getConfig(server);
	retval = UA_ServerConfig_setMinimalCustomBuffer(config, 9696, 0, sendBufferSize, recvBufferSize);

    // VERY IMPORTANT: Set the hostname with your IP before allocating the server
        UA_ServerConfig_setCustomHostname(config, UA_STRING("192.168.0.13"));

        // add a variable node to the adresspace
        /*
        UA_VariableAttributes attr = UA_VariableAttributes_default;
        UA_Int32 myInteger = 42;
        UA_Variant_setScalarCopy(&attr.value, &myInteger, &UA_TYPES[UA_TYPES_INT32]);
        attr.description = UA_LOCALIZEDTEXT_ALLOC("en-US", "the answer");
        attr.displayName = UA_LOCALIZEDTEXT_ALLOC("en-US", "the answer");
        UA_NodeId myIntegerNodeId = UA_NODEID_STRING_ALLOC(1, "the.answer");
        UA_QualifiedName myIntegerName = UA_QUALIFIEDNAME_ALLOC(1, "the answer");
        UA_NodeId parentNodeId = UA_NODEID_NUMERIC(0, UA_NS0ID_OBJECTSFOLDER);
        UA_NodeId parentReferenceNodeId = UA_NODEID_NUMERIC(0, UA_NS0ID_ORGANIZES);
        UA_Server_addVariableNode(server, myIntegerNodeId, parentNodeId,
                                  parentReferenceNodeId, myIntegerName, UA_NODEID_NULL,
                                  attr, NULL, NULL);

  
        UA_VariableAttributes_clear(&attr);
        UA_NodeId_clear(&myIntegerNodeId);
        UA_QualifiedName_clear(&myIntegerName);
        */

   


    retval |= namespace_i4aas_generated(server);
    if(retval != UA_STATUSCODE_GOOD) {
        UA_LOG_ERROR(UA_Log_Stdout, UA_LOGCATEGORY_SERVER,
                     "Adding the namespace_i4aas_generated namespace failed. Please check previous "
                     "error output.");
        UA_Server_delete(server);
        return (int)UA_STATUSCODE_BADUNEXPECTEDERROR;
    }

    retval |= namespace_instance_generated(server);
    if(retval != UA_STATUSCODE_GOOD) {
        UA_LOG_ERROR(UA_Log_Stdout, UA_LOGCATEGORY_SERVER,
                     "Adding the namespace_instance_generated namespace failed. Please "
                     "check previous "
                     "error output.");
        UA_Server_delete(server);
        return (int)UA_STATUSCODE_BADUNEXPECTEDERROR;
    }

    // Add method call backs
    

    /*#if defined(UA_ENABLE_METHODCALLS) && defined(UA_ENABLE_SUBSCRIPTIONS)
            retval |= UA_Server_setMethodNode_callback(server,
                    UA_NODEID_NUMERIC(ns[1], 7003), ToggleLD3);
            retval |= UA_Server_setMethodNode_callback(server,
                    UA_NODEID_NUMERIC(ns[1], 7004), ToggleLD2);
    #endif*/

    // let know UA sever is ready to run

    retval = UA_Server_run(server, &running);

   

    UA_Server_delete(server);
}
