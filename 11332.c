#include<stdio.h>
int main()
{
    int n,r,sum=0;
    while(scanf("%d",&n)!=EOF)
    {
        if(n==0)
          break;
        sum=0;
        while(1)
        {

        while(n!=0)
        {
                r=n%10;
                n=n/10;
                sum=sum+r;

        }
        if(sum>=1&&sum<=9)
        {
            printf("%d\n",sum);
            break;
        }
        else
        {
            n=sum;
            sum=0;
        }
        }


    }
    return 0;
}
