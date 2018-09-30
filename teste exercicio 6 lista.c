#include <stdio.h>

main(){
int cn50=0, cn20=0, cn10=0, cn5=0, cn2=0, cn1=0, cn050=0, cn025=0, cn010=0, cn05=0;
float din;
    printf("Digite o valor para calcular a quantidade de notas para pagamento: ");
    scanf("%f", &din);
    printf("\n%f", din);
    while(din>0.05){
    if(din >= 50){
        printf("\n%.2f", din);
        cn50++;
        din = din - 50;
        }else if(din >= 20){
            printf("\n%.2f", din);
            cn20++;
            din = din - 20;
            }else if(din >= 10){
                printf("\n%.2f", din);
                cn10++;
                din = din - 10;
                }else if(din >= 05){
                    printf("\n%.2f", din);
                    cn5++;
                    din = din - 5;
                    }else if(din >= 02){
                        printf("\n%.2f", din);
                        cn2++;
                        din = din - 2;
                        }else if(din >= 01){
                            printf("\n%.2f", din);
                            cn1++;
                            din = din - 1;
                            }else if(din >= 0.50){
                                printf("\n%.2f", din);
                                cn050++;
                                din = din - 0.50;
                                }else if(din >= 0.25){
                                    printf("\n%.2f", din);
                                    cn025++;
                                    din = din - 0.25;
                                    }else if(din >= 0.10){
                                        printf("\n%.2f", din);
                                        cn010++;
                                        din = din - 0.10;
                                        }else if(din >= 0.05){
                                            printf("\n%.2f", din);
                                            cn05=0;
                                            cn05++;
                                            din = din - 0.05;
                                        }
    }
    printf("\nresult %.2f", din);
    printf("\n\n\nA quantidade de notas e:\n50: %i\n20: %i\n10: %i\n5: %i\n2: %i\n1: %i\n0,50: %i\n0,25: %i\n0,10: %i\n0,05: %i\n  ", cn50, cn20, cn10, cn5, cn1, cn050, cn025, cn010, cn05);
}
