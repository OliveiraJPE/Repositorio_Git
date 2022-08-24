#include <stdio.h>
#include <stdlib.h>

/* Contando os conceitos */

main() {
int grau;
int aConta = 0, bConta = 0, cConta = 0, dConta = 0, fConta = 0;

 printf("Entre com os conceitos. \n");
 printf("Entre com o caractere EOF (fim) para finalizar as entradas.\n");
 while ( ( grau = getchar () ) != EOF ) {// as teclas de EOF no Code Blocks Windows � ctrl+z
 switch (grau) { //switch aninhado em um while
 case 'A': // o grau foi A mai�sculo
 case 'a': /* ou a min�sculo */
 ++aConta;
 break;
 case 'B': /* o grau foi B mai�sculo */
 case 'b': /* ou b min�sculo */
 ++bConta;
 break;
 case 'C': /* o grau foi C mai�sculo */
 case 'c': /* ou c min�sculo */
 ++cConta;
 break;
 case 'D': /* o grau foi D mai�sculo */
 case 'd': /* ou d min�sculo */
 ++dConta;
 break;
 case 'F': /* o grau foi F mai�sculo */
 case 'f': /* ou f min�sculo */
 ++fConta;
 break;
 case '\n': /* ignore isto na entrada */
 case ' ':
 break;
 default: /* obtenha todos outros caracteres */
 printf ("Fornecido um conceito incorreto.");
 printf (" Entre com um novo conceito.\n");
 break;
 }
 }
 printf("\nOs totais de cada conceito sao:\n");
 printf("A: %d\n", aConta);
 printf("B: %d\n", bConta);
 printf("C: %d\n", cConta);
 printf("D: %d\n", dConta);
 printf("F: %d\n", fConta);
 return 0;
 }
