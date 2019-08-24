#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    long long int x,n,y,sum;
    while(cin>>x)
    {
        n=(x+1)/2;
        y=2*n*n-1;
        sum=3*(y-2);
        cout<<sum<<endl;
    }
    return 0;
}
