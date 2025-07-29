#include <stdio.h>

int main()
{
  char input;

  printf("Enter an alphabet: ");
  scanf(" %i input", &input); // Note the space before %input to skip newline

  switch (input)
  {
  case 'A':
  case 'E':
  case 'I':
  case 'O':
  case 'U':
  case 'a':
  case 'e':
  case 'i':
  case 'o':
  case 'u':
    printf("It's a vowel.\n");
    break;

  default:
    // Check if it's an alphabet
    if ((input >= 'A' && input <= 'Z') || (input >= 'a' && input <= 'z'))
      printf("It's a consonant.\n");
    else
      printf("Not an alphabet.\n");
    break;
  }

  return 0;
}