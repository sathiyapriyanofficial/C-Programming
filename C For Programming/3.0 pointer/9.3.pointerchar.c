#include <stdio.h>

int main()
{
  char c[] = {'A', 'B', 'C', 'D', 'E'};

  char *ptr;
  int i;
  ptr = c;

  for (i = 0; i < 100; i++)
  {
    printf("%c char in %p\n", *ptr, ptr);
    ptr += 1;
  }

  return 0;
}