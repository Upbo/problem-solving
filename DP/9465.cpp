#include <cstdio>
int s[2][100001];
long long dp[2][100001];
int max(int a, int b)
{
    return a>b?a:b;
}
int main()
{
    int t, n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(int i=0; i<2; i++)
            for(int j=0; j<n; j++)
                scanf("%d",&s[i][j]);
        dp[0][0]=s[0][0];
        dp[1][0]=s[1][0];
        dp[0][1]=dp[1][0]+s[0][1];
        dp[1][1]=dp[0][0]+s[1][1];
        for(int i=2;i<n;i++)
        {
            dp[0][i]=max(max(dp[1][i-2]+s[0][i],dp[1][i-1]+s[0][i]),dp[0][i-1]);
            dp[1][i]=max(max(dp[0][i-2]+s[1][i],dp[0][i-1]+s[1][i]),dp[1][i-1]);
        }
        printf("%d\n",max(dp[0][n-1],dp[1][n-1]));
    }
    return 0;
}