/*********\
|*ComeBek*| 
\*********/
#include <stdio.h>
#include <string.h>
int my_string_index(char* haystack, char needle){
    int index = 0;
        while (index < strlen(haystack)) {
            if (haystack[index] == needle){
                return index;
            }
            index += 1;
        }
        return -1;
}