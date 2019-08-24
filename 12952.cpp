#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int a,b;
    while(cin>>a>>b)
    {
        if(a>b)
        {
            cout<<a<<endl;
        }
        else if(b>a)
        {
            cout<<b<<endl;
        }
        else if(a==b)
        {
            cout<<a<<endl;;
        }
    }
    return 0;
}
