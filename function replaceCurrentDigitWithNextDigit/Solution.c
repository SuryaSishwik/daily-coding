#include <stdio.h>
#include <stdlib.h>

int replaceCurrentDigitWithNextDigit(int n)
{
    int rev = 0, flag = n, count = 0 ;
    while (n > 0)
    {   
        rev = (rev * 10) + 1 ;
        count++;
        if (count > 1)
        {
            rev=rev- 1 ;
        }
        if(n % 10 ==9)
        {
            printf("%d ", flag - (rev*9) ) ;
        }
        else
        {
        printf("%d ",rev + flag) ;
        }
	   n = n / 10 ;
    }
    
}
int main()
{
    int N;
    scanf("%d", &N);
    replaceCurrentDigitWithNextDigit(N) ;

    return 0;
}
