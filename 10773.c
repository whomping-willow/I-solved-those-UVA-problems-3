#include<stdio.h>
#include<math.h>
int main()
{
    int t,i;
    double d,u,v,dif;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lf%lf%lf",&d,&v,&u);
        if(v>=u||u==0||v==0||d==0)
        {
            printf("Case %d: can't determine\n",i);
        }
      else
      {
          dif=(d/sqrt(u*u-v*v))-(d/u);
          printf("Case %d: %.3lf\n",i,dif);
      }

    }
    return 0;
}
