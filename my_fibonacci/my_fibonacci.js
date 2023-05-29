/*********\
|*ComeBek*| 
\*********/
function my_fibonacci(param_1) {
    const fibarray =[0,1];
    for (let i=2; i<=param_1; i++){
      fibarray.push(fibarray[i-2] + fibarray[i-1]);
      
    }
    return fibarray[param_1];
  }