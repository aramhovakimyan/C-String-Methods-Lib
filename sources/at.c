#include "../includes/stringMethodsLib.h"

char at(const char* str, int index) {
    if (!str) return 0;
    int len = strlen(str);
    if (index > len)
        return 0;
    if (index < 0)
        return str[len - (-1 * index)];
    return str[index];
}
