#include <stdio.h>
#include<string.h>
int main()
{
    int a = 1000;
    char arr[a];
    gets(arr);
    if (arr[0]>=97 && arr[0]<= 122)
    {
        arr[0]=toupper(arr[0]);
    }
printf("%s",arr);

    return 0;
}