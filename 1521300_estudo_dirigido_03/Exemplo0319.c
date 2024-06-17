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
        // OBS: A cadeia de caracteres iniciam suas posições em zero.
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

void method_07 (void)
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

void method_08 (void)
{
    //definir dado
    int superior = 0;
    int inferior = 0;
    int x = 0;

    //identificar
    printf("%s", "Method08 - v0.0");

    //ler do teclado
    printf("\n%s", "Limite inferior do intervalo: ");
    scanf("%d", &inferior);
    printf("%s", "Limite superior do intervalo: ");
    scanf("%d", &superior);

    //inicio do teste de variacao
    for (x = inferior; x <= superior; x = x + 1)
    {
        printf("\n%d", x);
    }
    //encerrar
    printf("\n%s", "Apertar ENTER para continuar");
    getchar();


}

void method_09 (void)
{
    //definir dado
    double inferior = 0;
    double superior = 0;
    double passo = 0;
    double x = 0;


    //identificar
    printf("%s", "Method09 - v0.0");

    //ler do teclado
    printf("\n%s", "Limite inferior do intervalo: ");
    scanf("%lf", &inferior);
    printf("%s", "Limite superior do intervalo: ");
    scanf("%lf", &superior);
    printf("\n%s", "Variacao no intervalo(passo): ");
    scanf("\n%lf", &passo);


    //inicio do teste de variacao
    for (x = superior; x >= inferior; x = x - passo)
    {
        printf("\n%lf", x);
    }
    //encerrar
    printf("\n%s", "Apertar ENTER para continuar");
    getchar();

}

void method_10 (void)

{
    //definir dado
    double inferior = 0;
    double superior = 0;
    double passo = 0;
    double x = 0;


    //identificar
    printf("%s", "Method10 - v0.0");

    //ler do teclado
    printf("\n%s", "Limite inferior do intervalo: ");
    scanf("%lf", &inferior);


    //repetir ate haver confirmacao de validade
    do
    {
        printf("\n%s", "Limite superior do intervalo: ");
        scanf("%lf", &superior);
    } while(inferior >= superior);

    do
    {
        printf("\n%s", "Variacao no intervalo(passo): ");
        scanf("\n%lf", &passo);
    } while(passo <= 0);


    for ( x = inferior; x <= superior; x = x + passo)
    {
        printf("\n%lf", x);
    }

    //encerrar
    printf("\n%s", "Apertar ENTER para continuar");
    getchar();

}

void method_11 (void)
{
     //definir dado
    int x;
    char palavra[100];


    //identificar
    printf("%s", "Method11 - v0.0");

    //ler do teclado
    printf("\n%s", "Entrar com uma palavra: ");
    scanf("\n%s", palavra);
    getchar( );

    for (x = 0; palavra[x] != '\0'; x++)
    {
        if(palavra[x] >= 'A' && palavra[x] <= 'Z' )
        {
            printf("\n%c", palavra[x]);
        }
    }
    printf("\n%s", " Apertar ENTER para continuar ");
    getchar( );
}

void method_12 (void)
{
     int x;
     int y = 0;
     char palavra[100];


    //identificar
    printf("%s", "Method12 - v0.0");

    //ler do teclado
    printf("\n%s", "Entrar com uma palavra: ");
    scanf("\n%s", palavra);
    getchar( );

    for (x = 0; palavra[x] != '\0'; x++)
    {
        if(palavra[x] >= 'A' && palavra[x] <= 'Z' )
        {
            y = y + 1;
            printf("\n%c", palavra[x]);
            printf("%s%d","-", y);

        }
    }
    printf("\n%s", " Apertar ENTER para continuar ");
    getchar( );



}


void method_13 (void)
{
     int x;
     int y = 0;
     char palavra[100];


    //identificar
    printf("%s", "Method13 - v0.0");

    //ler do teclado
    printf("\n%s", "Entrar com uma palavra: ");
    scanf("\n%s", palavra);
    getchar( );

    //tamanho da palavra
    while(palavra[x] != 0) {x++;}

    for (x = x - 1 ; x >= 0; x--)
    {
        if(palavra[x] >= 'A' && palavra[x] <= 'Z' )
        {
            y = y + 1;
            printf("\n%c", palavra[x]);
            printf("%s%d","-", y);

        }
    }
    printf("\n%s", " Apertar ENTER para continuar ");
    getchar( );
}

void method_14 (void)
{

    int x, y = 0;
    char palavra[100];

    printf("%s", "Method14 - v0.0");

    printf("\n%s", "Entrar com uma palavra: ");
    scanf("%s", palavra);

    printf("\nLetras e símbolos na palavra:\n");
    for (x = 0; palavra[x] != '\0'; x++) {
        if ((palavra[x] >= 'A' && palavra[x] <= 'Z') || (palavra[x] >= 'a' && palavra[x] <= 'z') || (palavra[x] == '@')) {
            y++;
            printf("%c-%d\n", palavra[x], y);
        }
    }

    printf("\n%s", "Apertar ENTER para continuar ");
    getchar();


    return 0;

}


void method_15 (void)
{
     int x;
     int y = 0;
     char palavra[100];


    //identificar
    printf("%s", "Method15 - v0.0");

    //ler do teclado
    printf("\n%s", "Entrar com uma palavra: ");
    scanf("\n%s", palavra);
    getchar( );

        while(palavra[x] != 0) {x++;}
         for (x = x - 1; x >= 0; x--) {
        if ((palavra[x] >= 'A' && palavra[x] <= 'Z') || (palavra[x] >= 'a' && palavra[x] <= 'z') || (palavra[x] == '@')) {
            y++;
            printf("%c-%d\n", palavra[x], y);
        }
    }

        printf("\n%s", " Apertar ENTER para continuar ");
        getchar( );


}


void method_16 (void)
{
    int x, y = 0;
    char palavra[100];

    printf("%s", "Method16 - v0.0");

    printf("\n%s", "Entrar com uma palavra: ");
    scanf("%s", palavra);

    printf("\nCaracteres que nao sao digitos nem letras:\n");
    for (x = 0; palavra[x] != '\0'; x++) {
        if (!(palavra[x] >= '0' && palavra[x] <= '9') &&
            !(palavra[x] >= 'A' && palavra[x] <= 'Z') &&
            !(palavra[x] >= 'a' && palavra[x] <= 'z')) {
            y++;
            printf("%c-%d\n", palavra[x], y);
        }
    }

    printf("\n%s", "Apertar ENTER para continuar ");
    getchar();
    getchar();

    return 0;


}

void method_17 (void)
{
    int n, x, y = 0;
    int menor, maior;

    printf("Method17 - v0.0\n");

    printf("Leia o menor valor do intervalo: ");
    scanf("%d", &menor);
    printf("Leia o maior valor do intervalo: ");
    scanf("%d", &maior);
    printf("Leia um valor para definir quantos numeros serao testados: ");
    scanf("%d", &n);

    for (x = 0; x < n; x++)
    {
        int valor;
        printf("Digite o proximo valor: ");
        scanf("%d", &valor);
        if (valor >= menor && valor <= maior && valor % 6 == 0)
        {
            y++;
            printf("%d-%d\n", valor, y);
        }
    }
    printf("\nOs valores multiplos de 6 e pertencentes ao intervalo [%d:%d] sao:\n", menor, maior);
    printf("\nTotal de valores multiplos de 6 e pertencentes ao intervalo [%d:%d]: %d\n", menor, maior, y);

    return 0;

}

void method_18 (void)
{
    int n, x, y = 0;
    int menor, maior;

    printf("Method18 - v0.0\n");

    printf("Leia o menor valor do intervalo: ");
    scanf("%d", &menor);
    printf("Leia o maior valor do intervalo: ");
    scanf("%d", &maior);
    printf("Leia um valor para definir quantos numeros serao testados: ");
    scanf("%d", &n);

    for (x = 0; x < n; x++)
    {
        int valor;
        printf("Digite o proximo valor: ");
        scanf("%d", &valor);
        if (valor >= menor && valor <= maior && valor % 4 == 0 && valor % 5 != 0)
        {
            y++;
            printf("%d-%d\n", valor, y);
        }
    }
    printf("\nOs valores multiplos de 4 e nao de 5 pertencentes ao intervalo [%d:%d] sao:\n", menor, maior);
    printf("\nTotal de valores multiplos de 4 e nao de 5 pertencentes ao intervalo [%d:%d]: %d\n", menor, maior, y);

    return 0;

}

void method_19 (void)
{
    double menor, maior;
    int n, count = 0;

    printf("Method19 - v0.0\n");

    printf("Leia o menor valor do intervalo: ");
    scanf("%lf", &menor);
    printf("Leia o maior valor do intervalo: ");
    scanf("%lf", &maior);

    while (menor >= maior) {
        printf("\nErro: menor deve ser menor que maior.");
        printf("Digite o valor de menor: ");
        scanf("%lf", &menor);
        printf("Digite o valor de maior: ");
        scanf("%lf", &maior);
    }

    printf("Digite a quantidade de valores a serem testados: ");
    scanf("%d", &n);

    printf("Digite os valores a serem testados:\n");
    for (int i = 0; i < n; i++) {
        double x;
        printf("Digite o proximo valor: ");
        scanf("%lf", &x);
        int parte_inteira = (int)x;
        if (x > menor && x < maior && parte_inteira % 2 == 0) {
            count++;

        }
    }

    printf("Total de valores pertencentes ao intervalo e com parte inteira par: %d\n", count);

    return 0;
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
     printf("\n8 - repeticao com intervalos");
     printf("\n9 - repeticao com intervalos");
     printf("\n10 - repeticao com confirmacao");
     printf("\n11 - repeticao sobre cadeia de caracteres");
     printf("\n12 - repeticao sobre cadeia de caracteres");
     printf("\n13 - repeticao sobre cadeia de caracteres");
     printf("\n14 - repeticao sobre cadeia de caracteres");
     printf("\n15 - repeticao sobre cadeia de caracteres");
     printf("\n16 - repeticao sobre cadeia de caracteres");
     printf("\n17 - repeticao com teste no inicio");
     printf("\n18 - repeticao com teste no inicio");
     printf("\n19 - repeticao com teste no inicio");
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
     case 8: method_08 ( ); break;
     case 9: method_09 ( ); break;
     case 10: method_10 ( ); break;
     case 11: method_11 ( ); break;
     case 12: method_12 ( ); break;
     case 13: method_13 ( ); break;
     case 14: method_14 ( ); break;
     case 15: method_15 ( ); break;
     case 16: method_16 ( ); break;
     case 17: method_17 ( ); break;
     case 18: method_18 ( ); break;
     case 19: method_19 ( ); break;
     default: printf("\nValores diferente de [0,19].");

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

