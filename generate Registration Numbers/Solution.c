#include <stdio.h>
#include <string.h>

int main()
{
    int year,index, digit;
    char  ch;
    scanf("%d %c", &year, &ch);
    scanf("%d %d", &index, &digit);
    
    for(int i=1; i <= index; i++)
    {
        printf("%d%c%0*d ",year,ch,digit,i);
    }
}
