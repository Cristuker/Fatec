#include "stdio.h"
#define ex1

#ifdef ex1
main(){
    char a;
    int b;
    long c;
    float d;
    double e;
    unsigned char f;
    unsigned int g;
    unsigned long h;

    char *pc;
    int *pi;
    long *pl;
    float *pf;
    double *pd;
    unsigned char *puc;
    unsigned int *pui;
    unsigned long *pul;

    printf("Digite um char: \n");
    scanf("%c",&a);

    printf("Digite um numero para o inteiro: \n");
    scanf("%d",&b);

    printf("Digite um valor para long: \n");
    scanf("%ld",&c);

    printf("Digite um valor para float: \n");
    scanf("%f",&d);

    printf("Digite um numero para double: \n");
    scanf("%f",&e);

    printf("Digite um numero para unsigned char: \n");
    scanf("%u",&f);

    printf("Digite um numero para unsigned int: \n");
    scanf("%lu",&g);

    printf("Digite um numero para unsigned long: \n");
    scanf("%lu",&h);

     pc = &a;
     pi = &b;
     pl = &c;
     pf = &d;
     pd = &e;
     puc = &f;
     pui = &g;
     pul = &h;

    printf("         %4c, %3d, %4ld, %5f, %-5f\n",*pc,*pi,*pl,*pf,*pd);
    printf("         %13u, %13lu, %-13lu,\n",*puc,*pui,*pui);
    printf("        10        20        30        40        50        60        70 \n");
    printf("1234567890123456789012345678901234567890123456789012345678901234567890 \n");
    printf("    %4c      %3d       %4ld                %5f               %-6f \n",*pc,*pi,*pl,*pf,*pd);
    printf("          %13u        %-13lu\n        %-13lu \n",*puc,*pui,*pui);

}
#endif // ex1
