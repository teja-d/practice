#include<stdio.h>
int main()
{
    int m,n,i;
    scanf("%d",&m);//range
    scanf("%d",&n);//divide num
    printf("0\t");
    for(i=1;i<=m;i++)
    {
        if(i%n!=0)
        {
            printf("%d\t",i);//printing elements
        }
    }
    return 0;
}
