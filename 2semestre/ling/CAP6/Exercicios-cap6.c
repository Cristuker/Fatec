#include <stdio.h>
#define ex8
/*
int rodar = 1;
while(rodar){
        printf("Caso queira rodar novamente digite 1 se quiser parar digite 0 \n");
        scanf("%d",&rodar);
        }

*/
#ifdef ex1
main(){

int rodar = 1;
    while(rodar){
        int n1,n2;
        printf("Digite um numero: \n");
        scanf("%d",&n1);
        printf("Digite outro numero: \n");
        scanf("%d",&n2);
        int soma = n1 + n2;
        int sub = n1 - n2;
        int multi = n1 * n2;
        int divi = n1 / n2;
        printf("A soma deles %d \n",soma);
        printf("A divisao deles %d \n",divi);
        printf("A subtracao deles %d \n",sub);
        printf("A multiplicao deles %d \n",multi);
        printf("--------------------------------------------------------------\n");
        printf("Caso queira rodar novamente digite 1 se quiser parar digite 0 \n");
        scanf("%d",&rodar);

    }

}
#endif

#ifdef ex2
main(){
int rodar = 1;
    while(rodar){
        int n1,n2;
        printf("Digite um numero: \n");
        scanf("%d",&n1);
        printf("Digite outro numero: \n");
        scanf("%d",&n2);
        int soma = n1 += n2;
        n1 -= n2;
        int sub = n1 -= n2;
        n1 +=n2;
        int multi = n1 *= n2;
        n1 /= n2;
        int divi = n1 /= n2;
        printf("A soma deles %d \n",soma);
        printf("A divisao deles %d \n",divi);
        printf("A subtracao deles %d \n",sub);
        printf("A multiplicao deles %d \n",multi);
        printf("--------------------------------------------------------------\n");
        printf("Caso queira rodar novamente digite 1 se quiser parar digite 0 \n");
        scanf("%d",&rodar);

    }
}
#endif

#ifdef ex3
main(){
int rodar = 1;
    while(rodar){
        float n1,n2;
        printf("Digite um numero: \n");
        scanf("%f",&n1);
        printf("Digite outro numero: \n");
        scanf("%f",&n2);
        float soma = n1 += n2;
        n1 -= n2;
        float sub = n1 -= n2;
        n1 +=n2;
        float multi = n1 *= n2;
        n1 /= n2;
        float divi = n1 /= n2;
        printf("A soma deles %.2f \n",soma);
        printf("A divisao deles %.2f \n",divi);
        printf("A subtracao deles %.2f \n",sub);
        printf("A multiplicao deles %.2f \n",multi);
        printf("--------------------------------------------------------------\n");
        printf("Caso queira rodar novamente digite 1 se quiser parar digite 0 \n");
        scanf("%d",&rodar);

    }
}
#endif

#ifdef ex4
main(){
int rodar = 1;
while(rodar){
        int n1,n2;
        printf("Digite um numero: \n");
        scanf("%d",&n1);
        printf("Digite outro numero: \n");
        scanf("%d",&n2);

        printf("Operadores bit-a-bit\n");
        printf("AND  n1 & n2 --> %3d  0x%x\n",n1 & n1,n1 & n2);
        printf("OU   n1 | n2 --> %3d  0x%x\n",n1 | n2,n1 | n2);
        printf("OU EXCLUSIVO   n1 ^ n2 --> %3d  0x%x\n",n1^ n2,n1 ^ n2);

        printf("Caso queira rodar novamente digite 1 se quiser parar digite 0 \n");
        scanf("%d",&rodar);
        }
}
#endif

#ifdef ex5
main(){
int rodar = 1;
int n;
while(rodar){
        printf("Digite um numero: ");
        scanf("%d",&n);
        int mult = n << 3;
        int div = n >> 3;
        printf("Multiplicacao = %d e Divisao = %d \n",mult,div);

        printf("Caso queira rodar novamente digite 1 se quiser parar digite 0 \n");
        scanf("%d",&rodar);
        }
}
#endif

#ifdef ex6
main(){
int rodar = 1;
while(rodar){
int a,b;
        printf("Digite um valor para a: \n");
        scanf("%d",&a);
        printf("Digite um valor para b: \n");
        scanf("%d",&b);
        if(a >= 120 && b < 240 ){
            printf("verdadeiro: %d \n",1);
        }else{
            printf("falso: %d \n",0);
        }
printf("------------------------------------------------\n");
        printf("Digite um valor para a: \n");
        scanf("%d",&a);
        printf("Digite um valor para b: \n");
        scanf("%d",&b);
        if(a != 60  || b == 120){
            printf("verdadeiro: %d \n",1);
        }else{
            printf("falso: %d \n",0);
        }
        printf("------------------------------------------------\n");
        printf("Digite um valor para a: \n");
        scanf("%d",&a);
        printf("Digite um valor para b: \n");
        scanf("%d",&b);
        if((a*25) == 100 && (b+10) >= 100){
            printf("verdadeiro: %d \n",1);
        }else{
            printf("falso: %d \n",0);
        }
        printf("------------------------------------------------\n");
        printf("Digite um valor para a: \n");
        scanf("%d",&a);
        printf("Digite um valor para b: \n");
        scanf("%d",&b);
        if(((a + 300)/5) >= 100 || (b - 200) <= 200){
            printf("verdadeiro: %d \n",1);
        }else{
            printf("falso: %d \n",0);
        }
        printf("------------------------------------------------\n");
        printf("Caso queira rodar novamente digite 1 se quiser parar digite 0 \n");
        scanf("%d",&rodar);
        }
}
#endif

#ifdef ex7
main(){
int rodar = 1;
float celsius, kelvin,fahr;
    while(rodar){
        printf("Digite um valor em Celsius: \n");
        scanf("%f",&celsius);
        float celsiusKelvin = celsius+273;
        float celsiusFahr = (celsius*1.8)+32;
        printf("Celsius em Kelvin: %.2f e Farhrenheit %.2f \n",celsiusKelvin,celsiusFahr);
        printf("--------------------------------------------\n");
        printf("Digite um valor em Fahrenheit: \n");
        scanf("%f",&fahr);
        float fahrCelsius = (fahr-32)/1.8;
        float fahrKelvin = ((fahr-32)/1.8)+273.15;
        printf("Farhrenheit em Kelvin: %.2f e Celsius %.2f \n",fahrKelvin,fahrCelsius);
        printf("--------------------------------------------\n");
        printf("Digite um valor em Kelvin: \n");
        scanf("%f",&kelvin);


        float kelvinCelsius = kelvin-273;
        float kelvinFahr =(kelvin - 273.15)* 1.8000+ 32.00;

        printf("Kelvin em Farhrenheit: %.2f e Celsius %.2f \n",kelvinFahr,kelvinCelsius);
        printf("--------------------------------------------\n");
        printf("Caso queira rodar novamente digite 1 se quiser parar digite 0. \n");
        scanf("%d",&rodar);
    }
}
#endif

#ifdef ex8
main(){
int rodar = 1;
int anoNasc,mesNasc,diaNasc,anoAtual,mesAtual,diaAtual;
    while(rodar){
    //Coletando data de nascimento
        printf("Digite o ano em que voce nasceu: \n");
        scanf("%d",&anoNasc);

        printf("Digite o mes em que voce nasceu: \n");
        scanf("%d",&mesNasc);

        printf("Digite o dia em que voce nasceu: \n");
        scanf("%d",&diaNasc);

        printf("--------------------------------------------\n");
    //Coletando data atual
        printf("Digite o ano atual: \n");
        scanf("%d",&anoAtual);

        printf("Digite o mes atual: \n");
        scanf("%d",&mesAtual);

        printf("Digite o dia atual: \n");
        scanf("%d",&diaAtual);
        printf("--------------------------------------------\n");
    //Trabalhando com os dados




        printf("--------------------------------------------\n");
        printf("Caso queira rodar novamente digite 1 se quiser parar digite 0 \n");
        scanf("%d",&rodar);
    }
}
#endif
