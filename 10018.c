#include<stdio.h>
int main()
{
    long long int t,n,m,i,k,sum,count,rev,r,j;
    scanf("%lld",&t);
    for(i=0;i<t;i++)
    {
        count=0;
        m=0;
        rev=0;
        scanf("%lld",&n);
        while(1)
        {
            m=0;
            rev=0;
            count++;
        j=n;
        while(n)
        {
            r=n%10;
            m=m*10+r;
            n=n/10;
        }
        sum=m+j;
        k=sum;
        while(sum)
        {
            r=sum%10;
            rev=rev*10+r;
            sum=sum/10;
        }
        if(k==rev)
        {
          printf("%lld %lld\n",count,k);
          break;
        }
        else
            n=k;
    }

    }
    return 0;
}
