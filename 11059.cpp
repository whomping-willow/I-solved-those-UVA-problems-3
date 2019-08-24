#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,ara[20],i,j,k=0,p,max;
    while(scanf("%lld",&n)==1)
    {
        k++;
        max=0;
        for(i=0;i<n;i++)
        {
            scanf("%lld",&ara[i]);
        }

        for(i=0;i<n;i++)
        {
            p=1;
            for(j=i;j<n&&p;j++)
            {
            p=p*ara[j];
            if(p>max)
                max=p;
            }

        }
        printf("Case #%lld: The maximum product is %lld.\n",k,max);
        printf("\n");

    }
    return 0;
}
