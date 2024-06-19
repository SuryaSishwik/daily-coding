#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    int A[N][N];
    int row, col, sum = 0;

    for(row = 0; row < N; row++)
    {
        for(col = 0; col < N; col++)
        {
            scanf("%d", &A[row][col]);
        }
    }

    for(row = 0; row < N; row++)
    {
        for(col = 0; col < N; col++)
        {
            if(col < row)
            {
                sum += A[row][col];
            }
        }
    }

    printf("%d\n", sum);
