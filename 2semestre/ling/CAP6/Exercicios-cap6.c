#include <stdio.h>
#define ex8

#ifdef ex1

char*pesquisaLetra(char **letra[]){

    char*letras[] = {"b","d","f","h","j","k","m","o","q","s","u","w","y"};

    for(int i = 0; i < 13; i++){
        if(strcmp(letra,letras[i]) == 0){
            return "A sua letra e: %c \n",letras[i];
        }else if(i == 12){
            return "A sua letra nao foi entrada...";
        }
    }

}

main(){
char*letter[1];
    printf("Digite uma letra: \n");
    scanf("%s",&letter);


    printf("%s",pesquisaLetra(letter));
}
#endif

#ifdef ex2

int soma(int a, int b){
    return a+b;
}

int subtracao(int a, int b){
    return a-b;
}

int multiplicao(int a, int b){
    return a*b;
}

float divisao(int a, int b){
    return a/b;
}

main(){

int n1;
int n2;
    printf("Digite o primeiro numero: \n");
    scanf("%d",&n1);

    printf("Digite o segundo numero: \n");
    scanf("%d",&n2);

    printf("A soma desses numeros e' %d \n",soma(n1,n2));
    printf("A subtracao desses numero e': %d \n", subtracao(n1,n2));
    printf("A multiplicao desses numero e': %d\n",multiplicao(n1,n2));
    printf("A divisao desses numeros e' %.2f \n",divisao(n1,n2));
}
#endif // ex2

#ifdef ex3
//Variaveis globais
int valores[];
int i = 0;
//Funções
int soma(){
    int aux = 0;
    for(int c = 0; c <= i; c++){
        aux = aux + valores[c];
    }
    return aux;
}

int subtracao(){
    int aux = 0;
    aux = valores[0];
    for(int c = 1; c <= i; c++){
        aux = aux - valores[c];
    }
    return aux;
}

int multiplicao(){
    int aux = 0;
    //aux = valores[0];
    aux = valores[0] * valores[1];
    for(int c = 2; c < i; c++){
        aux = valores[c]*aux;
    }
    return aux;
}

float divisao(){
    float aux = 0;
    aux = valores[0] / valores[1];
    for(int c = 2; c < i; c++){
        aux = valores[c]/aux;
    }
    return aux;
}

main(){
int verificacao = 1;

char *letter[1];

    while(verificacao){
        printf("Digite um numero: \n");
        scanf("%d",&valores[i]);
        i++;
        printf("Voce deseja inserir um novo valor? s/n \n");
        scanf("%s",&letter);

        if(strcmp(letter,"s") == 0){
            continue;
        }else{
            break;
        }

    }

    printf("A soma desses numeros e' %d \n",soma());
    printf("A subtracao desses numero e': %d \n", subtracao());
    printf("A multiplicao desses numero e': %d \n",multiplicao());
    printf("A divisao desses numeros e' %.2f \n",divisao());
}
#endif

#ifdef ex4
//Variaveis globais
int valores[];
int i = 0;
//Funções
int soma(){
    int aux = 0;
    for(int c = 0; c <= i; c++){
        aux = aux + valores[c];
    }
    return aux;
}

int subtracao(){
    int aux = 0;
    aux = valores[0];
    for(int c = 1; c <= i; c++){
        aux = aux - valores[c];
    }
    return aux;
}

int multiplicao(){
    int aux = 0;
    //aux = valores[0];
    aux = valores[0] * valores[1];
    for(int c = 2; c < i; c++){
        aux = valores[c]*aux;
    }
    return aux;
}

float divisao(){
    float aux = 0;
    aux = valores[0] / valores[1];
    for(int c = 2; c < i; c++){
        aux = valores[c]/aux;
    }
    return aux;
}

main(){
int verificacao = 1;

char *letter[1];

    while(verificacao){
        printf("Digite um numero: \n");
        scanf("%d",&valores[i]);
        i++;
        printf("Voce deseja inserir um novo valor? s/n \n");
        scanf("%s",&letter);

        if(strcmp(letter,"s") == 0){
            continue;
        }else{
            break;
        }

    }
    char operacao;
    printf("Qual operacao voce deseja realizar com esses numeros? Digite o operador aritmetico: \n");
    scanf("%s",&operacao);
    int ascii = (int) operacao;
    printf("ascii = %d\n",ascii);
    switch(ascii){
        case (42):{
            printf("A multiplicao desses numero e': %d \n",multiplicao());
            break;
        }
        case(43):{
            printf("A soma desses numeros e' %d \n",soma());
            break;
        }
        case(45):{
            printf("A subtracao desses numero e': %d \n", subtracao());
            break;
        }
        case(47):{
            printf("A divisao desses numeros e' %.2f \n",divisao());
            break;
        }
        default:{
            printf("Digite um operador valido \n");
        }
}




}
#endif

#ifdef ex5
int comparaString(char str[10], char str2[10]){
    int countStr = 0;
    int countStr2 = 0;
    if(strcmp(str,str2)==0){
        return 1;
    }else{
        for(int i = 0; i < 1000; i++){
            if(str[i]){
                countStr++;
            }else{
                break;
            }
        }
        for(int i = 0; i < 1000; i++){
            if(str2[i]){
                countStr2++;
            }else{
                break;
            }
        }
        if(str > str2){
            return 2;
        }else{
            return 3;
        }
    }
}

main(){
    char str[10];
    char str2[10];
    printf("Digite a primeira string: \n");
    scanf("%s",&str);

    printf("Digite a segunda string: \n");
    scanf("%s",&str2);
    int result = comparaString(str,str2);
    printf("O retorno da funcao e: %d",result);
}
#endif

#ifdef ex6
int somaFatorial(int num){
    int fat;
    for(fat = 1; num> 1; num = num-1 ){
        fat = fat*num;
    }
    return fat;
}

main(){
int cont =1;
int decimal,unidade,n;
printf("Digite um numero: \n");
scanf("%d",&n);

int result = somaFatorial(n);

decimal = result;
if(decimal > 10){
    cont++;
    decimal = decimal/10;
}
    unidade = result-(cont*10);

int soma = unidade + decimal;
printf("O resultado de %d + %d = %d \n",decimal,unidade,soma);
}
#endif // ex6

#ifdef ex7
int exponenciacao(int numero,int expoente){
    int result = numero;

    for(int i = 0; i < expoente;i++){
        result = result*numero;
    }
    return result;
}
main(){
int resultado;
int num,expo;
printf("Digite para a base \n");
scanf("%d",&num);

printf("Digite um numero para o expoente \n");
scanf("%d",&expo);

resultado = exponenciacao(num,expo);
printf("%d",resultado);
}
#endif // ex7

#ifdef ex8
int sinal(int num){
    if(num < 0){
        return 0;
    }
    if(num >0){
        return 1;
    }
    if(num == 0){
        return -1;
    }
}

int soma(int n1, int n2){
    int comeco,fim;
    int tot=0;
    if(n1 > n2){
        comeco = n2;
        fim = n1;
    }else{
        comeco = n1;
        fim = n2;
    }
    //tot = comeco;
for(int i = comeco; i < fim; i++ ){
    tot = tot + i;
}
return tot;
}

int multi(int n1, int n2){
    int comeco,fim;
    int tot=0;
    if(n1 > n2){
        comeco = n2;
        fim = n1;
    }else{
        comeco = n1;
        fim = n2;
    }
    //tot = comeco;
for(int i = comeco; i < fim; i++ ){
    tot = tot * i;
}
}
main(){
int n1,n2;
printf("Digite um numero: \n");
scanf("%d",&n1);

int s1 = sinal(n1);

printf("Digite outro numero :\n");
scanf("%d",&n2);

int s2 = sinal(n2);
int s;

if(s1 == s2 == 1){
    printf("A soma dos numero e %d", soma(n1,n2));
}
if(s1 ==s2 == 0){
    printf("A multiplicao entre esses numero e %d", multi(n1,n2));
}

soma(n1,n2);
}
#endif // ex8
