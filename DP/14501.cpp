#include <cstdio>
int n, t[16], p[16], dp[16];
int max(int a, int b)
{
    return a>b? a:b;
}
int solve(int day)
{
    if(day==n+1) return 0;
    if(day>n+1) return -999999;
    if(dp[day]>0) return dp[day];
    return dp[day]=max(solve(day+1), solve(day+t[day])+p[day]);
}
int main()
{
    scanf("%d",&n);
    for(int i=1; i<=n; i++) 
    {
        scanf("%d %d",&t[i],&p[i]);
    }
    int result=0;
    for(int i=1;i<=n;i++)
    {
        result=max(result,solve(i));
    }
    printf("%d", result);
    return 0;
}