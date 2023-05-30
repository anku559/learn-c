/**
 * @author Ankit Singh Chondawat
 * @link https://github.com/anku559
 * @date 30th May 2023
 * @details This file shows the basic program structure and terminologies for it.
 */

#include <stdio.h>
// #include - Preprocessor Directive
// <stdio.h> - Standard Input Output Header File
// Header file library - helps us to work with input/output functions

int main()
// main() main function - Most important part of the program (Entry Point of file)
// main() - return value of function is integer

{
  printf("Hello Programmer from Ankit...!!!\n");
  /* Executed if no other statement is */

  /*
  # 0           - Successful Exit of Program
  # Non 0 value - Failure of Program
  ;             - Statement Terminator
  */

  int num1, num2, sum;

  printf("Enter the Value of Number 1?\n");
  scanf("%d", &num1);  // Read integer value (%d) and place in memory address of num1 using &

  printf("Enter the Value of Number 2?\n");
  scanf("%d", &num2);  // Read integer value (%d) and place in memory address of num2 using &

  sum = num1 + num2;

  printf("----- Hello Programmer ----- \n");
  printf("The value of A + B is\n=> %d", sum);

  printf("\n----- Memory Address of Variable -----\n");
  printf("num1 => %d\nnum2 => %d\nnum3 => %d\n", &num1, &num2, &sum);
  // %d value is supplied from sum

  return 0;  // returning value to int main()
}