#include <stdio.h>
/* return-type function(parameters declaration, if any) {
  declarations,
  statements
} */

int power(int base, int n);
/* {
  declarations
  statements
} */

int main() {
  
  int i;
  for (i = 0; i < 10; i++) {
    printf("n = %d El resultado de la potencia = %d\n", i, power(2,i));
  }
  return 0;
}

int power(int base, int n) {
  int i, p;
  p = 1;
  for (i = 0; i <= n; i++) {
    p = p * base;
  }
  return p;
}