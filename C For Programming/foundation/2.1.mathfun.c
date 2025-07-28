#include <stdio.h>
#include <time.h>
#include <math.h>

int main()
{
  clock_t start_time, end_time;
  double time_taken;

  start_time = clock();
  printf("The Power %2.f \n", pow(10, 10));
  end_time = clock(); // Record end time

  time_taken = ((double)(end_time - start_time)) / CLOCKS_PER_SEC; // Calculate elapsed time in seconds

  printf("Program took %f seconds to execute.\n", time_taken);

  return 0;
}
