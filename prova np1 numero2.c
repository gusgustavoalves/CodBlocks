#include <stdio.h>

float homens(float altura){
    float peso=0;
    peso = (72.7 * altura) - 58;
    return peso;
}
float mulheres(float altura){
    float peso=0;
    peso = (62.1 * altura) - 44.7;
    return peso;
}

main(){
    int sexo;
    float altura, peso, ideal=0;
    printf("Digite a sua altura: ");
    scanf("%f", &altura);
    printf("\nDigite seu peso: ");
    scanf("%f", &peso);
    do{
    printf("\nDigite seu sexo Sendo 1 para Masculino e 2 para Feminino: ");
    scanf("%i", &sexo);
    }while(sexo != 1 && sexo != 2);
        if(sexo == 1){
            ideal=homens(altura);
        }
        if(sexo == 2){
            ideal=mulheres(altura);
        }
    printf("\nO seu peso atual e: %.2f ", peso);
    printf("\nO seu peso ideal e: %.2f", ideal);
        if(peso > ideal){
            printf("\n!!! VC ESTA ACIMA DO PESO!!!");
        }else if(peso < ideal){
            printf("\n!!! VC ESTA A BAIXO DO PESO!!!");
        }else{
            printf("\nVC ESTA NO PESO IDEAL");
        }
}
