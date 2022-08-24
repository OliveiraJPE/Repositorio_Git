#include <stdio.h>
#include <stdlib.h>

// Decla��o de Variaveis
// toda vari�vel possui: nome, tipo, tamanho e valor.
//Tipos de Variaveis

/*
    1) char - caracteres , ou seja uma variavelchar tem 1 Byte,
     08 bits, o que possibilitar armazenar 256 combina��es ou 256 caractres.

     2) int - inteiro -320000 +320000 - 8 Bytes para maquina de 64bits
     3) float - ponto flutuante - 4 Bytes - armazena ate 7 digitos com precis�o
     4) void - vazio, ou sem tipo.
     5) double - numero com ate 10 digitos com precis�o, casas decimais

*/
/* Modificadores de tipo.
    char, int, float, double, void.

   As Quatro instru��es para serem usadas nas declaracoes
   de vari�veis:

   economiza ou expande memoria

    signed - sinal - + e  - (inteiros por exemplo)
    unsigned  - sem sinal - so +
    long - Aumentar a capacidade de
    armazenamencto da nossa cvariavel
    short - Diminuir o tamanho de armazenamento.

  */
    


int main()
{
  
 //tipo nome = valor;
  int i = 2;
  int nume = 3;
  int num2 = 4;
  int num=11;   
  int x=10;    
  double numVerific = 1;
  float f = 5.0;
  float ff=2.2;
  float fff=4.12;
  float _2num = 5.0;
    char a, b;
    a = 'A';
    b = 'B';

        printf("\n i = %d", i);
        printf("\n nume = %d", nume);
        printf("\n num2 = %d", num2);
        printf("\n numVerific = %f", numVerific);
        printf("\n _2num = %f", _2num);
        printf("\n f = %f", f);
        printf("\na=  %c e b=  %c",a, b);



//Formatando os tipos na fun��o printf
    // printf("%tipo_de_dados", valor_a_ser_impresso\n);
    // printf("%tipo1, %tipo2", var1, var2);

    
    printf("\nnum igual a %i\n", num); // %i caractere do tipo inteiro
    printf("\nff igual a %f\n", ff); // %f caractere do tipo real

    //integer %i ou %d
    //Float ou double - %f
    //char %c
    //String %s

    // %u imprimir m�dulo de um n�mero
    // %p imprimir endere�o de mem�ria
    // %e ou %E imprimir nota��o cient�fica
    // %% imprimir o simbolo de porcecntagem.
   
    printf("\n%i\n",x);   
    printf("\nfff igual a %f \n", ff);
    printf(" \nx(%i)  -  (fff)%f  =  %f \n ", x,  fff, ((float) (x) - (float)(fff)));


     int p;
    unsigned short int u; //diminui pela metade o espa�o de armazenamento.
    double o; // n�o suporta short
    long double v;// long dobra

    printf("Tamanho de u = %i Bytes\n", sizeof(u));
      printf("Tamanho de p = %i Bytes\n", sizeof(p));
      printf("Tamanho de o = %i Bytes\n", sizeof(o));
       printf("Tamanho de v = %i Bytes\n", sizeof(v));

    return 0;
}
