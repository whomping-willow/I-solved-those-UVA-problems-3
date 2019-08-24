#include<stdio.h>
int main()
{
    int t,i,x,y,z,r;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d%d%d",&x,&y,&z);
        r=z*(x+(x-y))/(x+y);
        printf("%d\n",r);
    }
    return 0;
}
