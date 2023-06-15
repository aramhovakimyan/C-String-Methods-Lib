#include "../includes/stringMethodsLib.h"

char charAt(const char* str, int index) {
    if (!str) return 0;
    size_t len = strlen(str);
    if (index > len || index < 0)
        return 0;
    return str[index];
}
