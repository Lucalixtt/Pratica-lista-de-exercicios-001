#include <stdio.h>
#include <stdlib.h>

int main (){

    int a;

    printf("Digite seu número:");
    scanf("%d",&a);

    while (a<100) {
        if((a%2==0)&&(a%3==0)){
            printf("%d: Pim Pam\n", a);
        }
        else{
            if(a%2==0){
                printf("%d: pim\n", a);
            }
            else{
                if(a%3==0) {
                    printf("%d: pam\n", a);
                }
                else{
                    printf("%d: %d\n", a, a);
                }
            }
        }


        a++;
    }

    return 0;

}







