#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,s,p,r,area;
    while(scanf("%lf%lf%lf",&a,&b,&c)!=EOF)
    {
        if(a<=0||b<=0||c<=0)
        {
            printf("The radius of the round table is: 0.000\n");
        }
        else
        {
        p=(a+b+c);
        s=p/2.0;
        area=sqrt(s*(s-a)*(s-b)*(s-c));
        r=2.0*area/p;
        printf("The radius of the round table is: %.3lf\n",r);
        }
    }
    return 0;
}
