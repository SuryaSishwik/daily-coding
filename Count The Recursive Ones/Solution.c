#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int binary(int num){
    int count=0;
    while(num!=0){
        if(num%2==1){
            count++;
        }
        num/=2;
    }
    return count;

}
int main(){
    char num[100];
    scanf("%s",num);
    int count=0;
    for(int i=0;i<strlen(num);i++){
        if(num[i]=='1'){
            count++;
        }
    }
    int binarytodecimal;
    printf("%d ",count);
    while(count>1){
        count=binary(count);
        printf("%d ",count);
       
    }
}
