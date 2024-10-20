#include <stdio.h>

int main () {
	int n;
    scanf("%d", &n);
    int nAsterischi = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < nAsterischi; j++) {
            printf("*");
        }
        printf("\\");
        for (int k = 0; k < (n-nAsterischi-1); k++) {
            printf(":");
        }
        printf("\n");
        nAsterischi++;
    }
}