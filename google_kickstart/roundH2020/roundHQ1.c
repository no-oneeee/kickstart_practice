/*
After spending many hours studying for programming competitions, you decided to take a rest and play video games. You are currently playing an adventure game called Quick Start.
This game has N levels, and you are currently on the K-th level. Unfortunately, you just realized that to beat the boss at the final level, you will need a special sword, which can be picked up at level S. You have already completed that level, but you forgot to pick up the sword at that level.
Now you want to pick up the sword and finish the game in the least amount of time possible, and for that you have two options:
Restart the game and complete all levels again, starting from level 1.
Move to previous levels until you reach level S, pick up the sword and complete all the remaining levels, starting from level S.
Every time you enter a level you have to exit it, either by completing it and going to the next level or by moving to a previous level or by finishing / exiting the game. Exiting any level takes 1 minute. That means, for example, that it took you L minutes to complete the first L levels.
Your task is to discover which option would result in the least amount of total time to finish the game (including the time you have already spent).
Sample Input-
2
10 5 2
10 7 6

Sample Output-
Case #1: 15
Case #2: 12

*/
#include<stdio.h>
int main()
{
    int cases;
    scanf("%d\n",&cases);
    for(int i=1;i<=cases;i++)
    {
        unsigned int n,k,s,s1,s2;
        scanf("%d %d %d",&n,&k,&s);
        s1=k+n;
        s2=k+(k-s)+(n-s);
        if(s1<s2)
            printf("Case #%d: %d\n",i,s1);
        else
            printf("Case #%d: %d\n",i,s2);
    }
    return 0;
}

