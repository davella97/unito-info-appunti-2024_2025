#include <stdio.h>

int main(void)
{
    // COMPLETA IL CODICE
    int n, m;
    scanf("%d%d", &n, &m);

    if (n % 2 == 0) {
        if (n > m) {
            printf("c1");
        } else {
            printf("C2");
        }
    } else {
        if (m%2 != 0) {
            printf("c3");
        } else if (m*2 > n) {
            printf("c4");
        } else {
            printf("altro");
        }
    }
    
}