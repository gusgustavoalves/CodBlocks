#include <stdio.h>

main (){
    float f, c;

    printf("Bem vindo, estou aqui para te ajudar a converter a temperatura em graus centigrados para fahrenheit. \nPara comercarmos digite a temperatura em graus Centigrados:");
    scanf("%f", &c);
    f = (9 * c +160) / 5;
    printf("A temperatura em Fahrenheit e %.2f f", f);

}
