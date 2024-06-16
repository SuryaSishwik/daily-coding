#include<stdio.h>

int main() {
    int N, K;
    scanf("%d %d", &N, &K);
    
    int count = 1, flag = 1, num = 1;
    while(count < K) {
        printf("%d ", num);
        num += flag;
        if(count%N == 0){
            if(flag == 1){
                num = count + N;
            } else {
                num = count + 1;
            }
            flag *= -1;
        }
        count += 1;
    }
    printf("\n%d", num);
}
