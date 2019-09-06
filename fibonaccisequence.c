#include <stdio.h>

int main() {

    for (int i = 1; i < 100000; i = i + i) {
            printf("%d,", i);
    }

    return 0;
}
