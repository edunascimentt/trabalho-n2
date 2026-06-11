/* Trabalho N2 de Algoritmos I
 * Equipe:
 *   João Eduardo
 *   Eduardo Kauã
 *   Kaue Paulino
 */

/* parte do João Eduardo ///////////////////////////////////////////////////////*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PRODUTOS 200
#define CLIENTES 50

int random(int n)
{
    return rand() % n;
}

int main(void)
{
    int i, npro, ncli;
    int compra[CLIENTES];
    float preco[PRODUTOS];
    float total;

    /* Inicializar gerador de numeros aleatorios */
    srand((unsigned)time(NULL));

    /* Precos dos produtos */
    npro = random(PRODUTOS) + 1;   /* numero de produtos */
    for (i = 0; i < npro; i++)
    {
        preco[i] = 5 + random(96); /* preco do produto */
    }

    /* parte do Eduardo ///////////////////////////////////////////////////////*/

    /* Sorteia o numero de clientes: random da 0 a 49, +1 fecha no intervalo [1, 50] */
    ncli = random(CLIENTES) + 1;

    /* Zera a variavel para nao puxar lixo */
    total = 0;

    /* For para selecionar cada cliente e anexar a logica de cliente > produto > preco*/
    for (i = 0; i < ncli; i++)
    {
        /* compra[i] = Qual produto o cliente i comprou) */
        compra[i] = random(npro);

        /* Soma das compras e utilizamos preco[compra[i]] = Qual o preco do roduto que o cliente i comprou  */
        total = total + preco[compra[i]];
    }
    
    return 0;
}
