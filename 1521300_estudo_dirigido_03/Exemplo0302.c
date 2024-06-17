/*
 Exemplo0300 - v0.0. - 11/03/2024
 Author: Vitor Costa Oliveira Rolla
*/
// dependencias
#include<stdio.h>

void method_00 ( void )
{
// nao faz nada
} // end method_00 ( )

void method_01 ( void )
{

 int x = 0;

    printf("Method_01 - v0.0") ;

    printf("\n%s","Entrar com uma quantidade: ");
    scanf("\n%d", &x);

 while(x > 0)
 {

    printf("\n%s%d", " O valor atual e: ", x);
    x = x - 1;
 }

    printf("\nApertar ENTER para continuar");
    getchar();
}
void method_02 ( void )
{
        // definir dado
         int x = 0;
         int y = 0;
        // identificar
         printf("\nMethod_02 - v0.0");
        // ler do teclado
         printf("\nEntrar com uma quantidade: ");
         scanf("\n%d", &x);
        // repetir (x) vezes
         y = x; // copiar o valor lido (e' melhor)
         while ( y > 0 )
         {
         // mostrar valor atual
         printf("\n%s%d", " O valor de y e: ", y);
         // passar ao proximo valor
         y = y - 1;
         } // end while
        // encerrar
        printf("\nApertar ENTER para continuar");
        getchar();
} // end method_02 ( )
/*
/*
 Funcao principal.
 @return codigo de encerramento
*/
int main ( )
{

 int x = 0;

 do
 {

     printf("\n\nEXEMPLO0300 - Programa - v0.0" );
     printf("\nOpcoes: ");
     printf("\n0 - parar");
     printf("\n1 - repeticao ate desejar para");
     printf("\n2 - repeticao com teste no inicio");
     printf("");
     printf("\nEntrar com uma opcao: ");
     scanf("\n%d", &x);
 // testar valor
     switch ( x )
     {
     case 0: method_00 ( ); break;
     case 1: method_01 ( ); break;
     case 2: method_02 ( ); break;
     default: printf("\nValores diferente de [0,2].");

 } // end switch
 }
     while ( x != 0 );
    // encerrar
      printf("\nApertar ENTER para terminar");
     return ( 0 );
} // end main ( )
    /*
    ---------------------------------------------- documentacao complementar
    ---------------------------------------------- notas / observacoes / comentarios
    ---------------------------------------------- previsao de testes
    a.) 0
    b.) 1
    c.) 2
    d.) 3
    e.) 4
    f.) -1
    ---------------------------------------------- historico
    Versao Data Modificacao
     0.1 11/03 esboco
    ---------------------------------------------- testes
    Versao Teste
     0.1 01. ( OK ) identificacao de programa
    */


