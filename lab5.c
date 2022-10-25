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
    printf("Enter a for ascending and d for descending order\n");
    scanf("%c", &order);
    printf("Enter the size of the array\n");
    scanf("%d", &n);
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
int main()
{
    question2();
}