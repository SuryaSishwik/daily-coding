#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
void converter(char *ch,int *arr){
    for(int i=0;ch[i]!='\0';i++){
        ch[i]=tolower(ch[i]);
         if(ch[i]=='a'||ch[i]=='e'||ch[i]=='i'||ch[i]=='o'||ch[i]=='u'){
            arr[i]=0;
        }
        else{
            arr[i]=1;
        }
    }
}
int main(){
    int num;
    scanf("%d",&num);
    char ch[100];
    scanf("%s",ch);
    int len=strlen(ch),arr[100],count=0;
    converter(ch,arr);
    for(int i=0;i<len-num+1;i++){
        count=0;
        for(int j=i;j<i+num;j++){
            count+=arr[j];
        }
        printf("%d ",count);
    }
}
