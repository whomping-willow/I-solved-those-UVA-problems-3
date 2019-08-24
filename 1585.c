#include<stdio.h>
#include<string.h>
int main()
{
    int t,i,count,a,j,len;
    char ara[90];
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        count=0;
        a=1;
       scanf("%s",ara);
       len=strlen(ara);
       for(j=0;j<len;j++)
       {
           if(ara[j]=='O')
           {
              count=count+a;
              a=a+1;
           }
           else
           {
               a=1;
           }
       }
       printf("%d\n",count);
    }
    return 0;
}
