#include "../includes/stringMethodsLib.h"

int includes(char* str, char* word) {
    if (!str || !word) return 0;
    int i = 0;
    while (i < strlen(str)) {
        int j = 0;
        while (str[i] == word[j] && word[j] != '\0') {
            j++;
            i++;
        }

        if (word[j] == '\0') {
            return 1;
        }
        i++;
    }
    return 0;
}
