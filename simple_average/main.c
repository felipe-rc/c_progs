#include <stdio.h>
#include <stdarg.h>

double simple_average(int num, ...);

int main(void) {
  printf("AVG: %.2lf\n", simple_average(2, 1.0, 2.5));
  printf("AVG: %.2lf\n", simple_average(5, 1.0, 2.5, 3.75, 4.7, 9.88));
}

double simple_average(int num, ...) {
  va_list args;
  double sum = 0;
  va_start(args, num);
  for (int i = 0; i < num; i++) {
    sum += va_arg(args, double);
  }
  va_end(args);
  return (double)sum/(double)num;
}

