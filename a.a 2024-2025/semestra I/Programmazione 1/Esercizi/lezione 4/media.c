#include <stdio.h>

int main () {
	int flag = 0;
	int media = 0;
    int index = 0;
    int n;
    while (flag == 0) {
        scanf("%d", &n);
        media +=n;
        if (n == 0) {
            flag = 1;
        } else {
            index++;
        }
    }
    printf("Sono stati inseriti %d elementi, la loro somma e' %d e la media e' %d", index, media, media/index);
}