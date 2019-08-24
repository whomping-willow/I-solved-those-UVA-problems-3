#include<stdio.h>
int main()
{
    int t,x,y,z,i,s,sum,r;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d%d%d",&x,&y,&z);
        sum=0;
        s=x+y;
        while(s>=z)
        {
            r=s%z;
            s=s/z;
            sum=sum+s;
            s=s+r;
        }
        printf("%d\n",sum);
    }
}
