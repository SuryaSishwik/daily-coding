#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
char count(char *num){
    int count1=0,count2=0,len=strlen(num);
    for(int i=0;i<len;i++){
        if(num[i]=='0'){
            count1++;
        }
        else{
            count2++;
        }
    }
    if(count1==count2){
        return 1;
    }
    return 0;
}
int main(){
    char num[100];
    scanf("%s",num);
    int len=strlen(num);
    if(count(num)){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}
