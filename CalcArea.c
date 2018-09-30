#include <stdio.h>

main (){
    float  pi = 3.14159, raio, area, diametro;

    printf("Para calcular a area digite o valor do raio:");
    scanf("%f", &raio);
    diametro = raio * raio;
    area = pi * diametro;
    printf("A sua area e: %f Parabens", area);


}
