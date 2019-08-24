#include<stdio.h>
int main()
{
    int t,i,n,max,s,j;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        max=-1;
        scanf("%d",&n);
        for(j=0;j<n;j++)
        {
            scanf("%d",&s);
            if(max<s)
                max=s;
        }
        printf("Case %d: %d\n",i,max);
    }
    return 0;
}
