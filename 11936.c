#include<stdio.h>
int main()
{
    int n,a,b,c,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d%d%d",&a,&b,&c);
        if(a+b>c&&a+c>b&&b+c>a)
        {
            printf("OK\n");

        }
        else
            printf("Wrong!!\n");
    }
    return 0;
}
