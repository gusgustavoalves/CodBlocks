#include <stdio.h>
//1� Fa�aFa�a Fa�aum algoritmo algoritmo em portugu�s portugu�s portugu�sestruturado estruturado estruturadoestruturado que
//receba a idade de 10 pessoas emostre mostre aquantidade quantidade quantidade de pessoas pessoas pessoasem cada
//faixa et�ria et�ria de acordo acordo acordocom os dados abaixo abaixo :
//1�faixa et�ria :at� 15 anos
//2�faixa faixaet�ria :de 16 a30 anos
//3�faixa et�ria :de 31 a60 anos
//4�faixa faixaet�ria :acima acima de 61 anos
main(void){
    int idade=0, cont=1, soma=0, idade15=0, idade1630=0, idade3160=0, idade61=0;
    float media=0;

       for(cont=1; cont <=10; cont++){
        printf("Digite uma idade:");
        scanf("%i", &idade);
            if (idade <= 15)
            {
                idade15=(idade15+1);
            }
            else if (idade <= 30)
            {
                idade1630=(idade1630+1);
            }
            else if (idade <= 60)
            {
                idade3160=(idade3160+1);
            }
            else
            {
                idade61=(idade61+1);
            }
            soma=(soma + idade);
       }
            media=(soma/10);

        printf("\nA quantidade de pessoas ate 15 anos e:%i pessoa(s).", idade15);
        printf("\nA quantidade de pessoas ate 16 a 30 anos e:%i pessoa(s).", idade1630);
        printf("\nA quantidade de pessoas ate 31 a 60 anos e:%i pessoa(s).", idade3160);
        printf("\nA quantidade de pessoas maiores que 61 anos e:%i pessoa(s).", idade61);
        printf("\nA media das idades e:%.2f", media);
        printf("\nA soma das idades e:%i", soma);
}
