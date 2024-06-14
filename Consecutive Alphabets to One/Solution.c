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
int binary(int *num,int count){
    int i=0,rem=0,sum=0;
    for(int i=count-1,j=0;i<=0,j<count;j++,i--){
        rem=num[i]*(pow(2,j));
        sum+=rem;
    }
    return sum;
}
int main(){
    char ch[100];
    int arr[100];
    scanf("%s",ch);
    lower(ch);
    for(int i=0;i<strlen(ch);i++){
            if(ch[i]==ch[i+1]){
                arr[i]=1;
                arr[i+1]=1;
                i++;
            }
            else{
                arr[i]=0;
            }
    }
    // for checking the binary number.
    // for(int i=0;i<strlen(ch);i++){
    //     printf("%d",arr[i]);
    // }
    int count=strlen(ch);
    printf("%d",binary(arr,count));
}
