#include<stdio.h>
int main()
{
    int n,sum,s,r,j;
    while(scanf("%d",&n)==1&&n>0)
    {
        sum=0;
        j=n;
        while(n>=3)
        {
            r=n%3;
            n=n/3;
            sum=sum+n;
            n=n+r;
        }
        if(n==2)
        {
            sum=sum+1;
        }
        sum=sum+j;
        printf("%d\n",sum);
    }
    return 0;
}

