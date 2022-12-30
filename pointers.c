#include <stdio.h>
int sum(int *a, int *b)
{
    int sum;
    sum = *a + *b;
    return sum;
    /*}
    int main()
    {
        int s[10], *p = s;
        printf("Enter\n");
        for (int i = 0; i < 10; ++i)
            scanf("%d", &s[i]);             Notice that using pointers to scan is worthless
        printf("%d", sum(&s[1], &s[0]));*/
}
int swap(int *s)
{
    int a, b;
    printf("Enter index\n");
    scanf("%d%d", &a, &b);
    int temp;
    temp = *(s + a);
    *(s + a) = *(s + b);
    *(s + b) = temp;
/*}
 int main(){
     int c[5];
     printf("Enter array\n");
     for(int i = 0; i < 5; ++i)
     scanf("%d", &c[i]);
     swap(c);                   Don't use & here, c is already base address
                                Even if you use a different pointer variable just use p and not &p
    
     printf("new\n");
     for(int i = 0; i < 5; ++i)
     printf("%d", c[i]);
 */}
int roweleswap(int (*s)[3]) // important
{
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3 / 2; ++j)
        {
            int temp;
            temp = *(*(s + j) + i);
            *(*(s + j) + i) = *(*(s + (3 / 2) - j) + i);
            *(*(s + (3 / 2) - j) + i) = temp;
        }
    }
}
int main()
{
    int s[3][3];
    printf("Enter\n");
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
            scanf("%d", &s[i][j]);
    }
    roweleswap(s);      // important
    printf("New\n");
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
            printf("%d", s[i][j]);
    }
}