#include <stdio.h>
#define ex1
//exercicio 9
#ifdef ex1
int main(){

int num = 5;
int n =15;

int a[num];
int b[num];
int c[num];
int d[n];

int contA=0;
int contB=1;
int contC=2;

int negativo=0;

for(int i =0 ; i<num ; i++){
    printf("Digite um valor para o vetor a: ");
    scanf("%d", &a[i]);
    d[contA] = a[i];
    contA = contA+3;

    printf("Digite um valor para o vetor b: ");
    scanf("%d", &b[i]);
    d[contB]=b[i];
    contB= contB+3;


    printf("Digite um valor para o vetor c: ");
    scanf("%d", &c[i]);
    d[contC]=c[i];
    contC=contC+3;
}

for(int i =0 ; i<n ; i++){
    if(d[i]<0){
        negativo++;
    }
}


for(int i =0 ; i<num ; i++){

    printf("Vetor a: %d", a[i]);
    printf("\n");
    printf("Vetor b: %d", b[i]);
    printf("\n");
    printf("Vetor c: %d", c[i]);
    printf("\n");

}
printf("---------------------------------------------------");

printf("\n");
printf("Vetor D: ");
printf("\n");


for(int i =0; i< n; i++){
    printf("%d",d[i]);
    printf("\n");
}

printf("O vetor D teve o total de numeros negativos: %d", negativo);
}
#endif // ex1
//exercicio 12
#ifdef ex2
int main(){



}
#endif // ex2
//exercicio 17
#ifdef ex3
int main(){


}
#endif // ex3
//exercicio 7
#ifdef ex4
int main(){

int n =1000;


while(n >15){
    printf("Qual e o tamanho do vetor? ");
    scanf("%d", &n);
}

int a[n];
int b[n];
int fat=0;
int i=0;

 for(int p =0 ; p < n;p++){
    printf("Digite um numero: ");
    scanf("%d", &a[p]);



    i = a[p];

    for(fat = 1 ; i > 1 ;i=i-1){
        fat=fat*i;
    }
    b[p] = fat;
 }
 printf("vetor a --------- vetor b");
 printf("\n");
 for(int g = 0; g !=n;g++){
    printf("%d --------- %d",a[g],b[g]);
    printf("\n");
 }



}
#endif // ex4
//exercicio 18
#ifdef ex5
int main(){


}
#endif // ex5





