#include<stdio.h>

int main() {
    int N, K;
    scanf("%d %d", &N, &K);
    
    int arr[N+K], count = 0, flag = 1;
    while(count <= K) {
        int start, end;
        if(flag == 1) {
            start = count + 1;
            end = count + N + 1;
            for(int i = start; i < end; i++) {
                arr[count++] = i;
                printf("%d ", arr[count-1]);
            }
        } else {
            start = count + N;
            end = count + 1;
            for(int i = start; i >= end; i--){
                arr[count++] = i;
                printf("%d ", arr[count-1]);
            }
        }
        printf("\n");
        flag *= -1;
    }
    printf("%d", arr[K-1]);
}
