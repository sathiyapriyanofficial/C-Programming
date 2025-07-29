#include <stdio.h>

int main()
{

  int i = -42;
  float f = 3.14159;
  double exp = 12345.6789;
  int oct = 64;
  int hex = 255;
  char ch = 'A';
  char str[] = "Sathiyapriyan";
  int *ptr = &i;

  printf("%%d (int): %d\n", i);
  printf("%%i (signed int): %i\n", i);
  printf("%%f (float): %f\n", f);
  printf("%%e (exponential): %e\n", exp);
  printf("%%E (exponential - uppercase): %E\n", exp);
  printf("%%o (octal): %o\n", oct);
  printf("%%x (hex lowercase): %x\n", hex);
  printf("%%X (hex uppercase): %X\n", hex);
  printf("%%p (pointer address): %p\n", ptr);
  printf("%%c (char): %c\n", ch);
  printf("%%s (string): %s\n", str);

  printf("The size of int is %ld\n", sizeof(int));
  printf("The size of char is %lu\n", sizeof(char));
  printf("The size of float is %lu\n", sizeof(float));
  printf("The size of long is %lu\n", sizeof(long));
  printf("The size of double is %lu\n", sizeof(double));
  printf("The size of short is %lu\n", sizeof(short));
}