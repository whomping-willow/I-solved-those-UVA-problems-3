#include<stdio.h>
#include<math.h>
int main()
{
    long long int n,t,i,r,sum,j,p,k,s;
    double ara[15];
    scanf("%lld",&t);
    for(i=0;i<t;i++)
    {
        scanf("%lld",&n);
        j=n;
        sum=0;
        k=0;
        while(n)
        {
           r = n%10;
           ara[k]=r*1.0;
           n=n/10;
           k++;
        }
        for(p=0;p<k;p++)
        {
            s=ceil(pow(ara[p],k));
            sum=sum+s;
        }
        if(sum==j)
        {
            printf("Armstrong\n");
        }
        else
            printf("Not Armstrong\n");
    }
    return 0;
}
