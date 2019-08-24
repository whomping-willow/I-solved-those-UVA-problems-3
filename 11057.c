#include<stdio.h>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,c,ara[10004],l,r,a,b;
    while(scanf("%lld",&n)!=EOF)
    {
        for(i=0;i<n;i++)
        {
            scanf("%lld",&ara);
        }
        scanf("%lld",&c);
        sort(ara,ara+n);
        while(l<r)
        {
            if(ara[l]+ara[r]<c)
            {
                l++;
            }
            else if(ara[l]+ara[r]==c)
            {
                a=l;
                b=r;
                l++;
                r--;
            }
            else
            {
                r--;
            }
        }
        printf("Peter should buy books whose prices are %lld and %lld.\n",ara[a],ara[b]);
        printf("\n");
    }
    return 0;
}




