#include "../includes/stringMethodsLib.h"

char charCodeAt(const char* str, int index) {
    if (!str) return 0;
    int len = strlen(str);
    if (index > 127 || index < -128)
        return 0;
    for (int i = 0; i < len; ++i) {
        if (str[i] == index)
            return str[i];
    }
    return 0;
}
