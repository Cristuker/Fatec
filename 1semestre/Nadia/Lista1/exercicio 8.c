#include "stdio.h"

main()
{
    float salarioA, salarioN;

    printf("Digite o seu salario atual: ");
    scanf("%f", &salarioA);

    if(salarioA < 800){
        salarioN = salarioA * 1.15;
        printf("Salario antes do reajuste: %.2f\n", salarioA);
        printf("Salario depois do reajuste: %.2f\n", salarioN);
    }
    else{
        if(salarioA >= 800 && salarioA < 1000){
            salarioN = salarioA * 1.1;
            printf("Salario antes do reajuste: %.2f\n", salarioA);
            printf("Salario depois do reajuste: %.2f\n", salarioN);
        }
        else{
            salarioN = salarioA * 1.05;
            printf("Salario antes do reajuste: %.2f\n", salarioA);
            printf("Salario depois do reajuste: %.2f\n", salarioN);
        }
    }
}
