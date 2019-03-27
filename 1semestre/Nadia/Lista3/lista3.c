#include <stdio.h>
#define ex7

#ifdef ex1
int main(){

int num =0;

    while(num <=100){

        if(num%2==1){

        printf("%d",num);
        printf("\n");

        }

    num++;

    }
}
#endif
//----------------------------------------------------------------
#ifdef ex2
int main(){

    int num =50;

    while(num <=300){

        if(num%2==1){

        printf("%d",num);
        printf("\n");

        }

    num++;

    }



}
#endif // ex2
//----------------------------------------------------------------
#ifdef ex4
 int main(){

int alunos =0,indice=0,nota6=0;
float notas =0,recebe=0,tot=0;;

printf("Quantos alunos tem na sala?");
scanf("%d", &alunos);

    while(indice<alunos){
            printf("Digite a nota do aluno: ");
            scanf("%f",&recebe);
                if(recebe >= 6){
                    nota6++;
                }
            notas = notas+recebe;
            indice++;
    }
     tot= notas/alunos;
     printf("A media da sala e: %.2f", tot );
     printf("\n");
     printf("%d alunos tiraram nota maior ou igual a 6",nota6);


 }
#endif // ex3
//----------------------------------------------------------------
#ifdef ex3
int main(){

int num=0,indice=0;

printf("Digite um numero: ");
scanf("%d",&num);

    while(indice<num){
        if(indice%2==0){
            printf("%d",indice);
            printf("\n");
        }
    indice++;
    }



}
#endif // ex4
//----------------------------------------------------------------
#ifdef ex5
int main(){

int num=0,recebe=0;

    while(num < 20){

    printf("Digite um numero: ");
    scanf("%d",&recebe);

    num = recebe+num;
    printf("%d \n",num);
    }


}
#endif // ex5
//----------------------------------------------------------------
#ifdef ex7
int main(){
    int n=0;
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    while(n >=0){
        if(n%2==0){
            printf("%d e par \n", n);

        }else{
            printf("%d e impar \n",n);


        }
        n--;
    }

}
#endif // ex7
