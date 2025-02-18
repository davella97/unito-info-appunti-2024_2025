#include <stdio.h>

int main(int argc, char const *argv[]) {
    int n;
    scanf("%d", &n);
    int index = 1;
    for (int i = 0; i < n; i++) {
        for(int j = 0; j <= i; j++) {
            printf("%d ", index);
            index++;
        }
        printf("\n");
    }
    return 0;
}
