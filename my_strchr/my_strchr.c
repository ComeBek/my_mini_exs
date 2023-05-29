/*********\
|*ComeBek*| 
\*********/
#include <stdio.h>
#include <stddef.h>
char* my_strchr(char* param_1, char param_2)
{
    for(int i = 0; param_1[i] != '\0'; i++){
      if (param_1[i] == param_2){
        return &param_1[i];
        }
    } 
    return 0;
}