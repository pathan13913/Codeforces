#include<stdio.h>
#include<string.h>
struct Word
{
    char name[10000];
};
int main()
{
    int i,num;
    scanf(" %d",&num);
    struct Word w[num];

    for(i=0; i<num; i++)
    {
        scanf(" %s",&w[i].name);
    }
    printf("\n\n");
    for(i=0; i<num; i++)
    {
        int len = strlen(w[i].name);
        if(len>10)
        {
            printf("%c%d%c\n",w[i].name[0],len-2,w[i].name[len-1]);
        }
        else
        {
            printf("%s\n",w[i].name);
        }
    }
    return 0;
}
