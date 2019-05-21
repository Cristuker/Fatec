#include <stdio.h>
#define ex3

#ifdef ex2
int Verifica(int a){

    int status = 0;
//teste para saber se o numero é positivo negativo ou igual a zero
        if(a > 0){
            status = 1;

        }
        if(a < 0){
            status = 2;

        }
        if(a == 0){
            status = 0;

        }

        return status;
}

int main(){

    int n =0;
    int stats=0;
    char * tela = "";


    printf("Digite um numero: ");
    scanf("%d", &n);

    stats = Verifica(n);

    //verificando para atribuir os status do numero e mostrar na função
    if(stats == 1){
        tela = "positivo";
    }
    if(stats == 2){
        tela = "negativo";
    }
    if(stats == 0){
        tela = "zero";
    }

    printf("O numero e %s",tela);

}

#endif // ex2

#ifdef ex3
float divisao(float a,float b){

    return a/b;
}
int main(){

    float n1,n2=0;
    float tot;

    printf("Digite o primeiro numero: ");
    scanf("%f", &n1);

    printf("Digite o segundo numero: ");
    scanf("%f", &n2);

    tot = divisao(n1,n2);

    printf("O resultado da divisao e: %2.f",tot);


}
#endif // ex
