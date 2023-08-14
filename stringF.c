#include <stdio.h>
#include <string.h>

int main(){

  char string1[] = "Xavi";
  char string2[] = "Pro";
  
  // strlwr(string1);
  // strupr(string1);
  // strcat(string1,string2);
  // strncat(string1, string2, 1);
  // strcpy(string1, string2);
  // strncpy(string1, string2,1);

  // strset(string1,'?');
  // strnset(string1,'?',1);
  strrev(string1);
  printf("\n%s",string1);


  int result = strlen(string1);

  printf("\n%d",result);


  return 0;
}