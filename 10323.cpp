#include<iostream>
#include<cstdio>
#include<bits/stdc++.h>
using namespace std;
long long int  fact(long long int n)
{
    if(n==0)
        return 1;
    return n*fact(n-1);
}
int main()
{
    long long int a,n;
    while(cin>>n)
    {
        if(n<0)
        {
            if(n%2==0)
            cout<<"Underflow!"<<endl;
            else
                 cout<<"Overflow!"<<endl;

        }
        else if(n>13)
        {
            cout<<"Overflow!"<<endl;
        }
        else if(n<8)
        {
            cout<<"Underflow!"<<endl;

        }
        else
        {
            a=fact(n);
            cout<<a<<endl;
        }
    }
    return 0;


}
