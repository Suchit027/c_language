#include <stdio.h>
#include <math.h>
void bintodec()
{
    int a, r, m = 0, s = 0;
    printf("Enter the binary number\t");
    scanf("%d", &a);
    for (; a > 0; a = a / 10)
    {
        r = a % 10;
        s = s + r * pow(2, m);
        m += 1;
    }
    printf("The decimal form is %d", s);
}
void count(){
    int a, r = 0 ;
    printf("Enter the number\t") ;
    scanf("%d", &a) ;
    for(; a > 0 ; a = a/10){
        r = r + 1 ;
    }
    printf("%d", r);
}
int main()
{
    count();
}