#include <stdio.h>

// Find a number is even or not

int main()
{
  int x;

  printf("Provide a number: \n");
  scanf("%d", &x);

  if (x % 2 == 0)
  {
    printf("The give number %d is even \n", x);
  }
  else
    printf("The give number %d is odd \n", x);
}