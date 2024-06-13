#include<stdio.h>
#include<stdlib.h>
int count(int num){
    int count1=0;
        while(num!=0){
            num/=10;
            count1++;
        }
        return count1;
}
int main(){
    int arr[1000],i=0,diff=0,diff1=0;
    while(scanf("%d",&arr[i])==1){
        i++;
    }
    int rem=(i/2);
    int start=0;
    for(int n=0;n<rem;n++){
        if(count(arr[n])!=count(arr[n+rem])){
            printf("No");
            return 0;
        }
    }
    for(int n=0;n<rem;n++){
            diff+=arr[n];
            diff1+=arr[n+rem];
    }
    printf("Yes\n%d %d",diff,diff1);
    return 0;
}
