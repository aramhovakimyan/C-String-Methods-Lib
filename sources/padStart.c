#include "../includes/stringMethodsLib.h"

char* padStart(char* str, int size, char sym) {
    if (!str) return NULL;
    if (!size) return str;
    char* res = (char*)malloc(size);
    if (!res) return NULL;
    for (int i = 0; i < size - strlen(str); ++i) {
        res[i] = sym;
    }
    for (int i = strlen(str), k = 0; i < size; ++i, ++k) {
        res[i] = str[k];
    }
    res[size] = '\0';
    return res; 
}
