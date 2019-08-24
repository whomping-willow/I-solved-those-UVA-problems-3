#include<stdio.h>
int main()
{
    double c,f,sum;
    int t,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lf%lf",&c,&f);
        sum=c+(5*f/9);
        printf("Case %d: %.2lf\n",i,sum);
    }
    return 0;
}
