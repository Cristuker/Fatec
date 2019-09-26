#include <stdio.h>
#define ex5

#ifdef ex1
char nome [5][7];
main(){
int i = 0;

    while( i < 5){
        printf("Digite um nome: \n");

        scanf("%s", &nome[i]);
        i++;
    }


    printf("        10        20        30        40        50 \n");
    printf("12345678901234567890123456789012345678901234567890 \n");
    printf("  %7s                                   %-7s       \n",nome[0],nome[4]);
    printf("            %7s               %-7s                 \n",nome[1],nome[3]);
    printf("                      %7s                          \n",nome[2]);
}
#endif


#ifdef ex2
char nome[3][10];
main(){
    for(int indice = 0; indice < 3; indice ++){
        printf("Digite um nome para guardar no vetor: \n");
        scanf("%s", &nome[indice]);
    }
    printf("        10        20        30        40        50        60 \n");
    printf("123456789012345678901234567890123456789012345678901234567890 \n");
    printf("    %7s             %7s             %-7s \n",nome[0],nome[1],nome[2]);
}
#endif

#ifdef ex3
main(){
char str1[10];
char str2[10];

    printf("Digite uma string: \n");
    scanf("%s",&str1);

    printf("Digiet outra string: \n");
    scanf("%s",&str2);

    if(strcmp(str1,str2) == 0){
        printf("As string sao iguais!!! \n");
    }else{
        printf("As string são diferentes....\n");
    }

}
#endif

#ifdef ex4
char *dias [7] = {"seg","ter","qua","qui","sex","sab","dom"};
char str[3];
main(){


int dia = 0;
    printf("Digite uma sigla de dia da semana: \n");
    scanf("%s",&str);

    for(int i = 0; i < 7; i++){
        if(strcmp(dias[i],str)==0){
            dia = i;
            break;
        }
    }

    switch(dia){
        case(0):{
            printf("Segunda-feira\n");
            break;
        }
        case(1):{
            printf("Terça-feira\n");
            break;
        }
        case(2):{
            printf("Quarta-feira\n");
            break;
        }
        case(3):{
            printf("Quinta-feira\n");
            break;
        }
        case(4):{
            printf("Sexta-feira\n");
            break;
        }
        case(5):{
            printf("Sabado\n");
            break;
        }
        case(6):{
            printf("Domingo \n");
            break;
        }
        default:{
            printf("Digite uma entrada valida... \n");
        }

    }
}
#endif

#ifdef ex5
char letras [10][1];
main(){


    for(int i = 0; i < 10 ; i++){
        printf("Digite um caractere para a posicao %d\n",i);
        scanf("%s",&letras[i]);
    }
    int teste = (int)letras[1];
printf(teste);
}
#endif
