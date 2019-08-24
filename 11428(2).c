#include<stdio.h>
int main()
{
    int n,x,y,flag;
    while(scanf("%d",&n)!=EOF&&n>0)
    {
        flag=0;
        for(x=1;x<60;x++)
        {
            for(y=0;y<=x;y++)
            {
                if(x*x*x-y*y*y==n)
                {
                    flag=1;
                    break;
                }
            }
            if(flag==1)
                break;
        }
        if(flag==1)
        {
            printf("%d %d\n",x,y);
        }
        else
            printf("No solution\n");
    }
return 0;

}
