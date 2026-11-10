#include <stdio.h>

int main() {
    int son;

    for (int i = 1; i <= 10; i++) {
        printf("%d-sonni kiriting: ", i);
        scanf("%d", &son);

        if (son < 0) {
            printf("Manfiy son kiritildi. Sikl to'xtatildi.\n");
            break;
        }

        printf("Kiritilgan son: %d\n", son);
    }

    return 0;
}
