/* https://www.acmicpc.net/problem/6359 */
#include <cstdio>

int main()
{
    int t, n;
    scanf("%d",&t);
    for(int i=0; i<t; i++)
    {
        scanf("%d", &n);
        bool dp[101] ={false};
        for(int j=1; j<=n; j++)
        {
            for(int k=j; k<=n; k+=j)
                dp[k] = !dp[k];
       
        }
        int result=0;
        for(int j=1; j<=n; j++)
        {
            result += dp[j];
        }
        printf("%d\n", result);
    }
    return 0;
}