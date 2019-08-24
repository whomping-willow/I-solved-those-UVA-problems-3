#include<stdio.h>
#include<string.h>
int main()
{
    int t,i,d1,d2,m1,m2,y1,y2,d,m,y;
    char ch1,ch2,ch3,ch4;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d%c%d%c%d",&d1,&ch1,&m1,&ch2,&y1);
        getchar();
        scanf("%d%c%d%c%d",&d2,&ch3,&m2,&ch4,&y2);
        if(y1>=y2)
        {
            y=y1-y2;
            if(y==0)
            {
                m=m1-m2;
                if(m>0)
                {
                    printf("Case #%d: %d\n",i,y);
                }
                else if(m==0)
                {
                    d=d1-d2;
                    if(d>=0)
                        printf("Case #%d: %d\n",i,y);
                    else
                        printf("Case #%d: Invalid birth date\n",i);
                }
                else
                printf("Case #%d: Invalid birth date\n",i);

            }
            else if(y>0)
            {
                m=m1-m2;
                if(m>0)
                {
                    if(y>130)
                     printf("Case #%d: Check birth date\n",i);
                        else
                    printf("Case #%d: %d\n",i,y);
                }
                else if(m<0)
                {
                    if(y-1>130)
                         printf("Case #%d: Check birth date\n",i);
                    else
                    printf("Case #%d: %d\n",i,y-1);
                }
                else
                {
                    d=d1-d2;
                    if(d>=0)
                    {
                        if(y>130)
                            printf("Case #%d: Check birth date\n",i);
                        else
                        printf("Case #%d: %d\n",i,y);
                    }
                    else
                    {
                        if(y-1>130)
                             printf("Case #%d: Check birth date\n",i);
                        else
                        printf("Case #%d: %d\n",i,y-1);
                    }
                }
            }
        }
        else
        {
           printf("Case #%d: Invalid birth date\n",i);
        }
    }
    return 0;
}
