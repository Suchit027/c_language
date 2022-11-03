#include <stdio.h>
void question1()
{
    int s[100], n;
    printf("Enter the size of the array\n");
    scanf("%d", &n);
    printf("Enter the array\n");
    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &s[i]);
    }
    int max = s[0], min = s[0];
    for (int i = 0; i < n; ++i)
    {
        if (s[i] > max)
        {
            max = s[i];
        }
        if (s[i] < min)
        {
            min = s[i];
        }
    }
    printf("max is %d min is %d", max, min);
}
void question2()
{
    int s[100], n;
    char order;
    printf("Enter a for ascending order and d for descending order\n");
    scanf("%c", &order);
    printf("Enter the size of the array\n");
    scanf("%d", &n);
    printf("Enter the original array\n");
    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &s[i]);
    }
    switch (order)
    {
    case 'd':
        for (int i = 0; i < n-1; ++i)
        {
            for (int j = 0; j < (n - i - 1); ++j)
            {
                if (s[j] < s[j + 1])
                {
                    int temp;
                    temp = s[j];
                    s[j] = s[j + 1];
                    s[j + 1] = temp;
                }
            }
        }
        break;
    case 'a':
        for (int j = 0; j < n-1; ++j)
        {
            for (int i = 0; i < (n - j - 1); ++i)
            {
                if (s[i] > s[i + 1])
                {
                    int temp;
                    temp = s[i];
                    s[i] = s[i + 1];
                    s[i + 1] = temp;
                }
            }
        }
        break;
    default:
        printf("error");
        break;
    }
    for (int i = 0; i < n; ++i)
    {
        printf("%d", s[i]);
    }
}
void question3()
{
    int e, p, s[100], n, c[100];
    printf("Enter the element, its position and order of original array respectively");
    scanf("%d %d %d", &e, &p, &n);
    printf("Enter the array");
    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &s[i]);
    }
    for (int i = 0; i < p - 1; ++i)
    {
        c[i] = s[i];
    }
    c[p - 1] = e;
    for (int i = p; i < n + 1; ++i)
    {
        c[i] = s[i - 1];
    }
    for (int i = 0; i < n + 1; ++i)
    {
        printf("%d", c[i]);
    }
}
void question4()
{
    int s[100], e, n, c[100], count = 0;
    printf("Enter the order of array and element");
    scanf("%d%d", &n, &e);
    printf("Enter the array");
    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &s[i]);
    }
    for (int i = 0, j = 0; i < n; ++i)
    {
        if (s[i] == e)
        {
            ++count;
        }
        if (s[i] != e)
        {
            c[j] = s[i];
            ++j;
        }
    }
    for (int i = 0; i < (n - count); ++i)
    {
        printf("%d", c[i]);
    }
}
int main()
{
    question2();
}