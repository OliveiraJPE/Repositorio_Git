#include <stdio.h>
#include <stdlib.h>
#define SIZE 10


int main(void){

    int a[SIZE] = {2, 6, 4, 8, 10, 12, 89, 68, 45, 37};
    int pass, i, hold;

    printf("\nItens de dados na ordefm original.\n");

    for(i=0; i<SIZE; i++ ){
        printf(" %4d", a[i]);
    }

    for(pass=1; pass<SIZE; pass++){
        for(i = 0; i<SIZE-1; i++){
            if(a[i]>a[i+1]){
                hold=a[i];
                a[i]=a[i+1];
                a[i+1]=hold;
            }
        }
    }

    printf("\n Itens em ordem crescente.\n");

    for(i=0; i<SIZE; i++ ){
    printf(" %4d", a[i]);
    }
    printf("\n\n");


return 0;
}

