#include <stdio.h>
int square(int square_number);
int main()
{
  int number;
  int result;
  printf("Provide a number for square \n");
  scanf("%d", &number);

  result = square(number);

  printf("The output is : %d \n", result);

  return 0;
}

int square(int square_number)
{
  return square_number * square_number;
}