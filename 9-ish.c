#include <stdio.h>

int main() {
    int sum = 0;

    for (int i = 1; i <= 50; i++) {
        if (i % 3 != 0) {
            continue;
        }

        sum += i;
    }

    printf("3 ga bo'linadigan sonlar yig'indisi = %d\n", sum);

    return 0;
}
