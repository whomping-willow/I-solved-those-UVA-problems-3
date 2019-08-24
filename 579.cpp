#include<iostream>
#include<cstdio>
#include<math.h>
#include<stdio.h>
using namespace std;
int main()
{

    float dg,dh,dm,h,m;
    char c;
    while(cin>>h>>c>>m)
    {
        if(h==0&&m==0)
        {
            break;
        }
        dm=6*m;
        dh=30*h+(dm/12);
        if(dh>dm)
        {
            dg=dh-dm;
        }
        else
            dg=dm-dh;
        if(dg>180)
        {
            dg=360-dg;
        }
        printf("%.3f\n",dg);
    }
    return 0;
}
