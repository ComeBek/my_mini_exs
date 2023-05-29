/*********\
|*ComeBek*| 
\*********/
char* my_strrchr(char* param_1, char param_2){
    char *strrchr = 0;
    if(param_1 != 0){
        do{
            if(*param_1 == param_2){
                strrchr = param_1;
            }
        }
        while(*param_1++);
    }
    return strrchr;
}