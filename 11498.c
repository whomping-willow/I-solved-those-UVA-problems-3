#include<stdio.h>
int main()
{
    long long int n,x,y,o,p,i,j;
    while(scanf("%lld",&n)==1&&n>0)
    {
        scanf("%lld%lld",&o,&p);
        for(i=1;i<=n;i++)
        {
            scanf("%lld%lld",&x,&y);
            if(x==o||y==p)
            {
                printf("divisa\n");
            }
            else if(x>o&&y>p)
            {
                printf("NE\n");
            }
            else if(x>o&&y<p)
            {
                printf("SE\n");
            }
            else if(x<o&&y>p)
            {
                printf("NO\n");
            }
            else if(x<o&&y<p)
            {
                printf("SO\n");
            }
        }
    }
}
