#include "../includes/stringMethodsLib.h"

char* padEnd(char* str, int size, char sym) {
    if (!str) return NULL;
    if (!size) return str;
    char* res = (char*)malloc(size);
    if (!res) return NULL;
    for (int i = 0; i < strlen(str); ++i) {
        res[i] = str[i];
    }
    for (int i = strlen(str); i < size; ++i) {
        res[i] = sym;
    }
    res[size] = '\0';
    return res; 
}
