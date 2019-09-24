#include <string.h>
#define ex8

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

#ifdef ex4
main(){
int hora = 0;
int minutos = 0;
int segundos = 0;

printf("Digite a hora em que a sua ligação comecou: \n");
scanf("%d", &hora);

printf("Digite os minutos em que a sua ligação comecou: \n");
scanf("%d",&minutos);

printf("Digite os segundos em que a sua ligação comecou: \n");
scanf("%d",&segundos);


//Dados do termino

int horaT = 0;
int minutosT = 0;
int segundosT = 0;


printf("Digite a hora em que a sua ligação terminou: \n");
scanf("%d", &horaT);

printf("Digite os minutos em que a sua ligação terminou: \n");
scanf("%d",&minutosT);

printf("Digite os segundos em que a sua ligação terminou: \n");
scanf("%d",&segundosT);


int totH = horaT - hora;
int totM = minutosT - minutos;
int totS = segundosT - segundos;

printf("A sua ligação durou %d horas %d minutos e %d segundos... \n",totH,totM,totS);



}
#endif // ex4

#ifdef ex5
main(){

float numero;

printf("Digite um numero para arredondar: \n");
scanf("%f", &numero);

int parteInt = numero;
float fracao = numero - parteInt;


if(fracao <= 0.24){
    fracao = 0;
    numero = parteInt + fracao;
}

if(fracao >= 0.25 && fracao <= 0.74){
    fracao = 0.5;
    numero = parteInt + fracao;
    printf("passei aqui");
}

if(fracao >= 0.75){
    fracao = 0.75 + 0.25;
    numero = parteInt + fracao;
}




printf("O numero depois de ser tratado ficou %.2f \n",numero);


}
#endif

#ifdef ex6

float calcDesconto(float valorCombustivel,int litrosCalc,int porcentagem){

    float desconto;
    desconto = (valorCombustivel*porcentagem)/100;
    desconto = desconto * litrosCalc;
    return desconto;
}



main(){

float litros;
char combustivel;
float totalSemDesconto;
float totalComDesconto;
float desconto;

printf("Quantos litros de combustivel voce comprou: \n");
scanf("%f",&litros);

printf("Qual tipo de combustivel voce comprou (A-alcool G-Gasolina) : \n");
//scanf("%c", &combustivel);

//combustivel = getchar();


printf("litros %f combustivel %c",litros,combustivel);
/*
if(combustivel == 'A'){

    totalSemDesconto = litros*3.88;
    if(litros <= 20){
        totalComDesconto = totalSemDesconto - calcDesconto(3.88,litros,3);
        printf("O valor pago no combustivel e: %.2f",totalComDesconto);
    }

    if(litros > 20){
        totalComDesconto = totalSemDesconto -calcDesconto(3.88,litros,5);
        printf("O valor pago no combustivel e: %.2f",totalComDesconto);
    }

}

if(combustivel == 'G'){

    totalSemDesconto = litros*3.18;
    if(litros <= 20){
        totalComDesconto = totalSemDesconto - calcDesconto(3.18,litros,4);
        printf("O valor pago no combustivel e: %.2f",totalComDesconto);
    }
    if(litros > 20){
        totalComDesconto = totalSemDesconto - calcDesconto(3.18,litros,6);
        printf("O valor pago no combustivel e: %.2f",totalComDesconto);
    }

}
*/

//gasolina 1l = 3,88
//alcool 1l = 3,18


}
#endif

#ifdef ex7
main(){
float km;
float gasolina;
float consumo;


printf("Digite os Km percorrido: \n");
scanf("%f",&km);

printf("Digite a quantidade de gasolina consumida: \n");
scanf("%f",gasolina);

consumo = km/gasolina;

if(consumo < 8){
    printf("VENDA O CARRO!!! \n");
}

if(consumo > 8 && consumo < 14){
    printf("Economico!");
}

if(consumo > 14){
    printf("Super economico!");
}


}
#endif // ex7

#ifdef ex8
main(){
float peso = 0;
float altura = 0;
float imc = 0;

printf("**Calculo do IMC** \n");

printf("Digite a sua altura: \n");
scanf("%f",&altura);

printf("Digite o seu peso: \n");
scanf("%f",&peso);

imc = peso/(altura*altura);

if(imc < 18.5){
    printf("Abaixo do peso \n");
}

if(imc >= 18.6 && imc <= 24.9){
    printf("Saudavel \n");
}

if(imc >= 25.0 && imc <= 29.9){
    printf("Peso em excesso \n");
}

if(imc >= 30.0 && imc <= 34.9){
    printf("Obesidade Grau I \n");
}

if(imc >= 35.0 && imc <= 39.9){
    printf("Obesidade Grau II \n");
}

if(imc > 40.0){
    printf("Obesidade Grau III \n");
}

printf("O seu imc : %.2f",imc);
}
#endif // ex8
