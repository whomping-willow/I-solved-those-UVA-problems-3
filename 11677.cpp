#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int h1,m1,h2,m2,t1,t2;
    int t=24*60;
    while(cin>>h1>>m1>>h2>>m2)
    {
        if(h1==0&&m1==0&&h2==0&&m2==0)
        {
            break;
        }
        t1=h1*60+m1;
        t2=h2*60+m2;
        if(t1>t2)
        {
            t2+=t;
        }
        cout<<t2-t1<<endl;
    }
    return 0;

}
