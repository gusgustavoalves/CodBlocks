#include <stdio.h>

vertiponum(int num){
	if (num > 0){
		printf("O numero e positivo.");
		return 1;
	}
	if (num < 0){
		printf("O numero e negativo.");
		return -1;
	}else {
		printf("O numero e zero neutro");
		return 0;
	}
}
main(){
	int num;
	printf("Digite um numero para verificar se ele e positivo negativo ou zero: \n");
	scanf("%i", &num);
	num = vertiponum(num);
}
