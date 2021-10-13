#include <stdio.h>
void swap(int *x, int *y)
{
    int i = *x;
    *x = *y;
    *y = i;
}
void print(int a[], int n)
{
    for (int i = 1; i <= n; i++)
        printf("%d", a[i]);
    printf(" ");
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int a[n + 1];
        for (int i = 1; i <= n; i++)
            a[i] = i;
        print(a, n);
        while (1)
        {
            int i = n - 1;
            while (i > 0 && a[i] > a[i + 1])
                i--;
            if (i == 0)
                break;
            int j = n;
            while (j > i && a[j] < a[i])
                j--;
            swap(&a[j], &a[i]);
            int l = i + 1, r = n;
            while (l <= r)
                swap(&a[l], &a[r]), l++, r--;
            print(a, n);
        }
        printf("\n");
    }
}

