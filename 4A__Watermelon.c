#include<stdio.h>
int main()
{
    int weight,i,flag=0;
    scanf("%d",&weight);

    for(i=2;i<weight;i+=2){

        if((weight-i)%2==0){
            flag=1;
        }
    }
    if(flag==1)
        printf("Yes");
    else
        printf("No");

    return 0;
}
