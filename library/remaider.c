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
    int h, m,s, n;
    struct getRemaider *ptr;

    // set how many remaider user want
    printf("Enter the number of remaiders: ");
    scanf("%d", &n);
    // allocating memory for n numbers of struct getRemaider
    ptr = (struct getRemaider*) malloc(n * sizeof(struct getRemaider));

    // user give info
    for (int i = 0; i < n; i++) {
        printf("Enter content: ");
        scanf("%s", (ptr+i)->name);
        printf("Set hours: ");
        scanf("%d", &(ptr+i)->hours);
        printf("Set minute: ");
        scanf("%d", &(ptr+i)->minutes);     
    }

    // run clock and remain 
    while (1){
        system("clear");
        // get current time
        struct CurrentTime t = getCurrentTime();
        h = t.hour;
        m = t.minute;
        s = t.second;
        printf("%d: %d: %d \n", h, m , s);
        fflush(stdout);
        // check remainder        
        for (int i = 0; i < 2; i++) {
            if ((ptr+i)->hours==h && (ptr+i)->minutes == m){
                printf("%s\n",(ptr+i)->name);
            }
        }
        system("sleep 1"); 
}
    return 0;
}
