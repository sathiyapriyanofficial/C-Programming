#include <stdio.h>

int main()
{
  int a[] = {10, 23, 23};
  int *ptr = a;

  for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++)
  {
    printf("%d data in address %p\n", *ptr, ptr);
    ptr = ptr + 1;
  }

  return 0;
}