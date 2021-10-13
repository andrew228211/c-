#include <stdio.h>
#define ll long long
ll a, b, c;
ll nhan_ai_cap(ll b)
{
    if (b == 0)
        return 0;
    ll tmp = nhan_ai_cap(b / 2);
    tmp = (tmp + tmp) % c;
    if (b % 2 == 0)
        return tmp;
    else
        return (tmp + a) % c;
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%lld%lld%lld", &a, &b, &c);
        if (c == 0)
        {
            printf("%lld", a * b);
            continue;
        }
        a %= c;
        b %= c;
        printf("%lld\n", nhan_ai_cap(b));
    }
    return 0;
}

