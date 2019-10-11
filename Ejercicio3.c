#include <stdio.h>
int MCM(int, int);

int main(){
    int num1, num2;
    int res;

    printf("Introduzca valor de m: ");
    scanf("%i", &num1);

    printf("Introduzca valor de n: ");
    scanf("%i", &num2);

    if (num2 > num1 ){
        res = MCM(num2,num1);
    } else { 
        res = MCM(num1,num2);
    }

    printf("El MCM de %i y %i es: %i", num1, num2, res);

    return 0;
}

int MCM(int m, int n) {
    if (n == 0) return m;
    return MCM(n, m%n);
}

