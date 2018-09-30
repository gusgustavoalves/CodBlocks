#include <stdio.h>
int main(){
float n=1, d=1, s;

while(n<=99 && d<=50){
    s+= n/d;

    n+=2;
    d++;
}
printf("Total: %.2f \n", s);
return 0;
}
