#include<stdio.h>
int main()
{
    long long int n,r,sum,i,t,j;
    scanf("%lld",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lld",&n);
        j=n;
        sum=0;
        while(1)
        {
        while(n)
        {
            r=n%10;
            sum=sum+r*r;
            n=n/10;
        }
        if(sum>9)
        {
            n=sum;
            sum=0;
        }
        else
            break;
        }
        if(sum==1)
        {
            printf("Case #%lld: %lld is a Happy number.\n",i,j);
        }
        else
        printf("Case #%lld: %lld is an Unhappy number.\n",i,j);

    }
    return 0;
}
