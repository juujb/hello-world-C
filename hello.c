#include <stdio.h>

int main(int argc, const char *argv[]) {
  int x = 2;
  int* p_x = &x;
  printf("Hello World!\n");
  printf("Valor de x: %d\n", x);
  printf("Endereço de memória de x: %p\n", &x);
  printf("Valor de p_x: %p\n", p_x);
  printf("Endereço de memória de p_x  %d\n", *p_x);
}
