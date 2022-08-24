/* Um exemplo de escopos */
 #include <stdio.h>
 void a(void); /* prot�tipo de funcao */
 void b(void); /* prot�tipo de funcao */
 void c(void); /* prot�tipo de funcao */
 int x = 1; /* vari�vel global */
 main() {
 int x = 5; /* vari�vel local para main */
 printf("x local no escopo externo de main e %d\n", x) ;
  { /* inicia novo escopo */
 int x = 7;
 printf("x local no escopo interno de main e %d\n", x) ;
 } /* encerra novo escopo */
 printf("x local no escopo externo de main e %d\n", x) ;
 a(); /* a tem x local autom�tico */
 b(); /* b tem x local est�tico */
 c(); /* c usa x global */
 a(); /* a reinicializa x local autom�tico */
 b(); /* x local est�tico conserva seu valor anterior */
 c(); /* x global tamb�m conserva seu valor */
 printf("x local em main e %d\n", x);

 return 0;
 }
 void a(void) {
 int x = 25; /* inicializada sempre que a e chamada */
 printf("\nx local em a e %d depois de entrar em a\n", x);
 ++x;
 printf("x local em a e %d antes de sair de a\n", x);
 }
 void b(void) {
 static int x = 50; /* apenas inicializa��o est�tica */
 /* primeira vez que b e chamada */
 printf("\nx local est�tico e %d ao entrar em b\n", x);
 ++x;
 printf("x local est�tico e %d ao sair de b\n", x);
 }
 void c(void) {
 printf("\nx global e %d ao entrar em c\n", x);
 x *= 10;
 printf("x global e %d ao sair de c\n", x);
 }
