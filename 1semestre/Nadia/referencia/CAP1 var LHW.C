#define ex1
#include "stdio.h"

/******************************************************************************

			TIPO DE VARIAVEIS SIMPLES

*******************************************************************************

1 - Tipos de variaveis simples

O tipo de variavel mais simples na linguaguem C e' o caracter. Este tipo e'
declarado utilizando-se a palavra reservada "char". A variavel "char" reserva
um unico byte na memoria do computador, e guarda um caracter da tabela ASCII.
Lembrando que um byte guarda valores de -128 a 127. Lembrando ainda que na
memoria do computador nao existem caracteres e sim numeros guardados. A tabela
ASCII mostra esta equivalencia.

Para receber e imprimir um caracter utiliza-se as funcoes de biblioteca
getchar e putchar:

2 - getchar() -> le um caracter da entrada padrao (no caso teclado) + o ENTER.

A forma geral da fun��o getchar() e�: variavel = getchar();

O sinal de "=" na linguagem C nao significa igualdade como na matematica mas
sim atribuicao. O simbolo de "=" assim como todos os outros simbolos da
linguaguem C sao chamados de operadores. Assim o sinal de "=" e' o operador
atribuicao simples.

3 - putchar() -> imprime um caracter na saida padrao.(no caso video)

A forma geral da funcao putchar() e': putchar(variavel);

Exemplo:*/

#ifdef ex1
main()
{
char c;

printf("digite um caracter : ");
c = getchar();
printf("o caracter digitado e': ");
putchar(c);
}
#endif

/*
4 - Variaveis simples numericas

A proxima variavel simples guarda numeros inteiros. Este tipo e'declarado
utilizando-se a palavra reservada "int". A variavel "int" reserva 2 byte na
memoria do computador, e guarda valores entre -32768 e +32767.

Utiliza-se variaveis simples tambem para armazenar numero reais. Este tipo e'
declarado utilizando-se a palavra reservada "float". A variavel "float" reserva
um 4 byte na memoria do computador, e guarda valores entre -3.4E-38 a 3.4E+38.
Esta variavel tambem e' chamada na literatura como "numeros reais em ponto
flutuante".

Temos outra variavel simples que tambem armazena numeros reais mas com
capacidade para armazenar um faixa de valores maior que o "float". Para esta
variavel utiliza-se a palavra reservada "double" para declara'-la. Ela guarda
valores entre -1.7E-307 a 1.7E+308.

Resumindo temos as variaveis simples:
   tipo         guarda         memoria      faixa de valores
   char       um caracter      1 byte   conjunto de caracteres ASCII
		                         ou valores inteiros de -128 a +127.
   int        um inteiro       2 bytes  -32768 e 32767.
   float   numeros reais em    4 bytes  -3.4E-38 a 3.4E+38.
           ponto flutuante
   double  numeros reais em    8 bytes  -1.7E-307 a 1.7E+308.
           ponto flutuante

Para receber e imprimir numeros utiliza-se as funcoes de biblioteca printf e
scanf.

5 - printf() -> escreve caracteres formatados na saida padrao.(no caso video)

A forma geral da funcao printf() e�:
	printf("<serie de controle>", lista de argumentos);

A <serie de controle> contem, tanto caracteres(letras, numeros, simbolos etc.)
para serem impressos na tela, como codigos de formatacao que especificam como
apresentar o conteudo definido pelo tipo de informacao declarada na lista de
argumentos(tipo da variavel).

Os codigos de formatacao sao os seguintes:

        %c - exibe um unico caracter
	%d - exibe um inteiro
	%f - exibe um numero real em ponto flutuante
	%e - exibe um numero real em ponto flutuante na notacao cientifica
	%g - utiliza o mais curto de %e ou %f,
	%x - exibe um numero em notacao hexadecimal
	%o - exibe um numero em notacao octal
	%% - exibe um sinal de %

Exemplo:
*/
#ifdef ex2
main()
{
char carac = 'A';
int idade = 41;
int peso = 80;
int altura = 178;
float preco = 572.34;
float cient = 129845e-4;

printf("exemplos dos codigos de formatacao e variaveis simples\n");
printf("A letra e': %c\n\n", carac);
printf("A letra e': %d\n\n", carac);
printf("idade do usuario: %d peso: %d altura: %d\n\n", idade, peso , altura);
printf("O preco do item e': %f\n\n", preco);
printf("A area do circulo e' %e\n\n", cient);
printf("Exibir 0.1234 resulta em %g\n\n", 0.1234);
printf("Exibir 0.00001234 resulta em %g\n\n", 0.00001234);

}
#endif

/*
6 - scanf() -> le caracteres formatados da entrada padrao. (no caso teclado)

A forma geral da funcao scanf() e�:
	scanf("<serie de controle>", lista de argumentos);

Diferentemente do printf, nesta <serie de controle> nao se pode usar caracteres
(letras, n., etc..) apenas o codigo de formatacao que especifica o tipo de
informacao definada na lista de argumentos(tipo da variavel).

Os codigos de formatacao sao os seguintes:

        %c - leia um unico caracter
	%d - leia um inteiro
	%f - leia um numero em ponto flutuante
	%e - exibe um numero em notacao cientifica
	%g - utiliza o mais curto de %e ou %f,
	%x - leia um inteiro hexadecimal
	%o - leia um inteiro octal

OBS.:
O dado deve ser armazenada no endere�o de memoria que o computador alocou
para a variavel declarada. Por isso o operador de endereco & e' utilizado nesta
fun��o, fazendo com que o valor digitado pelo usuario seja colocado no endere�o
correto de memoria onde a variavel foi criada pelo computador.

Exemplo:
*/
#ifdef ex3
main()
{
char c;
int d;
float f;
float e;
float g;

printf("digite um caracter: ");
scanf("%c",&c);
printf("o caracter digitado e': %c",c);

printf("\n\ndigite um numero inteiro: ");
scanf("%d",&d);
printf("o numero digitada e': %d",d);

printf("\n\ndigite um numero real (123.123): ");
scanf("%f",&f);
printf("o numero digitada e': %f",f);

printf("\n\ndigite um numero real em notacao cientifica (1234e23): ");
scanf("%e",&e);
printf("o numero digitada e': %e",e);

printf("\n\ndigite um n. real em notacao cientifica (1234e23)ou normal(123): ");
scanf("%g",&g);
printf("o numero digitada e': %g",g);

}
#endif

/*
7 - Qualificadores de variaveis

Os qualificadores sao utilizados para as variaveis do tipo inteira e caracter.
Sao eles:

   short    -> valores curtos. Os valores inteiros sao guardados nos mesmos 2
               bytes do inteiro normal.
   long     -> valores longos. Os valores sao guardados em 4 bytes de momoria
               o que amplia a faixa de valores.
   unsigned -> valores sem sinal. Transforma os valores negativos em positivos
               dobrando assim a faixa de valores guardados em memoria.

Aplicando os qualificadores nas variaveis acima:

   Inteiro curto -> short int ou short
   faixa de valores -> -32768 a +32767

   Inteiro longo -> long int ou long
   faixa de valores -> - 2.147.483.648 a 2.147.483.647

   caracter Sem sinal -> unsigned char
   faixa de valores -> 0 a 255

   Inteiro curto sem sinal -> unsigned short int ou unsigned short
   faixa de valores -> 0 a 65535

   inteiro Sem sinal -> unsigned int ou unsigned
   faixa de valores -> 0 a 65535

   Inteiro longo sem sinal -> unsigned long int ou unsigned long
   faixa de valores -> 0 a 4.294.967.295

Obs.:
Na funcao printf para imprimir um valor "long" utiliza-se a letra "l" associada
a letra "d" para um valor "short' e a letra "h" junto comm a letra "d".
Para os valores sem sinal utiliza-se a letra "u" para o "int" a letra "l"
associada a letra "u" para o "long" sem sinal e a letra "h" junto com a letra
"u" para o "short' sem sinal.

Exemplo:
*/
#ifdef ex4

main()
{
short int a = 10000;
long int b = 100000;

unsigned char c = 65;
unsigned int d = 45000;
unsigned short e = 40000;
unsigned long f = 4000000000;

printf("imprime o conteudo da variavel tipo inteiro com os qualificadores\n");
printf("\t inteiro curto ------------> %hd\n",a);
printf("\t inteiro longo ------------> %ld\n",b);
printf("\t caracter sem sinal -------> %u %c \n",c,c);
printf("\t inteiro  sem sinal -------> %u\n",d);
printf("\t inteiro curto sem sinal --> %hu\n",e);
printf("\t inteiro longo sem sinal --> %lu\n",f);

}
#endif
/*

8 - Nomes de variaveis

O nome atribuido a uma variavel deve expressar o significado do seu conteudo
para facilitar o entendimento do programa e seu debug.

Existem 4 regras basicas para se dar um nome a uma variavel, sao elas:

a) Todo nome de variavel deve comecar por uma letra ou o caracter sublinha(_).
b) Os caracteres seguintes podem ser letras, numeros ou o caracter sublinha.
   E' usual em C utilizar letras minusculas para nome de variaveis e letras
   maiusculas para constantes simbolicas.
c) O numero de digitos que tem significado para o compilador varia de compilador
   para compilador. No nosso caso apenas os 8 primeiros digitos sao
   interpretados.
d) Existem certas palavras reservadas que formam a linguagem C que nao podem
   ser utilizadas. Sao elas:

	auto	break	case	char	 continue  default   do
	double	else	entry	extern	 float	   for	     goto
	if	int	long	register return	   short     sizeof
	static	struct	switch	typedef	 union	   unsigned  while

9 - Declaracao de variaveis

O formato para declarar uma variavel e':
	 <tipo> < nome da variavel>;

As variaveis tem que ser  declaradas sempre e sempre no inicio da funcao.

As variaveis sao declaradas em 3 locais em um programa C. Sao eles:
a) dentro das funcoes
b) fora das funcoes
c) na definicao dos parametros ou informacoes que sao passados para as funcoes

Exemplo:
*/

#ifdef ex5
void imprimir(int var);

int fora=10;		/* variavel declarada fora da funcao  */

main()
{
int dentro = 20;    /* variavel declarada dentro da funcao  */
int var = 30;	    /* variavel que sera' passada como informacao p/a funcao*/

printf("imprime a variavel fora %d\n",fora);
printf("imprime a variavel dentro %d\n",dentro);


imprimir(var);	/* variavel passada como informacao para a funcao imprimir */

printf("voce voltou a funcao main\n");

}

/* funcao imprimir */
void imprimir(int var1)  	/* variavel recebida como informacao na funcao imprimir */
{
printf("\t voce esta' na funcao imprimir que coloca no video o conteudo\n");
printf("\t da variavel var1 recebida como informacao que e' %d\n",var1);

}
#endif


/*

10 - Constantes

Constantes em C referem-se a valores fixos que nao podem ser alterados pelo
programa. Elas podem ser de qualquer tipo e sao utilizados para inicializar
os varios tipos de variaveis vistos acima.

Exemplo:	's'      constante tipo caracter (sempre entre apostrofes)
		1        constante tipo inteiro
		35000    constante tipo inteiro longo
		33450000 constante tipo ponto flutuante
		3.345E+7 constante tipo ponto flutuante (notacao cientifica)

Alguns caracteres especial foram criados em C para facilitar a portabilidade
dos programas. Sao eles:

	\n	nova linha (linefeed+carriage return)
	\t	tabulacao horizontal
	\b	retrocesso (backspace)
	\f	mudanca de pagina (form feed)
	\r	inicio de linha (carriage return)
	\\	barra a invertida
	\'	apostrofe
*/

#ifdef ex6

main()

{
int z = 20000;
int y = 25000;

printf("imprime o conteudo da variavel z \t %d\n",z);
printf("imprime o conteudo da variavel y %d\b\b\b",y);
printf("observe a posicao do cursor na tela\n");
getchar();
printf("imprime os caracteres especiais \\ e \'\r");
}
#endif

