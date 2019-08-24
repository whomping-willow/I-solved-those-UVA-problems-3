#include<stdio.h>
#include<bits/stdc++.h>
int ara[1000006];
using namespace std;
int main()
{
    int i,j,n,q,qr[1004],k=0;
    while(scanf("%d%d",&n,&q)==2&&n>0&&q>0)
    {
        k++;
        for(i=0;i<n;i++)
        {
            scanf("%d",&ara[i]);
        }
        for(i=0;i<q;i++)
        {
            scanf("%d",&qr[i]);
        }
        sort(ara,ara+n);
        int flag=0;
        printf("CASE# %d:\n",k);
        for(i=0;i<q;i++)
        {
            for(j=0;j<n;j++)
            {
                if(qr[i]==ara[j])
                {
                   flag=1;
                    break;
                }
            }
            if(flag==1)
            {
                 printf("%d found at %d\n",qr[i],j+1);
            }
            else
                printf("%d not found\n",qr[i]);
        }
    }
    return 0;
}
