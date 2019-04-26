#define ex1

//exercicio 9
#ifdef ex1
int main(){


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
long int b[n];
long int fat=0;
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





