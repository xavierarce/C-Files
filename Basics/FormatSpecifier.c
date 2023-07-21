#include <stdio.h>

int main(void){
  //Format Specifier %

  //%c = character
  //%s =string
  //%f = float
  //%lf = double float
  //%d = integrer

  //%.1 = decimal precision
  //%1 = minimum field width
  //%- = left align

  float item1 = 5.13;
  float item2 = 10.00;
  float item3 = 100.99;

  printf("Item 1: $%-8.2f n\n", item1);
  printf("Item 2: $%-8.2f n\n", item2);
  printf("Item 3: $%-8.2f n\n", item3);

  return 0;

}