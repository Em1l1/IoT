#include <stdio.h>

enum dock {
  club = 0,
  diamonds = 5,
  hearts = 10,
  spades = 15,
} card;

int main()
{

  card = spades;

  printf("Day %d \t\n", card);
  printf("Size of var %d \t\n", sizeof(card));
  return 0;
}
