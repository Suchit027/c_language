#include <stdio.h>
void printonewordperline()
{
    char c;
    printf("Enter the text here\n");
    while ((c = getchar()) != '\n')
    {
        printf("%c\n", c);
    }
}
void numberofoccurancesofdigit()
{
    int nwhite, nother, ndigit[10];
    nwhite = nother = 0;
    int i, c;
    for (i = 0; i < 10; ++i)
        ndigit[i] = 0;
    while ((c = getchar()) != '\n')
    {
        if (c >= '0' && c <= '9')
            ++ndigit[c - '0'];
        if (c == ' ' || c == '\t')
            ++nwhite;
        else
            ++nother;
    }
    for (i = 0; i < 10; ++i)
        printf("%d", ndigit[i]);
    printf("white spaces = %d other spaces = %d", nwhite, nother);
}
float ftocfunction(float f)
{
    float c;
    c = (5.0 / 9.0) * (f - 32.0);
    return c;
}
int main()
{
    float i;
    for (i = 0.0; i <= 300.0; i = i + 10.0)
    printf("%f\t%f\n", i, ftocfunction(i));
}