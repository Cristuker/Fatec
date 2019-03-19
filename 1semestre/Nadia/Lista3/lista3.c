#include <stdio.h>
#define ex5

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
#ifdef ex3
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
     printf("%d alunos tiraram nota mais ou igual a 6",nota6);


 }
#endif // ex3
//----------------------------------------------------------------
#ifdef ex4
int main(){

int num=0,indice=0;

printf("Digite um numero: ");
scanf("%d",&num);

    while(indice<num){
        if(indice%2==1){
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

int n=0;

printf("Digite um numero ");
scanf("%d" ,&n);

    for(int i;n>0;n--){
        if(n%2==0){
            printf("%d este numero e par",n);
            printf("\n");
        }else{
            printf("%d este numero e impar",n);
            printf("\n");
        }


    }



}
#endif // ex5
