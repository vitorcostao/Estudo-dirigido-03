/*
 Exemplo0300 - v0.0. - 11/03/2024
 Author: Vitor Costa Oliveira Rolla
*/
// dependencias
#include<stdio.h>
#include<string.h>

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


  void method_03 ( void )
{
        // definir dado
         int x = 0;
         int y = 0;
        // identificar
         printf("\nMethod_03 - v0.0");
        // ler do teclado
         printf("\nEntrar com uma quantidade: ");
         scanf("\n%d", &x);
        // repetir (x) vezes
         y = 1; // o valor lido devera' ser preservado
         while ( y <= x )
         {
         // mostrar valor atual
         printf("%d\n", y);
         // passar ao proximo valor
         y = y + 1;
         } // end while
        // encerrar
         printf("\nApertar ENTER para continuar");
         getchar();
} // end method_03



    void method_04 ( void )
{
        // definir dado
         int x = 0;
         int y = 0;
         int z = 0;
        // identificar
         printf("\nMethod_04 - v0.0");
        // ler do teclado
         printf("Entrar com uma quantidade: ");
         scanf("\n%d", &x);
        // repetir (x) vezes
        // inicio teste variacao
         for(y = 1; y <= x; y = y + 1)
         {
         // ler valor do teclado
         printf("Valor = ");
         scanf("\n%d", &z);
         // mostrar valor atual
         printf("%d. %d\n", y, z);
         } // end for
        // encerrar
         printf("Apertar ENTER para continuar");
         getchar();
} // end method_04 ( )


void method_05 ( )
{
        // definir dado
         int x = 0;
         int y = 0;
         int z = 0;
        // identificar
         printf("\nMethod_05 - v0.0");
        // ler do teclado
         printf("Entrar com uma quantidade: ");
         scanf("\n%d", &x);
        // repetir (x) vezes
        // inicio teste variacao
         for(y = x; y >= 1; y = y - 1)
         {
         // ler valor do teclado
         printf("Valor = ");
         scanf("\n%d", &z);
         // mostrar valor atual
         printf("%d. %d\n", y, z);
         } // end for
        // encerrar
         printf("Apertar ENTER para continuar");
         getchar();
} // end method_05 ( )

void method_06 ( void )
{
        // definir dado
         int x = 0;
         int y = 0;
         char palavra[100];
         int tamanho = 0;
        // identificar
         printf("\nMethod_06 - v0.0 ");
        // ler do teclado
         scanf("\n%s", palavra);
         palavra[strcspn(palavra, "\n")] = '\0';
        // repetir para cada letra
         tamanho = strlen(palavra);
        // OBS: A cadeia de caracteres iniciam suas posi��es em zero.
        // inicio teste variacao
         for ( y = tamanho - 1; y >= 0; y = y - 1 )
         {
         // mostrar valor atual
         printf("%d: [%c]\n", y, palavra [y]);
         } // end for
        // encerrar
         printf("\nApertar ENTER para continuar");
         getchar();
} // end method_06 ( )

void method_07 ( )
{
    //definir dado
    int x = 0;
    int y = 0;
    char palavra[100];
    int tamanho = 0;

    //identificar
    printf("%s", "Method07 - v0.0");

    //ler do teclado
    printf("\n%s", "Entrar com uma palavra: ");
    scanf("\n%s", palavra);
    getchar( );

    tamanho = strlen( palavra );
    for ( y = 0; y < tamanho ; y = y + 1 )
    {
        //mostrar valor inicial
        printf("\n%d: [%c]", y, palavra[y]);
    }
    printf("\n%s", " Apertar ENTER para continuar ");
    getchar( );







}











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
     printf("\n3 - repeticao com teste no inicio");
     printf("\n4 - repeticao com teste no inicio e variacao");
     printf("\n5 - repeticao com teste no inicio e variacao");
     printf("\n6 - repeticao com teste no inicio e variacao");
     printf("\n7 - repeticao sobre cadeia de caracteres");
     printf("");
     printf("\nEntrar com uma opcao: ");
     scanf("\n%d", &x);
 // testar valor
     switch ( x )
     {
     case 0: method_00 ( ); break;
     case 1: method_01 ( ); break;
     case 2: method_02 ( ); break;
     case 3: method_03 ( ); break;
     case 4: method_04 ( ); break;
     case 5: method_05 ( ); break;
     case 6: method_06 ( ); break;
     case 7: method_07 ( ); break;
     default: printf("\nValores diferente de [0,7].");

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

