#include <stdio.h>

main(){

int c1=0, c2=0, c3=0, c4=0,branco=0,nulo=0,voto;

    printf("Digite 1 para votar no LULA,\nDigite 2 para votar no BOLSONARO,\nDigite 3 para votar no GERALDO ALCKMIN,\nDigite 4 para votar na MARINA,\nDigite 5 para votar NULO,\nDigite 6 para votar em BRANCO:\nDigite 0 para finalizar a votacao.");
    do {
    printf("\nDigite seu voto:");
    scanf("%i", &voto);
            switch (voto){
        case 1:
                printf("\nVoce votou no LULA\n");
                c1++;
                break;
        case 2:
                printf("\nVoce votou no BOLSONARO\n");
                c2++;
                break;
        case 3:
                printf("\nVoce votou no GERALDO ALCKMIN\n");
                c3++;
                break;
        case 4:
                printf("\nVoce votou na MARINA\n");
                c4++;
                break;
        case 5:
                printf("\nVoce votou NULO\n");
                nulo++;
                break;
        case 6:
                printf("\nVoce votou em BRANCO\n");
                printf("Vote novamente:");
                branco++;
                break;
        case 0:
            printf("\nSaindo da votacao!!!\n\n");
                break;
        default:
            printf("\n\n!!!!!!!!!!!!!!!!!!!!Opcao invalida!!!!!!!!!!!!!!!!!!!!n\n");
            printf("\n!!!!!!!!!!!!!!!!!!!!Digite uma opcao valida.!!!!!!!!!!!!!!!!!!!!\n");
            }
        }while (voto != 0);
    printf("O totao de votos para o LULA e:%i", c1);
    printf("\nO totao de votos para o BOLSONARO e:%i", c2);
    printf("\nO totao de votos para o GERALDO ALCKMIN e:%i", c3);
    printf("\nO totao de votos para o MARINA e:%i", c4);
    printf("\nO total de votos NULOS e:%i", nulo);
    printf("\nO total de votos em BRANCO e:%i", branco);


}
