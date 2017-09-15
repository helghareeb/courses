//بسم الله الرحمن الرحيم

// Character Arrays Example
#include <stdio.h>

int main(void){
  char string1[20];
  printf("Enter your string - 19 Chars Max: \n");
  scanf("%19s", string1);

  // check getline for more info

  printf("The string you entered is: \n");
  printf("%s\n", string1);
}
