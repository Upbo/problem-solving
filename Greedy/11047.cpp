#include <cstdio>
int c[11];
int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    for(int i=1; i<=n; i++)
    {
        scanf("%d", &c[i]);
    }
    int result=0;
    for(int i=n; i>=1; i--)
    {
        result+=k/c[i];
        k%=c[i];
    }
    printf("%d", result);
    return 0;
}