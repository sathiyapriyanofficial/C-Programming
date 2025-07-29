#include <stdio.h>

int main()
{
  int numbers[] = {10, 20, 30, 40, 50};
  int length = sizeof(numbers) / sizeof(numbers[0]);

  printf("Array length: %d\n", length);

  printf("Size of number[] is %lu", sizeof(numbers) / sizeof(numbers[0]));

  for (int i = 0; i < sizeof(numbers) / sizeof(numbers[0]); i++)
  {
    printf("%d\n", numbers[i]);
  }
  return 0;
}
