#include <stdio.h>
int opt1 = 1;
int opt2 = 0;
int opt3 = 3;

int main()
{
  printf("bienvenid a platzi store :\n");
  printf("opcion 0 para platzi bebidas \n");
  printf("opcion 1 para platzi comidas \n");
  printf("opcion 2 para platzi postres \n");

  // este programa genera menus segun lo que el usuario elija
  if (opt1 == 0)
  {
    printf("usted eligio la opcion 0, vera nuestro menu de bebidas elija una:\n");
    printf("opcion 0 para platzi cola cero \n");
    printf("opcion 1 para platzi cola normal \n");
    printf("opcion 2 para platzi pina colada \n");

    if (opt2 == 0)
      printf("usted eligio una platzi cola cero, mmm rico");
    else if (opt2 == 1)
      printf("usted eligio una platzi cola con azucar, mmm rico");
    else if (opt2 == 2)
      printf("usted eligio una platzi pina colada con azucar, mmm rico");
    else
      printf("opcion invalida");
  }
  else if (opt1 == 1)
  {
    //aqui va el menu de alimentos
    printf("usted eligio la opcion 0, vera nuestro menu de bebidas elija una:\n");
    printf("opcion 0 para Ensalada con aderezo \n");
    printf("opcion 1 para Ramen de Camaron \n");
    printf("opcion 2 para Pollo Frito \n");

    if (opt2 == 0)
      printf("usted eligio una Ensalado con aderezo, mmm rico");
    else if (opt2 == 1)
      printf("usted eligio Ramen de Camaron, mmm rico");
    else if (opt2 == 2)
      printf("usted eligio Pollo Frito, mmm rico");
    else
      printf("opcion invalida");
  }
  else if (opt1 == 2)
  {
    //aqui va el menu de postres
  }
  else
  {
    // mensaje de manejo de opcion invalida
  }

  return 0;
}