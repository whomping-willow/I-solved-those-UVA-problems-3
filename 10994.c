#include<stdio.h>
int fn(int x)
{
    if(x==0)
        return 0;
    else if(x%10>0)
        return x%10;
    else
        return fn(x/10);
}
int main()
{
    int a,b,i,sum;
    while(scanf("%d%d",&a,&b)==2&&a>-1&&b>-1)
    {
        sum=0;
        for(i=a;i<=b;i++)
        {
            sum=sum+fn(i);
        }
        printf("%d\n",sum);
    }
    return 0;
}
