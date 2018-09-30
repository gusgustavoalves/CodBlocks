#include <stdio.h>

int validanum(int num){
    if(num > 0){
        return 1;
    }
    if (num < 0){
        return -1;
    }else {
        return 0;
    }
}
int main(){
    int num;

    printf("Digite um numero para verificar se o numero e Positivo, Negativo ou Neutro: ");
    scanf("%i", &num);
    num = validanum(num);
    if (num == 1){
        printf("Numero Positivo");
    }
    else if (num == -1){
        printf("Numero Negativo");
    }else{
        printf("Numero neutro 0");
    }
return 0;
}
