#include <stdio.h>

int calcprimo(int num){
	int i, cont = 0;
	for (i = 1; i <= num; i++)
	{
		if(num % i == 0){
		cont++;
	}
}
if (cont > 2)
{
	return 0;
}
if (cont == 2)
{
	return 1;
}
}
main(){
	int num;
	printf("digite um numero para saber se ele e primo ou nao: ");
	scanf("%i", &num);
	num = calcprimo(num);
	if (num == 1)
	{
		printf("O numero e Primo");
	}
	if (num == 0)
	{
		printf("O numero Nao e Primo");
	}
}
