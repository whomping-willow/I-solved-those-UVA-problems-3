#include<stdio.h>
int main()
{
    long long int s,n,i;

    while(scanf("%lld",&n)!=EOF)
    {
        if(n<0)
            break;

            s=1;
            for(i=0;i<=n;i++)
           {
             s=s+i;
           }
         printf("%lld\n",s);

    }
    return 0;
}
