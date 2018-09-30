#include <stdio.h>

main(){
int num=1, i;
    for(i=0;i<100;i++){
    printf("%i, ", num);
    num ++;
    }
    num=1;
    printf("\n\n");
    while(num<=100){
    printf("%i, ", num);
    num ++;
    }
    num=1;
    printf("\n\n");
    do{
    printf("%i, ", num);
    num ++;
    }while(num<=100);
}
