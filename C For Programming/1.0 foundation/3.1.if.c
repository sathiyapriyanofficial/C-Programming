#include <stdio.h>

int main()
{
  // Check given input negative or not

  int number;
  printf("Give a number whether check negative or positive: ");
  scanf("%d", &number);
  printf("\n");

  if (number > 0)
  {
    printf("The given number %d is positive \n", number);
  }
  else
  {
    printf("The given number %d is negative \n", number);
  }

  return 0;
}