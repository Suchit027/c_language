#include <stdio.h>
void quicksort(int s[], int left, int right)
{
    int last, i;
    void swap(int s[], int i, int j);
    if (left >= right)
        return;
    swap(s, left, (left + right) / 2);
    last = left;
    for (i = left + 1; i <= right; ++i)
    {
        if (s[i] < s[left])
            swap(s, ++last, i);
    }
    swap(s, left, last);
    quicksort(s, left, last - 1);
    quicksort(s, last + 1, right);
}
void swap(int s[], int i, int j)
{
    int temp;
    temp = s[i];
    s[i] = s[j];
    s[j] = temp;
}
int main()
{
    int s[10];
    void quicksort(int s[], int left, int right);
    void swap(int s[], int i, int j);
    printf("Enter array\n");
    for (int i = 0; i < 10; ++i)
        scanf("%d", &s[i]);
    quicksort(s, 0, 9);
    for (int i = 0; i < 10; ++i)
        printf("%d", s[i]);
}