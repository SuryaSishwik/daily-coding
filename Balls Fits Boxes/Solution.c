#include<stdio.h>
int asc(int *arr,int num){
    int temp;
    for(int i=0;i<num;i++){
        for(int j=0;j<num;j++){
            if(arr[i]<arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
                
            }
        }
    }
}
int main(){
    int num;
    scanf("%d",&num);
    int box[num],ball[num];
    for(int i=0;i<num;i++){
        scanf("%d",&box[i]);
    }
    for(int i=0;i<num;i++){
        scanf("%d",&ball[i]);
    }
    asc(box,num);
    asc(ball,num);
    // to verify that whether funtion is working or not? 
    // for(int i=0;i<num;i++){
    //     printf("%d %d\n",box[i],ball[i]);
    // }
    for(int i=0;i<num;i++){
        if(box[i]<=ball[i]){
            printf("NO");
            return 0;
        }
    }
    printf("Yes");
    return 0;
    
}
