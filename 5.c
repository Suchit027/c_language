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
    int main()
    {
        maxminarr();
    }