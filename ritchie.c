#include <stdio.h>
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
    for (i = n-1; s[i] != ' '; --i)
        ;
    if (s[i] == ' ')
        s[i] = '\n';
    else
        printf("error");
    puts(s);
}
int main()
{
    q1_13();
}