#include <stdio.h>

int main()
{
  char c[10];

  // Loop to input 5 characters
  for (int i = 0; i < 10; i++)
  {
    scanf(" %c", &c[i]); // Notice the space before %c to skip whitespace
    c[i + 1] = '\0';     // Null-terminate after current character
  }

  // Print the string formed
  printf("Entered string: %s\n", c);

  return 0;
}