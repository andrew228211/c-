#include <stdio.h>
#define maxera 1000001
#define ll long long
int sto[maxera];
void erathos()
{
    sto[0] = 0;
    sto[1] = 0;
    for (int i = 2; i < maxera; i++)
        sto[i] = 1;
    for (int i = 2; i * i < maxera; i++)
    {
        if (sto[i])
        {
            for (int j = i * i; j < maxera; j += i)
                sto[j] = 0;
        }
    }
}
int main()
{
    erathos();
    int t;
    scanf("%d", &t);
    while (t--)
    {
        ll a, b;
        int dem = 0;
        scanf("%lld%lld", &a, &b);
        for (ll i = a; i * i <= b; i++)
            if (sto[i])
                dem++;
        printf("%d\n", dem);
    }
    return 0;
}

