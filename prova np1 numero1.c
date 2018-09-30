#include <stdio.h>

main(){
    int i;
    float a1, a2, a3, a4, m1=0, m2=0, m3=0, m4=0;
        for(i=1;i<=4;i++){
            printf("\nDigite a nota da N%i do primeiro aluno: ", i);
            scanf("%f", &a1);
            m1=+a1;
        }
        for(i=1;i<=4;i++){
            printf("\nDigite a nota da N%i do segundo aluno: ", i);
            scanf("%f", &a2);
            m2=+a2;
        }
        for(i=1;i<=4;i++){
            printf("\nDigite a nota da N%i do terceiro aluno: ", i);
            scanf("%f", &a3);
            m3=+a3;
        }
        for(i=1;i<=4;i++){
            printf("\nDigite a nota da N%i do quarto aluno: ", i);
            scanf("%f", &a4);
            m4=+a4;
        }
        m1=m1/4;
        m2=m2/4;
        m3=m4/4;
        m4=m4/4;
        printf("\n\n\n\nA media do primeiro aluno e: %.2f",a1);
        printf("\nA media do segundo aluno e: %.2f",a2);
        printf("\nA media do terceiro aluno e: %.2f",a3);
        printf("\nA media do quarto aluno e: %.2f",a4);

}
