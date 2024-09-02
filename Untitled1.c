#include <stdio.h>
#include <stdlib.h>

   int main () {

    int n;
    printf("digite um numero inteiro positivo:");
    scanf("%d",&n);

    if(n<=0){
        printf("entrada invalida");
        return 1;
    }
     printf("n=%d\n",n);
     while(n>1){
        if(n%2==1){
             n=n*3+1;
        }
           else{
            n=n/2;
        }
         printf("n=%d\n",n);
    }





   return 0;
   }
