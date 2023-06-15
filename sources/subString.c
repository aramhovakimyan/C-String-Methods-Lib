#include "../includes/stringMethodsLib.h"

char* subString(char* str, int start, int end) {
    if (!str || start > end) return NULL;
    int len  = strlen(str);
    if(start < 0 || end > len) return NULL;
    char* res = (char*)malloc(end - start + 1);
    if (!res) return NULL;
    for (int i = start, k = 0; i < end; ++i, ++k) {
        res[k] = str[i];
    }
    res[end] = '\0';
    return res;
}
