#include <stdio.h>
#include <stdlib.h>

int main()
{
    // tomadas de decis�o.
    // else

    int j,  i =10;

    printf("%i", i==10); // Verdadeiro, logo, retorna o valor 1.
    printf("\n");
    printf("%i", i!=10); // Falso. Logo, reotrna o valor 0.
    printf("\n");
    printf("%i", !(i==10)); // Falso. ! � o NOT. Logo, reotrna o valor 0.

    printf("Digite um numero ,diferente de 5:  ");
    scanf(" %i", &j);
    if(!(j==5)){// == compara��o. != compara��o negativa
        printf("TRUE\n");
    }else{
        printf("FALSE\n");
    }

    return 0;
}
