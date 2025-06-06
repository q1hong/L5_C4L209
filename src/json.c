#include "json.h"

cJSON* generar_json() {
    cJSON *root = cJSON_CreateObject();
    cJSON_AddStringToObject(root, "nombre", "qihong");
    cJSON_AddNumberToObject(root, "edad", 19);
    cJSON_AddStringToObject(root, "carnet", "C4L209");
    cJSON_AddBoolToObject(root, "estudiante activo", 1);
    return root;
}