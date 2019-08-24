#include<stdio.h>
#include<string.h>
int main()
{
    char s[105];
    int i,j,d,len;
    while(scanf("%s",s)!=EOF)
    {
        len=strlen(s);
        d=0;
        if(s[0]=='0'&&s[1]=='\0')
            {
                break;
            }
        for(i=0;i<len;i++)
        {
            d=d*10+s[i]-'0';
            d=d%17;
        }
        if(d==0)
        {
            printf("1\n");
        }
        else
            printf("0\n");
    }
    return 0;
}
