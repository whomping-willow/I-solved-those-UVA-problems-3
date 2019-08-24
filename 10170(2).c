#include<stdio.h>
int main()
{
    unsigned long long s,d,sum,i,j;
    while(scanf("%llu%llu",&s,&d)!=EOF)
    {
        sum=0;
        while(1)
        {
            sum=sum+s;
            if(sum>=d)
            {
                break;
            }
             s=s+1;
        }
        printf("%llu\n",s);
    }
    return 0;
}
