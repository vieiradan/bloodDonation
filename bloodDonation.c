#include <stdio.h>

int main() {
  int age;

  printf("Blood donation program");
  printf("\nPlease, enter you age: ");
  scanf("%d", &age);

  if(age >= 16 && age <= 69) {printf("Your age: %d allows you to donate blood.", age);
  }
  else {printf("Your age: %d doesn't not allow you to donate blood.", age);}
}
