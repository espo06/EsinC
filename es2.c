#include <stdio.h>

void scambia(int *a, int *b)
{
	int swap = *b;
	*b = *a;
	*a = swap;
}
int main(int argc, char *argv[])
{
	int a = 15, b = 20;
	scambia(&a, &b);

	printf("dopo lo scambio a vale: %d\n", a);
	printf("dopo lo scambio b vale: %d\n", b);
}
//Dati due numeri si scriva in linguaggio C una funzione di tipo void denominata scambia,
//che dati in input 2 numeri li scambi.