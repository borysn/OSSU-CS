#include <stdio.h>

int main(void) {
  // vars
  double minutes = 0.0;
  double water = 0.0;
  // get minutes
  printf("minutes: ");
  scanf("%lf", &minutes);
  // calculate water used
  water = minutes * 1.5;
  // output
  printf("water: %lf\n", water);
}
