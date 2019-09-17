#define ex5
#include "stdio.h"

#ifdef ex1

long b = -2147483647;
unsigned short c = 65535;
unsigned char d = 255;
unsigned int e = 65535;
unsigned long f = 4294967295;
int g = -32768;
float h = 3.4e38;
int main(){
    short a = -32768;
    char i = "a";
    double j = 1.7E+308;


    printf("Short:%d \n",a);
    printf("Long: %ld \n",b);
    printf("Unsigned short: %hu \n",c);
    printf("Unsigned char: %u \n",d);
    printf("Unsigned Int: %u \n",e);
    printf("Unsigned Long: %lu \n",f);

    printf("Int: %d \n",g);
    printf("Float: %2.f \n",h);
    printf("Char: %c \n",i);
    printf("Double: %2.f",j);






}
#endif // ex1

#ifdef ex2
main(){

char a;
printf("Digite um valor para variavel char: ");
a = getchar();

int b = 0;
printf("Digite um numero inteiro: ");
scanf("%d", &b);

float c = 0;
printf("Digite um numero para float: ");
scanf("%f", &c);

double d = 0;
printf("Digite um numero para double: ");
scanf("%f", &d);

short int e = 0;
printf("Digite um inteiro curto: ");
scanf("%d", &e);

long int f = 0;
printf("Digite um inteiro longo: ");
scanf("%d",&f);

unsigned int g = 0;
printf("Digite um valor para unsigned: ");
scanf("%d",&d);


printf("        10        20        30        40        50        60\n");
printf("12345678901234567890123456789012345678901234567890123456789012345 \n");
printf("  %6d               %11ld                %6d \n",e,f,b);
printf("              %8f               %9f              %54c",c,d,a);

}
#endif // ex1

#ifdef ex3
main(){
char a;
printf("Digite um valor para variavel char: ");
a = getchar();

int b = 0;
printf("Digite um numero inteiro: ");
scanf("%d", &b);

float c = 0;
printf("Digite um numero para float: ");
scanf("%f", &c);

double d = 0;
printf("Digite um numero para double: ");
scanf("%f", &d);

short int e = 0;
printf("Digite um inteiro curto: ");
scanf("%d", &e);

long int f = 0;
printf("Digite um inteiro longo: ");
scanf("%d",&f);

unsigned int g = 0;
printf("Digite um valor para unsigned: ");
scanf("%d",&d);

unsigned char h;
printf("Digite um valor para sem sinal char: ");
scanf("%c",&h);

long int i =0;
printf("Digite um valor para um inteiro longo: ");
scanf("%ld",&i);

int j =0 ;
printf("Digite um numero para um inteiro: ");
scanf("&d",&j);


printf("        10        20        30        40        50        60\n");
printf("12345678901234567890123456789012345678901234567890123456789012345 \n");
printf("  %6d               %11ld                %6d \n",e,f,b);
printf("              %8f               %9f              %54c",c,d,a);
printf("           %c         %d                                 %ld",h,i,j);



}
#endif

#ifdef ex4
main(){

 int a;
int b;

printf("Digite um numero para a variavel a: ");
scanf("%d",&a);



printf("Digite um numero para a variavel b: ");
scanf("%d",&b);

a=b;
b=a;


printf("Valores depois da trocar a: %d ----- b: %d",a,b);


}
#endif

#ifdef ex5




int limite;

main(){
int multiplicando;


printf("Digite o numero que será determinado o multiplo: ");
scanf("%d",&multiplicando);

printf("Digite o limite: ");
scanf("%d",&limite);

int menorMultiplo = multiplo(multiplicando);

printf("O menor menor multiplo de %d com limite %d = %d",multiplicando,limite,menorMultiplo);



}

int multiplo(int numero){

    int tabuada[limite];

    for(int indice = 1; numero<= limite; indice++){

        tabuada[indice] = numero*indice;
        if(tabuada[indice] >= limite){
            return tabuada[indice];
        }

    }

}

#endif