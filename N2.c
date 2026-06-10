
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
