#include <stdio.h>
#include <string.h>
void testfloat()
{
    float a, c;
    int b;
    a = 12.1;
    b = 0;
    while (b <= a)
    {
        c = a * b;
        printf("%f\t%d\t%.2f\n", a, b, c);
        b = b + 1;
    }
}
void printtest()
{
    int a,b;
    a = 4;
    b = a/3;
    printf("%d ", b);
}
void temp()
{
    printf("this temp table\n");
    float fahr, celsius;
    int lower, upper, step;
    lower = 0;
    upper = 300;
    step = 20;
    fahr = lower;
    while (fahr <= upper)
    {
        celsius = (5.0 / 9.0) * (fahr - 32);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}
void fortest()
{
    int fahr;
    for (fahr = 0; fahr <= 300; fahr = fahr + 20)
        printf("%d\t%d\n", fahr, 5 * (fahr - 32) / 9);
}
void forex()
{
    int fahr, c;
    for (fahr = 300; fahr >= 0; fahr = fahr - 20)
        printf("%d\t%d\n", fahr, 5 * (fahr - 32) / 9);
}
void getput()
{
    long nc;
    nc = 0;
    while (getchar() != '\n')
        ++nc;
    printf("%ld\n", nc);
}
void printEOF()
{
    int c;
    c = EOF;
    printf("%d", c);
}
void charactercount()
{
    long c;
    c = 0;
    while (getchar() != '\0')
    {
        ++c;
        printf("%ld\n", c);
    }
}
void charactercounting()
{
    short a;
    a = 0;
    while (getchar() != '\0')
    {
        ++a;
        printf("%d", a);
    }
}
void newlinecount()
{
    int a, b;
    b = 0;
    while ((a = getchar()) != EOF)
        if (a == '\n')
            ++b;
    printf("%d\n", b);
}
void tabcount()
{
    int a, b;
    b = 0;
    while ((a = getchar()) != EOF)
        if (a == '\t')
            ++b;
    printf("The number of tabs are %d", b);
}
void linewordcharactercount()
{
    int a, nl, nw, nc;
    nl = 0;
    while ((a = getchar()) != EOF)
    {
        if (a == '\n')
            ++nl;
        if (a == ' ' | a == '\t' | a == '\n')
            ++nw;
        else if (a != ' ' | a != '\t' | a != '\n')
            ++nc;
    }
    printf("Number of lines are %d\n Number of characters are %d\n Number of words are %d", nl, nc, nw);
}
int strlength(char s[])
{
    int i = 0;
    while (s[i] != '\0')
        ++i;
    return i;
}
int main()
{

   printtest();
}