#include <stdio.h>
#include <locale.h>
int getfloat(float* S);
int getint(long long int* S);
void task1(float);
float k;
void task2(long long int);
long long int x;
void task3(float, float, float);
float a, b;
const float c;
int main() {
    setlocale(LC_ALL, "RUS");
    unsigned int n = 0;
    printf("Select task(1,2,3): ");
    scanf_s("%i", &n);
    switch (n) {
    case 1:
        printf("Task 1.\n");
        task1(k);
        break;
    case 2:
        printf("Task 2.\n");
        task2(x);
        break;
    case 3:
        printf("Task 3.\n");
        task3(a, b, c);
        break;
    default:
        printf("Error!\n");
    }
    return 0;
}
void task1(float a) {
    int i;
    float m = 2;
    float mas[100];
    mas[0] = 1;
    do
    {
        printf("Enter a number from 1 to 3: ");
        rewind(stdin);
        scanf_s("%f", &a);
    } while (getfloat(&a) != 1 || a < 1 || a>3);
    for (i = 0; mas[i] - a <= 0.001; i++) {
        mas[i + 1] = mas[i] + 1 / m;
        m++;
    }
    printf("The first number in the series that is greater than %.3lf - %.3lf", a, mas[i]);
}
void task2(long long int b) {
    long long int i;
    long long int sum = 0;
    long long int mas[1000];
    mas[0] = 1;
    do
    {
        printf("Enter number n: ");
        rewind(stdin);
        scanf_s("%lld", &b);
    } while (getint(&b) != 1 || b < 0);
    for (i = 0; i < b; i++) {
        mas[i + 1] = mas[i] * (i + 2);
        sum = sum + mas[i];
    }
    printf("The sum of the sequence is: %lld", sum); //sequence - последовательность
}
void task3(float a, float b, float c) {
    float c1, c2;
    int g = 1;
    int sum = 0;
    int t = 0;
    int h = 0;
    int p = 0;
    int v = 0;
    int p1 = 0;
    do
    {
        printf("Enter side a: ");
        rewind(stdin);
        scanf_s("%f", &a);
    } while (getfloat(&a) != 1 || a < 0);
    do
    {
        printf("Enter side b: ");
        rewind(stdin);
        scanf_s("%f", &b);
    } while (getfloat(&b) != 1 || b < 0);
    do
    {
        printf("Enter the side of the square: ");
        rewind(stdin);
        scanf_s("%f", &c);
    } while (getfloat(&c) != 1 || c < 0);
    c1 = c;
    c2 = c;
    while (c1 - a <= 0.001 && c1 - b <= 0.001) {
        t++;
        c1 = c1 + c;
        sum = sum + g;
        g = g + 2;
    }
    while (h < t) {
        b = b - c;
        a = a - c;
        h++;
    }
    if (b - a > 0) {
        while (b - c2 >= 0) {
            c2 = c2 + c;
            p++;
        }
    }
    else if (a - b > 0) {
        while (a - c2 >= 0) {
            c2 = c2 + c;
            p++;
        }
    }
    while (v < t) {
        p1 = p1 + p;
        v++;
    }
    printf("The number of the squares that will fit in the rectangle - %d", sum + p1);
}
int getfloat(float* S)
{
    char temp;
    while ((temp = getchar()) != '\n')
    {
        
        if ((temp > '9') || (temp < '0') || (temp == '.'))
        {
            return -2;
            break;
        }
    }
    return 1;
}
int getint(long long int* S) {
    char temp;
    while ((temp = getchar()) != '\n')
    {
        if ((temp > 57) || (temp < 48) || temp == '.')
        {
            return -2;
            break;
        }
    }
    return 1;
}
