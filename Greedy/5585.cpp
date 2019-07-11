#include <cstdio>
int c[6]={1,5,10,50,100,500};
int main()
{
    int n, result=0;
    scanf("%d",&n);
    n=1000-n;
    for(int i=5; i>=0; i—-)
    {
        result+=n/c[i];
        n%=c[i];
    }
    printf("%d", result);
    return 0;
}