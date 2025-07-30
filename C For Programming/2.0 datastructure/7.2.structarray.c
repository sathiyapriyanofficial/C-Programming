#include <stdio.h>

// Define a structure for a point
struct Point
{
  int x, y;
};

int main()
{
  // Declare two point variables
  struct Point P1, P2;

  // Assign values to the members of P1
  P1.x = 2;
  P1.y = 2;

  // Assign values to the members of P2
  P2.x = 2;
  P2.y = 2;

  // Print one of the values
  printf("The value of P1.x is %d\n", P1.x);

  return 0;
}