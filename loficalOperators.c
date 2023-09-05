#include <stdio.h>
#include <stdbool.h>

int main(void){

  float temp = 100 ;  
  bool sunny = 1; 

  //! && Operator
  if(temp >= 0 && temp <=35 || sunny==true){
    printf("\nWeatdher is good");
  }else{
    (printf("\nCatastrofic man!"));
  }

  //! || Or Operator
  if(temp >= 35 || temp <=0 ){
    printf("\nWeather is bad");
  }else{
    (printf("\n Weather good!"));
  }

  //! ! not operator
    if(!sunny){
    printf("\nits cloudy outside");
    }else{
    printf("\nits not cloudy outside");
    }


  return 0;
}