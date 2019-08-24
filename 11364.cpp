#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
      int t,i,ara[25],j,n;
      scanf("%d",&t);
      for(i=0;i<t;i++)
      {
          int sum=0;
          scanf("%d",&n);
          for(j=0;j<n;j++)
          {
              scanf("%d",&ara[j]);
          }
          sort(ara,ara+n);
          for(j=0;j+1<n;j++)
          {
              if(ara[j]>ara[j+1])
              {
                  sum=sum+ara[j]-ara[j+1];
              }
              else
                sum=sum+ara[j+1]-ara[j];
          }
          sum=sum*2;
          printf("%d\n",sum);

      }
      return 0;
}
