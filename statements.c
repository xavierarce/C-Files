#include <stdio.h>

int main(void){

  //! IF && ELSE IF STATEMENT

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

  //! SWITCH STATEMENT

  char grade;

  printf("\nPlease enter your grade: ");
  scanf("%c",&grade); //!Leave an space

  //? Alternative
  //? scanf("%c", &grade);
  //? getchar(); // This will read the enter key that was pressed after the grade was entered.


  switch (grade){
  case 'A':
    printf("Perfect");
    break;
  case 'B':
    printf("Good");
    break;
  case 'C':
    printf("You Okay?");
    break;
  case 'D':
    printf("For real!?!?");
    break;
  case 'F':
    printf("EXPELLED!!!");
    break;
    default:
  printf("Please enter a valid grade");
  }

  return 0;
}