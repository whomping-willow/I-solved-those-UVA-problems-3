#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    long long int n,m,t,i,r;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n>>m;
        r=(n/3)*(m/3);
        cout<<r<<endl;
    }
    return 0;
}
