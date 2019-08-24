#include<stdio.h>
int main()
{
    int n,i,j,ara[101][101],x,y,flag1,flag2;
    while(scanf("%d",&n)==1&&n)
    {
        int rsum[101]={0};
        int csum[101]={0};
        flag1=0;
        flag2=0;

        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                scanf("%d ",&ara[i][j]);
            }
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                rsum[i]=rsum[i]+ara[i][j];
                csum[i]=csum[i]+ara[j][i];
            }
        }
        for(i=0;i<n;i++)
        {
            if(rsum[i]%2==1)
            {
                x=i;
                flag1++;
            }
            if(csum[i]%2==1)
            {
                y=i;
                flag2++;
            }
        }
        if(flag1==1&&flag2==1)
        {
            printf("Change bit (%d,%d)\n",x+1,y+1);
        }
        else if(flag1==0&&flag2==0)
        {
            printf("OK\n");
        }
        else
            printf("Corrupt\n");
    }
    return 0;
}

