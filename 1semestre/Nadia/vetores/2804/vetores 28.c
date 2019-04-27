#include <stdio.h>
#define ex5
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

int n =12;
int temp[n];
int maior = 0;
int menor = 0;
int media=0;
int tot=0;
int comeco =1;

for(int i =1; i<=n;i++){
    printf("Digite a temperatura media do mes %d :", i);
    scanf("%d", &temp[i]);

    if(comeco==1){
        menor=temp[i];
        comeco =2;
    }


    if(temp[i]> maior){
        maior = temp[i];
    }
    if(temp[i]<menor){
        menor= temp[i];
    }
    media = media+temp[i];
}
    tot = media/12;
for(int i =1; i<n;i++){
    printf("A temperatura do mes %d foi %d ",i,temp[i]);
    printf("\n");
}
printf("A maior temperatura foi: %d",maior);
printf("\n");
printf("A temperatura media foi: %d",tot);
printf("\n");
printf("A temperatura mais baixa foi: %d", menor);
}
#endif // ex2

//exercicio 17
#ifdef ex3
int main(){

int n=12;
int a[n];
int b[n];
int contB=0;

for(int i =0; i<n;i++){
    printf("Digite um numero: ");
    scanf("%d", &a[i]);

    if(a[i]%2==1){
        b[contB]= a[i]*2;
        contB++;
    }

}
printf("vetor a");
printf("\n");
for(int i =0; i<n;i++){
    printf("%d", a[i]);
    printf("\n");

}

printf("vetor b");
printf("\n");
for(int i =0; i<contB;i++){
    printf("%d", b[i]);
    printf("\n");


}
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

int n =15;

while(n >13){
    printf("Digite o numero de funcionarios (max:13) : ");
    scanf("%d", &n);
}

int id[n];
int salario[n];
int maior[n];
int menor[n];
int chave =1;
int contM=0;
int contN=0;


for(int i =0; i<n;i++){

    printf("Digite o numero de identificacao do funcionario: ");
    scanf("%d", &id[i]);

    printf("Agora digite o salario: ");
    scanf("%d", &salario[i]);

    if(chave ==1){
        maior[i] = salario[i];
        menor[i] = salario[i];
        chave=2;
    }

    if(salario[i]>900){
        maior[contM] = id[i];
        contM++;
    }
    if(salario[i]<900){
        menor[contN] = id[i];
        contN++;
    }

}
printf("Funcionarios com o maior salario: ");
printf("\n");

for(int i =0; i<contM ;i++){
    printf("ID : %d", maior[i]);
    printf("\n");
}

printf("Funcionarios com o menor salario: ");
printf("\n");


for(int i =0; i <contN ;i++){
    printf("ID: %d", menor[i]);
    printf("\n");
}

printf("Funcionarios e seus salarios");
printf("\n");
for(int i =0; i <n ;i++){
    printf("ID: %d, salario: %d",id[i],salario[i]);
    printf("\n");
}
}
#endif // ex5





