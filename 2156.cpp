/* https://www.acmicpc.net/problem/2156 */
#include <cstdio>
int grape[10001];
int dp[10001];
int max(int a, int b)
{
    return a>b? a:b;
}
int main()
{
    int n;
    scanf("%d", &n);
    for(int i=1; i<=n; i++)
    {
        scanf("%d", &grape[i]);
    }
    dp[0]=0;
    dp[1]=grape[1];
    dp[2]=dp[1]+grape[2];
    for(int i=3; i<=n; i++)
    {
        dp[i]=max(dp[i-2]+grape[i], dp[i-3]+grape[i-1]+grape[i]);
        dp[i]=max(dp[i-1], dp[i]);
    }
    printf("%d", dp[n]);
    return 0;
}