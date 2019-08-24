#include<stdio.h>
int main()
{
    int t,i,r,sum[20],dig[20],a,b,c,d,j,l,m;
    scanf("%d",&t);
    for(m=0;m<t;m++)
    {
        scanf("%d%d%d%d",&a,&b,&c,&d);
        i=0;
        while(a)
        {
            r=a%10;
            dig[i]=r;
            a=a/10;
            i++;
        }
        while(b)
        {
            r=b%10;
            dig[i]=r;
            b=b/10;
            i++;
        }
        while(c)
        {
            r=c%10;
            dig[i]=r;
            c=c/10;
            i++;
        }
        while(d)
        {
            r=d%10;
            dig[i]=r;
            d=d/10;
            i++;
        }
        dig[i]=0;
        i++;
        dig[i]=0;
        printf("%d\n",i);
        int k=0;
        int s2=0;
        int s1=0;
        for(j=i;j>=0;j--)
        {
            if(j%2==0)
            {
                sum[k]=2*dig[j];
                k++;
            }
            else
                s2=s2+dig[j];
        }
        for(l=0;l<k;l++)
        {
            while(sum[l])
            {
                s1=s1+sum[l]%10;
                sum[l]=sum[l]/10;
            }
        }
        int s=s1+s2;
        printf("%d\n",s);
        if(s%10==0)
        {
            printf("Invalid\n");

        }
        else
            printf("Valid\n");
    }
}
