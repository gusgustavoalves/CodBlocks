#include <stdio.h>

main (){
    float n1, n2, soma, diferenca, produto, media;

    printf("Digite o primeiro numero:");
    scanf("%f", &n1);
    printf("Digite o segundo numero:");
    scanf("%f", &n2);
    soma = n1 + n2;
    diferenca = n1 - n2;
    produto = n1 * n2;
    media = soma / 2;
    printf("A soma dos numeros e: %.2f \nA diferenca e: %.2f \nO produto e: %.2f \nA Media e: %.2f",soma,diferenca,produto,media);

}
