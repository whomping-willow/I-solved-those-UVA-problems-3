#include<stdio.h>
#include<math.h>
int main()
{
    long long int t,i,n,s;
    double x,z,y,sum,p,q;
    scanf("%lld",&t);
    for(i=1;i<=t;i++)
    {
        sum=0;
        scanf("%lld",&n);
        if(n<=180000)
        {
            printf("Case %lld: 0\n",i);
        }
        else if(n>180000)
        {
            x=n-180000;
            if(x>=300000)
            {
                z=x-300000;
                sum=sum+30000;
                if(z>=400000)
                {
                    sum=sum+(400000*15.0/100.0);
                    p=z-400000;
                    if(p>=300000)
                    {
                        q=p-300000;
                        sum=sum+(300000*20.0/100.0);
                        if(q)
                        {
                            sum=sum+(q*25.0/100.0);
                        }
                    }
                    else
                    {
                        sum=sum+(p*20.0/100.0);
                    }
                }
                else
                {
                    sum=sum+z*(15.0/100.0);
                }

            }
            else
            {
                sum=ceil(x*10.0/100.0);
                if(sum<2000)
                {
                    sum=2000;
                }
            }
            s=ceil(sum);
            printf("Case %lld: %lld\n",i,s);
        }

    }
}
