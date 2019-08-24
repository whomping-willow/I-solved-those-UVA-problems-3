#include<stdio.h>
int main()
{
    int a,b,c,count,t,cas,m;
    scanf("%d",&t);
    for(count=0;count<t;count++)
    {

        cas=count+1;
        scanf("%d%d%d",&a,&b,&c);
        if(a>b)
        {
            if(b>c)
               m=b;
            else if(a>c)
               m=c;
            else
             m=a;
        }

        else if(a>c)

            m=a;
            else if(b>c)
            m=c;
            else
           m=b;
           printf("Case %d: %d",cas,m);
           printf("\n");

    }
return 0;
}
