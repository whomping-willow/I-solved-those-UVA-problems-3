#include<stdio.h>
int main()
{
    unsigned long long int n,i,ara[5003];
        ara[0]=0;
        ara[1]=1;
        for(i=2;i<=5000;i++)
        {
                ara[i]=ara[i-1]+ara[i-2];
                ara[i]=ara[i];
                printf("%llu\n",ara[i]);
        }
        return 0;
}
        /*
        while(scanf("%llu",&n)!=EOF)
        {
            if(n==0)
            {
                printf("The Fibonacci number for 0 is 0\n");
            }
            else if(n==1)
            {
                printf("The Fibonacci number for 1 is 1\n");
            }
            else
           printf("The Fibonacci number for %llu is %llu\n",n,ara[n]);
        }

    return 0;
} */
