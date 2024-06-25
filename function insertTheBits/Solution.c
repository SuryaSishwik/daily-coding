#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int BinarytoNum(char *str)
{
    int temp = 0;
    int len = strlen(str);
    for(int i = 0; i < len; i++)
    {
        if(str[len - 1 - i] == '1')
        {
            temp += pow(2, i);
        }
    }
    return temp;
}
char*  NumtoBinary(int num)
{
    int i=0;
    char *result = (char*)malloc(100);
    while(num > 0)
    {
        result[i++]=num%2+'0';
        num/=2;
    }
    int len = i;
    char *temp = (char*)malloc(len + 1);
    
    for (int j = 0; j < len; j++)
    {
        temp[j] = result[len - j - 1];
    }
    
    return temp;
}
int main()
{
    int n1, n2 ;
    scanf("%d %d", &n1, &n2) ;
    char *result1 = NumtoBinary(n1) ;
    char *result2 = NumtoBinary(n2) ;
    
    int len1 = strlen(result1), len2 = strlen(result2), j = 0;
    
    char *temp = (char *)malloc(len1+len2+1);
    
    for(int i = len1 - 1; i >= 0; i--)
    {
        if(result1[i] == '1')
        {
            for(j = 0; j <= i; j++)
            {
                temp[j] = result1[j];
            
            }
            strcat(temp,result2);
            for(int k = j; j < len1; j++)
            {
                strcat(temp,"0"); 
            }
            break;
        }
    }
    printf("%d",BinarytoNum(temp));
}
