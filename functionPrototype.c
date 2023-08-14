#include <stdio.h>

void hello(int,char[]); //! Function prototype : Ensures number and types of arguments

int main(){

  char name[] = "Joseph";
  int age = 18;

  hello(age,name);

  hello(18,"Xavier");

  return 0;
}


void hello(int age, char name[]){
  printf("\n Hello %s you are %d years old",name, age);
}
