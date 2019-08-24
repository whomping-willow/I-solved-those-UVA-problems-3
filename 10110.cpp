#include<iostream>
#include<cstdio>
#include<math.h>
using namespace std;
int main()
{
    unsigned int n,a;
    while(cin>>n)
    {
        if(n==0)
            break;
        a=sqrt(n);
        if(a*a==n)
        {
            cout<<"yes"<<endl;
        }
        else
            cout<<"no"<<endl;
    }
}
