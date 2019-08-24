#include<stdio.h>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    char num[15];
    long long int i,j,s,d,p,len;
    while(scanf("%s",&num)!=EOF)
    {
        len=strlen(num);
        sort(num,num+len);
        j=n;
        s=0;
        while(n)

        {
            s=s*10+n%10;
            n=n/10;
        }
        if(s>j)
        {
            printf("%lld - %lld = %lld = 9 * %lld\n",s,j,s-j,(s-j)/9);
        }
        else
            printf("%lld - %lld = %lld = 9 * %lld\n",j,s,j-s,(j-s)/9);

    }
    return 0;
}
