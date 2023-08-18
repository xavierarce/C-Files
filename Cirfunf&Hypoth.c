#include <stdio.h>
#include <math.h>


int main(void){

  //! Calculador de Cirfunferencia

  const double PI = 3.14159;
  double radius;
  double circumference;
  double area;

  printf("Circunmference Calculator! \n")
  printf("Enter the radius of a circle: ");
  scanf("%lf",&radius);

  circumference = 2 * PI * radius;
  area = PI* radius * radius;

  printf("Circumference %lf \n", circumference);
  printf("Area %lf \n", area);

  
  //! Calculador de Hypotenusa

  double A;
  double B;
  double C;

  printf("Hypothenus Calculator")

  printf("Enter side A: ");
  scanf("%lf", &A);
  printf("Enter side B: ");
  scanf("%lf", &B);

  C = sqrt((A*A)+(B*B));

  printf("Hypothenus of Triangle is = %lf",C);


  return 0;
}