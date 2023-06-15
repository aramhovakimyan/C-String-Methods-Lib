#include "../includes/stringMethodsLib.h"

char* concat(char* str1, char* str2) {
    if (!str1) return str2;
    if (!str2) return str1;
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    char* res = (char*)malloc(len1 + len2 + 1);
    if (!res) return NULL;
    int k = 0;
    for (int i = 0; i < len1; ++i) {
        res[k] = str1[i];
        ++k;
    }
    for (int i = 0; i < len2; ++i) {
        res[k] = str2[i];
        ++k;
    }
    res[k] = '\0';
    return res;
}
