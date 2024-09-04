#include <stdio.h>
int main()
{
    int i, n, p, q, flag = 0;
    scanf("%d", &n);
    for ( i = 1; i <= n; i++)
    {
        scanf(" %d %d", &p, &q);
        if (p + 2 <= q)
        {
            flag++;
        }
    }

    printf("%d", flag);
    return 0;
}