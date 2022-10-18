#include <stdio.h>
#include <math.h>
void question3()
{
    int n;
    float x;
    printf("Enter the angle in radians\t");
    scanf("%f", &x);
    printf("Enter the limit\t");
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i)
    {
        int p, k, f = 1;
        p = 3 + ((i - 1) * 2);
        k = p;
        for (; k >= 1; --k)
        {
            f = f * k;
        }
        x = x + (((pow(-1,i))*(pow(x,p)))/f) ;
    }
    printf("The sinx is %.2f", x);
}
void question4(){
int n, sum=0 ;
printf("Enter the number\t");
scanf("%d", &n);
for(int i = 1; i<n ; ++i){
    if(n%i == 0)
    sum = sum + i ;
}
if (sum == n)
printf("The number is perfect");
else
printf("The number is not a perfect number");
}
void addquestion1(){
    int num ;
    printf("Enter the number");
    scanf("%d", &num);
    for( ; num >=10 ; ){
        int i = 0;
        for (; num > 0; num /= 10){
            i = i + (num % 10) ;
        }
        num = i ;
        printf("%d\n", num);
    }
}
int main()
{
    addquestion1();
}