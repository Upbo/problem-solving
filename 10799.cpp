#include <cstdio>
#include <cstring>
char s[100001]={0};
int main()
{
    int open=0;
    int count=0;
    char before=0;
    scanf("%s",&s);
    for(int i=0; s[i]!=0; i++)
    {
        if(s[i]=='(') open++;
        else
        {
            open--;
            if(before=='(') count+=open;
            else count++;
        }
        before=s[i];
    }
    printf("%d", count);
    return 0;
}