/*********\
|*ComeBek*| 
\*********/
function my_recursive_pow(param_1, param_2) {
    if (param_2 == 1){
      return param_1;
    }else{
      return param_1 * my_recursive_pow(param_1, param_2 - 1);
    }
  
  };