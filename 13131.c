#include<stdio.h>
#include<math.h>
int main()
{
    long long int n,t,k,i,j,a,sum;
    scanf("%lld",&t);
    for(j=0;j<t;j++)
    {
        sum=0;
        scanf("%lld%lld",&n,&k);
        for(i=1;i<=sqrt(n);i++)
        {
            if(n%i==0)
            {
                a=n/i;
                if(i%k!=0)
                {
                    sum=sum+i;
                }
                if(a%k!=0&&a!=i)
                {
                    sum=sum+a;
                }
            }
        }

        printf("%lld\n",sum);
    }

}
