#include<stdio.h>
#include<math.h>
int main()

{
    double a,b,c,area,s;
    while(scanf("%lf%lf%lf",&a,&b,&c)==3)
    {
        if(a+b<=c||b+c<=a||c+a<=b)
        {
            printf("-1\n");
            continue ;
        }


            a=a*(2/3.0);
            b=b*(2/3.0);
            c=c*(2/3.0);
            s=(a+b+c)/2.0;
            area=3*sqrt(s*(s-a)*(s-b)*(s-c));
            printf("%.3lf\n",area);

    }
    return 0;
}
