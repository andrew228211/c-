#include <stdio.h>
typedef long long ll;
int nto(int n)
{
    if (n == 1)
        return 0;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}
void solve()
{
    int t;
    int n;
    scanf("%d", &t);
    while (t--)
    // for (int n = 1; n < 10000; n++)
    {
        scanf("%d", &n);
        int sum1 = 0;
        int tmp = n;
        int m = n;
        while (tmp > 0)
        {
            sum1 += tmp % 10;
            tmp /= 10;
        }
        int sum2 = 0;
        for (int i = 2; i * i <= m; i++)
            while (m % i == 0)
            {
                tmp = i;
                while (tmp > 0)
                {
                    sum2 += tmp % 10;
                    tmp /= 10;
                }
                m /= i;
            }
        if (m > 1)
            while (m > 0)
            {
                sum2 += m % 10;
                m /= 10;
            }
        if (sum1 == sum2 && !nto(n))
            // printf("%d ", n);
            printf("YES\n");
        else
            printf("NO\n");
    }
}

int main()
{
    solve();
}

