#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<stdlib.h>

char *concat(const char* s1, const char *s2)
{
    char *result = malloc(strlen(s1) + strlen(s2) + 1);
    strcpy(result, s1);
    strcpy(result, s2);
    return (result);
}

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
     printf("\n\nLeia um valor: ");
     scanf("\n%d", &valor);

     printf("%s%d", "O valor digitado: ", valor);

     // passar ao proximo valor
     controle = controle + 1;
     } // end while

    // encerrar
     printf( "Apertar ENTER para continuar" );
     getchar();
    } // end method_01 ( )



 bool positive ( int x ) //funcao que determina se valor eh positivo
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

 void method_02 (void) //procedimento
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
     getchar();

    // repetir para a quantidade de vezes informada
     for (controle = 1; controle <= quantidade; controle ++)
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

     } // end for
     printf("\n%s%d", "Positivos = ", contador);

    // encerrar
     printf( "\nApertar ENTER para continuar" );
     getchar();


 }

bool belongsTo (int inferior, int x, int superior) //funcao para determinar se valor pertence a certo intervalo
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
     for (controle = 1; controle <= quantidade; controle++)
     {
     // ler valor do teclado
     printf("\nLeia um valor: ");
     scanf("\n%d", &valor);

     if (belongsTo (0, valor, 100))
     {
         contador = contador + 1;
     }
     } // end for
     printf("\n%s%d", "Positivos menores que 100 = ", contador);

    // encerrar
     printf( "\nApertar ENTER para continuar" );
     getchar();


}

bool even (int x) //funcao para determinar se valor inteiro e par
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
     ;
     for (controle = 1; controle <= quantidade; controle++ )
     {
     // ler valor do teclado
     printf("\nLeia um valor: ");
     scanf("\n%d", &valor);

     if (belongsTo (0, valor, 100) && even(valor))
     {
         contador = contador + 1;
     }

     } // end for
     printf("\n%s%d", "Positivos pares menores que cem = ", contador);

    // encerrar
     printf( "\nApertar ENTER para continuar" );
     getchar();

}

void method_05 (void) //alternativos

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
     for (controle = 1; controle <= quantidade; controle++)
     {
     // ler valor do teclado
     printf("\nLeia um valor: ");
     scanf("\n%d", &valor);

     ok = belongsTo (0, valor, 100);
     ok = ok && even (valor);
     if(ok)
     {
      contador = contador + 1;
     }



     } // end for
     printf("\n%s%d", "Positivos pares menores que cem = ", contador);

    // encerrar
     printf( "\nApertar ENTER para continuar" );
     getchar();

}

bool isLowerCase (char x) //funcao para determinar se caractere eh letra minuscula
{
    //definir dado
    bool result = false;

    // testar condicao
    if ( 'a' <= x && x <= 'z')
    {
        result = true;
    }
    return(result);
}





void method_06 (void)

{
    // definir dado
     char palavra[100];
     int tamanho = 0;
     int posicao = 0;
     char simbolo = '_';
     int contador = 0;



    // identificar
     printf( "\n Method 06 - v0.0" );

    // ler do teclado
     printf( "\nEntrar com uma palavra: " );
     tamanho = 100;
     fgets(palavra, tamanho, stdin);
     getchar();

    // repetir para a quantidade de vezes informada
    for (posicao = 0; posicao < tamanho; posicao = posicao + 1)
    {
        //isolar um simbolo por vez
        simbolo = palavra[posicao];
        //testar e contar se caractere e minusculo
        if (isLowerCase(simbolo))
        {
            contador = contador + 1;
        }
    }
  // end while
     printf("\n%s%d", " O numero de letras minusculas sao: ", contador);

    // encerrar

 }


 void method_07 (void)
 {
     //definir dado
     char palavra[100];
     int tamanho = 0;
     int posicao = 0;
     int contador = 0;
     char simbolo = '_';

     //identificar
     printf("\n Method 07 - v0.0");;

     //ler do teclado
     printf("\n%s", "Digite uma palavra: ");
     fgets(palavra, 100, stdin);
     getchar();

    //determinar a quantidade de simbolos na palavra
     tamanho = strlen(palavra);

     //repetir para a quantidade de vezes informada
     for (posicao = 0; posicao < tamanho; posicao = posicao + 1)
     {
         //isolar um simbolo por vez
         simbolo = palavra[posicao];

         //testar e contar se caractere e letra minuscula
         if (isLowerCase(simbolo))
         {
             //mostrar
             printf("%c", simbolo);
             //contar
             contador = contador + 1;
         }
     }

     //mostrar a quantia de letras minusculas

     printf("\n%s%d", "Minusculas = ", contador);
     getchar();


 }


 void method_08 (void)
 {

     //definir dado
     char palavra[100];
     int tamanho = 0;
     int posicao = 0;
     char simbolo = '_';
     int contador = 0;
     char minusculas[100];

     strcpy(minusculas, ""); //(destino , fonte)
    //identificar
     printf("\n Method 08 - v0.0");

     //ler do teclado
     printf("\n%s", "Digite uma palavra: ");
     fgets(palavra, 100, stdin);
     getchar();
     //definir quantia de simbolos na palavra
     tamanho = strlen(palavra);

     //repetir para a quantidade informada
     for(posicao = 0; posicao < tamanho; posicao++)
     {
         //isolar um simbolo por vez
         simbolo = palavra[posicao];
         //testar e contar se a letra e minuscula
         if (isLowerCase(simbolo))
         {
             // concatenar simbolos
             strcat(minusculas, &simbolo);
             printf("\n%c",simbolo);
             //contar
             contador ++;
         }
     }

     printf("\n%s%d", "Minusculas = ", contador);
     getchar();

}


    bool isDigit (char x)
    {
        //definir dado local
        bool result = false;
        //testar condicao
        if ('0' <= x && x <= '9')
        {
            result = true;
        }
        return(result);
    }


void method_09 (void)
{
   //definir dado
     char palavra[100];
     int tamanho = 0;
     int posicao = 0;
     char simbolo = '_';
     int contador = 0;
     char minusculas[100];

    //identificar
     printf("\n Method 09 - v0.0");

     //ler do teclado
     printf("\n%s", "Digite uma palavra: ");
     fgets(palavra, 100, stdin);
     getchar();
     //definir quantia de simbolos na palavra
     tamanho = strlen(palavra);

     //repetir para a quantidade informada
     for(posicao = 0; posicao < tamanho; posicao++)
     {
         //isolar um simbolo por vez
         simbolo = palavra[posicao];
         //testar e contar se a letra e minuscula
         if (isDigit(simbolo))
         {

             printf("\n%c",simbolo);
             //contar
             contador ++;
         }
     }

     printf("\n%s%d", "Algarismos = ", contador);
     getchar();

}


char *concatADigit(char *strings, char digit)
{

    char temp[2] = {digit, '\0'};
    strcat(strings, temp);
    return (strings);
}

void method_10 (void)
{
    //definir dado
     char palavra[100];
     int tamanho = 0;
     int posicao = 0;
     char simbolo = '_';
     int contador = 0;
     char digitos[100];

     strcpy(digitos, "");

    //identificar
     printf("\n Method 10 - v0.0");

     //ler do teclado
     printf("\n%s", "Digite uma palavra: ");
     fgets(palavra, 100, stdin);
     //definir quantia de simbolos na palavra
     tamanho = strlen(palavra);

     //repetir para a quantidade informada
     for(posicao = 0; posicao < tamanho; posicao++)
     {
         //isolar um simbolo por vez
         simbolo = palavra[posicao];
         //testar e contar se a letra e minuscula
         if (isDigit(simbolo))
         {
             concatADigit(digitos, simbolo);
             printf("\n%c", simbolo);
             //contar
             contador ++;
         }
     }

     printf("\n%s%d", "Algarismos = ", contador);
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
    printf("\n%s", "Opcao 6: Method_06");
    printf("\n%s", "Opcao 7: Method_07");
    printf("\n%s", "Opcao 8: Method_08");
    printf("\n%s", "Opcao 9: Method_09");
    printf("\n%s", "Opcao 10: Method_10");




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
    case 6:
        method_06();
        break;
    case 7:
        method_07();
        break;
    case 8:
        method_08();
        break;
    case 9:
        method_09();
        break;
    case 10:
        method_10();
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

