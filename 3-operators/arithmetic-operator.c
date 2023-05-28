#include <stdio.h>

int main()
{
  int num1, num2, num3;
  printf("Enter Number 1: \n");
  scanf("%d", &num1);

  printf("Enter Number 2: \n");
  scanf("%d", &num2);

  printf("Enter Number 3: \n");
  scanf("%d", &num3);

  printf("Result of a + b: %d\n", num1 + num2);
  printf("Result of b + c: %d\n", num2 + num3);
  return 0;
}