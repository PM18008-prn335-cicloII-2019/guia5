#include <stdio.h>

int facto(long long int num);

int main() {
    int i, j = 1, let = 1; 
    int num = 12; 
    long int elm;
    for (i = 0; i < num; i++) {
        for (j = 1; j < num - i; j++)
            printf("   ");
        for (let = 0; let <= i; let++)
            printf("%6d", (facto(i)) / (facto(let) * (facto(i - let))));
        printf("\n");
    }
}


int facto(long long int num) {
    int i = num;
    long long fact = 1;
    for (i = num; i > 1; i--) {
        fact *= i;
    }
    return fact;
}

