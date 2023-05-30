/**
 * @author Ankit Singh Chondawat
 * @link https://github.com/anku559
 * @date 30th May 2023
 * @details This file shows basic operations using arithmetic operator.
 */

#include <stdio.h>

int main() {
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