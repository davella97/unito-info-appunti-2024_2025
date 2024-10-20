#include <stdio.h>

int main(void) {
    // Leggi i dati dallo standard input usando scanf
    int x1, x2, x3, x4;
    scanf("%d%d%d%d", &x1, &x2, &x3, &x4);
    int tmp;
    // Scambia per riordinare le variabili, in modo che
    //  x1 <= x2 <= x3 <= x4
    
    // COMPLETARE IL CODICE
    if (x1 > x2) {
        tmp = x1;
        x1 = x2;
        x2 = tmp;
    }
    if (x1 > x3) { 
        tmp = x1;
        x1 = x3;
        x3 = tmp;
    }
    if (x1 > x4) {
        tmp = x1;
        x1 = x4;
        x4 = tmp;
    }
    //x2
    if (x2 < x1) {
        tmp = x2;
        x2 = x1;
        x1 = tmp;
    }
    if (x2 > x3) {
        tmp = x2;
        x2 = x3;
        x3 = tmp;
    }
    if (x2 > x4) {
        tmp = x2;
        x2 = x4;
        x4 = tmp;
    }
    //x3
    if (x3 < x1) {
        tmp = x3;
        x3 = x1;
        x1 = tmp;
    }
    if (x3 < x2) {
        tmp = x3;
        x3 = x2;
        x2 = tmp;
    }
    if (x3 > x4) {
        tmp = x3;
        x3 = x4;
        x4 = tmp;
    }
    //x4
    if (x4 < x1) {
        tmp = x4;
        x4 = x1;
        x1 = tmp;
    }
    if (x4 < x2) {
        tmp = x4;
        x4 = x2;
        x2 = tmp;
    }
    if (x4 < x3) {
        tmp = x4;
        x4 = x3;
        x3 = tmp;
    }
    // Stampa le variabili ordinate
    printf("%d %d %d %d\n", x1, x2, x3, x4);
}