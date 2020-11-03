/* This work is licensed under a Creative Commons CCZero 1.0 Universal License.
 * See http://creativecommons.org/publicdomain/zero/1.0/ for more information.
 *
 *    Copyright 2018 (c) Jose Cabral, fortiss GmbH
 */

#ifndef ARCH_COMMON_FREERTOS62541_H_
#define ARCH_COMMON_FREERTOS62541_H_

#include <stdlib.h>
#include <string.h>

#ifdef BYTE_ORDER
# undef BYTE_ORDER
#endif

#define UA_sleep_ms(X) vTaskDelay(pdMS_TO_TICKS(X))

#ifdef OPEN62541_FEERTOS_USE_OWN_MEM
#define USE_SDRAM 1
//# define UA_free vPortFree
#if USE_SDRAM == 1
# define UA_free UA_free_helper
# define UA_malloc pvPortMalloc
# define UA_mallocSDRAM pvPortMallocSDRAM
# define UA_calloc pvPortCalloc
# define UA_callocSDRAM pvPortCallocSDRAM
# define UA_realloc pvPortRealloc
# define UA_reallocSDRAM pvPortReallocSDRAM
#else
# define UA_free vPortFree
# define UA_malloc pvPortMalloc
# define UA_mallocSDRAM pvPortMalloc
# define UA_calloc pvPortCalloc
# define UA_callocSDRAM pvPortCalloc
# define UA_realloc pvPortRealloc
# define UA_reallocSDRAM pvPortRealloc
#endif // USE_SDRAM
#else
# define UA_free free
# define UA_malloc malloc
# define UA_calloc calloc
# define UA_realloc realloc
#endif

// No log colors on freeRTOS
// #define UA_ENABLE_LOG_COLORS

#include <stdio.h>
#define UA_snprintf snprintf

#define UA_LOG_SOCKET_ERRNO_WRAP(LOG) { \
    char *errno_str = ""; \
    LOG; \
}

#endif /* ARCH_COMMON_FREERTOS62541_H_ */
