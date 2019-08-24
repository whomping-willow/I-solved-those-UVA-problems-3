#include<stdio.h>
int main()
{
    long long int a,b,c,d,l,x,count,r;
    while(scanf("%lld%lld%lld%lld%lld",&a,&b,&c,&d,&l)!=EOF)
    {
        if(a==0&&b==0&&c==0&&d==0&&l==0)
            break;
        count=0;
        for(x=0;x<=l;x++)
        {
            r=(a*x*x+b*x+c)%d;
            if(r==0)
            {
                count++;
            }
        }
        printf("%lld\n",count);
     }
     return 0;
}
