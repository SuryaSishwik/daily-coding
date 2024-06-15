#include<stdio.h>
#include<stdlib.h>

int main(){
    int n,m,a;
    scanf("%d %d %d",&n,&m,&a);
    int ballon[n],jersey[m];
    
    for(int i=0;i<n;i++)
    {
        scanf("%d ",&ballon[i]);
    }
    for(int i=0;i<n;i++)
    {
        scanf("%d ",&jersey[i]);
    }
    int count=0;
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<n;j++){
            if(ballon[j]%jersey[i]==0){
                ballon[j]=-1;
                if(i==(a-1)){
                    count++;
                }
            }
        }
    }
    printf("%d",count);
}
