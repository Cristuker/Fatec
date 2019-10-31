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
struct pessoa{
    char nome[10];
    char end[20];
    char cidade[20];
    char estado[3];
    char cep[11];
};

struct pessoa *pd;

struct pessoa dados[4];

addDados(int pessoaF){

pd = &dados[0];

printf("Digite um nome: \n");
scanf("%s",(pd+pessoaF)->nome);

printf("Digite o endereco ate 20 caracteres *sem acentos e espacos*: \n");
scanf("%s",(pd+pessoaF)->end);
getchar();

printf("Digite o nome da cidade ate 20 caracteres: \n");
scanf("%s",(pd+pessoaF)->cidade);



printf("Digite a sigla do estado: \n");
scanf("%s",(pd+pessoaF)->estado);

printf("Digite o cep ate 11 caracteres: \n");
scanf("%s",(pd+pessoaF)->cep);

}

mostrarDados(int pessoaD){

    printf("Nome: %s \n",(pd+pessoaD)->nome);
    printf("Endereco: %s \n",(pd+pessoaD)->end);
    printf("Cidade: %s \n",(pd+pessoaD)->cidade);
    printf("Estado: %s \n",(pd+pessoaD)->estado);
    printf("CEP: %s",(pd+pessoaD)->cep);

}

main(){



int acao = 1;
int pessoa;


while(acao == 1){
    printf("        ===MENU===\n");
    printf("[1] Para adicionar ou alterar dados \n[2] Para mostrar dados \n[0] Para sair do programa \n");
    printf("-> ");
    scanf("%d",&acao);

    if(acao == 1 ){
        printf("Digite o numero da pessoa que deseja alterar/inserir dados de 0 a 4 \n");
        scanf("%d",&pessoa);

        addDados(pessoa);
    }

    if(acao == 2){
        printf("Digite o numero da pessoa que deseja alterar/inserir dados de 0 a 4 \n");
        scanf("%d",&pessoa);
        mostrarDados(pessoa);
    }

}


}
#endif

#ifdef ex3

char *letras[13] = {"b","d","f","h","j","l","m","o","q","s","u","w","y"};

char *pc;

procuraLetra(char letter){


    for(int i = 0; i <= 12; i++){
        if(letter == pc[i]){
            printf("Achamos a sua letra!!! \n");
            break;
        }
        if(i == 12){
            printf("Não achamos a sua letra...\n");
        }

    }

}

main(){

int acao = 0;

char *pletra, letra;

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

        procuraLetra(pletra);
    }

}while(acao);





}
#endif

#ifdef ex4

char str1[10],str2[10];

char *pc1, *pc2;



comparaString(char stri1[10], char stri2[10]){

    for(int i = 0; i <= 10; i++){
        if(stri1[i] != stri2[i]){
            printf("As strings são diferentes! \n");
            break;
        }
        if(i == 10){
            printf("As string são iguais. \n");
        }
    }

}

main(){

int acao = 0;


pc1 = &str1[0];
pc2 = &str2[0];


do{


    printf(" ==MENU== \n1-Para comparar string \n0-Para sair \n");
    scanf("%d",&acao);

    if(acao == 1){

        printf("Digite uma string de ate 10 caracteres: \n");
        scanf("%s",&*pc1);

        printf("Digite outra string de ate 10 caracteres: \n");
        scanf("%s",&*pc2);

        comparaString(pc1,pc2);
    }


}while(acao);





}
#endif

#ifdef ex5
 comparaNumeros(){

int entrada;
int media = 0;
int i = 0;
int numero = 0;

int *pie,*pin,*pii,*pim;

pie = &entrada;
pin = &numero;
pii = &i;
pim = &media;


   for(;;){

        printf("Digite um numero: \n");
        scanf("%d",&*pie);



        if(*pie >= 0){
            *pin = *pin + *pie;
            i++;
        }else{
            *pim = *pin / *pii;
            printf("A media dos numeros e: %d \n",*pim);
            break;
        }

    }

}


main(){

int acao;
int *pia;

pia = &acao;
    do{
        printf(" -MENU-\n[1]-Comparar numeros \n[0]-Para sair.\n");
        scanf("%d",&*pia);

        if(*pia == 1){
            comparaNumeros();
        }

    }while(acao);


}
#endif
