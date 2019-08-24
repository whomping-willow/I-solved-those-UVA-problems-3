#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int t,i,r,l,w,x1,x2,y;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>r;
        l=(r*100)/20;
        x1=(l*45)/100;
        x2=(l*55)/100;
        w=(l*60)/100;
        y=w/2;
        cout<<"Case "<<i+1<<":"<<endl<<(x1*-1)<<' '<<y<<endl<<x2<<' '<<y<<endl<<x2<<' '<<(y*-1)<<endl<<(x1*-1)<<' '<<(y*-1)<<endl;

    }
    return 0;
}
