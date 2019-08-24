#include<stdio.h>
int main()
{
    int t,i,n,k,p,sum;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d%d%d",&n,&k,&p);
        sum=k+p;
        if(sum>n)
        {
            sum=sum%n;
            if(sum==0)
            {
                sum=n;
            }
        }
        printf("Case %d: %d\n",i,sum);
    }
    return 0;
}
