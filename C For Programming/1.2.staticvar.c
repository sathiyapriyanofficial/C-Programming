#include <stdio.h>

// Function declarations
void static_func();
void non_static_func();

int main()
{
  static_func();
  static_func();
  static_func();
  non_static_func();
  non_static_func();
  non_static_func();
  non_static_func();
  return 0;
}

// Function with static variable
void static_func()
{
  static int count = 4;
  static int y = 0;
  y = y + 1;
  count = count + 1;
  printf("The static value of count is: %d\n", count);
  printf("How many times this function calls in a progarm \n%d", y);
}

// Function with non-static variable
void non_static_func()
{
  int count = 4;
  count = count + 1;
  printf("The non-static value of count is: %d\n", count);
}