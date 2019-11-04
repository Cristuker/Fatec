#include "stdio.h"
#define ex5

#ifdef ex1
main(){
    char a;
    int b;
    long c;
    float d;
    double e;
    unsigned char f;
    unsigned int g;
    unsigned long h;

    char *pc;
    int *pi;
    long *pl;
    float *pf;
    double *pd;
    unsigned char *puc;
    unsigned int *pui;
    unsigned long *pul;

    printf("Digite um char: \n");
    scanf("%c",&a);

    printf("Digite um numero para o inteiro: \n");
    scanf("%d",&b);

    printf("Digite um valor para long: \n");
    scanf("%ld",&c);

    printf("Digite um valor para float: \n");
    scanf("%f",&d);

    printf("Digite um numero para double: \n");
    scanf("%f",&e);

    printf("Digite um numero para unsigned char: \n");
    scanf("%u",&f);

    printf("Digite um numero para unsigned int: \n");
    scanf("%lu",&g);

    printf("Digite um numero para unsigned long: \n");
    scanf("%lu",&h);

     pc = &a;
     pi = &b;
     pl = &c;
     pf = &d;
     pd = &e;
     puc = &f;
     pui = &g;
     pul = &h;

    printf("         %4c, %3d, %4ld, %5f, %-5f\n",*pc,*pi,*pl,*pf,*pd);
    printf("         %13u, %13lu, %-13lu,\n",*puc,*pui,*pui);
    printf("        10        20        30        40        50        60        70 \n");
    printf("1234567890123456789012345678901234567890123456789012345678901234567890 \n");
    printf("    %4c      %3d       %4ld                %5f               %-6f \n",*pc,*pi,*pl,*pf,*pd);
    printf("          %13u        %-13lu\n        %-13lu \n",*puc,*pui,*pui);

}
#endif // ex1

#ifdef ex2
soma(int *pnumeros,int *pn,float *presultado){


    for(int i = 1 ; i <= *pn ; i++){
        printf("Digite o numero para a posicao %d: ",i);
        scanf("%d",&pnumeros[i]);
    }

    for(int i = 1 ; i <= *pn ; i++){

     *presultado = *presultado + pnumeros[i];
    }
    printf("O resultado da soma e: %.2f\n", *presultado);

}

subtracao(int *pnumeros,int *pn,float *presultado){


    for(int i = 1 ; i <= *pn ; i++){
        printf("Digite o numero para a posicao %d: ",i);
        scanf("%d",&pnumeros[i]);
    }

    for(int i = 1 ; i <= *pn ; i++){

     *presultado = *presultado - (-pnumeros[i]);
    }
    printf("O resultado da subtracao e: %.2f \n", *presultado);

}

divisao(int *pnumeros,int *pn,float *presultado){

    *presultado = 1;

    for(int i = 1 ; i <= *pn ; i++){
        printf("Digite o numero para a posicao %d: ",i);
        scanf("%d",&pnumeros[i]);

    }

    for(int i = 1 ; i <= *pn ; i++){

     *presultado = *presultado / pnumeros[i];
    }
    printf("O resultado da divisao e: %.2f \n", *presultado);

}

multiplicacao(int *pnumeros,int *pn,float *presultado){

    *presultado = 1;

    for(int i = 1 ; i <= *pn ; i++){
        printf("Digite o numero para a posicao %d: ",i);
        scanf("%d",&pnumeros[i]);
    }

    for(int i = 1 ; i <= *pn ; i++){

     *presultado = *presultado * pnumeros[i];
    }
    printf("O resultado da multiplicacao e: %.2f \n", *presultado);

}

main(){

    int acao,n;
    float resultado = 0;


    do{

        printf("\tQual operacao voce deseja realizar? \n[1]-Soma\n[2]-Subtracao\n[3]-Divisao\n[4]-Multiplicacao\n[0]-Sair\n-> ");
        scanf("%d",&acao);

        if(acao != 0){

            printf("Quantos numeros voce deseja usar na operacao?\n-> ");
            scanf("%d",&n);
            int numeros[n];

            switch(acao){
                case 1:{
                    soma(&numeros,&n,&resultado);
                    break;
                }
                case 2:{
                    subtracao(&numeros,&n,&resultado);
                    break;
                }
                case 3:{
                    divisao(&numeros,&n,&resultado);
                    break;
                }
                case 4:{
                    multiplicacao(&numeros,&n,&resultado);
                    break;
                }
                default: {
                    printf("Opcao invalida! \n");
                }
            }
        }

    }while(acao);


}
#endif // ex2

#ifdef ex3
procuraLetra(char letter,char *lettersV){


    for(int i = 0; i <= 12; i++){

        if(letter == lettersV[i]){
            printf("Achamos a sua letra!!! \n");
            break;
        }
        if(i == 12){
            printf("Não achamos a sua letra...\n");
        }

    }

}

main(){


char *pletra, letra;

char *pc;

char *letras[13] = {"b","d","f","h","j","l","m","o","q","s","u","w","y"};

int acao = 0;



pc = letras[0];

pletra = &letra;



do{
    printf("--------------------------------------------\n");
    printf(" ===MENU===\n");
    printf("[1]-Procurar uma letra \n[0]-Sair \n");
    scanf("%d",&acao);
    printf("--------------------------------------------\n");
    if(acao == 1){
        printf("Digite uma letra: \n");
        scanf("%s",&pletra);

        procuraLetra(pletra,pc);
    }

}while(acao);





}
#endif

#ifdef ex4
comparaString(char *stri1, char *stri2){

    for(int i = 0; i <= 10; i++){
        printf(" entrei na difereca %c %c\n",stri2[i],stri1[i]);
        if(stri1[i] != stri2[i]){
            printf("As string sao iguais. \n");
            break;
        }
        if(i == 10){
            printf("As strings sao diferentes \n");
        }
    }

}

main(){

char str1[10], str2[10];

char *pc1, *pc2;


int acao = 0;

pc1 = &str1[0];
pc2 = &str2[0];

do{

    printf("\t==MENU== \n1-Para comparar string \n0-Para sair \n> ");
    scanf("%d",&acao);

    if(acao == 1){

        printf("Digite uma string de ate 10 caracteres: \n");
        scanf("%s",&pc1);

        printf("Digite outra string de ate 10 caracteres: \n");
        scanf("%s",&pc2);

        comparaString(&pc1,&pc2);
    }


}while(acao);

}
#endif

#ifdef ex5
#endif
