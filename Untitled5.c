#include <stdio.h>
#include <stdlib.h>

int main (){

    int a;
    int b;
    int c;
    int d;
    int e;
    int f;
    int g;
    int h;
    int verificador;
    int P;
    int R;

    printf(" Digite os 8 dígitos do seu RG: ");
    scanf("%d %d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &g, &h);

    printf("%d",a);
    printf("%d",b);
    printf("%d",c);
    printf("%d",d);
    printf("%d",e);
    printf("%d",f);
    printf("%d",g);
    printf("%d",h);

     if((0>a)||(a>9)||(0>b)||(b>9)||(0>c)||(c>9)||(0>d)||(d>9)||(0>e)||(e>9)||(0>f)||(f>9)||(0>g)||(g>9)||(0>h)||(h>9)){
        printf("opção inválida - x");
        return 0;
    }

    P = 2*a + 3*b + 4*c + 5*d + 6*e + 7*f + 8*g + 9*h;
    R = P % 11;
    verificador = 11 - R;

       if((verificador>=0)&& (verificador<=9)){
    printf(" Seu dígito de verificação é: %d\n", verificador);
}



return 0;
}

