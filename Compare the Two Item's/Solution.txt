#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
void tollower(char *ch){
    for(int i=0;ch[i]!='\0';i++){
        ch[i]=tolower(ch[i]);
    }
}
int main(){
    char ch[100],ch1[100];
    int num,num1,num2,num3;
    scanf("%s %d %d\n",ch,&num,&num1);
    scanf("%s %d %d",ch1,&num2,&num3);
    tollower(ch);
    tollower(ch1);
    if(strcmp(ch,ch1)!=0){
        printf("Not same");
    }
    else{
        if(num==num2&&num1==num3){
            printf("Both items have same name, same weight and same price");
        }
        else if(num==num2){
            printf("Both items have same name and same weight.");
        }
        else if(num1==num3){
            printf("Both items have same name and same price.");
        }
        else{
            printf("Both items have same name");
        }
    }
}
    
