// Peter is organizing an event in his University. The event will be in April month, beginning and finishing within April month. The problem is: Peter wants to calculate the event duration in seconds, knowing obviously the begin and the end time of the event.

// You know that the event can take from few seconds to some days, so, you must help Peter to compute the total time corresponding to duration of the event.

// Input
// The first line of the input contains information about the beginning day of the event in the format: “Dia xx”. The next line contains the start time of the event in the format presented in the sample input. Follow 2 input lines with same format, corresponding to the end of the event.

// Output
// Your program must print the following output, one information by line, considering that if any information is null for example, the number 0 must be printed in place of W, X, Y or Z:

// W dia(s)
// X hora(s)
// Y minuto(s)
// Z segundo(s)

// Obs: Consider that the event of the test case have the minimum duration of one minute. “dia” means day, “hora” means hour, “minuto” means minute and “Segundo” means second in Portuguese.

#include <stdio.h>

int main()
{
    int start_days, start_hours, start_minutes, start_seconds;
    int end_days, end_hours, end_minutes, end_seconds;

    printf("Dia ");
    scanf("%d", &start_days);
    scanf("%d %d %d", &start_hours, &start_minutes, &start_seconds);
    printf("Dia ");
    scanf("%d", &end_days);
    scanf("%d %d %d", &end_hours, &end_minutes, &end_seconds);

    int days = end_days - start_days;
    int hours = end_hours - start_hours;
    int minutes = end_minutes - start_minutes;
    int seconds = end_seconds - start_seconds;

    if (seconds < 0)
    {
        seconds = seconds + 60;
        minutes--;
    }
    if (minutes < 0)
    {
        minutes = minutes + 60;
        hours--;
    }
    if (hours < 0)
    {
        hours = hours + 24;
        days--;
    }

    printf("%d dia(s)\n", days);
    printf("%d hora(s)\n", hours);
    printf("%d minuto(s)\n", minutes);
    printf("%d segundo(s)\n", seconds);

    return 0;
}