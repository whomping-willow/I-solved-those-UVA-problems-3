#include<stdio.h>
#include<string.h>
int main()
{
    char d[]={"donate"},r[]={"report"},p[50];
    long long int k,sum=0;
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {

        scanf("%s",p);
        if(strcmp(d,p)==0)
        {
            scanf("%lld",&k);
            sum=sum+k;
        }
        else if(strcmp(r,p)==0)
        {
            printf("%lld\n",sum);
        }
    }
    return 0;

}
