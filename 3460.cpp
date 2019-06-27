// https://www.acmicpc.net/problem/3460

#include <cstdio>

int main()
{
    int t, n, bit, index;
    scanf("%d", &t);
    while(t>0)
    {
        bit = 1;
        index=0;
        scanf("%d", &n);
        t--;
        while(n>=bit)
        {
            if(n&bit)
                printf("%d ", index);
            bit=bit<<1;
            index++;
        }
        printf("\n");
    }
    return 0;
    
}