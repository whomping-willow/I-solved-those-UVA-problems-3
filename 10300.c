#include<stdio.h>
int main()
{
    int t,farmer,animal,env,yard,sum,i,j;
    scanf("%d",&t);
        for(i=0;i<t;i++)
        {
            sum=0;
            scanf("%d",&farmer);
            for(j=0;j<farmer;j++)
            {
                scanf("%d%d%d",&yard,&animal,&env);
                sum=sum+(yard*env);
            }
            printf("%d\n",sum);
        }

    return 0;
}
