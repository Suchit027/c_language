#include<stdio.h>
#define max(a,b) (a+b)
int main(){
    int b = 0,a = 11;
    printf("%d", max(a++, b++));
}