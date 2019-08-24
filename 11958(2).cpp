#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int h1,m1,k,h,m,q,i,j,t,mini,c,r,s;
    char ch;
    cin>>t;
    for(i=0;i<t;i++)
    {
        mini=1000000;
        cin>>k>>h1>>ch>>m1;
        c=h1*60+m1;
        for(j=0;j<k;j++)
        {
            cin>>h>>ch>>m>>q;
            r=h*60+m;
            if(r<c)
            {
                r=r+1440;
            }
            s=r+q;
            if(s-c<mini)
            {
                mini=s-c;
            }
        }
        cout<<"Case "<<i+1<<": "<<mini<<endl;

    }
    return 0;
}
