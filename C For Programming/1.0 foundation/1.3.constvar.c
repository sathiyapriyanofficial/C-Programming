#include <stdio.h>
#include <math.h>

#define PI 3.14 // macro - pre-compiled
#undef PI
int main()
{
  const float PI = 3.14;
  float radius, circumference, area;

  // Prompt for input
  printf("Give a radius input: ");
  scanf("%f", &radius);

  // Calculate circumference and area
  circumference = 2 * PI * radius;
  area = PI * radius * radius;

  // Output results
  printf("The circumference (2πr): %.2f\n", circumference);
  printf("The area (πr²): %.2f\n", area);

  return 0;
}