/* https://www.acmicpc.net/problem/2579 */ 
#include <cstdio>
int stair[301];
int dp[301];
int max(int a, int b)
{
    return a>b ? a : b;
}
int main()
{
    int n;
    scanf("%d", &n);
    for(int i=1; i<=n; i++)
    {
        scanf("%d",&stair[i]);
    }
    dp[1]=stair[1];
    dp[2]=stair[1]+stair[2];
    for(int i=3; i<=n; i++)
    {
        dp[i]=max(dp[i-2]+stair[i], dp[i-3]+stair[i-1]+stair[i]);
    }
    printf("%d", dp[n]);
    return 0;
}