#include "../includes/stringMethodsLib.h"

int lastIndexOf(char* str, char* word) {
    if (!str || !word) return 0;
    int i = 0;
    int res = -1;
    while (i < strlen(str)) {
        int j = 0;
        while (str[i] == word[j] && word[j] != '\0') {
            j++;
            i++;
        }

        if (word[j] == '\0') {
            res = i - strlen(word);
        }
        i++;
    }
    return res;
}
