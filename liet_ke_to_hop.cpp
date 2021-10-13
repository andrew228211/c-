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
        int n, k;
        scanf("%d%d", &n, &k);
        int a[k + 1];
        for (int i = 1; i <= k; i++)
            a[i] = i;
        print(a, k);
        while (1)
        {
            int i = k;
            while (i > 0 && a[i] == n - k + i)
                i--;
            if (i == 0)
                break;
            a[i]++;
            for (int j = i + 1; j <= k; j++)
                a[j] = a[j - 1] + 1;
            print(a, k);
        }
        printf("\n");
    }
    return 0;
}

