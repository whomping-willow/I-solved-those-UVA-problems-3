#include<stdio.h>
#include<math.h>
long long int H(int n)
{
    if(n<1)
        return 0;
    int i,y,z;
    long long int res=0;
    z=n;
    for(i=1;i<=sqrt(n);i++)
    {
        y=n/i;
        res=res+y+(z-y)*(i-1);
        z=y;
    }
    return res;
}
int main()
{
    int n,t,i;
    long long int result;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&n);
        result=H(n);
        printf("%lld\n",result);
    }
    return 0;

}
