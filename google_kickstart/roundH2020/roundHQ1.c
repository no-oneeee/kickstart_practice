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

