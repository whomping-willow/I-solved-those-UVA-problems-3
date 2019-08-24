#include<stdio.h>
int main()
{
    int ara[10],i,j,k,t,n,r;
    scanf("%d",&t);
    for(k=1;k<=t;k++)
    {
        int ara[10]={0};
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
            j=i;
            while(j)
            {
                r=j%10;
                ara[r]++;
                j=j/10;
            }
        }
        for(i=0;i<10;i++)
        {
            printf("%d",ara[i]);
            if(i<9)
                printf(" ");
        }
        if(k!=t)
        printf("\n");
    }
    return 0;


}
