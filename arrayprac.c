#include <stdio.h>
void size()
{
    int s[] = {1, 2, 3, 4, 5, 6};
    for (int i = 0; i < 6; ++i)
    {
        printf("%d", s[i]);
    }
}
void reverse()
{
    int n, s[100];
    printf("Enter the order of the array\t");
    scanf("%d", &n);
    printf("Enter the array");
    for (int i = 0; i < n; ++i)
        scanf("%d", &s[i]);
    for (int i = n - 1; i >= 0; --i)
    {
        printf("%d", s[i]);
    }
}
void average()
{
    int n, s[100], sum = 0;
    float avg;
    printf("Enter the order of the array\t");
    scanf("%d", &n);
    printf("Enter the array\n");
    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &s[i]);
        sum = sum + s[i];
    }
    avg = sum / n;
    printf("The average is %f", avg);
}
void sec_lar()
{
    /*It will be difficult to find second largest with directly
    comparing the elements with some element of the array or 1 or 0
    . Its better to sort it first and then find.*/
    int n, s[100];
    printf("Enter the order of the array\t");
    scanf("%d", &n);
    printf("Enter the array\n");
    for (int i = 0; i < n; ++i)
        scanf("%d", &s[i]);
    for (int i = 0; i < n - 1; ++i)
    {
        for (int j = 0; j < n - 1 - i; ++j)
        {
            if (s[j] > s[j + 1])
            {
                int temp;
                temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
            }
        }
    }
    printf("The second largest element is %d", s[n - 2]);
}
void union_and_intersection()
{
    int s[100], c[100], n, t, count = 0, i[100], count1 = 0, u[100];
    printf("Enter the order of the first and second array");
    scanf("%d%d", &n, &t);
    printf("Enter the first array");
    for (int i = 0; i < n; ++i)
        scanf("%d", &s[i]);
    printf("Enter the second array");
    for (int i = 0; i < t; ++i)
        scanf("%d", &c[i]);
    for (int k = 0; k < n; ++k)
    {
        for (int j = 0; j < t; ++j)
        {
            if (s[k] == c[j])
            {
                i[count] = s[k];
                ++count;
                break;
            }
        }
    }
    printf("The intersecton is ");
    for (int k = 0; k < count; ++k)
        printf("%d", i[k]);
    printf("\n");
    for (int k = 0; k < t; ++k)
    {
        int try = 0;
        for (int j = 0; j < count; ++j)
        {
            if (c[k] != i[j])
            {
                try = 1;
            }
            else
            {
                try = 0;
                break;
            }
        }
        if (try == 1)
        {
            u[count1] = c[k];
            ++count1;
        }
    }
    printf("The union is ");
    for (int i = 0; i < n; ++i)
        printf("%d", s[i]);
    for (int i = 0; i < count1; ++i)
        printf("%d", u[i]);
}
int main()
{
    union_and_intersection();
}