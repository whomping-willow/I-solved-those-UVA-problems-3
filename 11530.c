#include<stdio.h>
#include<string.h>
int main()
{
    int t,i,j,sum,k,len,num[26]={1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,4,1,2,3,1,2,3,4};
    char sms[103],a[26]={"abcdefghijklmnopqrstuvwxyz"};
    scanf("%d",&t);
    getchar();
    for(i=1;i<=t;i++)
    {
        sum=0;
        gets(sms);

        len=strlen(sms);
        for(j=0;j<len;j++)
        {
            for(k=0;k<26;k++)
            {
               if(sms[j]==a[k])
               {
               sum=sum+num[k];
               break;
               }
               if(sms[j]==' ')
               {
               sum=sum+1;
               break;
               }
            }
        }
        printf("Case #%d: %d\n",i,sum);

    }
    return 0;
}
