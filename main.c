#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_CTYPE, "RUS");

    int x1, y1, z1, x2, y2, z2, day1, day2;

    // Понедельник
    x1 = 5;  // яблоки
    y1 = 3;  // груши
    z1 = 2;  // апельсины

    // Вторник
    x2 = 4;  // яблоки
    y2 = 6;  // груши
    z2 = 1;  // апельсины

    day1 = x1 * 1 + y1 * 2 + z1 * 3;
    day2 = x2 * 1 + y2 * 2 + z2 * 3;

    printf("Выручка в понедельник: %d руб.\n", day1);
    printf("Выручка во вторник: %d руб.\n", day2);

    return 0;
}
