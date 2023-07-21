#include <stdio.h>

int main(void){
    //! Constant = fixed value that can not be altered
  const float PI = 3.14159;

  //* PI = 4.321; not possible cause its constant

  printf("%f\n",PI);

    //! Arithmetic Operators
  int x = 5;
  int y = 2;
  // int x = 5;
  // float y = 2;

  float z = x *y;
  z = x/ (float) y; //division //!CAUTION
  z = x % y; //(modulus)
  z++; //Augmentation
  z--; // Substraction

  printf("%f\n",z);

    //!Augmented assigment operator
    int q = 10;
    q+=2;
    q-=5;
    q*=2;
    q/=2;
    q%=2;


  printf("%d\n",q);


  return 0;


}