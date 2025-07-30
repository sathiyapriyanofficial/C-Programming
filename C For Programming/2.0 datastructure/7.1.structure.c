#include <stdio.h>

// Define a structure for a point
struct Point
{
  int x, y;
};

int main()
{
  struct Point p[3];
  int i;

  // Input for all 3 points
  for (i = 0; i < 3; i++)
  {
    printf("Enter x and y for point %d: ", i + 1);
    scanf("%d %d", &p[i].x, &p[i].y);
  }

  // Print all 3 points
  printf("\nYou entered the following points:\n");
  for (i = 0; i < 3; i++)
  {
    printf("Point %d: x = %d, y = %d\n", i + 1, p[i].x, p[i].y);
  }

  return 0;
}