#include <stdio.h>

// Use void since we don't return anything
void swap_variable(int *var1, int *var2)
{
  int temp = *var1;
  *var1 = *var2;
  *var2 = temp;
}

int main()
{
  int a = 5, b = 10;

  printf("Before swap: a = %d, b = %d\n", a, b);

  swap_variable(&a, &b); // Pass addresses

  printf("After swap: a = %d, b = %d\n", a, b);

  return 0;
}