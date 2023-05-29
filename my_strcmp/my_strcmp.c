/*********\
|*ComeBek*| 
\*********/
int my_strcmp(char* param_1, char* param_2){
    int sum1 = 0, sum2 = 0;
    for(int i = 0; param_1[i] != '\0'; i++){
        sum1 = sum1 + param_1[i];
    }
    for(int i = 0; param_2[i] != '\0'; i++){
        sum2 = sum2 + param_2[i];
    }
    if (sum1 < sum2){
        return 1;
    }else if (sum1 > sum2) {
        return -1;
    }else{
        return 0;
    }
}