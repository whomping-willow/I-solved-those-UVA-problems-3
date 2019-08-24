#include<stdio.h>
int main()
{
    int a,b,s,i,x,y,t,j;
    scanf("%d",&t);
    for(j=1;j<=t;j++)
    {
        s=0;
        scanf("%d%d",&a,&b);
        if(a%2==0)
            x=a+1;
        else
            x=a;
        if(b%2==0)
            y=b-1;
        else
            y=b;
        for(i=x;i<=b;i=i+2)
        {
          s=s+i;
        }
        printf("Case %d: %d\n",j,s);
    }
    return 0;
}
