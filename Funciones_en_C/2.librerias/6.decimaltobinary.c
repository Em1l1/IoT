/* 1er paso Dividir el valor entre 2 yalmacenar el resto, mod, en un array
2do paso dividir otra vez entre 2 y almacenar el restante
repetir hasta que nuestro nÃºmero ya no se pueda dividir
 */

#include <stdio.h>
#include <stdlib.h>

int binaryNumber[12], n, i;

int main() {
  system("cls");
  system("color 9F");
  printf("Ingrese un valor decimal\n");
  scanf("%d", &n);
  printf("Usted va a convetir el numero %d a binario\n", n);

  for (i = 0; n > 0; i++)
  {
    binaryNumber[i] = n % 2;
    n = n / 2;
  }

  printf("El resultado de la conversion es: ");
  for (i = i - 1; i >= 0; i--)
  {
    printf("%d", binaryNumber[i] );
  }

  return 0;
}