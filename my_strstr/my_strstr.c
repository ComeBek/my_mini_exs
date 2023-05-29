/*********\
|*ComeBek*| 
\*********/
#include <stdio.h>
#include <string.h>
#include <stddef.h>

char* my_strstr(char* param_1, char* param_2){
char* a = param_1, *b = param_2;
for(;;){
    if(!*b) return(char*)param_1;
    if(!*a) return 0;
    if(*a++ != *b++){a = ++param_1; b = param_2;}
}
}


// char* my_strstr(char* param_1, char* param_2){
// int i;
//     if(param_1[0] != '\0'){
//     i = 0;
//         while(param_2[i] != '\0'){
//             if(param_2[i] != param_1[i]){
//                 return(my_strstr(param_1 + 1 , param_2));
//                 i++;
//             }
//         }
//         return param_1;
//     }else
//         return 0;
// }