#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

float a;
float b;
float c;
float x1;
float x2;
float xv;
float yv;
float delta;
float x3;

printf("Digite os coeficientes a, b, c : ");
scanf("%f %f %f", &a, &b, &c);

if( a>0){
    printf("A concavidade da parabola é positiva\n");
}
else if(a<0){
    printf(" A concavidade da parabola é negativa\n");
}
else {
    printf ("Nao é uma parabola(a=0)\n");
    return 0;
}

delta = b*b - 4*a*c;

if(delta>0){
    x1= (-b+sqrt(delta))/2*a;
    x2= (-b-sqrt(delta))/2*a;
    printf("As raizes da equação são : %f %f\n", x1,x2);

}

else if(delta == 0){
    x1= -b/2*a;
    printf("A equação possui uma raiz: %f\n", x1);
}
else {
    printf("A equação nao possui raizes reais\n");
}
xv= -b/2*a;
yv= a*xv*xv + b*xv +c;

printf(" o vértice da parabola esta no ponto: %f %f\n", xv,yv);

    return 0;
}

