#include "query_helper.h"

void printf_variant_value(UA_Variant *pUA_Variant)
{
    UA_Int32 val_int32;
    UA_String *val_string;
    switch (pUA_Variant->type->typeId.identifier.numeric)
    {
    case UA_NS0ID_INT32:        
        UA_Int32_init(&val_int32);
        UA_Int32_copy(pUA_Variant->data, &val_int32);
        printf("\tvalue: %d\n", val_int32);
        break;
    case UA_NS0ID_STRING:
        val_string = UA_String_new(); // calloc
        UA_String_init(val_string); // memset 0
        UA_String_copy(pUA_Variant->data, val_string); // calloc UA_string.data
        printf("\tvalue: %.*s\n", val_string->length, val_string->data);
        UA_String_delete(val_string); // free pointer & data
        break;
        default:
            ;
    }
}
