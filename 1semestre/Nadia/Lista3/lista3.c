#include <stdio.h>
#define ex3

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
