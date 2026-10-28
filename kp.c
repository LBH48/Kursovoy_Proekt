#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>

double Q(double X)
{
    if (X < 25)
    {
        return 3 * (X - 25) + 10;
    }
    else if (X <= 45)
    {
        return 2 * sqrt(X - 25) + 45;
    }
    else
    {
        return (X - 45) * (X - 45) / 4 + 55;
    }
}

int main()
{
    setlocale(LC_ALL, "Russian");

    double X[50], q[50];
    double sum = 0, sred, med;
    double a[20], t;

    for (int i = 0; i < 50; i++)
    {
        printf("Введите температуру от 10 до 70: ");
        scanf("%lf", &X[i]);

        while (X[i] < 10 || X[i] > 70)
        {
            printf("Ошибка. Введите температуру от 10 до 70: ");
            scanf("%lf", &X[i]);
        }

        q[i] = Q(X[i]);

        printf("Q = %.2f", q[i]);

        if (q[i] > 64.32)
            printf(" Превышение UCL");
        else
            printf(" Норма");

        printf("\n");

        if (i < 20)
        {
            a[i] = q[i];
            sum = sum + q[i];
        }
    }

    sred = sum / 20;

    for (int i = 0; i < 19; i++)
    {
        for (int j = 0; j < 19 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }
    }

    med = (a[9] + a[10]) / 2;

    printf("\nСреднее значение: %.2f\n", sred);
    printf("Медиана: %.2f\n", med);

    return 0;
}
