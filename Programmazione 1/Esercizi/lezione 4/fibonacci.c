#include <stdio.h>
int main(int argc, char const *argv[])
{
    int ultimo = 1;
    int penultimo = 0;
    int n;
    scanf("%d", &n);
    printf("0 1 ");
    for (int i = 0; i < n; i++) {
        ultimo = ultimo + penultimo;
        penultimo = ultimo - penultimo;
        printf("%d ", ultimo);
    }
    return 0;
}