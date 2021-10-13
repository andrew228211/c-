#include <stdio.h>
#define ll long long
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        long long n;
        scanf("%lld", &n);
        ll f0 = 0, f1 = 1, f;
        while (f1 < n)
        {
            f = f0 + f1;
            f0 = f1;
            f1 = f;
        }
        if (f1 == n || n == 0)
            printf("YES");
        else
            printf("NO");
        printf("\n");
    }
    return 0;
}
