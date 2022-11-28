#include <stdio.h>
float fact(int i)
{
    float f = 1;
    for (; i > 0; --i)
    {
        f = f * i;
    }
    return f;
}
int largest(int c[], int n){
        int temp;
        temp = c[0];
        for(int i = 0; i < n; ++i){
        if (temp < c[i])
        temp = c[i];
    }
    return temp;
}
int main()
{
    int n, a;
    printf("Enter the number of elements\n");
    scanf("%d", &n);
    int s[n];
    printf("Enter the numbers\n");
    for(int i = 0; i < n ;++i)
    scanf("%d", &s[i]);
    printf("%d is max", largest(s,n));
}
