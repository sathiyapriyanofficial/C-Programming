#include <stdio.h>

int main()
{
  for (int i = 0; i <= 127; i++)
  {
    printf("ASCII %3d: ", i);

    if (i >= 32 && i <= 126)
      printf("%c\n", i);
    else
      printf("Non-printable\n");
  }

  return 0;
}