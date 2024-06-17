#include<stdio.h>
#include<stdbool.h>




void method_01 (void)
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



_Bool positive ( int x )
{
    // testar a condicao
    if (x > 0)
    {
        return 1; // verdadeiro
    }
    else
    {
        return 0; // falso
    } // end if
} // end positive()

 void method_02 (void)
 {
     // definir dado
     int quantidade = 0;
     int valor = 0;
     int controle = 0;
     int contador = 0;

    // identificar
     printf( " Method 02 - v0.0" );

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

     //testar se valor e positivo
     if(positive(valor))
     {
         contador = contador + 1;
     }// end if
     // passar ao proximo valor
     controle = controle + 1;
     } // end while
     printf("\n%s%d", "Positivos = ", contador);

    // encerrar
     printf( "\nApertar ENTER para continuar" );
     getchar();


 }

bool belongsTo (int x, int inferior, int superior)
{
    //definir local de dado
    bool result = false;
    //testar condicao
    if (inferior < x && x < superior)
    {
        result = true;
    }
    return (result);
}

void method_03(void)
{
    // definir dado
     int quantidade = 0;
     int valor = 0;
     int controle = 0;
     int contador = 0;

    // identificar
     printf( " Method 03 - v0.0" );

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

     if (belongsTo (valor, 0, 100))
     {
         contador = contador + 1;
     }

     // passar ao proximo valor
     controle = controle + 1;
     } // end while
     printf("\n%s%d", "Positivos menores que 100 = ", contador);

    // encerrar
     printf( "\nApertar ENTER para continuar" );
     getchar();


}

bool even (int x)
{
    //definir dado local
    bool result = false;

    if (x % 2 == 0)
    {
        result = true;
    }
    return(result);
}


void method_04 (void)

{
    // definir dado
     int quantidade = 0;
     int valor = 0;
     int controle = 0;
     int contador = 0;


    // identificar
     printf( " Method 04 - v0.0" );

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

     if (belongsTo (valor, 0, 100) && even(valor))
     {
         contador = contador + 1;
     }

     // passar ao proximo valor
     controle = controle + 1;
     } // end while
     printf("\n%s%d", "Positivos pares menores que cem = ", contador);

    // encerrar
     printf( "\nApertar ENTER para continuar" );
     getchar();

}

void method_05 (void)

{
    // definir dado
     int quantidade = 0;
     int valor = 0;
     int controle = 0;
     int contador = 0;
     bool ok = false;


    // identificar
     printf( " Method 05 - v0.0" );

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

     ok = belongsTo (valor, 0, 100);
     ok = ok && even (valor);
     if(ok)
     {
      contador = contador + 1;
     }

     // passar ao proximo valor
     controle = controle + 1;
     } // end while
     printf("\n%s%d", "Positivos pares menores que cem = ", contador);

    // encerrar
     printf( "\nApertar ENTER para continuar" );
     getchar();

}






int main ( )
{
    int opcao;

    printf("%s", "Estudo Digirido_04 - Programa v0.0");
    printf("\nOpcao 0: Encerrar programa ");
    printf("\n%s", "Opcao 1: Method_01");
    printf("\n%s", "Opcao 2: Method_02");
    printf("\n%s", "Opcao 3: Method_03");
    printf("\n%s", "Opcao 4: Method_04");
    printf("\n%s", "Opcao 5: Method_05");

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
    case 2:
        method_02();
        break;
    case 3:
        method_03();
        break;
    case 4:
        method_04();
        break;
    case 5:
        method_05();
        break;
    default:
        printf("\n%s", "Opcao invalida");
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

