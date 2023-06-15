#include "../includes/stringMethodsLib.h"

int endsWith(char* str, const char* suffix) {
    if (!str || !suffix) return 0;
    int strLen = strlen(str);
    int suffixLen = strlen(suffix);
    char *tmp = str + (strLen - suffixLen);
    for (int i = 0; i < suffixLen; ++i) {
        if (tmp[i] != suffix[i]) {
            return 0;
        }
    }
    return 1;
}
