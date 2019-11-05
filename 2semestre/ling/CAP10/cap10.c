#include "stdio.h"
#include "stdlib.h"

#define ex1

#ifdef ex1
main(){
FILE *p;
char ch;
char a[100];
int i = 0;
int x = 0;


    if((p = fopen("arq.txt","w")) == NULL){
        printf("Erro ao abrir o arquivo. \n");
        exit(0);
    }

    for(;;){
        printf("------------------------------------\n");
        printf("Digite um caractere para inserior no arquivo\nDigite 0 para sair\n");
        scanf("%c",&ch);
        getchar();

        putc(ch,p);

        if(ch == '0'){
            break;
            fclose(p);
        }
        i++;
    }
    printf("Exibindo conteudo escrito no arquivo\n");
    if((p = fopen("arq.txt","r")) == NULL){
        printf("Erro ao abrir o arquivo. \n");
        exit(0);
    }
fgets(a,100,p);
printf("Exibindo strings do arquivo \n");


fputs(a,p);

fclose(p);


}
#endif // ex1
