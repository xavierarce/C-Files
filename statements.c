#include <stdio.h>

int main(void){
  int age;

  printf("How old are you? ");
  scanf("%d",&age);

  if(age >= 18 && age <=99){
    printf("You can drive!");
  }else if(age >= 100){
    printf("You are super old!");
  }else if(age==0){
    printf("You just borned");
  }else if(age <=0){
    printf("You arent born yet!");
  }else{
    printf("You are under age!");
  }

  return 0;
}