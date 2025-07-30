#include <stdio.h>

int main()
{
  int a = 10; // Declare an integer variable
  int *ptr;   // Declare a pointer to an integer

  ptr = &a; // Store address of 'a' in pointer

  printf("%d \n", *ptr); // Print the value at the address stored in 'ptr' (i.e., value of 'a')

  *ptr = *ptr * 20; // Modify the value at that address (i.e., a = a * 20)

  printf("The Value of A %d \n", a); // Print updated value of 'a'

  return 0;
}