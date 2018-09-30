#include <stdio.h>

int main(){
int cn50=0, cn20=0, cn10=0, cn5=0, cn2=0, cn1=0, cn050=0, cn025=0, cn010=0, cn005=0;
float din;
    printf("Digite o valor para calcular a quantidade de notas para pagamento: ");
    scanf("%f", &din);
    printf("\n%f", din);
    while(din >= 50){
        printf("\n%.2f", din);
        din = din - 50;
        cn50++;

    }
    while(din >= 20){
        printf("\n%.2f", din);
        din = din - 20;
        cn20++;
    }
    while(din >= 10){
        printf("\n%.2f", din);
        din = din - 10;
        cn10++;
    }
    while(din >= 5){
        printf("\n%.2f", din);
        din = din - 5;
        cn5++;
    }
    while(din >= 2){
        printf("\n%.2f", din);
        din = din - 2;
        cn2++;
    }
    while(din >= 1){
        printf("\n%.2f", din);
        din = din - 1;
        cn1++;
    }
    while(din >= .5){
        printf("\n%.2f", din);
        din = din - .5;
        cn050++;
    }
    while(din >= .25){
        printf("\n%.2f", din);
        din = din - .25;
        cn025++;
    }
    while(din >= .1){
        printf("\n%.2f", din);
        din = din - .1;
        cn010++;
    }
    while(din >= .05){
        printf("\n%.2f", din);
        din = din - .05;
        cn005=0;
    }
    printf("\nresult %.2f", din);
    printf("\n\n\nA quantidade de notas e:\n50: %i\n20: %i\n10: %i\n5: %i\n2: %i\n1: %i\n0.50: %i\n0.25: %i\n0.10: %i\n0.05: %i\n  ", cn50, cn20, cn10, cn5, cn1, cn050, cn025, cn010, cn005);
return 0;
}
