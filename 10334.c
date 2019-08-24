#include<stdio.h>

int main()
{
    unsigned long long ara[1005],i;
    for(i=0;i<=1000;i++)
    {
    if(i==0)
    {
        ara[i]=1;
    }
    else if(i==1)
    {
        ara[i]=2;
    }
    else
    {
       ara[i]=ara[i-1]+ara[i-2];
    }
    }
    int n;
    while(scanf("%d",&n)!=EOF)
    {

       printf("%llu\n",ara[n]);
    }
    return 0;

}
