#include <stdio.h>
main(){
    float n=0, menor=10, maior=0, soma=0, media=0;
    int i, alunos;

    printf("Escreva a quantidade de alunos: ");
    scanf("%i", &alunos);
        for(i =0; i<alunos; i++){
            printf("Digite a nota do aluno: ");
            scanf("%f", &n);
            soma = soma + n;
            if(n>maior){
                maior = n;
            }
            if(n<menor){
                menor = n;
            }
        }
    media = soma / alunos;
    printf("A media da turma e: %.2f\nAmaoir nota e: %.2f\nAmenor nota e: %.2f\n", media, maior, menor);
}
