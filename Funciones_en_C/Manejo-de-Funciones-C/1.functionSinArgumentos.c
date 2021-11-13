#include <stdio.h>

int add(int a, int b);

int main()
{
  printf("the result is %d", add(100, 100));
  return 0;
}

int add(int a, int b)
{
  int add;
  add = a + b;
  return add;
}

// Primer ejercicio

// void demo();

// int main()
// {
//   demo();

//   return 0;
// }

// void demo() {
//   int a, b, suma;
//   a = 100;
//   b = 100;
//   printf("El resultado es %i", suma);
// }