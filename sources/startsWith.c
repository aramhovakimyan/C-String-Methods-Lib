#include "../includes/stringMethodsLib.h"

int startsWith(char* str, char* search) {
    if (str == NULL || search == NULL) {
        return 0;
    }
    int strLen = strlen(str);
    int searchLen = strlen(search);
    if (searchLen > strLen) {
        return 0;
    }
    for (int i = 0; i < searchLen; ++i) {
        if (str[i] != search[i]) {
            return 0;
        }
    }
    return 1;
}

