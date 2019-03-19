#include "stdio.h"

main()
{
    float n1, n2, n3, n4, soma;

    do{
        printf("Digite o primeiro numero: ");
        scanf("%f", &n1);
        while(n1 <= 10 || n1 >=25){
            printf("O primeiro numero deve ser maior ou igual a 10 e menor ou igual a 25. Digite o numero novamente: ");
            scanf("%f", &n1);
        }
        printf("Digite o segundo numero: ");
        scanf("%f", &n2);
        while(n2 < 0 ){
            printf("O segundo numero deve ser maior ou igual a 0. Digite o numero novamente: ");
            scanf("%f", &n2);
        }
        n3 = n1 + n2;

        n4 = n1*n2*n3;

        soma = (n1*n1) + (n2*n2) + (n3*n3) + (n4*n4);
        if(soma < 50000){
            printf("A soma do quadrado é inferior a 50000! ");
        }
    }while(soma<50000);

    printf("A soma do quadrado dos numeros e: %.2f", soma);
}
