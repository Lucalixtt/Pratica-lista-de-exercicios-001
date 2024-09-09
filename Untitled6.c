#include <stdio.h>
#include <stdlib.h>

int main(){

int a;
int b;
int c;
int d;
int e;
int f;
int g;
int h;
int i;
int verificador1;
int verificador2;
int P;
int Q;
int R1;
int R2;

printf("Digite os 9 digitos do seu CPF : ");
scanf("%d %d %d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &g, &h, &i);

printf("%d", a);
printf("%d", b);
printf("%d", c);
printf("%d", d);
printf("%d", e);
printf("%d", f);
printf("%d", g);
printf("%d", h);
printf("%d", i);


if((0>a)||(a>9)||(0>b)||(b>9)||(0>c)||(c>9)||(0>d)||(d>9)||(0>e)||(e>9)||(0>f)||(f>9)||(0>g)||(g>9)||(0>h)||(h>9)||(i<0)||(i>9)){
        printf("opção inválida - x");
        return 0;
}

    verificador1 = 10*a + 9*b + 8*c + 7*d + 6*e + 5*f + 4*g + 3*h + 2*i;
    R1 = verificador1 % 11;


             if((R1>2)&& (R1<=10)){

                 P = 11 - R1;

                printf(" Seu primeiro dígito de verificação é: %d\n", P);
    }
            else {
                P = 0;
                printf(" Seu primeiro dígito de verificação é: %d\n", P);
    }

    verificador2 = 11*a + 10*b + 9*c + 8*d + 7*e + 6*f + 5*g + 4*h + 3*i + 2*P;
    R2 = verificador2 % 11;


            if((R2>2) && (R2<=10)){

                Q = 11 - R2;
                printf(" Seu segundo dígito de verificação é: %d\n", Q);
            }
            else{
                Q = 0;
                printf(" Seu segundo dígito de verificação é: %d\n", Q);
            }
return 0;
}
