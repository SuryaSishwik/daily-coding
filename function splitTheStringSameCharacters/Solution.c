#include <stdio.h>
#include <string.h>

void splitTheStringSameCharacters(char *str)
{
    int len=strlen(str);

    for (int i = 0; i<len; i++)
    {
        printf("%c", str[i]);
        if (i<len-1 && str[i]==str[i + 1])
        {
            if (i+2<len && str[i+2]==str[i])
            {
                while (i+1<len && str[i+1]==str[i])
                {
                    printf("%c", str[++i]);
                }
            }
            else
            {
                printf(" %c", str[++i]);
            }
        }
    }
    printf("\n");
}

int main()
{
    char str[1001];
    scanf("%s", str);

    splitTheStringSameCharacters(str);

    return 0;
}
