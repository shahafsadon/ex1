/******************
Name: shahafsh1
ID: 314941444
Assignment: ex1
*******************/
#include <stdio.h>

// REMIDER : YOU CANT USE ANY CONTROL FLOW OPERATIONS OR FUNCTIONS, ONLY BITWISE.

int main() {

  // what bit
  printf("What bit:\n");
  // Defines for this exercise
int number,position,bit;
  printf("Please enter a number:\n");
  scanf("%d", &number);
  printf("Please enter a position:\n");
  scanf("%d", &position);
  // Checks the first number in the position
  bit = (number >> position) & 1;
  printf("The bit in position %d of number %d is: %d\n",position,number,bit);

  
  // Set bit
  // num1=number pos1=position in Set bit task
  printf("\nSet bit:\n");
int num1,pos1;
  printf("Please enter a number:\n");
  scanf("%d", &num1);
  printf("Please enter a position:\n");
  scanf("%d", &pos1);
  //The OR operation (|) modifies 'num1' so that the bit at position 'pos1' becomes 1.
  num1 |= (1 << pos1);
  printf("Number with bit %d set to 1: %d\n", pos1, num1);
  //The NOT operation (~) inverts all the bits: it changes 1s to 0s and 0s to 1s.
  num1 &= ~(1 << pos1);
  printf("Number with bit %d set to 0: %d\n", pos1, num1);


  // Toggle bit
  // num2=number pos2=position in Toggle bit task
  printf("\nToggle bit:\n");
  int num2,pos2;
  printf("Please enter a number:\n");
  scanf("%d", &num2);
  printf("Please enter a position:\n");
  scanf("%d", &pos2);
  //This operation flips the bit at position 'pos2' and leaves all other bits of 'num2' unchanged.
  num2 ^= (1 << pos2);
  printf("Number with bit %d toggled: %d\n", pos2, num2);
  
  // Even - Odd
  // num3=number in Even-odd Task
  printf("\nEven - Odd:\n");
  int num3;
  printf("Please enter a number:\n");
  scanf("%d", &num3);
  // num3 & 1 - will give 0 if the number is even and 1 if the number is odd, the operation '^' reverses the result
  printf("%d\n", (num3 & 1) ^ 1);


  // 3, 5, 7, 11
  // num4 & num5 = number in octal in this task
  printf("\n3, 5, 7, 11:\n");
  // I need 2 numbers and then sum them
  int num4, num5, sum;
  printf("Please enter the first number (octal):\n");
  scanf("%o", &num4);
  printf("Please enter the second number (octal):\n");
  scanf("%o", &num5);
  sum = num4 + num5;
  printf("The sum in hexadecimal: %X\n", num4 + num5);
  // I need 2 numbers and then sum them, show in decimal and in position 3,5,7,11
  printf("The 3,5,7,11 bits are: %d%d%d%d\n",(sum >> 3) &1, (sum >> 5) &1, (sum >> 7) &1, (sum >>11));
  printf("Bye!\n");
  
  return 0;
}
