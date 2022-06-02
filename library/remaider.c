#include <stdio.h>
#include "currentTime.c"
 
// Return multiple values from a function in C
int remaider(void)
{
    int h, m,s;
    struct TuplePhuong t = getCurrentTime();
    h = t.hour;
    m = t.minute;
    s = t.second;
 
    printf("Hour = %d, Minute = %d, Second = %d\n", h, m, s);
 
    return 0;
}