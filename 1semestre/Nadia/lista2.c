#include <stdio.h>

#define ex3



#ifdef ex1
int main(){

int pessoas=0,idade=0,recebe=0;

printf("Digite o numero de pessoas: ");
scanf("%d", &pessoas);

    for(int i=0;i<pessoas;i++){
        printf("Digite uma idade: ");
        scanf("%d",&recebe);
        idade =idade+recebe;

    }

printf("A somatoria das idade e: %d",idade);

}
#endif // ex1

#ifdef ex2
int main(){
int a=3,termos=0,b=4,indice=0;

printf("Quantos termos voce quer? ");
scanf("%d", &termos);

    for(int i =0;i<=termos;i++){
    printf(" %d ",a);
    a=a+3;
    }
    printf("\n");
    while(indice < termos){
        printf(" 1/%d ",b);
        b=b+4;
        indice++;
    }
}
#endif // ex2

#ifdef ex3
int main(){
int pessoas=0;
float peso=0,recebe=0,media=0;

printf("Digite o numero de pessoas que voce deseja calcular a media de pesos: ");
scanf("%d",&pessoas);

    for(int i=0;i<pessoas;i++){
        printf("Digite o peso: ");
        scanf("%f",&recebe);
    peso=recebe+peso;

    }
    media = peso/pessoas;

    printf("A media de peso das pessoas e: %2f",media);
}
#endif // ex3
