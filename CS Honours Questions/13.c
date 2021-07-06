// Question 13
// Write a C program to find the difference between two 
// user given times. The times must be saved in a structure.

#include <stdio.h>

struct time
{
    int hours;
    int mins;
    int seconds;
};

void CalculateDiffInTime(struct time t1, struct time t2, struct time* diff)
{
    // hours
    diff->hours = (t2.hours - t1.hours);
    if (diff->hours < 0) diff->hours *= -1;

    // minutes
    if (t2.mins - t1.mins >= 0)
        diff->mins = t2.mins - t1.mins;
    else if (t2.mins - t1.mins < 0)
    {
        diff->hours -= 1;
        diff->mins = (t2.mins+60) - t1.mins;
    }

    // seconds
    if (t2.seconds - t1.seconds >= 0)
        diff->seconds = t2.seconds - t1.seconds;
    else if (t2.seconds - t1.seconds < 0)
    {
        diff->mins -= 1;
        diff->seconds = (t2.seconds+60) - t1.seconds;
    }
}

int main()
{
    struct time t1, t2, diff;

    // Taking Input
    printf("Enter time in hours(24 hr format), minutes(0-59), seconds(0-59) respectively");
    // time 1
    printf("\nTime 1 -----\n");
    printf("Hours : ");
    scanf("%d", &t1.hours);
    printf("Minutes : ");
    scanf("%d", &t1.mins);
    printf("Seconds : ");
    scanf("%d", &t1.seconds);
    // time 2
    printf("\nTime 2 -----\n");
    printf("Hours : ");
    scanf("%d", &t2.hours);
    printf("Minutes : ");
    scanf("%d", &t2.mins);
    printf("Seconds : ");
    scanf("%d", &t2.seconds);

    if (t2.hours >= t1.hours)
        CalculateDiffInTime(t1, t2, &diff);
    else if (t1.hours > t2.hours)
        CalculateDiffInTime(t2, t1, &diff);

    // Printing
    printf("Time Difference between");
    printf(" [%d:%d:%d] and",t1.hours, t1.mins, t1.seconds);
    printf(" [%d:%d:%d] is ---",t2.hours, t2.mins, t2.seconds);
    printf(" [%d:%d:%d]",diff.hours, diff.mins, diff.seconds);

    return 0;
}