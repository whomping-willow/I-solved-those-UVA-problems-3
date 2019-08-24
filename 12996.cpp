#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int t,i,n,l,x,j,sum,a1[20],a2[20],s;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n>>l;
        sum=0;
        s=0;
        for(j=0;j<n;j++)
        {
            cin>>a1[j];
            s=s+a1[j];
        }
        for(j=0;j<n;j++)
        {
            cin>>a2[j];
        }
         for(j=0;j<n;j++)
         {
             if(a1[j]<a2[j])
             {
                 sum=sum+a1[j];
             }
             else
              sum=sum+a2[j];

         }
         if(sum<=l&&sum==s)
         {
             cout<<"Case "<<i+1<<":"<<" Yes"<<endl;
         }
         else
         {
             cout<<"Case "<<i+1<<":"<<" No"<<endl;
         }
    }
    return 0;
}
