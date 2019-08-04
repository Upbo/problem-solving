#include <cstdio>
int main()
{
    int x, length=64, sum=0, result=0;
    scanf("%d",&x);
    while(x)
    {
        if(length>x)
            length /= 2;
        else
        {
            result++;
            x-=length;
        }
    }
    printf("%d", result);
    return 0;
}