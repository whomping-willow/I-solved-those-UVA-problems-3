#include<stdio.h>
int repeat(int n)
{
    int r,i,flag=0,ara[11]={0};
    while(n)
    {
        r=n%10;
        ara[r]++;
        n=n/10;
    }
    for(i=0;i<=9;i++)
    {
        if(ara[i]>1)
        {
            flag=1;
        }
    }
    if(flag==0)
    {
        return 1;
    }
    else
        return 0;
}
int main()
{
    int n,m,i,count;
    while(scanf("%d%d",&n,&m)==2)
    {
        count=0;
    for(i=n;i<=m;i++)
    {
      if(repeat(i)==1)
      {
          count++;
      }
    }
    printf("%d\n",count);
    }
    return 0;

}
