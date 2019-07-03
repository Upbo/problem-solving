/* https://www.acmicpc.net/problem/10844 */
#include <cstdio>

long arr[101][11];
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1; i<=9; i++)
    {
        arr[1][i]=1;
    }
    for(int i=2; i<=n; i++)
    {
        arr[i][0]= arr[i-1][1];
        for(int j=1; j<=9; j++)
        {
            arr[i][j]=(arr[i-1][j-1]+arr[i-1][j+1]) %1000000000;
        }
    }
    
    long result=0;
    for(int i=0; i<=9; i++)
        result +=arr[n][i];
    printf("%ld", result %1000000000);   
    return 0;
}