#include<stdio.h>
int main()
{
    unsigned long long s,d,i,j;
    while(scanf("%llu%llu",&s,&d)!=EOF)
    {
        j=0;
        for(i=1;i<=d;i++)
        {
          if(j==s)
          {
              j=0;
              s=s+1;
          }
          j=j+1;
        }
        printf("%llu\n",s);
    }
}
