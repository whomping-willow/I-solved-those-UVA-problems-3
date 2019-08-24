#include<stdio.h>
int main()
{
    long long int n,r,i;
    while(scanf("%lld",&n)==1&&n>0)
    {
        r=0;
        for(i=1;i<=n;i++)
        {
            r=r+i*i;
        }
        printf("%lld\n",r);
    }
    return 0;
}
