#include <stdio.h>
int fact(int n)
{
    int f;
    if (n == 1)
        return 1;
    else
        f = n * fact(n - 1);
    return f;
}
int sort(int l[], int n){
if(n == 1)
return 0;
else{
    for(int i = 0; i < n; ++i){
        if(l[n-1] < l[i]){
            int temp;
            temp = l[n-1];
            l[n-1] = l[i];
            l[i] = temp;
        }
    }
    sort(l,n-1);
}
}
int main()
{
    int s[10];
    printf("Enter the array\n");
    for(int i = 0; i < 5; ++i)
    scanf("%d", &s[i]);
    sort(s,5);
    for(int i = 0; i < 5; ++i)
    printf("%d", s[i]);
    
}