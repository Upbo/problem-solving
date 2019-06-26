#include <cstdio>

int main()
{
	int l, p, expect[5], count;
	scanf("%d %d", &l, &p);
    count=l*p;
	for(int i=0; i<5; i++) 
    {
        scanf("%d", &expect[i]);
        printf("%d ", expect[i]-count);
    }
}