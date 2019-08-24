#include<stdio.h>
int main()
{
    int now[14],need[13],t=0,n,i,j;
    while(scanf("%d",&n)!=EOF)
    {
        if(n<0)
            break;
        now[0]=n;
        for(i=1;i<=12;i++)
        {
            scanf("%d",&now[i]);
        }
        for(i=0;i<12;i++)
        {
            scanf("%d",&need[i]);
        }
        printf("Case %d:\n",++t);
        for(i=0;i<12;i++)
        {
          if(now[i]-need[i]>=0)
          {
              now[i+1]=now[i+1]+now[i]-need[i];
              printf("No problem! :D\n");
          }
          else
          {
              now[i+1]=now[i+1]+now[i];
              printf("No problem. :(\n");
          }

        }
    }
    return 0;
}
