#include<stdio.h>
#include<string.h>
int year(char n[],int x)
{
    int i,sum,m,len;
    len=strlen(n);
    m=n[0]-'0';
    for(i=0;i+1<len;i++)
    {
        sum=n[i]-'0';
        sum=m*10+(n[i+1]-'0');
        m=sum%x;
    }
    if(m==0)
        return 1;
    else
        return 0;
}
int main()
{
    char y[10000];
    int flag1,flag2;
    while(scanf("%s",y)==1)
    {
        if(flag1==1)
            printf("\n");
        flag1=0;
        flag2=0;
        if(year(y,4)==1&&year(y,100)==0||year(y,400)==1)
        {
            printf("This is leap year.\n");
            flag1=1;
            flag2=1;
        }
        if(year(y,15)==1)
        {
            printf("This is huluculu festival year.\n");
            flag1=1;
        }
        if(flag2==1&&year(y,55)==1)
        {
            printf("This is bulukulu festival year.\n");
            flag1=1;
        }
        if(flag1!=1&&flag2!=1)
        {
            printf("This is an ordinary year.\n\n");
        }
    }
    return 0;
}
