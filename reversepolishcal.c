#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define MAXOP 100
#define NUMBER 0
#define MAXVAL 100
double val[MAXVAL];
int sp = 0;
int getop(char s[])
{
    int i, c;
    while ((s[0] = c = getch()) == ' ' || c == '\t')
        ;
    s[1] = '\0';
    if (!isdigit(c) && c != '.')
        return c;
    i = 0;
    if (isdigit(c))
        while (isdigit(s[++i] = c = getch()))
            ;
    if (c == '.')
        while (isdigit(s[++i] = c = getch()))
            ;
    s[i] = '\0';
    return NUMBER;
}
void push(double f)
{
    if (sp < MAXVAL)
        val[sp++] = f;
    else
        printf("error: stack full can't push %g\n", f);
}
double pop(void)
{
    if (sp > 0)
        return val[--sp];
    else
        printf("error:stack empty\n");
    return 0.0;
}
int main()
{
    int type;
    double op2;
    char s[MAXOP];
    while ((type = getop(s)) != EOF)
    {
        switch (type)
        {
        case NUMBER:
            push(atof(s));
            break;
        case '+':
            push(pop() + pop());
            break;
        case '-':
            push(pop() - pop());
            break;
        case '\n':
            printf("\t%g\n", pop());
            break;
        default:
            printf("error:unkown command %s\n", s);
            break;
        }
    }
}
