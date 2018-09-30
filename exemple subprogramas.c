#include <stdio.h>


main(){
    int numero =0,result=0;
    printf("Digite um numero para saber se ele e PAR ou IMPAR: ");
    scanf("%i", &numero);
    result = parImpar(numero);

    if (result == 1){
        printf("Numero Impar");
    }else{
        printf("Numero Par");
    }
}
int parImpar(int num){
    num = num % 2;
    if (num == 0){
        return 2;
    }else{
        return 1;
    }
    }
