#include <stdio.h>

int main() {
    long int a = 1; 
    long int b = 2; 
    long int next;  
    long int i, cant = 2;

    
    printf("%lu, %lu, ", a, b);

  
    for (i = 3; cant <= 97; i++) {
        next = a + b;
        printf("%lu", next);
        if (i < 97) {
            printf(", ");
        }
        a = b;
        b = next;
      cant++;
    }
    printf("\n");

    return 0;
}
