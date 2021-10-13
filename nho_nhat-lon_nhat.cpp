#include <stdio.h>
int m, s, num;
int max[103] = {0}, min[103];
int MIN(int a, int b)
{
    if (a < b)
        return a;
    else
        return b;
}
void generateMax()
{
    int tmp = s;
    for (int i = 0; i < m && tmp > 0; i++)
    {
        max[i] = MIN(9, tmp);
        tmp -= MIN(9, tmp);
    }
}
void generateMin()
{
    for (int i = 0; i < m; i++)
        min[i] = max[i];
    if (min[m - 1] == 0)
    {
        min[m - 1] = 1;
        int i = m - 2;
        while (min[i] == 0)
            i--;
        min[i]--;
    }
}
int main()
{
    scanf("%d%d", &m, &s);
    num = (int)s / m;
    if ((s > 9 * m) || (s == 0 && m > 1))
    {
        printf("-1 -1");
        return 0;
    }
    generateMax();
    generateMin();
    for (int i = m - 1; i >= 0; i--)
        printf("%d", min[i]);
    printf(" ");
    for (int i = 0; i < m; i++)
        printf("%d", max[i]);
    return 0;
}
