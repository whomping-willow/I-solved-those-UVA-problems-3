#include<stdio.h>
int main()
{
    long long int  p,n,s,k=0,i,flag;
    while(scanf("%lld",&n)!=EOF&&n>0)
    {
        k++;
        p=1;
        flag=0;
        for(i=0;i<n;i++)
        {
            scanf("%lld",&s);
            if(s>=0)
            {
                p=p*s;
                flag=1;
            }
        }
        if(flag==0)
        {
            printf("Case #%lld: The maximum product is 0.\n",k);
        }
        else
        {
            printf("Case #%lld: The maximum product is %lld.\n",k,p);
        }
        printf("\n");


    }
    return 0;

}
