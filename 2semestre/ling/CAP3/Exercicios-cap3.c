#include <string.h>
#define ex2

#ifdef ex1
main(){

int i[4];
long int vLong[4];
unsigned int uInt[4];
float n[4];
double nD[4];


//Pegar inteiro
for(int indice =1; indice <= 3; indice++){

    printf("Digite o %d° valor inteiro \n",indice);
    scanf("%d", &i[indice]);

}

printf("------------------------------------------------\n");

//Pegar long
for(int indice = 1; indice <= 3; indice++){

    printf("Digite o %d° valor long \n",indice);
    scanf("%ld", &vLong[indice]);

}
printf("------------------------------------------------\n");

//Pegar unsigned
for(int indice = 1; indice <= 3; indice++){

    printf("Digite o %d° valor unsigned \n",indice);
    scanf("%u", &uInt[indice]);

}
printf("------------------------------------------------\n");
//Pegar float
for(int indice = 1; indice <= 3; indice++){

    printf("Digite o %d° valor float \n",indice);
    scanf("%f", &n[indice]);

}
printf("------------------------------------------------\n");
//Pegar double
for(int indice = 1; indice <= 3; indice++){

    printf("Digite o %d° valor Double \n",indice);
    scanf("%lf", &nD[indice]);

}
printf("------------------------------------------------\n");




printf("        10        20        30        40        50\n");
printf("12345678901234567890123456789012345678901234567890\n");
printf("   %3d                 %4ld                %-8u\n",i[1],vLong[1],uInt[1]);
printf("            %5.2f               %6.2f\n",n[1],nD[1]);
printf("   %3d                 %4ld                %-8u\n",i[2],vLong[2],uInt[2]);
printf("            %5.2f               %6.2f\n",n[2],nD[2]);
printf("   %3d                 %4ld                %-8u\n",i[3],vLong[3],uInt[3]);
printf("            %5.2f               %6.2f\n",n[3],nD[3]);
}
#endif

#ifdef ex2
main(){

int palindromo[10];
int aux = 9;

for(int indice = 0; indice < 10; indice ++){

    printf("Digite um numero para o vetor na posicao %d\n",indice);
    scanf("%d", &palindromo[indice]);

}


for(int indice = 0; indice < 5; indice ++){

    if(palindromo[indice] == palindromo[indice+aux]){
        aux = aux - 2;
    }

}

if(aux == -1){
        printf("E um palindromo!!!\n");
    }else{
        printf("Nao e um palindromo...\n");
    }

}
#endif
