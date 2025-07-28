#include <stdio.h>

int main()
{
  int i = 1; // Start from 1

  while (i < 10) // Run until 10
  {
    printf("Count: %d\n", i);
    i++; // Increment to avoid infinite loop
  }

  return 0;
}