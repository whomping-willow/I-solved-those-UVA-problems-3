#include<stdio.h>
int main()
{
    int n,t,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&n);
        printf("Case #%d: %d\n",i,(n-1)*2+1);
    }
    return 0;
}
