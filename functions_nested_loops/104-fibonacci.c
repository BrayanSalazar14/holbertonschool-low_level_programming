#include <stdio.h>

int main() {
  unsigned long int a = 1, b = 2, temp;
  int count = 0;
  while (count < 98) {
      if (count == 97) {
          printf("%lu\n", a);
      } else {
          printf("%lu, ", a);
      }
      temp = a;
      a = b;
      b = temp + b;
      count++;
  }
    printf("\n");

    return 0;
}
