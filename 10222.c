#include<stdio.h>
#include<string.h>
int main()
{
    char k1[]={"qwertyuiop[]asdfghjkl;'\\zxcvbnm,./`1234567890-="},s[100];
    int i,j,len;
    gets(s);
    len=strlen(s);
    for(i=0;i<len;i++)
    {
        for(j=0;j<47;j++)
        {
            if(s[i]==k1[j]||s[i]==k1[j]-32)
            {
                s[i]=k1[j-2];
                break;
            }

        }
    }
    printf("%s",s);
    return 0;
}
