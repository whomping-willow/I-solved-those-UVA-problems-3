#include<stdio.h>
#include<string.h>
int main()
{
    char s[20],e[]="HELLO",sp[]="HOLA",g[]="HALLO",f[]="BONJOUR",it[]="CIAO",r[]="ZDRAVSTVUJTE";
    int i=0;
    while(scanf("%s",s)!=EOF)
    {
        i++;
        if(s[0]=='#')
        {
            break;
        }
        if(strcmp(s,e)==0)
        {
            printf("Case %d: ENGLISH\n",i);
        }
        else if(strcmp(s,sp)==0)
        {
            printf("Case %d: SPANISH\n",i);
        }
        else if(strcmp(g,s)==0)
        {
            printf("Case %d: GERMAN\n",i);
        }
        else if(strcmp(f,s)==0)
        {
            printf("Case %d: FRENCH\n",i);
        }
        else if(strcmp(it,s)==0)
        {
            printf("Case %d: ITALIAN\n",i);
        }
        else if(strcmp(r,s)==0)
        {
            printf("Case %d: RUSSIAN\n",i);
        }
        else
            printf("Case %d: UNKNOWN\n",i);
    }
    return 0;
}
