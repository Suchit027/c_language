#include <stdio.h>
int i = 0;
int t1 = 1, t2 = 0, t3;
int question1(int max1, int max2)
{
    ++i;
    if (max1 % (max2 - i) != 0 || max2 % (max2 - i) != 0)
        question1(max1, max2);
    else
        return (max2 - i);
}
struct sturec
{
    char name[100];
    int roll;
    struct {
        int m1;
        int m2;
        int m3;
    }marks;
} s[3];
int main()
{
    struct sturec temp;
    printf("Enter the values\n");
    for (int i = 0; i < 3; ++i)
        scanf("%s %d %d %d %d", s[i].name, &s[i].roll, &s[i].marks.m1, &s[i].marks.m2, &s[i].marks.m3);
    int avg[3];
    for (int i = 0; i < 3; ++i)
        avg[i] = (s[i].marks.m1 + s[i].marks.m2 + s[i].marks.m3) / 3;
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            if (avg[i] > avg[j])
            {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
    for (int i = 0; i < 3; ++i)
        printf("%s\n", s[i].name);
}