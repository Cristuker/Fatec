#define ex2


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

    for(int i = 0; i <n ; i++){
        printf("Digite um numero: ");
        scanf("%d", &numeros[i]);

        if(numeros[i] > maior){
            maior = numeros[i];
            posicao[i] = i;
            if(maior == numeros[i]){
                digitado++;
            }
        }

    }

    for(int i = 0; i <n; i++){
        printf("%d", numeros[i]);
        printf("\n");
    }
    printf("O maior numero: %d",maior);
    printf("\n");
    printf("Foi digitado %d vezes",digitado);
    printf("\n");
    printf("E apareceu na(s) posicao(oes) ");
    printf("\n");
    for(int i = 0; i < n ;i++){
        printf("%d", posicao[i]);
        printf("\n");
    }

}
#endif // ex2
