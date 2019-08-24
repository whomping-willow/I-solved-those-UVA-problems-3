#include<stdio.h>
#include<string.h>
int main()
{
    char ara[605],piz[6]={"MARGIT"};
    int num[6];
    int i,j,k,n,len,count;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int num[6]={0};
        count=0;
        scanf("%s",ara);
        len=strlen(ara);
        for(j=0;j<len;j++)
        {
            for(k=0;k<6;k++)
            {
                if(ara[j]==piz[k])
                {
                   num[k]++;
                }
            }
        }
        while(1)
        {
        if(num[0]>=1&&num[1]>=3&&num[2]>=2&&num[3]>=1&&num[4]>=1&&num[5]>=1)
        {
            count++;
            num[0]-=1;
            num[1]-=3;
            num[2]-=2;
            num[3]-=1;
            num[4]-=1;
            num[5]-=1;
        }
        else
            break;
        }
        printf("%d\n",count);
    }
    return 0;
}
