#include <stdio.h>

int main() {
    unsigned long int a = 1; 
    unsigned long int b = 2; 
    unsigned long int next;  
    unsigned long int i, cant = 2;

    
    printf("%lu, %lu, ", a, b);

  
    for (i = 2; cant < 98; i++) {
        next = a + b;
        printf("%lu", next);
        if (cant != 97) {
            printf(", ");
        }
        a = b;
        b = next;
      cant++;
    }
    printf("\n");

    return 0;
}
