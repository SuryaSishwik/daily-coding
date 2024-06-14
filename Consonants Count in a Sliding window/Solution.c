#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
void lower(char *ch){
    for(int i=0;ch[i]!='\0';i++){
        ch[i]=tolower(ch[i]);
    }
}
int isvowel(char *ch,int str,int num){
    int count=0;
    for(int i=str;i<str+num;i++){
        if(ch[i]=='a'||ch[i]=='e'||ch[i]=='i'||ch[i]=='o'||ch[i]=='u'){
        }
        else{
            count++;
        }
    }
    return count;
}
int main(){
    int num;
    scanf("%d",&num);
    char ch[100];
    scanf("%s",ch);
    lower(ch);
    for(int i=0;i<strlen(ch)-num+1;i++){
        printf("%d ",isvowel(ch,i,num));
    }
}
