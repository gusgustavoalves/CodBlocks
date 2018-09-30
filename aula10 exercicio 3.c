#include <stdio.h>

main(){
    int n=0,result=0;
    printf("Digite um numero para verificar se o mesmo e PAR ou IMPAR: ");
    scanf("%i", &n);
    result = parimpar(n);
    if (result ==1){
        printf("\n\nO numero e PAR !!\n\n");
    }else{
        printf("\n\nO numero e IMPAR!!\n\n");
    }
}
int parimpar(int n){
    n = n%2;
    if(n == 0 ){
        return 1;
    }else{
        return 2;
    }
}
