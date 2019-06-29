/* https://www.acmicpc.net/problem/6321 */
#include <cstdio>
#include <string>

int main()
{
    int n;
    char tmp[51];
    scanf("%d", &n);
    for(int i=1; i<=n; i++)
    {
        scanf("%s", tmp);
        std::string s(tmp);
        printf("String #%d\n", i);
        for(int j=0; j<s.size(); j++)
        {
            printf("%c", (s[j]-'A'+1)%26+'A';
        }
        printf("\n\n");
        
    }
    return 0;
}