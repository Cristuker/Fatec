#include <string.h>
#define ex3

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

#ifdef ex2
main(){

printf(" ************************** \n");
printf(" *  Adivinhando o numero  * \n");
printf(" ************************** \n");
printf("\n");
printf(" *********************************\n");
printf(" * Pense em um numero de 0 a 9   * \n");
printf(" * e use os comandos <(menor)    * \n");
printf(" * =(igual) >(maior) para indicar* \n");
printf(" * o que o numero e!             * \n");
printf(" ********************************* \n");

int media = 50;
int maior = 99;
int menor = 0;
char comando ;


do{


    printf("-------------------------------\n");
    printf("O seu numero e: %d ? \n",media);

    comando = getchar();

    if(comando == '>'){
        media = (maior+media)/2;
    }

    if(comando == '<'){
        maior = media;
        media = maior/2;
    }




}while(comando != '=');

printf("O numero e: %d, eu sabia que ia conseguir!",media);

}

#endif // ex2

#ifdef ex3
main(){

printf(" ************************** \n");
printf(" *  Adivinhando o numero  * \n");
printf(" ************************** \n");
printf("\n");
printf(" *********************************\n");
printf(" * Pense em um numero de 0 a 9   * \n");
printf(" * e use os comandos <(menor)    * \n");
printf(" * =(igual) >(maior) para indicar* \n");
printf(" * o que o numero e!             * \n");
printf(" ********************************* \n");

int media = 50;
int maior = 99;
int menor = 0;
char comando ;


do{


    printf("-------------------------------\n");
    printf("O seu numero e: %d ? \n",media);

    comando = getchar();


    switch(comando){

        case '>':{
            media = (maior+media)/2;
            break;
        }
        case '<':{
            maior = media;
            media = maior/2;
            break;
        }
        case '=':{
            printf("Jogo encerrado! \n");
            break;
        }
        default:{
            printf("Opção invalida \n");
        }

    }


}while(comando != '=');

printf("O numero e: %d, eu sabia que ia conseguir!",media);
}

#endif
