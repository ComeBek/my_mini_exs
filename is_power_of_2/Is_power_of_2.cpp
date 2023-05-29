/*********\
|*ComeBek*| 
\*********/
int is_power_of_(int& param_1)
{
	int InitValue = 1;
  		while (InitValue < param_1){
    		InitValue *= 2;
  		if (InitValue == param_1)
    		return 1;
        }
  return 0;
          
}