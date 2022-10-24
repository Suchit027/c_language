#include <stdio.h>
void question1()
{
    int s[100], n, max = s[0], min = s[0];
    printf("Enter the size of the array");
    scanf("%d", &n);
    printf("Enter the array");
    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &s[i]);
    }
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
int main()
{
    question1();
}