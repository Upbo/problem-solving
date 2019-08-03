#include <cstdio>
long long dp[31][31]={0};
void solve()
{
    for(int i=0; i<31; i++)
        dp[1][i]=i;
    for(int i=2; i<31; i++)
        for(int j=i; j<31; j++)
            for(int k=j-1; k>=i-1; k--)
                dp[i][j]+=dp[i-1][k];
}
int main()
{
    solve();
    int t, n, m;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d", &n, &m);
        printf("%d\n", dp[n][m]);
    }
    return 0;
}