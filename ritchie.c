#include <stdio.h>
#include <ctype.h>
void q1_13()
{
    int j, n, t = 0, num = 0;
    printf("How many words are there\t");
    scanf("%d", &n);
    int c[n][1];
    char s[n][100];
    printf("Enter the words in lowercase\n");
    for (int i = 0; i < n; ++i)
        scanf("%s", s[i]);
    for (int i = 0; i < n; ++i)
    {
        for (j = 0; s[i][j] >= 97 && s[i][j] <= 122; ++j)
            ;
        c[i][0] = j;
        if (num < j)
            num = j;
    }
    printf("The histogram is -\n");
    for (int i = 0; i < n; ++i)
    {
        printf("%s", s[i]);
        for (int k = num; k - c[i][0] > 0; --k)
        {
            printf(" ", k);
        }
        for (; c[t][0] != 0;)
        {
            c[t][0] -= 1;
            printf("|");
        }
        printf("\n");
        ++t;
    }
}
void q1_14()
{
    int c[100];
    char s[100];
    printf("Enter the characters\n");
    scanf("%s", s);
    for (int i = 0; s[i] != '\0'; ++i)
    {
        c[i] = 1;
        for (int j = i + 1; s[j] != '\0'; ++j)
        {
            if (s[i] == s[j])
            {
                for (int k = j; s[k] != '\0'; ++k)
                {
                    s[k] = s[k + 1];
                }
                c[i] += 1; // remember to use this notation and not ++c[i] one
                --j;
            }
        }
    }
    printf("The histogram is -\n");
    for (int i = 0; s[i] != '\0'; ++i)
    {
        printf("%c - ", s[i]); // mark the % identifier used, its not s as we are only displaying a character not a string
        for (; c[i] != 0;)
        {
            printf("|");
            c[i] -= 1;
        }
        printf("\n");
    }
}
void q1_22()
{
    char s[100];
    int n, i;
    printf("Enter the string:");
    gets(s);
    printf("Enter the coloumn\n");
    scanf("%d", &n);
    for (i = n - 1; s[i] != ' '; --i)
        ;
    if (s[i] == ' ')
        s[i] = '\n';
    else
        printf("error");
    puts(s);
}
float q4_2(char s[])
{
    double val1, power1 = 1.0, power2, val2;
    int i, sign;
    for (i = 0; isspace(s[i]); ++i)
        ;
    sign = (s[i] == '-') ? -1.0 : 1.0; /* Note how direct assignment '=' and ? have precedence*/
    if (s[i] == '+' || s[i] == '-')
        ++i;
    for (val1 = 0.0; isdigit(s[i]); ++i)
        val1 = 10.0 * val1 + (s[i] - '0');
    if (s[i] == '.')
    {
        ++i;
        for (power1 = 1.0; isdigit(s[i]); ++i)
        {
            val1 = 10.0 * val1 + (s[i] - '0');
            power1 *= 10.0;
        }
    }
    if (s[i] == 'e')
    {
        ++i;
        if (s[i] == '+')
        {
            ++i;
            for (val2 = 0.0; isdigit(s[i]); ++i)
                val2 = 10.0 * val2 + (s[i] - '0');
            for (power2 = 1.0; val2 > 0; --val2)
            {
                power2 *= 10.0;
            }

            return sign * val1 * power2 / power1;
        }
        else if (s[i] == '-')
        {
            ++i;
            for (val2 = 0.0; isdigit(s[i]); ++i)
                val2 = 10.0 * val2 + (s[i] - '0');
            for (power2 = 1.0; val2 > 0; --val2)
            {
                power2 *= 10.0;
            }

            return (sign * val1) / (power2 * power1);
        }
    }
}
int main()
{
    int i;
    char line[10];
    for (i = 0; i < 5; i++)
    {
        scanf("%c", &line[i]);
    }

    line[i] = '\0';
    float res = q4_2(line);
    printf("%f", res);
}
