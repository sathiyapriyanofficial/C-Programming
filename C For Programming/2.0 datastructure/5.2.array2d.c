#include <stdio.h>

int main()
{
  char names[2][2] =
      {
          {1, 2},
          {1, 2}};

  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 2; j++)
    {
      printf("%d ", names[i][j]);
    }
    printf("\n");
  }

  return 0;
}