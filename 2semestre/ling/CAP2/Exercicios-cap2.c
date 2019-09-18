#include <string.h>
#define ex1

#ifdef ex1
main(){
    float n;
    float i = 0;
    float tot = 0;
    float media;

    do{
        printf("Digite um numero: ");
        scanf("%f", &n);
        tot = tot+n;
        i++;

    }while(n>=0);

    media = tot/i;

    printf("A media dos numeros e: %.2f",media);


}
#endif
