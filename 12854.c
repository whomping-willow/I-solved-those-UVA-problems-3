#include<stdio.h>
int main()
{
    int o[6],p[6],i,j,flag;
    while(scanf("%d",&o[0])!=EOF)
    {
        flag=0;
        for(i=1;i<5;i++)
        {
            scanf("%d",&o[i]);
        }
        for(i=0;i<5;i++)
        {
            scanf("%d",&p[i]);
        }
        for(i=0;i<5;i++)
        {
            if(o[i]==p[i])
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            printf("Y\n");
        }
        else
            printf("N\n");
    }
    return 0;
}
