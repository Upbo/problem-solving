/* https://www.acmicpc.net/problem/9507 */
#include <cstdio>
long long koong[68];
int main()
{
    int t, n;
    scanf("%d", &t);
    koong[0]=koong[1]=1;
    koong[2]=2;
    koong[3]=4;
    for(int i=0; i<t; i++)
    {
        scanf("%d", &n);
        for(int j=4; j<=n; j++)
        {
            koong[j]=koong[j-1]+koong[j-2]+koong[j-3]+koong[j-4];
        }
        printf("%lld\n", koong[n]);
    }
    return 0;
}