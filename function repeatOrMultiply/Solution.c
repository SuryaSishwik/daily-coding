#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char* repeatOrMultiply(char *str){
    
    int i = 0 ,j = 0 , len = strlen(str);
    char num[len], s[len] ;
    
    while(str[i] != '*')
    {
        if(isdigit(str[i]))
        {
            num[j++]=str[i];
        }
        else if(isalpha(str[i]))
        {
            s[j++]=str[i];
        }
        i++;
    }
    
    j=0 ;
    i+=1 ;
    char changenum[len] ;
    int newnum,changednum;
    char *result = (char *)malloc(len * changednum + 1) ;
    
    while(str[i] != '\0')
    {
        changenum[j++] = str[i++] ;
    }
    
    sscanf(changenum,"%d",&changednum);
    
    if(isdigit(str[0]))
    {
        sscanf(num,"%d",&newnum);
        changednum*=newnum;
        sprintf(result,"%d",changednum);
    }
    
    else if(isalpha(str[0]))
    {
        for(i = 1; i <= changednum; i++ )
        {
            strcat(result,s);
        }
    }
    return result;
}

int main()
{
    char str[101];
    scanf("%s", str);
    char *result = repeatOrMultiply(str) ;
    if(result == NULL || result == str)
    {
        printf("String is not formed\n");
    }
    if (result [0] == '\0' || result[0] == ' ')
    {
        printf( "String is empty\n");
    }
    printf("%s", result);
    
    return 0;
}
