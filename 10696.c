#include<stdio.h>
int main()
{
    int n,count,f91;
    for(count=1;count<=250000;count++)
    {
        scanf("%d",&n);
        if(n==0)
            break;
        if(n<=100)
        f91=91;
        else
            f91=n-10;
        printf("f91(%d) = %d\n",n,f91);
    }
    return 0;
}
