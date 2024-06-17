#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
int time(int hours,int minutes,int seconds)
{
    int sum=0;
    sum=hours*60*60+minutes*60+seconds;
    return sum;
}
typedef struct time
{
    int hours, minutes, seconds;
} Time;
int main()
{
    Time time1, time2, time3, time4;
    scanf("%d:%d:%d", &time1.hours, &time1.minutes, &time1.seconds);
    scanf("%d:%d:%d", &time2.hours, &time2.minutes, &time2.seconds);
    scanf("%d:%d:%d", &time3.hours, &time3.minutes, &time3.seconds) ;
    scanf("%d:%d:%d", &time4.hours, &time4.minutes, &time4.seconds);

    printf("%d\n",time(time1.hours, time1.minutes, time1.seconds));
    printf("%d\n",time(time1.hours, time1.minutes, time1.seconds)+time(time2.hours, time2.minutes, time2.seconds));
    printf("%d\n",time(time1.hours, time1.minutes, time1.seconds)+time(time2.hours, time2.minutes, time2.seconds)+time(time3.hours, time3.minutes, time3.seconds));
    printf("%d\n",time(time1.hours, time1.minutes, time1.seconds)+time(time2.hours, time2.minutes, time2.seconds)+time(time3.hours, time3.minutes, time3.seconds)+time(time4.hours, time4.minutes, time4.seconds));

    return 0;
}
