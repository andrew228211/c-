#include <stdio.h>
#define ll long long
int kt(int a[], int x)
{
    int l = 0, r = 17;
    while (l <= r)
    {
        int m = (l + r) / 2;
        if (a[m] == x)
            return 1;
        if (a[m] < x)
            l = m + 1;
        else
            r = m - 1;
    }
    return 0;
}
int main()
{
    int fibo[17];
    fibo[0] = 0, fibo[1] = 1;
    for (int i = 2; i < 17; i++)
        fibo[i] = fibo[i - 1] + fibo[i - 2];
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, tmp;
        scanf("%d", &n);
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &tmp);
            if (kt(fibo, tmp))
                printf("%d ", tmp);
        }
        printf("\n");
    }
    return 0;
}

