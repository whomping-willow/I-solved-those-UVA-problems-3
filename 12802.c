#include<stdio.h>
#include<math.h>
int prime(int n)
{
    int i,j,flag=0;
    for(i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
        return 1;
    else
        return 0;
}
int pal(int n)
{
    int r,s,j;
    j=n;
    s=0;
    while(n)
    {
        r=n%10;
        s=s*10+r;
        n=n/10;
    }
    if(s==j)
    {
        return 1;
    }
    else
        return 0;
}
int main()
{
  int n,p,j;
  while(scanf("%d",&n)!=EOF)
  {
      p=2*n;
    if(n==1)
      {
          printf("%d\n",p);
      }
       else if(prime(n)==1&&pal(n)==1)
      {
        printf("%d\n",p);
        break;
      }
      else
        printf("%d\n",p);
  }
  return 0;
}
