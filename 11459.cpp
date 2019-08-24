#include<iostream>
#include<cstdio>
using namespace std;
 int roll[1000009],cnt[1000009];
int main()
{
    int t,i,a,b,c,j,bot[1000],top[1000];
    cin>>t;
    for(i=0;i<t;i++)
    {
        cnt[a]={1};
        cin>>a>>b>>c;
        for(j=0;j<b;j++)
        {
            cin>>bot[j]>>top[j];
        }
        for(j=0;j<c;j++)
        {
            cin>>roll[j];
        }
        for(j=0;j<a;j++)
        {
            cnt[j]=cnt[j]+ roll[j%a];


        }



    }
}
