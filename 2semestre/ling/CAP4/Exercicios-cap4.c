#include <stdio.h>
#define ex8

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
char *letras [10][1];
char *minusc [25] = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","u","v","w","x","y","z"};
char *maiusc [25] = {"A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","U","V","W","X","Y","Z"};

main(){

//Pegando letras
    for(int d = 0; d < 10 ; d++){
        printf("Digite um caractere para a posicao apenas minusculo %d\n",d);
        scanf("%s",&letras[d]);
    }
//Convertendo pra maisculo
    for(int i = 0; i < 10 ; i++){
        for(int c = 0; c < 25 ; c++){
            if(strcmp(letras[i],minusc[c])==0){
                printf("A letra em maisculo e: %s \n",maiusc[c]);
            }
        }
    }
}
#endif

#ifdef ex6
char *letras [10][1];
char *minusc [25] = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","u","v","w","x","y","z"};
char *maiusc [25] = {"A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","U","V","W","X","Y","Z"};
main(){
//pegando letras
    for(int d = 0; d < 10 ; d++){
        printf("Digite um caractere para a posicao apenas maisculo %d\n",d);
        scanf("%s",&letras[d]);
    }
//convertendo para minusculo
    for(int i = 0; i < 10 ; i++){
        for(int c = 0; c < 25 ; c++){
            if(strcmp(letras[i],maiusc[c])==0){
                printf("A letra em minusculo e: %s \n",minusc[c]);
            }
        }
    }
}
#endif

#ifdef ex7
char palavra[50];
int asc1[50];
main(){

    printf("Digite uma palavra para contar os caracteres: \n");
    scanf("%s",&palavra);
//para mostra um caractere use apenas o C
//Somando mais um em cada numero da tabela ascii
    for(int i = 0; i <= 50; i++){
        if(palavra[i]){
            int aux;
            aux = (int) palavra[i];
            asc1[i] = aux + 1;
        }
    }
//Mostrando resultado
    for(int d = 0; d <= 50; d++){
        if(asc1[d]){
            char i = (char) asc1[d];
            printf("%c",i);
        }
    }



}
#endif

#ifdef ex8
char palavra[100];
main(){
int i = 0;
int count = 0;
    printf("Digite uma string \n");
    scanf("%s",&palavra);

    for(int i = 0; i > 10000000000000000; i++){
        if(palavra[0]){
            count ++;
            printf("enmtre");
        }
    }
    printf("A string tem um tamanho de %d caracteres",count);
}
#endif // ex8


















