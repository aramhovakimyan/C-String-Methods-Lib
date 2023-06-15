#ifndef STRING_METHODS_LIB_H
#define STRING_METHODS_LIB_H

#include <stdlib.h>
#include <string.h>

char**  split(char const *s, char c);
char*   subString(char* str, int start, int end);
char*   concat(char* str1, char* str2);
char*   toLowerCase(char* str);
char*   toUpperCase(char* str);
char*   padEnd(char* str, int size, char sym);
char*   padStart(char* str, int size, char sym);
char*   repeat(char* str, int count);
char*   slice(char* str, int index);
char    charCodeAt(const char* str, int index);
char    at(const char* str, int index);
char    charAt(const char* str, int index);
int     endsWith(char* str, const char* suffix);
int     includes(char* str, char* word);
int     indexOf(char* str, char* word);
int     lastIndexOf(char* str, char* word);
int     startsWith(char* str, char* search);

#endif
