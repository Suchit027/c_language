#include <stdio.h>
#include <string.h>
void question1()
{
    const int max = 100;
    char s[max];
    int i = 0, count = 0;
    printf("Enter the string\n");
    gets(s);
    while (s[i] != '\0')
    {
        if (s[i] == ' ' && s[i + 1] != ' ')
            ++count;
        ++i;
    }

    ++count;
    printf("Number of words are %d", count);
}
void question2()
{
    char s[100];
    printf("Enter the string\n");
    gets(s);
    for (int i = 0; s[i] != '\0'; ++i)
    {
        if (s[i] >= 65 && s[i] <= 90)
        {
            s[i] = s[i] + 32;
        }
        else if (s[i] >= 97 && s[i] <= 122)
        {
            s[i] = s[i] - 32;
        }
    }
    puts(s);
}
void question3()
{
    char s[100], c[100];
    int i, flag;
    printf("Enter the string\n");
    gets(s);
    for (i = 0; s[i] != '\0'; ++i)
        ;
    --i;
    for (int j = 0; i >= 0; --i, ++j)
    {
        c[j] = s[i];
    }
    for (int t = 0, k = 0; s[t] != '\0'; ++t, ++k)
    {
        if (s[t] == c[k])
            flag = 1;
        else
            flag = 0;
    }
    if (flag == 1)
    {
        printf("The string is a palindrome");
    }
    else if (flag == 0)
    {
        printf("The string is not a palindrome");
    }
}
void question4()
{
    int n;
    char s[100][100];
    printf("How many names are there\n");
    scanf("%d", &n);
    printf("Enter the strings");
    for (int i = 0; i < n; i++)
    {
        scanf("%s", s[i]); //important
    }
    for (int i = 0; i < n - 1; ++i)
    {
        for (int j = i; j < n; ++j)
        {
            char temp[100];
            if (strcmp(s[i], s[j]) > 0)
            {
                strcpy(temp, s[i]);
                strcpy(s[i], s[j]);
                strcpy(s[j], temp);
            }
        }
    }
    printf("The sorted list is \n");
    for (int i = 0; i < n; ++i)
    {
        puts(s[i]);
    }
}
void question5()
{
    char s[100], w[100];
    int i, k, j;
    printf("Enter the original string");
    gets(s);
    printf("Enter the word to be deleted");
    scanf("%s", w);
    for (i = 0; s[i] != '\0'; ++i)
    {
        for (j = i, k = 0; w[k] != '\0' && s[j] == w[k]; ++j, ++k)
            ;
        if (k > 0 && w[k] == '\0')
        {
            for (int p = i-1, m = j; s[m-1] != '\0'; ++p, ++m)// notice the space that is considered and the conditions checks for null character at position wanted
            {
                s[p] = s[m];
            }
        }
    }
    puts(s);
}
int main()
{
    question4();
}