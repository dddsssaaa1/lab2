#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, ".UTF8");

    printf("123\n");
    printf("1\n2\n3\n");
    printf("\t1\n\t\t2\n\t\t\t3\n");
    printf("%2d\n%4d\n%6d\n%8d\n", 1, 2, 3, 4);
    printf("%10.3f\n ", 12.234657f);
    printf("%10.5f\n ", 12.234657f);
    printf("Остаток от деления %d на %d равен %d\n ", 5, 2, 5 % 2);
    printf("Результат деления 7 на 5: %f\n", 7.0f / 5.0f);
    printf("Результат умножения 2000 на 4: %d\n", 2000 * 4);
    printf("%g разделить %e равно %f\n \n", 5.f, 2000000.f, 5.f / 2000000.f);

    int N = 22;
    int K = 49;

    printf("Сейчас %d часов %d минут 00 секунд\n", N, K);
    printf("Идет %d минута суток\n", N * 60 + K + 1);
    printf("До полуночи осталось %d часов и %d минут\n", 23 - N, 60 - K);
    printf("С 8.00 прошло %ld секунд\n", (long)((N - 8) * 3600 + K * 60));
    printf("Текущий час = %.2f суток и текущая минута = %.2f часа\n\n", (float)N / 24.0f, (float)K / 60.0f);

    float n = 4.0f;
    float L = 393.0f;

    printf("Дано:\n%10.0f\n%10.0f\n__________\nОтвет:\n%+010.6f\n\n", n, L, n / L);

    puts("Нажмите Enter для продолжения...");
    getchar();

    return 0;
}