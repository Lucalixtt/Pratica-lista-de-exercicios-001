#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main (){

int n1;
int x;
int y;


while(1) {

   printf("\n Digite um numero inteiros positivos: ");
   scanf("%d", & n1);

   if (n1==0) {

    break;
   }

   y = n1;

   while (1) {

     x = y%2;
    printf("%d", x);
     y = y/2;
     if ( y == 0) break;
   }
}

return 0;
}

