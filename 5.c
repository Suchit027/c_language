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
<<<<<<< HEAD
void bubbleshort(){
    int s[100], n;
    printf("Enter the order");
    scanf("%d", &n);
    printf("Enter the array");
    for(int i = 0; i < n ; ++i)
    scanf("%d", &s[i]);
    for(int i = 0; i < n-1; ++i){
        int temp1, temp2;
        if (s[i] > s[i+1]){
            temp1 = s[i];
            s[i] = s[i+1];
            s[i+1] = temp1;
        }
        if(s[n - i -1] > s[n - i - 2]){
            temp2 = s[n - i - 1];
            s[n - i -1] = s[n - i -2];
            s[n - i -2] = temp2;
        }
    }
    for(int i = 0; i < n ; ++i)
    printf("%d", s[i]);
=======
void selectionsort(){
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
>>>>>>> 7550cb4 (array practise)
}
int main()
{
    bubbleshort();
}