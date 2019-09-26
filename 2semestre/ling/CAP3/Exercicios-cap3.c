#include <string.h>
#define ex7

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

#ifdef ex3
main(){
int a, b, c, vetorMulti[2][3][3];
	for(a = 0;a < 2;a++){
		for(b = 0;b < 3;b++){
			for(c = 0;c < 3;c++){
				printf("Digite o valor da pagina %d, linha %d e coluna %d.\n", a + 1, b + 1, c + 1);
				scanf("%d", &vetorMulti[a][b][c]);
			}
		}
	}
	for(a = 0;a < 2;a++){
	    printf("\n");
		for(b = 0;b < 3;b++){
                printf("\n");
			for(c = 0;c < 3;c++){
				printf("%d ", vetorMulti[a][b][c]);
			}
		}
	}
}

#endif

#ifdef ex4
main(){
int a [2] [3];
int b [2] [3];
int l [2] [3];
int c;
int i;
//vetor a
    for(i =0; i< 2 ; i++){
        for(c = 0; c < 3; c++){
            printf("Digite um valor para a linha %d coluna %d do vetor A\n",i+1,c+1);
            scanf("%d",&a[i][c]);
        }
    }
//vetor b
    for(i =0; i< 2 ; i++){
        for(c = 0; c < 3; c++){
            printf("Digite um valor para a linha %d coluna %d do vetor B\n",i+1,c+1);
            scanf("%d",&b[i][c]);
        }
    }

//multiplicacao
    for(i =0; i< 2 ; i++){
        for(c = 0; c < 3; c++){
            l[i][c] = a[i][c]*b[i][c];
        }
    }
//printando
    printf("O resulta da multiplicao e: \n");
    for(i =0; i< 2 ; i++){
        for(c = 0; c < 3; c++){
            printf("valor: %d da linha %d coluna %d \n",l[i][c],i,c);
        }
    }
}
#endif

#ifdef ex5
main(){

int vet[10];
int vetPar[10];
int vetImpar[10];
int count;
int countPar = 0;
int countImpar = 0;
//Pegando dados
    for(int i = 0; i < 10; i++){
        printf("Digite um numero para a posicao %d\n",i);
        scanf("%d",&vet[i]);
    }
    for(int i = 0; i < 10; i++){
        if(i%2 == 0){
            vetPar[countPar] = vet[i];
            countPar++;
        }else{
            vetImpar[countImpar] = vet[i];
            countImpar++;
        }


    }

    for(int i = 0; i < 5; i++){
        printf("Vetor de pares [ %d ] -- Vetor de Impar [ %d ] \n",vetPar[i],vetImpar[i]);
    }
}
#endif

#ifdef ex6
main(){
int vet[10];
int vetPar[10];
int vetImpar[10];
int par = 0;
int impar = 0;
//Pegando dados
    for(int i = 0; i < 10; i++){
        printf("Digite um numero para a posicao %d do vetor\n",i);
        scanf("%d",&vet[i]);
    }

    for(int i = 0; i < 10;i++){
        if(vet[i]%2 == 0){
            vetPar[par] = vet[i];
            par++;
        }else{
            vetImpar[impar] = vet[i];
            impar++;
        }

    }
    printf("Vetor de pares:");
    for(int i = 0; i < par; i++){
        printf(" %d ",vetPar[i]);
    }
    printf("\n");
    printf("Vetor de impar:");
    for(int i = 0; i < impar; i++){
        printf(" %d ",vetImpar[i]);
    }
}
#endif

#ifdef ex7
main(){

int valores[10];
int temp;


//leitura do Vetor
    for (int c = 0; c < 10; c++){
        printf("Digite um numero:");
        scanf("%d",&valores[c]);
    }


//ordenando o vetor
    for(int i = 0; i < 10; i++){
        for(int j = i+1 ; j < 10; j++){
            if (valores[i]>valores[j]){
                temp=valores[i];
                valores[i]=valores[j];
                valores[j]=temp;
            }
        }
    }

    //Impressão do Vetor Ordenado
    printf("Vetor em ordem crescente: \n");
    for(int d = 0; d < 10; d++){
        printf(" %d",valores[d]);
    }
}
#endif

#ifdef ex8
main(){
int matrix [5][5];
int valor;
int achado = 0;
//Pegando valores para a matrix

    for(int l = 0; l < 5;l++){
        for(int c = 0;  c < 5; c++){
            printf("Digite um valor para a linha %d e coluna %d \n",l,c);
            scanf("%d",&matrix[l][c]);
        }

    }
    //Pegando valor para ser buscado na matrix
    printf("Digite um valor para ser buscado na sua Matrix 5x5 \n");
    scanf("%d",&valor);
    //Buscando valor na matrix
    for(int l = 0; l < 5;l++){
        for(int c = 0;  c < 5; c++){
            if(valor == matrix[l][c]){
                achado = 1;
                printf("O seu valor %d se encontra na linha %d e coluna %d \n ",valor,l,c);
                break;
            }
        }

    }
    if(!achado){
        printf("Não achamos o seu valor!!");
    }


}
#endif // ex8


















