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
main(){

char nom1[11], *p1;
char nom2[11], *p2;

p1 = &nom1[0];
p2 = &nom2[0];

    for(;;){
        printf("Para sair apenas aperte enter... \n");

        printf("Digite nome1: \n>");
        gets(p1);

        if( *(p1 + 0) == '\0')
            break;
        printf("Digite nome2: \n>");
        gets(p2);

    comparaString(p1,p2);
    }
}

comparaString(char *stri1, char *stri2){
int x;
for(x=0;*(stri1 + x) != '\0';x++)
    if(*(stri1 + x) != *(stri2 + x))
        break;
if(*(stri1 + x) == '\0' && *(stri2 + x) == '\0')
    printf("São iguais \n");
else
    printf("São diferentes \n");

}
#endif

#ifdef ex5
struct reg{
    char no[20];
    char end[20];
    char cid[20];
    char es[3];
    char cep[10];
};

main(){
struct reg c[4], *preg;
int x;
int op;

preg = &c[0];

for(;;){
    printf("1 - Entrar dados\n");
    printf("2 - Listar dados\n");
    printf("3 - Sair\n");
    scanf("%d",&op);
    getchar();
 if(op == 3)
        break;

    switch(op){
            case 1 :
            for(x = 0 ; x < 2 ; x++){
                printf("Digite um nome:");
                gets((preg+x) -> no);

                printf("Digite um endereco:");
                gets((preg+x)->end);

                printf("Digite um cidade:");
                gets((preg+x)->cid);

                printf("Digite um estado:");
                gets((preg+x)->es);

                printf("Digite um cep:");
                gets((preg+x)->cep);

                printf("\n");
            }
                break;
            case 2 :
            for(x = 0; x < 2 ; x++){
                printf("\n");
                printf("Listando registro %d \n",x);
                printf("Nome: %s\n",(preg+x)->no);
                printf("Endereco: %s\n",(preg+x)->end);
                printf("Cidade: %s\n",(preg+x)->cid);
                printf("Estado: %s\n",(preg+x)->es);
                printf("Cep: %s\n",(preg+x)->cep);
            }
            default:
            break;
   }
}
}
#endif

#ifdef ex6
struct reg{
    char no[20];
    char end[20];
    char cid[20];
    char es[3];
    char cep[10];
};

main(){
struct reg c[4], *p;
int x;
int op;

p = &c[0];

read(p);

    for(;;){
        printf("1 - entra dados\n");
        printf("2 - lista dados\n");
        printf("3 - comp dados\n");
        printf("4 - altera dados\n");
        printf("5 - exclui dados\n");
        printf("6 - sair\n");
        scanf("%d",&op);
        getchar();
     if(op == 6)
            break;

        switch(op){
            case 1 :
                entra(p);
                break;
            case 2 :
                imp(p);
                break;
            case 3 :
                x = comp(p);
                if(x != -1)
                    printf("iguais\n");
                else
                    printf("diferentes\n");
                break;
            case 4 :
                altera(p);
                break;
             case 5 :
                exclui(p);
                break;
       }
    }
}

entra(struct reg *p){
    int x;
    for(x=0;x<2;x++){
        printf("digite o nome:");
        gets((p+x) -> no);
        printf("digite o endereco:");
        gets((p+x)->end);
        printf("digite o cidade:");
        gets((p+x)->cid);
        printf("digite o estado:");
        gets((p+x)->es);
        printf("digite o cep:");
        gets((p+x)->cep);
        printf("\n");

    }
    save(p);
}

imp(struct reg *p){
    int x;
    for(x=0;x<2;x++){
        printf("\n o nome: %s\n",(p+x)->no);
        printf(" o endereco: %s\n",(p+x)->end);
        printf(" o cidade: %s\n",(p+x)->cid);
        printf(" o estado: %s\n",(p+x)->es);
        printf(" o cep: %s\n",(p+x)->cep);
    }
}

comp(struct reg *p){

    char nome1[20], *p1;
    int x,y;
    p1=nome1;

    printf("digite nome1: \n");
    scanf("%s",p1);


    for(y=0;y<2;y++){

        for(x=0;*(p1 + x) != '\0';x++){
            if(*(p1 + x) != (p + y)->no[x])
                break;
        }

        if(*(p1 + x) == '\0' && (p + y)->no[x] == '\0'){

            return y;
        }

    }
    return -1;
}

altera(struct reg *p){
    int x;
    x = comp(p);
    if(x == -1){
        printf("nao existe\n");
        return;
    }
    getchar();
    printf("digite o nome:");
    gets((p+x) -> no);
    printf("digite o endereco:");
    gets((p+x)->end);
    printf("digite o cidade:");
    gets((p+x)->cid);
    printf("digite o estado:");
    gets((p+x)->es);
    printf("digite o cep:");
    gets((p+x)->cep);
    printf("\n");
    save(p);
}

exclui(struct reg *p){

    int x;
    x = comp(p);
    if(x == -1){
        printf("nao existe\n");
        return;
    }
    getchar();
    printf("apaga registro!\n");
    printf("nome e': %s\n",(p+x) -> no);
    (p+x) -> no[0] = '*';
    save(p);

}
save(struct reg *p){
    int x;
    struct reg temp;
    FILE *pa;

    pa=fopen("cad","w");
    for(x=0;x<2;x++){
        printf("\n o nome: %s\n",(p+x)->no);
        printf(" o endereco: %s\n",(p+x)->end);
        printf(" o cidade: %s\n",(p+x)->cid);
        printf(" o estado: %s\n",(p+x)->es);
        printf(" o cep: %s\n",(p+x)->cep);
        fwrite((p+x),sizeof(temp),1,pa);
    }
    fclose(pa);
}

read(struct reg *p){
    int x;
    struct reg temp;
    FILE *pa;
    pa=fopen("cad","r");
    for(x=0;x<2;x++){
        fread((p+x),sizeof(temp),1,pa);
    }
    fclose(pa);
}
#endif
