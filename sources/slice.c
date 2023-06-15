#include "../includes/stringMethodsLib.h"

char* slice(char* str, int index) {
    if (!str) return 0;
    int len = strlen(str);
    if (index <= 0 || index > len) return str;
    return str + index;
}
