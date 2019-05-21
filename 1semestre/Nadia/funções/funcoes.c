#include <stdio.h>
#define ex5

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

#ifdef ex4
float RealSalNovo(float salarioF){

    float newSalario,porcentagem;

    //calculo do reajuste baseado no valor do salario
    if(salarioF < 800){
        porcentagem = (salarioF*15)/100;
        newSalario = salarioF+porcentagem;
    }
    if(salarioF >= 800 && salarioF <=1000){
        porcentagem = (salarioF*10)/100;
        newSalario = salarioF+porcentagem;
    }
    if(salarioF >1000){
        porcentagem = (salarioF*5)/100;
        newSalario = salarioF+porcentagem;
    }
    //retorno do novo salario
    return newSalario;
}

int main(){

    float salario;
    float nsalario;

    printf("Qual o valor do seu salario? ");
    scanf("%f", &salario);

    //atribuição do return da função RealSalNovo, para trabalhar com o valor no metodo principal
    nsalario = RealSalNovo(salario);

    printf("O seu salario antigo era: %2.f \n",salario);
    printf("Agora o seu novo salario e: %2.f \n",nsalario);


}
#endif // ex4

#ifdef ex5
char** ParImpar(int n){

    char *status ="";

    if(n%2 ==0 ){
        status = "par";
    }else{
        status = "impar";
    }
    return status;
}

int main(){

    int n;
    char * resul;

    do{
        printf("Digite um numero: ");
        scanf("%d", &n);

    }while(n <= 0);

    resul = ParImpar(n);

    printf("O numero %d e %s",n,resul);


}
#endif // ex5
