#include <stdio.h>
#define ll long long
const ll modu = 1e9 + 7;
int n;
ll sum, power, x;
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d%lld", &n, &x);
        ll a[n];
        for (int i = n - 1; i >= 0; i--)
            scanf("%lld", &a[i]);
        sum = 0, power = 1;
        for (int i = 0; i < n; i++)
        {
            sum = (sum + (power * a[i]) % modu) % modu;
            power = (power * x) % modu;
        }
        printf("%lld", sum);
        printf("\n");
    }
    return 0;
}


