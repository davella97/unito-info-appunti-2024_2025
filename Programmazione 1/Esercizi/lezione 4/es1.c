#include <stdio.h>

int main(void) {
    // Leggi il numero n
    int n;
    scanf("%d", &n);
    
    // Stampa i divisori di in ordine crescente
    // COMPLETARE IL CODICE
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%d ", i);
        }
    }
}