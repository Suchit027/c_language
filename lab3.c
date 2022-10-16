#include <stdio.h>
#include <math.h>
void question1()
{
    int num, rem, new = 0, ori;
    printf("Enter the number\t");
    scanf("%d", &num);
    ori = num;
    while (num != 0)
    {
        rem = num % 10;
        new = 10 * new + rem;
        num = num / 10;
    }
    printf("The new number is %d\n", new);
    if (ori == new)
        printf("The number is a palindrome");
    else
        printf("The number is not a palindrome");
}
void question2()
{
    int a, b;
    printf("Enter the starting limit\n");
    scanf("%d", &a);
    printf("Enter the ending limit\n");
    scanf("%d", &b);
    while (a <= b)
    {
        int j = 2;
        int prime = 1;
        while (j < a)
        {
            if (a % j == 0)
            {
                prime = 0;
                break;
            }
            j = j + 1;
        }
        if (prime == 1)
        {
            printf("%d", a);
        }
        a = a + 1;
    }
}
void question3()
{
    int a, i = 0, n;
    printf("Enter the number\t");
    scanf("%d", &a);
    while (a != 0)
    {
        n = a % 10;
        i = i + pow(n, 3);
        a = a / 10;
    }
    printf("The sum of cubes is %d\n", i);
    if (a == i)
    {
        printf("The number is armstrong number");
    }
    else
        printf("The number is not an armstrong number");
}
void question4()
{
    int a, nor, p, c, prime;
    printf("Enter the number \n");
    do
    {
        scanf("%d", &a);
        int i = 2;
        prime = 1;
        do
        {
            if (a % i == 0)
            {
                if (a == 2)
                {
                    prime = 0;
                    ++p;
                    break;
                }
                else
                {
                    prime = 0;
                    ++c;
                    break;
                }
            }
            else if (a == 1)
            {
                prime = 0;
                ++nor;
                break;
            }
            else if (a == (-1))
            {
                prime = 0;
                break;
            }

            i += 1;
        } while (i < a);
        if (prime == 1)
            ++p;
    } while (a != (-1));
    printf("The number of prime is %d. The number of composite is %d and one is %d", p, c, nor);
}
void addquestion1()
{
    int a, i, n = 0, p;
    printf("Enter the number\t");
    scanf("%d", &a);
    p = a ;
    for (; p > 0; p = p / 10)
    {
        i = p % 10;
        int m = 1;
        for (int j = 1; j <= i; j=j+1)
        {
            m = m * j;
        }
        n = n + m;
    }
    printf("The sum is %d\n", n);
    if (a == n)
        printf("The number is a strong number");
}
int main()
{
    question4();
}