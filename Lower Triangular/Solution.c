#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, sum;
    scanf("%d", &num);
    
    int arr[num][num];
    
    for(int i=0; i<num; i++)
    {
        for(int j=0; j<num; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for(int i=0; i<num; i++)
    {
        for(int j=0; j<i; j++)
        {
            sum += arr[i][j];
        }
    }
    printf("%d", sum);
}
