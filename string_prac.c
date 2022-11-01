#include <stdio.h>
#include <string.h>
void stringinitialze()
{
    char s[] = "hello";
    printf("%s", s);
    int c[100];
    printf("\nEnter the string");
    // Notice that it doesn't take input after space
    scanf("%s", c);
    printf("%s", c);
}
void getput()
{
    const int max = 100;
    char s[max];
    printf("Enter the string\n");
    gets(s);
    printf("The entered string is\n");
    puts(s);
}
void stringlength()
{
    const int max = 100;
    int count = 0;
    char s[max];
    printf("Enter the string");
    gets(s);
    for (int i = 0;; ++i)
    {
        if (s[i] != '\0')
            ++count;
        else
            break;
    }
    printf("%d", count);
}
void wordcount()
{
    const int max = 100;
    char s[max];
    int i = 0, count = 0;
    printf("Enter the string");
    gets(s);
    while (i < strlen(s))
    {
        if (s[i] == ' ' && s[i + 1] != ' ')
            ++count;
        ++i;
    }

    ++count;
    printf("Number of words are %d", count);
}
void read_multiple()
{
    char s[100];
    printf("Enter the strings");
    scanf("%[^#]", s);
    puts(s);
}
void compare()
{
    char s[] = "Hello", c[] = "Hi";
    printf("%d", strcmp(s, c));
}
void substring_long()
{
    char s[100], c[100];
    printf("Enter the main string\n");
    gets(s);
    printf("Enter the substring\n");
    scanf("%s", c);
    int k, count = 0, j;
    printf("The positions of substrings are\t");
    for (int i = 0; s[i] != '\0'; ++i)
    {
        for ( j = i, k = 0; c[k] != '\0' && s[j] == c[k]; ++j, ++k)
            ;
        if (k > 0 && c[k] == '\0'){
            ++count;
            printf("%d\t", i);
        }
    }
    printf("\nThe occurances of substring are %d", count);
}
int main()
{
    substring_long();
}