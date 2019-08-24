#include<stdio.h>
#include<math.h>
int main()
{
    int n,sum,t,i,j,k;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        sum=0;
        scanf("%d",&n);
        k=n;
        for(j=1;j<n;j++)
        {
            if(n%j==0)
            {
                sum=sum+j;
            }
        }
        if(k==sum)
        {
            printf("perfect\n");
        }
        else if(sum>k)
        {
            printf("abundant\n");
        }
        else
            printf("deficient\n");
    }
    return 0;

}
