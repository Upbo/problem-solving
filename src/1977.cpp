#include <cstdio>
int main()
{
    int m, n, sum=0, min=9999999;
    scanf("%d %d", &m,&n);
    for(int i=1; i*i<=n; i++)
    {
        if(i*i>=m) 
        {
            sum+=i*i;
            if(min>i*i)
                min=i*i;
        }
    }
    if(sum)
    {
        printf("%d\n", sum);
        printf("%d", min);
    }
    else
        printf("%d", -1);
    return 0;
}