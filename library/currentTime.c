#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// wrap the multiple values into a struct
struct TuplePhuong {
    int hour, minute, second ;
};
 
// Function to return multiple values using struct
struct TuplePhuong getCurrentTime(){

    //
    int hours, minutes, seconds, day, month, year;
    time_t now;
    time(&now);
    printf("Today is %s", ctime(&now));
 
    struct tm *local = localtime(&now);
 
    hours = local->tm_hour;         // get hours since midnight (0-23)
    minutes = local->tm_min;        // get minutes passed after the hour (0-59)
    seconds = local->tm_sec;        // get seconds passed after a minute (0-59)
 
    day = local->tm_mday;            // get day of month (1 to 31)
    month = local->tm_mon + 1;      // get month of year (0 to 11)
    year = local->tm_year + 1900;   // get year since 1900
    /*
    if (hours < 12) {    // before midday
        printf("Time is %02d:%02d:%02d am\n", hours, minutes, seconds);
    }
    else {    // after midday
        printf("Time is %02d:%02d:%02d pm\n", hours - 12, minutes, seconds);
    }
    */
    printf("Date is: %02d/%02d/%d\n", day, month, year);
 

    //
    struct TuplePhuong t = { hours, minutes, seconds };
 
    return t;
}