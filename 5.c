#include <stdio.h>
void maxminarr()
{
    int s[100];
    printf("Enter the array");
    for (int i = 0; i < 10; ++i)
    {
        scanf("%d", &s[i]);
    }
    int max1 = 1, max2;
    for (int i = 0; i < 10; ++i)
    {
        if (s[i] > max1)
        {
            max2 = max1;
            max1 = s[i];
        }
        s[i] < max1 ? s[i] > max2 ? max2 = s[i] : 1 : 1;
    }
    printf("the largest is %d, second largest is %d", max1, max2);
}
void sum()
{
    int s[100];
    printf("Enter the array");
    int sum_even = 0, sum_odd = 0;
    for (int i = 0; i < 10; ++i)
    {
        scanf("%d", &s[i]);
        if (s[i] % 2 == 0)
            sum_even = sum_even + s[i];
        else
            sum_odd = sum_odd + s[i];
    }
    printf("The sum of even numbers is %d and odd is %d", sum_even, sum_odd);
}
void sortassending()
{
    int s[100];
    printf("Enter the array\n");
    for (int i = 0; i < 10; ++i)
    {
        scanf("%d", &s[i]);
    }
    for (int i = 0; i < 10; ++i)
    {
        for (int j = i + 1; j < 10; ++j)
        {
            if (s[i] > s[j])
            {
                int temp;
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
    for (int i = 0; i < 10; ++i)
    {
        printf("%d\t", s[i]);
    }
}
void sortdescending()
{
    int s[100];
    printf("Enter the array\n");
    for (int i = 0; i < 10; ++i)
    {
        scanf("%d", &s[i]);
    }
    for (int i = 0; i < 10; ++i)
    {
        for (int j = i + 1; j < 10; ++j)
        {
            if (s[i] < s[j])
            {
                int temp;
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
    for (int i = 0; i < 10; ++i)
    {
        printf("%d\t", s[i]);
    }
}
int main()
{
    sortdescending();
}