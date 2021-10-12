#include <stdio.h>
 
char a[] = "ABBADCCABDCCABD";
char b[] = "ACCABCDDBBCDDBB";
 
float chamDiem(char d[])
{
    int dem = 0;
    char tmp;
    for (int i = 0; i < 15; i++)
    {
        getchar();
        scanf("%c", &tmp);
        if (tmp == d[i])
            dem++;
    }
    return dem * 2 / 3.0;
}
 
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int id;
        scanf("%d", &id);
        if (id == 101)
            printf("%.2f", chamDiem(a));
        else
            printf("%.2f", chamDiem(b));
        printf("\n");
    }
    return 0;
}
