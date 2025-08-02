#include <stdio.h>

void modify(int *x)
{
  *x = *x + 1; // Or: (*x)++;
}

int main()
{
  int a = 10;
  modify(&a);
  printf("address of a: %p \n", &a);
  printf("a = %d \n", a);

  return 0;
}