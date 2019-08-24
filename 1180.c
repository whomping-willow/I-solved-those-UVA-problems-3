#include<stdio.h>
int main()
{
    int n,i;
    char ch;
    scanf("%d",&n);
    int p[n+5];
    for(i=0;i<n;i++)
    {
        scanf("%d",&p[i]);
        if(i<n-1)
        {
            scanf("%c",&ch);
        }
    }
    for(i=0;i<n;i++)
    {
        if(p[i]==2||p[i]==3||p[i]==5||p[i]==7||p[i]==13||p[i]==17)
        {
            printf("Yes\n");
        }
        else
            printf("No\n");
    }

}
