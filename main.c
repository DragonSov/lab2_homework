#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_CTYPE, "RUS");

    int x1, y1, z1, x2, y2, z2, day1, day2;

    // �����������
    x1 = 5;  // ������
    y1 = 3;  // �����
    z1 = 2;  // ���������

    // �������
    x2 = 4;  // ������
    y2 = 6;  // �����
    z2 = 1;  // ���������

    day1 = x1 * 1 + y1 * 2 + z1 * 3;
    day2 = x2 * 1 + y2 * 2 + z2 * 3;

    printf("������� � �����������: %d ���.\n", day1);
    printf("������� �� �������: %d ���.\n", day2);

    return 0;
}
