#include <stdio.h>
void inverse()
{
    float s[3][3], c[3][3];
    printf("Enter the matrix row 1\n");
    for (int i = 0; i < 3; ++i)
        scanf("%f", &s[0][i]);
    printf("Enter the matrix row 2\n");
    for (int i = 0; i < 3; ++i)
        scanf("%f", &s[1][i]);
    printf("Enter the matrix row 3\n");
    for (int i = 0; i < 3; ++i)
        scanf("%f", &s[2][i]);
    c[0][0] = c[1][1] = c[2][2] = 1;
    c[0][1] = c[0][2] = c[1][0] = c[1][2] = c[2][0] = c[2][1] = 0;
    float temp;
    temp = s[0][0];
    for (int i = 0; i < 3; ++i)
    {
        s[0][i] = s[0][i] / temp;
        c[0][i] = c[0][i] / temp;
    }
    temp = s[1][0];
    for (int i = 0; i < 3; ++i)
    {
        s[1][i] = s[1][i] - (temp * s[0][i]);
        c[1][i] = c[1][i] - (temp * c[0][i]);
    }
    temp = s[2][0];
    for (int i = 0; i < 3; ++i)
    {
        s[2][i] = s[2][i] - (temp * s[0][i]);
        c[2][i] = c[2][i] - (temp * c[0][i]);
    }
    temp = s[1][1];
    for (int i = 0; i < 3; ++i)
    {
        s[1][i] = s[1][i] / temp;
        c[1][i] = c[1][i] / temp;
    }
    temp = s[2][1];
    for (int i = 0; i < 3; ++i)
    {
        s[2][i] = s[2][i] - (temp * s[1][i]);
        c[2][i] = c[2][i] - (temp * c[1][i]);
    }
    temp = s[2][2];
    for (int i = 0; i < 3; ++i)
    {
        s[2][i] = s[2][i] / temp;
        c[2][i] = c[2][i] / temp;
    }
    temp = s[1][2];
    for (int i = 0; i < 3; ++i)
    {
        s[1][i] = s[1][i] - (temp * s[2][i]);
        c[1][i] = c[1][i] - (temp * c[2][i]);
    }
    temp = s[0][2];
    for (int i = 0; i < 3; ++i)
    {
        s[0][i] = s[0][i] - (temp * s[2][i]);
        c[0][i] = c[0][i] - (temp * c[2][i]);
    }
    temp = s[0][1];
    for (int i = 0; i < 3; ++i)
    {
        s[0][i] = s[0][i] - (temp * s[1][i]);
        c[0][i] = c[0][i] - (temp * c[1][i]);
    }
    for(int i= 0; i<3; ++i){
        for(int j = 0; j <3; ++j){
            printf("%f\t", c[i][j]);
        }
        printf("\n");
    }
}
    int main()
    {
        inverse();
    }