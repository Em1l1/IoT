#include <stdio.h>

#define PIZZACOST 1.3
const char NEWLINE = '\n';

int main() {
  float costPizzas;
  float numberOfSlices = 3;
  costPizzas = PIZZACOST * numberOfSlices;

  printf("Totla bill: %c %.2f \n", NEWLINE, costPizzas);
  // printf("Totla bill: %c %f \n", NEWLINE, costPizzas);
  // printf("%c", NEWLINE);
  
  return 0;
}