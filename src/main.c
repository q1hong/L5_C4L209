#include <stdio.h>
#include "json.h"


int main() {
    cJSON *json = generar_json();
    char *json_str = cJSON_Print(json);
    
    // Escribir en archivo
    FILE *f = fopen("datos.json", "w");
    if (f) {
        fprintf(f, "%s", json_str);
        fclose(f);
        printf("JSON guardado en datos.json\n");
    } else {
        printf("Error creando archivo\n");
    }
    
    free(json_str);
    cJSON_Delete(json);
    return 0;
}