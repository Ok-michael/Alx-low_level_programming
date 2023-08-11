#include <stdio.h>

int main() {
    for (int num1 = 0; num1 <= 99; num1++) {
        for (int num2 = num1; num2 <= 99; num2++) {
            if (num1 != num2) {
                putchar('0' + num1 / 10);
                putchar('0' + num1 % 10);
                putchar(' ');
                putchar('0' + num2 / 10);
                putchar('0' + num2 % 10);
                
                if (num1 != 98 || num2 != 99) {
                    putchar(',');
                    putchar(' ');
                }
            }
        }
    }

    putchar('\n');

    return 0;
}
