#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,t,sum1,sum2,ara[25];
   char s[25];
   scanf("%d",&n);
   getchar();
   while(n--)
   {
       gets(s);
       for(i=0;i<19;i++)
       {
           ara[i]=(s[i]-'0')*2;
       }
       sum1=ara[0]%10+ara[0]/10+ara[2]%10+ara[2]/10+ara[5]%10+ara[5]/10+ara[7]%10+ara[7]/10+ara[10]%10+ara[10]/10+ara[12]%10+ara[12]/10+ara[15]%10+ara[15]/10+ara[17]%10+ara[17]/10;
       sum2=(ara[1]+ara[3]+ara[6]+ara[8]+ara[11]+ara[13]+ara[16]+ara[18])/2;
       t=(sum1+sum2)%10;
       if(t)
       {
           printf("Invalid\n");
       }
       else
       {
        printf("Valid\n");
       }
   }
   return 0;

}
