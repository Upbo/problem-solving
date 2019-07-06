/* https://www.acmicpc.net/problem/11052 */ 
#include <cstdio>
int card[1001];
int m[1001];
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
        scanf("%d", &card[i]);
    }
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
            m[i]=max(m[i-j]+card[j], m[i]);
    }
    printf("%d", m[n]);
    return 0;
}