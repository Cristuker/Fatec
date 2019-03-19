#include "stdio.h"

main()
{
    float n1, n2, n3, n4, media;
    printf("Digite a primeira nota: ");
    scanf("%f", &n1);
    while(n1 <= 0 || n1 >=10){
        printf("Digite uma nota valida: ");
        scanf("%f", &n1);
    }
    printf("Digite a segunda nota: ");
    scanf("%f", &n2);
    while(n2 <= 0 || n2 >=10){
        printf("Digite uma nota valida: ");
        scanf("%f", &n2);
    }
    printf("Digite a terceira nota: ");
    scanf("%f", &n3);
    while(n3 <= 0 || n3 >=10){
        printf("Digite uma nota valida: ");
        scanf("%f", &n3);
    }
    printf("Digite a quarta nota: ");
    scanf("%f", &n4);
    while(n4 <= 0 || n4 >=10){
        printf("Digite uma nota valida: ");
        scanf("%f", &n4);
    }
    media = (n1 + n2 + n3 + n4) / 4;

    if(media >= 5){
        printf("Parabens você foi aprovado, a sua media e: %.1f\n", media);
    }
    else{
        printf("Infelizmente você foi reprovado, a sua media e: %.1f\n", media);
    }
}
