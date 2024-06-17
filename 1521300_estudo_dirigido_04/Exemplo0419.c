

#include<stdio.h>
#include<stdbool.h>
#include<string.h>



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



 bool positive ( int x )
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

bool isLowerCase (char x)
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

     strcpy(minusculas, "");
    //identificar
     printf("\n Method 08 - v0.0");

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




void method_11 (void)
{
    double inferior, superior, valor;
    int controle, quantidade;
    int contadord = 0, contadorf = 0;

    printf("\n%s", "Defina os valores para o intervalo: ");
    printf("\n%s", "Valor minimo: ");
    scanf("\n%lf", &inferior);
    printf("\n%s", "Valor maximo: ");
    scanf("\n%lf", &superior);
    printf("\n%s", "Defina quantos numeros serao lidos: ");
    scanf("\n%d", &quantidade);



    for (controle = 0; controle < quantidade; controle++)
    {
        printf("\n%s", "Digite um numero: ");
        scanf("\n%lf", &valor);
        getchar();

        if (valor >= inferior && valor <= superior)
        {
            contadord = contadord + 1;
        }else
        {
            contadorf++;
        }

    }
        printf("\n%s%d", "O numero de valores que estao dentro do intervalo e: ", contadord);
        printf("\n%s%d", "O numero de valores que estao fora do intervalo e: ", contadorf);

}


bool ifLetraM (char c)
{
    bool result = false;
    if (c >= 'A' && c <= 'Z')
    {
        result = true;
    }
    return (result);
}



void method_12 (void)
{
    char palavra[100];
    int x = 0;
    int controle = 0, contador = 0;


    printf("\n%s", "Escreva uma sequencia de caracteres do teclado: ");
    fgets(palavra, 100, stdin);
    getchar();

    while(palavra[x] != '\0')
    {
        if (ifLetraM(palavra[x]) && palavra[x] > 'L')
        {
            contador++;
        }
        x++;
    }

    printf("\n%s%d%s", "Existem ", contador, " letras maiores que L");

}

int contLMa(char *c)
{

    int contador = 0;

    while (*c != '\0')
    {
        if (ifLetraM(*c) && *c > 'L')
        {
            contador++;
        }
       *c++;
    }
    return (contador);
}


void method_13 (void)
{

    char palavra[100];
    int quantidade = 0;

    printf("Digite uma sequencia de caracteres: ");
    fgets(palavra, 100, stdin);
    getchar();

    quantidade = contLMa(palavra);
    printf("\n%s%d", "O numero de letras maiores que 'L' e: ", quantidade);

}

void mostrarL(const char *c)
{


    while(*c > '\0')
    {
        if(ifLetraM(*c) && *c > 'L')
        {
            printf("\n%c", *c);
        }
        *c++;
    }


}


void method_14 (void)
{

    char palavra[100];
    char m;

    printf("\n%s", "Digite uma cadeia de caracteres: ");
    fgets(palavra, 100, stdin);
    getchar();

    mostrarL(palavra);

}


bool LMmLl(char c)
{
    bool result = false;


        if((c >= 'A' && c < 'L') || (c >= 'a' && c < 'l'))
        {
            result = true;
        }

    return(result);
}


void method_15 (void)
{
    char palavra[100];
    int x = 0;
    int contador = 0;


    printf("\n%s", "Escreva uma sequencia de caracteres do teclado: ");
    fgets(palavra, 100, stdin);
    getchar();

    while(palavra[x] != '\0')
    {
        if (LMmLl(palavra[x]))
        {
            contador = contador + 1;
        }
        x = x + 1;
    }

    printf("\n%s%d%s", "Existem ", contador, " letras maiusculas e minusculas menores que L e l");

}

void mostrarLl(const char *c)
{


    while(*c > '\0')
    {
        if(LMmLl(*c))
        {
            printf("\n%c", *c);
        }
        *c++;
    }


}

void method_16 (void)
{

    char palavra[100];

    printf("\n%s", "Digite uma cadeia de caracteres: ");
    fgets(palavra, 100, stdin);
    getchar();

    mostrarLl(palavra);

}

int contarpares( char *c)
{
    int contador = 0;


    while(*c != '\0')
    {
        if(*c >= '0' && *c <= '9' && (*c % 2 == 0))
        {
            contador++;
        }

        c++;
    }

    return(contador);
}






void method_17 (void)
{

    char palavra[100];
    int quantidade = 0;


    printf("\n%s", "Digite uma cadeia de caracteres: ");
    fgets(palavra, 100, stdin);
    getchar();

    quantidade = contarpares(palavra);

    printf("\n%s%d","Quantidade de dgitos pares na cadeia de caracteres: ", quantidade);


}

int mostrarNalf (char *c)
{


    while(*c != '\0')
    {
        if((*c >= '!' && *c <= '/') || (*c >= ':' && *c <= '@'))
        {
            printf("\n%c", *c);
        }
        c++;
    }

    return(*c);
}


void method_18(void)
{
    char palavra[100];
    int quantidade = 0;


    printf("\n%s", "Digite uma cadeia de caracteres: ");
    fgets(palavra, 100, stdin);
    getchar();

    quantidade = mostrarNalf(palavra);

}


int mostrarAlf (char *c)
{


    while(*c != '\0')
    {
        if((*c >= 'a' && *c <= 'z') || (*c >= 'A' && *c <= 'Z') || (*c >= '0' && *c <= '9'))
        {
            printf("\n%c", *c);
        }
        c++;
    }

    return(*c);
}

void method_19(void)
{
    char palavra[100];
    int quantidade = 0;


    printf("\n%s", "Digite uma cadeia de caracteres: ");
    fgets(palavra, 100, stdin);
    getchar();

    quantidade = mostrarAlf(palavra);

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
    printf("\n%s", "Opcao 11: Method_11");
    printf("\n%s", "Opcao 12: Method_12");
    printf("\n%s", "Opcao 13: Method_13");
    printf("\n%s", "Opcao 14: Method_14");
    printf("\n%s", "Opcao 15: Method_15");
    printf("\n%s", "Opcao 16: Method_16");
    printf("\n%s", "Opcao 17: Method_17");
    printf("\n%s", "Opcao 18: Method_18");
    printf("\n%s", "Opcao 19: Method_19");

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
    case 11:
        method_11();
        break;
    case 12:
        method_12();
        break;
    case 13:
        method_13();
        break;
    case 14:
        method_14();
        break;
    case 15:
        method_15();
        break;
    case 16:
        method_16();
        break;
    case 17:
        method_17();
        break;
    case 18:
        method_18();
        break;
    case 19:
        method_19();
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
