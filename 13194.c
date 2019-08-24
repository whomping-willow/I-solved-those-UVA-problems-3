#include<stdio.h>
#include<math.h>
int main()
{
    long long int n,t,i,j,k,sum,m;
    scanf("%lld",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lld",&n);
        sum=0;
        m=n;
        for(j=1;j<sqrt(n);j++)
        {
            k=n/j;
            if(k==n||k==j)
            {
                sum=sum+j;
            }
            else
            {
                sum=sum+j+k;
            }
        }
        if(sum==m)
        {
            printf("perfect\n");
        }
        else if(sum>m)
            printf("abundant\n");
        else
            printf("deficient\n");
    }
    return 0;
}
