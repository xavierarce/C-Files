#include <stdio.h>

int main(void) {
  char operator;
  double number1;
  double number2;
  double result;

  printf("Welcome to the Calculator!\n");
  printf("Would you like to:\n");
  printf("multiply - type(*)\n");
  printf("divide   - type(/)\n");
  printf("sum      - type(+)\n");
  printf("subtract - type(-)\n");

  // Read the user's choice for the operator
  scanf(" %c", &operator);

  printf("Fill as wished (number1) ____ %c (number2) _____\n", operator);
  printf("Number 1 = ");
  scanf("%lf", &number1);
  printf("Number 2 = ");
  scanf("%lf", &number2);

  switch (operator){
  case '*':
    result = number1 * number2;
    break;
  case '/':
    if(number2 != 0) {
      result = number1 / number2;
    } else {
      printf("Cannot Divide By Zero");
      return 1;
    }
    break;
  case '+':
    result = number1 + number2;
    break;
  case '-':
    result = number1 - number2;
    break;
  default:
    printf("Invalid Operator");
    return 1;
  }

  printf("Operator: %c\n", operator);
  printf("Number 1: %lf\n", number1);
  printf("Number 2: %lf\n", number2);
  printf("Result: %lf\n", result);

  return 0;
}
