#include<stdio.h>
int main()
{
    int t,i,n,ara[10],j;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
       scanf("%d",&n);
       for(j=0;j<n;j++)
       {
           scanf("%d",&ara[j]);
       }
       printf("Case %d: %d\n",i,ara[n/2]);
    }
    return 0;
}

