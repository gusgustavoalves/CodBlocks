#include <stdlib.h>
#include <stdio.h>

int main()
{
      float troco;
      int t100, t050, t025, t010, t005, t001;

      t100=0;
      t050=0;
      t025=0;
      t010=0;
      t005=0;
      t001=0;
      troco=0;

      system("CLS");
      printf("Informe o Troco ");
      scanf("%f",&troco);

      while (troco > 0)
      {
        if (troco >= 1)
        {
          troco=troco-1;
          t100++;
        } else if (troco >= 0.50)
        {
          troco=troco-0.50f;
          t050++;
        } else if (troco >= 0.25)
        {
          troco=troco-0.25f;
          t025++;
        } else if (troco >= 0.10)
        {
          troco=troco-0.10f;
          t010++;
        } else if (troco >= 0.05)
        {
          troco=troco-0.05f;
          t005++;
        } else if (troco >= 0.01)
        {
          troco=troco-0.01f;
          t001++;
        }
      }

      if (t100 > 0)
        printf("%i Moeda(s) de um Real\n",t100);
      if (t050 > 0)
        printf("%i Moeda(s) de Cinquenta Centavos\n",t050);
      if (t025 > 0)
        printf("%i Moeda(s) de Vinte e Cinco Centavos\n",t025);
      if (t010 > 0)
        printf("%i Moeda(s) de Dez Centavos\n",t010);
      if (t005 > 0)
        printf("%i Moeda(s) de Cinco Centavos\n",t005);
      if (t001 > 0)
        printf("%i Moeda(s) de Um Centavo\n",t001);

      printf("\n");

      system("PAUSE");
      return 0;
}
