#include <stdio.h>

int main()
{

    float lucro, imposto, pfabrica, lucroDist, totImposto, total;

   printf("Digite o percentual de lucro do vendedor: ");
   scanf("%f", &lucro);
   printf("Digite o valor do imposto: ");
   scanf("%f", &imposto);
   printf("Digite o preço de fábrica: ");
   scanf("%f", &pfabrica);

    lucroDist = pfabrica * (1.0 - ((100 - lucro) / 100));
    totImposto = pfabrica * (1.0 - ((100 - imposto) / 100));
    total = pfabrica + lucroDist + totImposto;

    printf("Lucro do vendedor : %.2f\n", lucroDist);
    printf("imposto : %.2f\n", totImposto);
    printf("Preço final: %.2f", total);

}

