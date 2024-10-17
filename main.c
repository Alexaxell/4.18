#include <stdio.h>

int main(void) {
    int i;
    int num;
    printf("inserisci un numero:\n");
    scanf("%d", &num);
    printf("i divisori di %d sono:\n", num);
    for ( i = 1; i <= num; i++ ) {
        if (num % i == 0) {
            printf("%d\n", i);
        }
    }
    return 0;
}
