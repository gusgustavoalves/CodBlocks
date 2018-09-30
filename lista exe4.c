#include <stdio.h>
int main(){
float altura, alturam=0, alturaf=0, maior=0, menor =10, media=0;
int contm=0, contf=0, cont=0;
char sexo;

do{
        printf("Digite a Altura de uma pessoa:");
        scanf("%f", &altura);

        if(altura<=0 && cont==0){
            return 0;
        }
        if (altura > 0){
                printf("\nDigite o Sexo da Pessoa");
                printf("\nm ou 1 para Masculino");
                printf("\nn ou 2 para Feminino\n");
                fflush(stdin);
                scanf("%c", &sexo);
                while(sexo != 'm' && sexo != 'f' && sexo != '1' && sexo != '2'){
                    printf("Sexo Invalido Digite novamente: ");
                    scanf("%c", sexo);
                }
            cont++;
            if (sexo == 'm' || sexo == '1'){
            contm++;
            alturam = alturam + altura;
            }
            if (sexo == 'f' || sexo == '2'){
            contf++;
            alturaf = alturaf + altura;
            }
             if(altura > maior){
                maior = altura;
            }
            else if(altura < menor){
                menor = altura;
            }
        }
}while(altura > 0);
media = alturaf + alturam;
media = media / cont;
alturaf = alturaf / contf;
alturam = alturam / contm;
printf("\n\nA maior altura e: %.2f.\nA menor altura e: %.2f.\nA media da altura das mulheres e: %.2f.\nA media da altura dos homens e: %.2f. ", maior, menor, alturaf, alturam);
printf("\nA media geral de todas as alturas e: %.2f", media);
return 0;
}
