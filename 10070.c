#include<stdio.h>
int main()
{
    long long int year,a,b,c;
    while(scanf("%lld",&year)!=EOF)
    {
        a=0;
        b=0;
        c=0;
    if((year%400==0)||(year%4==0&&year%100!=0))
    {
        a=1;
        if(year%55==0)
            b=1;
    }
    if(year%15==0)
    {
        c=1;
    }
    if(a==1)
        printf("This is leap year.\n");

    if(c==1)
        printf("This is huluculu festival year.\n");
    if(b==1)
        printf("This is buluculu festival year.\n");
    if(a==0&&b==0&&c==0)
        printf("This is an ordinary year.\n");
        printf("\n");
    }
    return 0;
}
