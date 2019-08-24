#include<stdio.h>
int main()
{
    int t,n,ara[55],j,i,up,down,dif;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        up=0;
        down=0;
        scanf("%d",&n);
        for(j=0;j<n;j++)
        {
            scanf("%d",&ara[j]);

        }
        for(j=0;j+1<n;j++)
        {
            dif=ara[j+1]-ara[j];
            if(dif>0)
                up++;
            else if(dif<0)
                down++;
        }
        printf("Case %d: %d %d\n",i,up,down);
    }
    return 0;
}
