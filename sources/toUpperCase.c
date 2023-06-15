#include "../includes/stringMethodsLib.h"

char* toUpperCase(char* str) {
    if (!str) return NULL;
    int len = strlen(str);
    char* res = (char*)malloc(len + 1);
    if (!res) return NULL;
    for (int i = 0; i < len; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            res[i] = str[i] - 32;
        } else {
            res[i] = str[i];
        }
    }
    res[len] = '\0';
    return res;
}
