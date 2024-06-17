#include<stdio.h>




void method_01 ( )
{
    // definir dado
     int quantidade = 0;
     int valor = 0;
     int controle = 0;
    // identificar
     printf( " Method 01 - v0.0" );
    // ler do teclado
     printf( "\nEntrar com uma quantidade: " );
     scanf("\n%d", &quantidade);
    // repetir para a quantidade de vezes informada
     controle = 1;
     while ( controle <= quantidade )
     {
     // ler valor do teclado
     printf("\nLeia um valor: ");
     scanf("\n%d", &valor);
     // passar ao proximo valor
     controle = controle + 1;
     } // end while
    // encerrar
     printf( "Apertar ENTER para continuar" );
     getchar();
    } // end method_01 ( )

int main ( )
{
    int opcao;

    printf("%s", "Estudo Digirido_04 - Programa v0.0");
    printf("\nEscolha uma opcao: ");
    scanf("\n%d", &opcao);
    getchar();

    switch(opcao)
    {
    case 0:
        printf("\n%s", "Encerrar o programa.");
        break;
    case 1:
        method_01();
        break;
    }

    printf("\n%s", "Aperte ENTER para encerrar o programa");
    getchar();

}
/*
---------------------------------------------- documentacao complementar
---------------------------------------------- notas / observacoes / comentarios
---------------------------------------------- previsao de testes
a.) -1
b.) 0
c.) 5 e { 1, 2, 3, 4, 5 }
---------------------------------------------- historico
Versao Data Modificacao
 0.1 __/__ esboco
---------------------------------------------- testes
Versao Teste
 0.1 01. ( OK ) identificacao de programa
*/
