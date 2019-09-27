#include <stdio.h>
#define ex5

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
            }
        }
        for(int i = 0; i < 1000; i++){
            if(str2[i]){
                countStr2++;
            }
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
}
#endif
