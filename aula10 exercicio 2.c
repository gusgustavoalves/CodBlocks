#include <stdio.h>

main(){

    int n1, n2,n3, result;
    printf("Digite um numero: ");
    scanf("%i", &n1);
    printf("Digite outro numero: ");
    scanf("%i", &n2);
    printf("Digite outro numero: ");
    scanf("%i", &n3);
    result = CalMaior2n(n1,n2);
    result = CalMaior2n(result , n3);
    printf("\n\nO numero maior e : %i !\n\n\n\n", result);

}
int CalMaior2n(int num1, int num2){
    if (num1 > num2){
        return num1;
    }else{
        return num2;
    }
}
