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
    char order  = '\0' ;
    printf("Enter the size of the array\n");
    scanf("%d", &n);
    printf("Enter a for ascending and d for descending order\n");
    scanf(" %c", &order);
    printf("Enter the array\n");
    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &s[i]);
    }
    switch (order)
    {
    case 'a':
        for (int i = 0; i < n; ++i)
        {
            for (int j = i; j < n; ++j)
            {
                int temp;
                if (s[i] > s[j])
                {
                    temp = s[i];
                    s[i] = s[j];
                    s[j] = temp;
                }
            }
        }
        break;
    case 'd':
        for (int i = 0; i < n; ++i)
        {
            for (int j = i; j < n; ++j)
            {
                int temp;
                if (s[i] < s[j])
                {
                    temp = s[i];
                    s[i] = s[j];
                    s[j] = temp;
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
    int e, p, s[100], n;
    printf("Enter the element and the position\n");
    scanf("%d %d", &e, &p);
    printf("Enter the length of original array\n");
    scanf("%d", &n);
    printf("Enter the original array\n");
    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &s[i]);
    }
    s[p - 1] = e;
    for (int i = 0; i < n; ++i)
    {
        printf("%d", s[i]);
    }
}
void question4()
{
    int p, s[100], n;
    printf("Enter the position\n");
    scanf("%d", &p);
    printf("Enter the order of the array\n");
    scanf("%d", &n);
    printf("Enter the array\n");
    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &s[i]);
    }
    for (int i = p - 1; i < n; ++i)
    {
        s[i] = s[i + 1];
    }
    for (int i = 0; i < n - 1; ++i)
    {
        printf("%d", s[i]);
    }
}
int main()
{
    question2();
}