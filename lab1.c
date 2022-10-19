#include <stdio.h>
#include <math.h>
void question1()
{
    int num1, num2, num3;
    printf("Enter the first number\n");
    scanf("%d", &num1);
    printf("Enter the second number\n");
    scanf("%d", &num2);
    num3 = num1 + num2;
    printf("The sum of the numbers is %d", num3);
}
void question2()
{
    int num1, num2, sum, product, diff, division;
    printf("Enter the first number\n");
    scanf("%d", &num1);
    printf("Enter the second number\n");
    scanf("%d", &num2);
    sum = num1 + num2;
    product = num1 * num2;
    division = num1 / num2;
    printf("The sum is %d\nThe product is %d\nThe quotient is %d", sum, product, division);
}
void question3()
{
    char a;
    printf("Enter the character here:\n");
    scanf("%c", &a);
    printf("The ASCII value of the character %c = %d", a, a);
}
void question4()
{
    int a;
    float b;
    double c;
    long int d;
    char e;
    long double f;
    printf("The size of int is %d, float is %d, double is %d, long int is %d, char is %d, long double is %d", sizeof(a), sizeof(b), sizeof(c), sizeof(d), sizeof(e), sizeof(f));
}
void question5()
{
    int p, n, s_i;
    float c_i, t, r;
    printf("Enter the principle\n");
    scanf("%d", &p);
    printf("Enter the number of times the interest has to be applied in a time period\n");
    scanf("%d", &n);
    printf("Enter the time period\n");
    scanf("%f", &t);
    printf("Enter the rate\n");
    scanf("%f", &r);
    s_i = (p * t * (r / 100) / 100);
    printf("The simple interest is %d\n", s_i);
    c_i = p * (pow((1 + (r / 100) / n), n * t));
    printf("The compound interest is %f", c_i);
}
void question6(){
    int r;
    float vol, sur;
    printf("Enter the radius of the sphere here\n");
    scanf("%d", &r);
    vol = (4.0/3.0)*3.14*r*r*r;
    sur = 4.0*3.14*r*r ; 
    printf("The volume is %f and surface area is %f", vol, sur);
}
int main()
{
    question4();
}