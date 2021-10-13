#include <stdio.h>
#define ll long long
int n, k;
int tmp;
const int modu = 1e9 + 7;

long long POW(int co_so, int luy_thua)
{
    long long multi = 1;
    for (int i = 1; i <= luy_thua; i++)
        multi = (multi * co_so) % modu;
    return multi;
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d%d", &n, &k);
        if (n - k < k)
            k = n - k;
        int a[1000] = {0};
        for (int i = n - k + 1; i <= n; i++)
        {
            tmp = i;
            for (int j = 2; j * j <= tmp; j++)
                while (tmp % j == 0)
                    a[j]++, tmp /= j;
            a[tmp]++;
        }
        for (int i = 2; i <= k; i++)
        {
            tmp = i;
            for (int j = 2; j * j <= tmp; j++)
                while (tmp % j == 0)
                    a[j]--, tmp /= j;
            a[tmp]--;
        }
        ll multi = 1;
        for (int i = 2; i <= n; i++)
        {
            if (a[i])
                multi = (multi * POW(i, a[i])) % modu;
        }
        printf("%lld", multi);
        printf("\n");
    }
    return 0;
    }

