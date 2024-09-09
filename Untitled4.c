#include <stdio.h>
#include <stdlib.h>


int calcularMDC(int a, int b){
    while (b != 0){
        int temp = b;
        b = a % b;
        a = temp;
    }
 return a;
}

int calcularMMC(int a, int b) {
return (a * b) / calcularMDC(a,b);
}
int main (){

    int n1;
    int n2;
    int MDC;
    int MMC;

    printf("Digite dois números inteiros positivos: ");
    scanf("%d %d", & n1, & n2);

    MDC = calcularMDC(n1, n2);
    MMC = calcularMMC(n1, n2);

    printf("MDC de %d e %d = %d\n", n1, n2, MDC);
    printf("MMC de %d e %d = %d\n", n1, n2, MMC);
    return 0;
}

