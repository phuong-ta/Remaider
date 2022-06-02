#include <stdio.h>
#include <stdlib.h>
#include "currentTime.c"
 
// Return multiple values from a function in C
int remaider(void)
{
    int h, m,s, hR, mR;
    struct TuplePhuong t = getCurrentTime();
    h = t.hour;
    m = t.minute;
    s = t.second;
 
    //printf("Hour = %d, Minute = %d, Second = %d\n", h, m, s);
    printf("Set hours!");
    scanf("%d", &hR);
    printf("Set minuute!");
    scanf("%d", &mR);
    
    if (hR==h && mR == m){
        printf("remaider!!!!");
    }
    
    return 0;
}