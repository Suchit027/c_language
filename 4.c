#include<stdio.h>
void array1(){
    int s[100], i, j;
    printf("Enter the array\n");
    for ( i = 0; i < 5; i++){
    scanf("%d",&s[i]);
    }
    for(int j = 0 ; j<5 ; j++){
        printf("%d", s[j]);
    }
}
int main (){
    array1();
}