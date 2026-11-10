#include <stdio.h>

int main() {
    const int maxfiySon = 7;
    int taxmin;
    int topildi = 0;

    for (int i = 1; i <= 5; i++) {
        printf("%d-urinish. Sonni toping: ", i);
        scanf("%d", &taxmin);

        if (taxmin == maxfiySon) {
            printf("Tabriklaymiz, topdingiz!\n");
            topildi = 1;
            break;
        } else {
            printf("Noto'g'ri, qayta urinib ko'ring.\n");
        }
    }

    if (!topildi) {
        printf("Urinishlar tugadi. Maxfiy son: %d\n", maxfiySon);
    }

    return 0;
}
