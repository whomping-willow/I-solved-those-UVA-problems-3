#include<stdio.h>
#include<string.h>
int main()
{
    int sum[10004],i,j=0,n,q,x,max;
    while(scanf("%d%d",&n,&q)==2)
    {
        j++;
        max=0;
        int count[10004]={0};
        sum[0]=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&x);
            count[x]++;
            if(max<x)
            {
                max=x;
            }
        }
        for(i=1;i<=max;i++)
        {
            sum[i]=sum[i-1]+count[i-1];
        }
        printf("Case# %d:\n",j);
        for(i=0;i<q;i++)
        {
            scanf("%d",&x);
            if(count[x]==0)
            {
                printf("%d not found\n",x);
            }
            else
                printf("%d found at %d\n",x,sum[x]+1);
        }
    }
}
