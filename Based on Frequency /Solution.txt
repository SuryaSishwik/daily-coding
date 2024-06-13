#include<stdio.h>
#include<stdlib.h>
int main(){
    char ch;
    int num;
    int arr[1000]={0};
    while(scanf("%c%d",&ch,&num)==2)
    {
        for(int i=arr[ch];i<num;i++)
        {
            printf("%c",ch);
        }
        arr[ch]=num;
    }
}
