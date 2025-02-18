#include <stdio.h>

int main () {
	int n;
	printf("Inserisci il valore di n : ");
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		printf("crescente : %d\n", i);
	}

	for(int i = n; i >= 0; i--){
		printf("decrescente : %d\n", i);
	}

	for(int i = 0; i <= n; i++){
		if (i % 2 != 0) {
			printf("dispari : %d\n", i);
		}
	}
	int fattoriale = 1;
	for (int i = 1; i <= n; i++) {
		fattoriale *= i;
	}
	printf("Fattoriale di %d = %d", n, fattoriale);
}