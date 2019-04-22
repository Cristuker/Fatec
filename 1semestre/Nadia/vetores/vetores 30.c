#define ex3


#ifdef ex1
int main(){

int n = 15;

float numero[n];

    for(int i = 0;  i < n; i++){
        printf("Digite um numero: ");
        scanf("%f", &numero[i]);
    }

    for(int i = 0;  i < n; i++){
        printf("%2.f",numero[i]);
        printf("\n");

    }

}
#endif // ex1

#ifdef ex2
int main(){

int n = 10;
int maior=0;
int numeros[n];
int posicao[n];
int digitado=0;

//Pegando os numeros
    for(int i = 1; i <=n ; i++){
        printf("Digite um numero: ");
        scanf("%d", &numeros[i]);
//verificacao e substituicao do numero maior
        if(numeros[i] > maior){
            digitado =0;
            maior = numeros[i];
        }
    }

//contando quantas vezes o numero maior foi digitado
    for(int i = 1; i <=n; i++){
            if(maior == numeros[i]){
                digitado++;
            }
        }
    for(int i =1; i <=n ; i++){
        if(numeros[i] == maior){
            posicao[i] = i;
        }else{
         posicao[i] =0;
        }
    }


//exibindo numeros na tela
    for(int i = 1; i <=n; i++){
        printf("%d", numeros[i]);
        printf("\n");
    }



    printf("O maior numero: %d",maior);
    printf("\n");
    printf("Foi digitado %d vezes",digitado);
    printf("\n");
    printf("E apareceu na(s) posicao(oes)");
    printf("\n");

 //mostrando as posições
    for(int i = 1; i <=n ;i++){
        if(posicao[i] != 0){
            printf("%d", posicao[i]);
            printf("\n");
        }

    }

}
#endif // ex2

#ifdef ex3
int main(){

int n =10;
int a[n];
int b[n];

    for(int i =0; i<=n; i++){
        printf("Digite um valor positivo: ");
        scanf("%d", &a[i]);
    }

    for(int i =0; i<=n; i++){
        b[i] = -a[i];
    }
    printf("\n");
    printf("--------------------------");
    printf("\n");
    for(int i =0; i<=n; i++){
        printf("vetor a: %d --- vetor b: %d", a[i],b[i]);
        printf("\n");
    }

}
#endif // ex3
