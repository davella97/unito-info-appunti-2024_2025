#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_TENTATIVI 7

int main(void)
{
	// Genera un numero pseudo-casuale tra 0 (incluso) e 100 (escluso)
	srand(time(0));
	int numero = rand() % 100;

	// VARIANTE 1:
	// Chiedi all'utente di indovinare il numero.
	// L'utente inserisce un intero t come tentativo
	// - Se t è il numero da indovinare, stampa un messaggio e termina
	// - Se t è maggiore del numero da indovinare, stampa un messaggio
	//   appropriato e procedi con un nuovo tentativo
	// - Procedi similmente se t è minore, con un diverso messaggio.
	int n;
	scanf("%d", &n);
	while (n != numero) {
		printf("\n Riprova : ");
		scanf("%d", &n);
	}
	printf("Hai vinto! Il numero corretto era : %d", n);
	// COMPLETA IL CODICE

	// VARIANTE 2:
	// memorizza in una variabile num_tentativi il numero
	// di tentativi che l'utente ha fatto. Quando il numero da indovinare
	// viene trovato, stampa a video il numero di tentativi effettuati.
	int index = 0;
	scanf("%d", &n);
	while (n != numero) {
		index++;
		printf("\n Riprova : ");
		scanf("%d", &n);
	}
	printf("Hai vinto! Numero tentativi : %d Il numero corretto era : %d", index + 1, n);
	// VARIANTE 3:
	// Se l'utente supera MAX_TENTATIVI, termina il ciclo e stampa 
	// un messaggio di sconfitta, svelando anche il numero da indovinare.

	int index = 0;
	scanf("%d", &n);
	while (n != numero && index < MAX_TENTATIVI) {
		index++;
		printf("\n Riprova : ");
		scanf("%d", &n);
	}
	printf("Hai vinto! Numero tentativi : %d Il numero corretto era : %d", index + 1, n);
}
