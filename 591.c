#include<stdio.h>
int main()
{
    int n,ara[55],k=0,s,sum,i,av;
    while(scanf("%d",&n)==1&&n>0)
    {
        k++;
        s=0;
        sum=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&ara[i]);
            sum=sum+ara[i];
        }
        av=sum/n;
        for(i=0;i<n;i++)
        {
            if(ara[i]>av)
            {
                s=s+ara[i]-av;
            }
        }
        printf("Set #%d\nThe minimum number of moves is %d.\n\n",k,s);
    }
    return 0;
}
