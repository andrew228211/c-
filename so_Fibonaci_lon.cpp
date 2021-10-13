#include <stdio.h>
#define ll long long
const int modu = 1e9 + 7;
int main()
{
    int fibo[1001];
    fibo[0] = 0, fibo[1] = 1;
    for (int i = 2; i < 1001; i++)
        fibo[i] = (fibo[i - 1] + fibo[i - 2]) % modu;
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, tmp;
        scanf("%d", &n);
        printf("%lld", fibo[n]);
        printf("\n");
    }
    return 0;
}

