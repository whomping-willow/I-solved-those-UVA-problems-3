#include<stdio.h>
int main()
{
    int n,i,j,count,ara[1003],k,temp;
    while(scanf("%d",&n)!=EOF)
    {
        count=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&ara[i]);
        }
        for(j=0;j<n;j++)
        {
            for(k=0;k<(n-j-1);k++)
            {
                if(ara[k]>ara[k+1])
                {
                    temp=ara[k];
                    ara[k]=ara[k+1];
                    ara[k+1]=temp;
                    count++;
                }
            }
        }
        printf("Minimum exchange operations : %d\n",count);
    }
    return 0;
}
