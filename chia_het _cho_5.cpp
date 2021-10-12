#include <stdio.h>
#include <string.h>
int convert(int k)
{
    if (k == 1)
        return 2;
    else if (k == 2)
        return 4;
    else if (k == 3)
        return 8;
    else
        return 6;
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char s[1003];
        scanf("%s", s);
        int n = strlen(s) - 1;
        int sum = s[n] - '0';
        for (int i = n - 1; i >= 0; i--)
        {
            if (s[i] == '1')
                sum += convert((n - i) % 4);
        }
        if (sum % 5 == 0)
            printf("Yes");
        else
            printf("No");
        printf("\n");
    }
    return 0;
}
