#include<iostream>
#include<cstdio>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    int t,i,k,h1,m1,h[200],m[200],n[200],j,tm[200];
    char c;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>k>>h1>>c>>m1;
        for(j=0;j<k;j++)
        {
            cin>>h[j]>>c>>m[j]>>n[j];
        }
        int hm=h1*60+m1;
        for(j=0;j<k;j++)
        {
            tm[j]=(h[j]*60)+m[j]+n[j];
            if(tm[j]<hm)
            {
                tm[j]+=1440;
            }
        }
        sort(tm,tm+k);
        cout<<"Case "<<i+1<<": "<<tm[0]-hm<<endl;
    }
    return 0;
}

