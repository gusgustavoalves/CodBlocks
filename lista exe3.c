#include <stdio.h>

main(){
float salario, nfilhos, cont=0, somasalario=0, somafilhos=0, mediasalario=0, mediafilhos=0, cont2000=0,fator=100.0;

do{
        printf("Digite o Salario do Funcionario ou um Valor negativo para finalizar:");
        scanf("%f", &salario);
            if (salario > 0){
                printf("\nDigite o numero de filhos do funcionario:");
                scanf("%f", &nfilhos);
                cont++;
                somasalario = somasalario + salario;
                somafilhos = somafilhos + nfilhos;
            if (salario >= 2000){
                cont2000++;
            }
            }
}while(salario > 0);
    mediasalario = somasalario / cont;
    mediafilhos = somafilhos / cont;
    printf("%f",cont2000);
    cont2000 = ((float)cont2000 / cont) * fator;
    printf("\na media dos salarios e:%.2f ", mediasalario);
    printf("\nA media dos filhos e: %.2f ", mediafilhos);
    printf("\no percentual e %.2f", cont2000);
}
