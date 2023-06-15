#include "../includes/stringMethodsLib.h"

int indexOf(char* str, char* word) {
    if (!str || !word) return 0;
    int i = 0;
    while (i < strlen(str)) {
        int j = 0;
        while (str[i] == word[j] && word[j] != '\0') {
            j++;
            i++;
        }

        if (word[j] == '\0') {
            return i - strlen(word);
        }
        i++;
    }
    return -1;
}
