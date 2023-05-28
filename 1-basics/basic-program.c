#include <stdio.h>

int main() {
  int num1, num2, sum;

  printf("Enter the Value of Number 1?\n");
  scanf("%d", &num1); // Read integer value (%d) and place in memory address of num1 using &

  printf("Enter the Value of Number 2?\n");
  scanf("%d", &num2); // Read integer value (%d) and place in memory address of num2 using &
  
  sum = num1 + num2;

  printf("----- Hello Programmer ----- \n");
  printf("The value of A + B is\n=> %d", sum);
  

  printf("\n----- Memory Address of Variable -----\n");
  printf("num1 => %d\nnum2 => %d\nnum3 => %d\n", &num1, &num2, &sum);
  
  return 0;
}

// %d value is supplied from sum

