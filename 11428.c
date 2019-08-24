#include<stdio.h>
#include<math.h>
int main()
{
    int n,x,y,p,flag,q;
    double z;
    while(scanf("%d",&n)!=EOF&&n>0)
    {
        flag=0;
        for(y=0;y*y*y<=n;y++)
        {
            z=pow((n*1.0+y*y*y*1.0),1.0/3);
            q=ceil(z);
            p=z;
            if(z==q)
            {
                flag=1;
                break;
            }
        }
        printf(" %d\n",q);
        if(flag==1)
        {
        printf("%d %d\n",y,q);
        }
        else
            printf("No solution\n");
    }
}
