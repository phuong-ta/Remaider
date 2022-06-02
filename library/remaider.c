#include <stdio.h>
#include <stdlib.h>
#include "currentTime.c"
 
// Return multiple values from a function in C
int remaider(void)
{
    int h, m,s, hR, mR;
    int conditional =1;
    while (1){
        system("clear");
        struct TuplePhuong t = getCurrentTime();
        h = t.hour;
        m = t.minute;
        s = t.second;
        printf("%d: %d: %d \n", h, m , s);
        fflush(stdout);
        if (conditional==1){
            printf("Set hours!");
            scanf("%d", &hR);
            printf("Set minuute!");
            scanf("%d", &mR);
            conditional=0;
        }
        if (hR==h && mR == m){
        printf("remaider!!!!\n");
    }
        system("sleep 1"); 
    }
    
 


    
    return 0;
}
/*
            if (conditional==1){
            printf("Set hours!");
            scanf("%d", &hR);
            printf("Set minuute!");
            scanf("%d", &mR);
            conditional=0;
        }
        if (hR==h && mR == m){
        printf("remaider!!!!");
    }
*/
