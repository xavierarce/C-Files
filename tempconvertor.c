#include <stdio.h>
#include <ctype.h>

int main (void){
  
  char unit;
  float temp;

  printf("\n Is the temp. in F or C?: ");
  scanf("%c",&unit);

  unit = toupper(unit);

  if(unit=='C'){
    printf("Enter the temp in Celcius: ");
    scanf("%f",&temp);
    temp = (temp*9/5)+32;
    printf("The temp. in Farenheit is %.1f",temp);
  }else if(unit=='F'){
    printf("Temp is currently in Farenheit: ");
    scanf("%f",&temp);
    temp = ((temp-32)*5)/9;
    printf("The temp. in Farenheit is %.1f",temp);
  } else{
    printf("\n %c not a valid mesuarement unit",unit);
  }

  return 0;
}