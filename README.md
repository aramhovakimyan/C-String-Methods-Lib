
C-StringMethodsLib
==================

C-StringMethodsLib is a library that provides various string manipulation functions in C. It offers functionalities similar to those found in JavaScript's string methods.

Functions
---------

1. `split(char const *s, char c)`: Splits a string `s` into an array of substrings based on the delimiter `c`.

2. `subString(char* str, int start, int end)`: Extracts a portion of the string `str` starting from the `start` index up to the `end` index.

3. `concat(char* str1, char* str2)`: Concatenates two strings `str1` and `str2` into a single string.

4. `toLowerCase(char* str)`: Converts all characters in the string `str` to lowercase.

5. `toUpperCase(char* str)`: Converts all characters in the string `str` to uppercase.

6. `padEnd(char* str, int size, char sym)`: Pads the string `str` with the character `sym` at the end, making it `size` characters long.

7. `padStart(char* str, int size, char sym)`: Pads the string `str` with the character `sym` at the start, making it `size` characters long.

8. `repeat(char* str, int count)`: Repeats the string `str` `count` number of times.

9. `slice(char* str, int index)`: Extracts a portion of the string `str` starting from the `index` position to the end of the string.

10. `charCodeAt(const char* str, int index)`: Retrieves the ASCII value of the character at the specified `index` in the string `str`.

11. `at(const char* str, int index)`: Retrieves the character at the specified `index` in the string `str`.

12. `charAt(const char* str, int index)`: Retrieves the character at the specified `index` in the string `str`.

13. `endsWith(char* str, const char* suffix)`: Checks if the string `str` ends with the specified `suffix`.

14. `includes(char* str, char* word)`: Checks if the string `str` contains the substring `word`.

15. `indexOf(char* str, char* word)`: Returns the index of the first occurrence of the substring `word` in the string `str`.

16. `lastIndexOf(char* str, char* word)`: Returns the index of the last occurrence of the substring `word` in the string `str`.

17. `startsWith(char* str, char* search)`: Checks if the string `str` starts with the specified `search` string.


Usage
-----

1. Include the `CStringMethodsLib.h` header file in your C program.

2. Link your program with the `CStringMethodsLib` library.

3. Call the desired string manipulation functions provided by the library.


Example
-------

Here's an example of how to use the `toLowerCase` function:

```c
#include <stdio.h>
#include "CStringMethodsLib.h"

int main() {
    char str[] = "Hello, World!";
    toLowerCase(str);
    printf("Result: %s\n", str);
    return 0;
}

This program converts the string "Hello, World!" to lowercase using the `toLowerCase` function and prints the result.