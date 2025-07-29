#include <stdio.h>

int main()
{
  int x[5], i;

  for (int i = 0; i < 5; i++)
  {
    scanf("%d\n", &x[i]);
  }
  printf("Output is: ");
  for (int i = 0; i < 5; i++)
  {
    printf("%d\t", x[i]);
  }

  return 0;
}