#include <stdio.h>
#include <math.h>
void question1()
{
    int num;
    printf("Enter the number here\t");
    scanf("%d", &num);
    if (num % 2 == 0)
    {
        printf("The number is even");
    }
    else
        printf("The number is odd");
}
void question2()
{
    int num1, num2, num3;
    printf("Enter the first number\n");
    scanf("%d", &num1);
    printf("Enter the second and third number\n");
    scanf("%d %d", &num2, &num3);
    if (num1 / num2 > 1)
    {
        if (num1 / num3 > 1)
            printf("The largest number is %d", num1);
        else
            printf("The largest number is %d", num3);
    }
    else
    {
        if (num2 / num3 > 1)
            printf("The largest number is %d", num2);
        else
            printf("The largest number is %d", num3);
    }
}
void question3()
{
    int a, b, c, d;
    float ans1, ans2, re, im;
    printf("Enter a\n");
    scanf("%d", &a);
    printf("Enter b\n");
    scanf("%d", &b);
    printf("Enter c\n");
    scanf("%d", &c);
    d = (b * b) - (4 * a * c);
    re = (-b) / (2 * a);
    im = (sqrt(-d)) / (2 * a);
    switch (d >= 0)
    {
    case 1:
        ans1 = ((-b) + sqrt(d)) / (2 * a);
        ans2 = ((-b) - sqrt(d)) / (2 * a);
        printf("The roots are %f and %f", ans1, ans2);
        break;

    case 0:
        printf("The roots are %f+%fi and %f-%fi", re, im, re, im);
        break;
    }
}
void question4()
{
    int num1, num2, num3;
    printf("Enter the first number\n");
    scanf("%d", &num1);
    printf("Enter the second number\n");
    scanf("%d", &num2);
    printf("Enter the third number\n");
    scanf("%d", &num3);
    (num1 < num2 && num1 < num3) ? printf("The smallest number is %d", num1) : (num2 < num3) ? printf("The smallest number is %d", num2)
                                                                                             : printf("The smallest number is %d", num3);
}
void addquestion1()
{
    int num;
    printf("Enter the number\n");
    scanf("%d", &num);
    if (num == 0)
        printf("The number is 0");
    else if (num > 0)
        printf("The number is positive");
    else if (num < 0)
        printf("The number is negative");
}
void addquestion2()
{
    int num;
    printf("Enter the number of days the member is late\n");
    scanf("%d", &num);
    if (num == 5)
        printf("The fine is Rs. 0.5");
    else if (num >= 6 && num <= 10)
        printf("The fine is Rs. 1.0");
    else if (num > 10 && num <= 30)
        printf("The fine is Rs. 5.0");
    else if (num > 30)
        printf("The fine is Rs. 10.0");
    else
        printf("There is no fine");
}
void addquestion3()
{
    int x, y;
    printf("Enter x\n");
    scanf("%d", &x);
    if (x == 0)
        printf("Y = 0");
    else if (x > 0)
        printf("Y = 1");
    else
        printf("Y = -1");
}
int main()
{
    question4();
}