#include<stdio.h>
int main()
{
    int x,n,i,count;
    for(i=1;i<=2000;i++)
    {
        x=1;
        count=0;
        scanf("%d",&n);
        if(n<0)
            break;
        while(n>0)
        {
            if(n<=x)
                break;
            x=x*2;
            count++;
        }
        printf("Case %d: %d\n",i,count);

    }
    return 0;
}
