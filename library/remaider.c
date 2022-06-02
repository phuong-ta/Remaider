#include <stdio.h>
#include <stdlib.h>
#include "currentTime.c"

// struct to get user remain
 struct getRemaider {
    int hours, minutes;
    char name[20];
};

// Return multiple values from a function in C
int remaider(void){
    int h, m,s;
    struct getRemaider gR[2];

    // user give info
    printf("Enter 2 remaiders: \n");
    for (int i = 0; i < 2; i++) {
        printf("Enter content: ");
        scanf("%s", gR[i].name);
        printf("Set hours: ");
        scanf("%d", &gR[i].hours);
        printf("Set minute: ");
        scanf("%d", &gR[i].minutes);
        
    }

    // run clock and remain 
    while (1){
        system("clear");
        // get current time
        struct TuplePhuong t = getCurrentTime();
        h = t.hour;
        m = t.minute;
        s = t.second;
        printf("%d: %d: %d \n", h, m , s);
        fflush(stdout);
        // check remainder        
        for (int i = 0; i < 2; i++) {
            if (gR[i].hours==h && gR[i].minutes == m){
                printf("%s\n",gR[i].name);
            }
        }
        system("sleep 1"); 
}
    return 0;
}
