#include <stdio.h>

void salutation(int n){
  for (int i = 0; i < n; i++) {
    printf("\nHola nina");
    printf("\n Que onda wacho ");
    printf("\nHola nife");
    }
}

void greet(char z[], int y){
  printf("Hello Im %s\nNice to meet you!\n",z);
  printf("Im %d years old",y);
}

double square(double x){
  return x*x;
}
double square1(double x){
  double result = x*x;
  printf("\nResult Square1 = %lf",result);
}

int main(void){

  salutation(2);

  char z[] = "Xavi";
  int y = 21;
  greet(z, y);
  
  greet("Xavi", 21);

  double x = square(3.14);
  printf("\nResult Square= %lf",x);

  square1(3.2);

  return 0;
}