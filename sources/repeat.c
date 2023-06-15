#include "../includes/stringMethodsLib.h"

char* repeat(char* str, int count) {
    if (!str) return NULL;
    if (!count) return "";
    int len  = strlen(str);
    char* res = (char*)malloc(count * len + 1);
    if (!res) return NULL;
    int i = 0;
    for (int i = 0; i < count; i++) {
        for (size_t j = 0; j < len; j++) {
            res[(i * len) + j] = str[j];
        }
    }
    res[count * len] = '\0';
    return res; 
}
