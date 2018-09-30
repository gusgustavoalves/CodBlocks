#include <stdio.h>

pares (int num, int soma){
	while ( num <= 50){
	//printf ("\n%i",num );
	soma = (soma + num);
	//printf("\n%i", soma);
	num = num +2;
	}
	return soma;
}

main(){
	int num =0, soma=0;
	//printf("Esses sao os 50 primeiros numeros pares.\n");
	soma = pares(num, soma);
	printf("\nA soma dos 50 primeiros numeros pares e: %i", soma);
}
