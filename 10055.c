#include<stdio.h>
int main()
{
    long long int team,opponent,diff,temp;
    while(scanf("%lld%lld",&team,&opponent)!=EOF)
    {
        if(opponent<team)
        {
            temp=opponent;
            opponent=team;
            team=temp;
        }
        diff=opponent-team;
        printf("%lld\n",diff);
    }
    return 0;
}
