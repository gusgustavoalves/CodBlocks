#include <stdio.h>









main(){
double fat, n;
printf("Insira um valor para o qual deseja calcular seu fatorial: ");
scanf("%lf", &n);

for(fat = 1; n > 1; n = n - 1)
fat = fat * n;

printf("\nO fatorial e: %.0lf", fat);
return 0;
}
