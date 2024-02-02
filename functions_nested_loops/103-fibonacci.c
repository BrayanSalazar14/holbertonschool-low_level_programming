#include <stdio.h>

int main() {
    long int a = 1; 
    long int b = 2; 
    long int next;  
    long int i;

    
    printf("%lu, %lu, ", a, b);

  
    for (i = 3; i <= 50; i++) {
        next = a + b;
        printf("%lu", next);
        if (i < 50) {
            printf(", ");
        }
        a = b;
        b = next;
      if (next > 4000000)
      {
        break;
      }
    }
    printf("\n");

    return 0;
}
