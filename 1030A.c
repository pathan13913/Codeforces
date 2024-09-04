#include <stdio.h>
int main()
{
    int n, flag = 1;
    scanf("%d", &n);


    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] == 1)
        {
            flag = 0;
        }
    }
    if (flag == 0)
    {
        printf("HARD");
    }
    else
    {
        printf("EASY");
    }

    return 0;
}