#include<stdio.h>
#include<string.h>
int main()
{
    char ara[1004];
    int i,j,d,len;
    while(scanf("%s",ara)!=EOF)
    {
      len=strlen(ara);
      if(ara[0]=='0'&&ara[1]=='\0')
      {
          break;
      }
      d=0;
      for(i=0;i<len;i++)
      {
          d=d*10+ara[i]-'0';
          d=d%11;
      }

        if(d==0)
        {
          printf("%s is a multiple of 11.\n",ara);
        }
        else
            printf("%s is not a multiple of 11.\n",ara);
    }
    return 0;
}
