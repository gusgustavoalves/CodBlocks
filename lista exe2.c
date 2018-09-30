#include <stdio.h>

main(){
int n, i, cont=0;

printf("Digite um numero:");
scanf("%i", &n);

for(i=1; i <= n; i++){

    if(n%i == 0){
    cont++;
    }
}
    if(cont > 2){
        printf("Nao e numero primo!!");
    }
    if (cont == 2){
        printf("E um numero Primo!!!!!!!");
    }
}
