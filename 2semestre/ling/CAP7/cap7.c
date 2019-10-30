#include "stdio.h"
#define ex3

#ifdef ex1
struct numeros{
    char a;
    int b;
    long c;
    float d;
    double e;
    unsigned char f;
    unsigned int g;
    unsigned long h;
};
main(){

    struct numeros tela;



    printf("Digite um char: \n");
    scanf("%c",&tela.a);

    printf("Digite um numero para o inteiro: \n");
    scanf("%d",&tela.b);

    printf("Digite um valor para long: \n");
    scanf("%ld",&tela.c);

    printf("Digite um valor para float: \n");
    scanf("%f",&tela.d);

    printf("Digite um numero para double: \n");
    scanf("%f",&tela.e);

    printf("Digite um numero para unsigned char: \n");
    scanf("%u",&tela.f);

    printf("Digite um numero para unsigned int: \n");
    scanf("%lu",&tela.g);

    printf("Digite um numero para unsigned long: \n");
    scanf("%lu",&tela.h);



    printf("         %4c, %3d, %4ld, %52.f, %-52.f\n",tela.a,tela.b,tela.c,tela.d,tela.e);
    printf("         %13u, %13lu, %-13lu,\n",tela.f,tela.g,tela.h);
    printf("        10        20        30        40        50        60        70 \n");
    printf("1234567890123456789012345678901234567890123456789012345678901234567890 \n");
    printf("    %4c      %3d       %4ld                %52.f               %-62.f \n",tela.a,tela.b,tela.c,tela.d,tela.e);
    printf("          %13u        %-13lu\n        %-13lu \n",tela.f,tela.g,tela.h);

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

struct pessoa dados[4];

addDados(int pessoaF){

printf("Digite um nome:\n");
scanf("%s",&dados[pessoaF].nome);
getchar();

printf("Digite o endereco ate 20 caracteres *sem acentos e espacos*: \n");
gets(dados[pessoaF].end);


printf("Digite o nome da cidade ate 20 caracteres: \n");
gets(dados[pessoaF].cidade);



printf("Digite a sigla do estado: \n");
gets(dados[pessoaF].estado);

printf("Digite o cep ate 11 caracteres: \n");
gets(dados[pessoaF].cep);

}

mostrarDados(int pessoaD){

    printf("Nome: %s \n",dados[pessoaD].nome);
    printf("Endereco: %s \n",dados[pessoaD].end);
    printf("Cidade: %s \n",dados[pessoaD].cidade);
    printf("Estado: %s \n",dados[pessoaD].estado);
    printf("CEP: %s",dados[pessoaD].cep);

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
main(){
    char acao;

    struct pontos{
        int X;
        int Y;
    };

    struct pontos posicao;

    double raiz;
    int potX, potY, soma;

    do{
        printf("Digite a posicao de X: ");
        scanf("%d", &posicao.X);

        printf("Digite a posicao de Y: ");
        scanf("%d", &posicao.Y);

        potX = pow(posicao.X,2);
        potY = pow(posicao.Y,2);
        soma = potX+potY;
        raiz = sqrt(soma);

        printf("A distancia e': %f ", raiz);
        getchar();
        printf("\nDeseja continuar? S/N");
        scanf("%c",&acao);
    }while(acao == 's');
}
#endif
