#include<stdio.h>
int main()
{
    int a,b,c,d,t,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d%d",&a,&b);
        if(a<b)
        {
            printf("impossible\n");
        }
        else if(a==0&&b==0)
        {
            c=0;
            d=0;
            printf("%d %d\n",c,d);
        }
        else if(a==b&&a!=0&&b!=0)
        {
            printf("impossible\n");
        }
        else if(a>b)
        {
            if((a+b)%2!=0)
            {
               printf("impossible\n");
            }
            else
            {
            c=(a+b)/2;
            d=a-c;
            printf("%d %d\n",c,d);
            }
        }
    }
    return 0;
}
