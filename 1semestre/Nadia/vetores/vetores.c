#define ex3

#ifdef ex1
int main(){

int n =12;

int a[n];

    for(int i =0 ; i < n ; i++ ){
        printf("Digite um numero :");
        scanf("%d", &a[i]);
    }

    for(int i=0 ; i <= n; i++){
        if(a[i] > 121){
            printf("%d", a[i]);
            printf("\n");
        }
    }
}
#endif // ex1


#ifdef ex2

int main(){

int n = 8;

float a[n];

float b[n];

    for(int i =0 ; i < n; i++){
        printf("Digite um elemento: ");
        scanf("%f", &a[i]);

        b[i] = a[i]*3;
    }
    printf("Coluna a -- Coluna b");
    printf("\n");
    for(int i = 0; i < n; i++){

        printf("%2.f  ------- %2.f", a[i], b[i]);
        printf("\n");
    }

}
#endif // ex2

#ifdef ex3
int main(){

int n = 6;

float numeros[n];
float quadrado[n];
float tot = 0;


    while(tot < 1000){

        for(int i = 0; i < n; i++){
        printf("Digite um numero negativo: ");
        scanf("%f", &numeros[i]);
        quadrado[i] = numeros[i] * numeros[i];
        printf("%f",quadrado[i]);
        tot = quadrado[i]+tot;
        }
        if(tot < 1000){
            printf("A os numeros nao foram o suficiente digite novamente!");
            tot=0;
        }

    }
printf("A soma dos numeros negativos e: %2.f",tot);

}
#endif // ex3
