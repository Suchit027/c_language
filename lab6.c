#include <stdio.h>
#include <math.h>
void question1()
{
    int s[100][100], m, n, flag;
    printf("Enter the rows and columns of the matrix respectively\n");
    scanf("%d%d", &m, &n);
    printf("Enter the matrix\n");
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            scanf("%d", &s[i][j]);
        }
    }
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (s[i][j] == s[j][i])
                flag = 1;
            else
            {
                flag = 0;
                break;
            }
        }
        if (flag == 0)
            break;
    }
    if (flag == 1)
        printf("The matrix is symmetric");
    else
        printf("The matrix is not symmetric");
}
void question2()
{
    int s[100][100], n, trace = 0;
    float sum = 0.0;
    printf("Enter the order of the square matrix\n");
    scanf("%d", &n);
    printf("Enter the matrix\n");
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            scanf("%d", &s[i][j]);
        }
    }
    for (int i = 0; i < n; ++i)
        trace = trace + s[i][i];
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            sum = sum + pow(s[i][j], 2);
        }
    }
    sum = sqrt(sum);
    printf("The trace is %d and the norm is %f", trace, sum);
}
void question3()
{
    int s[10][10], c[10][10], m, n, r, p, d[10][10];
    printf("Enter the order of first matrix\n");
    scanf("%d%d", &m, &n);
    printf("Enter the order of second matrix\n");
    scanf("%d%d", &r, &p);
    printf("Enter the first matrix\n");
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
            scanf("%d", &s[i][j]); // can input matrix in matrix for with this
    }
    printf("Enter the second matrix\n");
    for (int i = 0; i < r; ++i)
    {
        for (int j = 0; j < p; ++j)
            scanf("%d", &c[i][j]);
    }
    for (int i = 0; i < m; ++i)
    {
        for (int k = 0; k < p; ++k)
        {
            d[i][k] = 0;
            for (int j = 0; j < n; ++j)
            {
                d[i][k] = d[i][k] + (s[i][j] * c[j][k]);
            }
        }
    }
    for(int i = 0; i < m; ++i){
        for(int j = 0; j < p; ++j)
        printf("%d\t", d[i][j]);
        printf("\n");
    }
}
void question4()
{
    int s[10][10], n;
    printf("Enter the order of the matrix");
    scanf("%d", &n);
    printf("Enter the matrix");
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
            scanf("%d", &s[i][j]);
    }
    for (int i = 0; i < n; ++i)
    {
        int temp;
        temp = s[i][i];
        s[i][i] = s[i][n - 1 -i];
        s[i][n - 1 - i] = temp;
    }
    printf("The new matrix is -\n");
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
            printf("%d\t", s[i][j]);
        printf("\n");
    }
}
int main()
{
    question3();
}