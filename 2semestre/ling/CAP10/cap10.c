#define ex2

#include "stdio.h"
#include "stdlib.h"
#include "time.h"



#ifdef ex1
main(){
FILE *p;
char ch;

int i = 0;
int x = 0;


    if((p = fopen("arq.txt","w")) == NULL){
        printf("Erro ao abrir o arquivo. \n");
        exit(0);
    }

    while(1){
        printf("------------------------------------\n");
        printf("Digite um caractere para inserior no arquivo\nDigite 0 para sair\n");
        ch = getchar();

        if(ch == '0'){
            fclose(p);
            break;
        }

        putc(ch,p);
        i++;
        getchar();
    }
    printf("Exibindo conteudo escrito no arquivo\n");
    if((p = fopen("arq.txt","r")) == NULL){
        printf("Erro ao abrir o arquivo. \n");
        exit(0);
    }

printf("Exibindo strings do arquivo \n");

char a[i];
fscanf(p,"%s",a);

printf("%s",a);
}
#endif // ex1

#ifdef ex2
struct Contact{
    char name[64];
    char phone[15];
    int birthDay;
    int birthMonth;
};

FILE *p;

main(){
    struct Contact contact;
    int acao = 0;
    while(1){
        printf("\t==MENU==\n");
        printf("1 - Inserir contato \n2 - Deletar contato  \n3 - Procurar contato pelo nome  \n4 - Listar todos os contatos  \n5 - Listar contatos que comecam com a letra \n6 - Listar aniversariantes do mes \n0 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &acao);
        switch(acao){
            case 1:
                inserirContato(&contact);
                break;
            case 2:
                deletarContato(&contact);
                break;
            case 3:
                getContatoPorNome(&contact);
                break;
            case 4:
                getContato(&contact);
                break;
            case 5:
                getContatoPelaInicial(&contact);
                break;
            case 6:
                aniversarianteDoMes(&contact);
                break;
            case 0:
                break;
            default:
                printf("Opcao invalida...\n");
                break;
        }
        if(acao == 0){
            break;
        }
    }
}

void inserirContato(struct Contact *contact){
    if((p = fopen("contacts.txt", "a")) == NULL){
        printf("Erro na abertura do arquivo \n");
        exit(0);
    }
    getchar();
    printf("Digite nome nome do contato: ");
    gets(contact->name);

    printf("Digite o telefone do contato: ");
    gets(contact->phone);

    printf("Digite o mes do nascimento do contato: ");
    scanf("%d", &contact->birthMonth);

    printf("Digite o dia do nascimento do contato: ");
    scanf("%d", &contact->birthDay);

    fwrite(contact, sizeof(struct Contact), 1, p);
    fclose(p);
}

void deletarContato(struct Contact *contact){

    if((p = fopen("contacts.txt", "r+")) == NULL){
        printf("erro na abertura do arquivo \n");
        exit(0);
    }
    char name[64];
    int result;
    int i = 0;
    printf("Digite o nome do contato: ");
    scanf("%s", &name);
    while(fread(contact, sizeof(struct Contact), 1, p)){
        result = areEqual(&name, contact->name);
        if(result == 1){
            *contact->name = '\0';
            fseek(p, sizeof(struct Contact) * i, 0);
            fwrite(contact, sizeof(struct Contact), 1, p);
            break;
        }
        i++;
    }
    if(result != 1){
        printf("Usuario nao encontrado\n");
    }
    fclose(p);
}

void getContatoPorNome(struct Contact *contact){

    if((p = fopen("contacts.txt", "r+")) == NULL){
        printf("erro na abertura do arquivo \n");
        exit(0);
    }
    char name[64];
    int result;
    printf("Digite o nome do contato: ");
    scanf("%s", &name);
    while(fread(contact, sizeof(struct Contact), 1, p)){
        result = areEqual(&name, contact->name);
        if(result == 1){
            printf("%s, %s, %d/%d \n", contact->name, contact->phone, contact->birthDay, contact->birthMonth);
            break;
        }
    }
    if(result != 1){
        printf("Usuario nao encontrado\n");
    }
    fclose(p);
}
void getContato(struct Contact *contact){
    if((p = fopen("contacts.txt", "r")) == NULL){
        printf("Erro na abertura do arquivo \n");
        exit(0);
    }
    while(fread(contact, sizeof(struct Contact), 1, p)){
        if(*contact->name != '\0'){
            printf("%s, %s, %d/%d \n", contact->name, contact->phone, contact->birthDay, contact->birthMonth);
        }
    }
    fclose(p);
}

void getContatoPelaInicial(struct Contact *contact){

    if((p = fopen("contacts.txt", "r+")) == NULL){
        printf("erro na abertura do arquivo \n");
        exit(0);
    }
    char initial;
    int result;
    printf("Digite uma letra: ");
    scanf("%s", &initial);
    while(fread(contact, sizeof(struct Contact), 1, p)){
        result = contact->name[0] == initial ? 1 : 0;
        if(result == 1){
            printf("%s, %s, %d/%d \n", contact->name, contact->phone, contact->birthDay, contact->birthMonth);
        }
    }
    if(result != 1){
        printf("Usuario nao encontrado\n");
    }
    fclose(p);
}
void aniversarianteDoMes(struct Contact *contact){
    time_t s, val = 1;
    struct tm* current_time;
    s = time(NULL);
    current_time = localtime(&s);
    int result;
    if((p = fopen("contacts.txt", "r")) == NULL){
        printf("erro na abertura do arquivo \n");
        exit(0);
    }

    while(fread(contact, sizeof(struct Contact), 1, p)){
        result = contact->birthMonth == current_time->tm_mon + 1 ? 1 : 0;
        if(result == 1){
            printf("%s, %s, %d/%d \n", contact->name, contact->phone, contact->birthDay, contact->birthMonth);
        }
    }

    if(result != 1){
        printf("Usuario nao encontrado\n");
    }
    fclose(p);
}

int areEqual(char *firstString, char *secondString){
    int result = 0;
    int i = 0;
    for(i; firstString[i] != '\0' ||secondString[i] != '\0'; i++){
        if(firstString[i] != secondString[i]){
            result = 4;
            if(firstString[i] == '\0' && secondString[i] != '\0'){
                result = 3;
                break;
            }
            else{
                if(firstString[i] != '\0' && secondString[i] == '\0'){
                    result = 2;
                    break;
                }
            }
        }
        else{
            result = 1;
        }
    }
    return result;
}
#endif

#ifdef ex3
main(){
}
#endif
