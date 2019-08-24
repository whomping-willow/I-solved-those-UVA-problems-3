#include<stdio.h>
int main()
{
    long long int a,b,i,j=0,count;
    while(scanf("%lld%lld",&a,&b)==2&&a>-1&&b>-1)
    {
        count=1;
        i=a;
        j++;
        while(a>1)
        {

            if(a%2==0)
            {
                a=a/2;
            }
            else
            {
                a=3*a+1;
            }
            if(a>b)
                break;
                count++;
        }
        printf("Case %lld: A = %lld, limit = %lld, number of terms = %lld\n",j,i,b,count);
    }
}
