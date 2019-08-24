#include<stdio.h>
#include<math.h>
int main()
{
    long long int t,i,x,y,z;
    double s,l,p;
    scanf("%lld",&t);
    for(i=0;i<t;i++)
    {
        scanf("%lld%lld%lld",&x,&y,&z);
        p=sqrt(x*x+y*y);
        s=z-p;
        l=z+p;
        printf("%.2lf %.2lf\n",s,l);

    }
    return 0;
}
