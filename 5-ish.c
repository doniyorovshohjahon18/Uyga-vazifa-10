#include <stdio.h>

int main() {
    int son;
    unsigned long long faktorial = 1;

    printf("Musbat butun son kiriting (1-20): ");
    scanf("%d", &son);

    if (son < 1 || son > 20) {
        printf("Xatolik: 1 dan 20 gacha son kiriting.\n");
    } else {
        for (int i = 1; i <= son; i++) {
            faktorial *= i;
        }

        printf("%d! = %llu\n", son, faktorial);
    }

    return 0;
}
