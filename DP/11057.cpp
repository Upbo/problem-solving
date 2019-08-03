#include <cstdio>
long long dp[1001][10];
int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0; i<10; i++)
    {
        dp[1][i]=1;
    }
    for(int i=2; i<=n; i++)
    {
        for(int j=0; j<10; j++)
        {
            for(int k=j; k<10; k++)
            {
                dp[i][k]+=dp[i-1][j];
                dp[i][k]%=10007;
            }
        }
    }
    int result=0;
    for(int i=0; i<10; i++)
        result+=dp[n][i];
    printf("%d",result%10007);
    return 0;
}