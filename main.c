#include <stdio.h>
#include <unistd.h>
#include <time.h>
#include <stdbool.h>


int main(){

    time_t rawtime = 0; // Start time Jan 1 1970 (Unix Epoch 00:00:00 UTC)
    struct tm *pTime = NULL;


    printf("Digi Clock\n");
    while(1){

        time(&rawtime);
        pTime = localtime(&rawtime); //returns pointer to time struct

        printf("\r%02d:%02d:%02d", pTime->tm_hour, pTime->tm_min, pTime->tm_sec); // -> derefs pTime for us so no (*pointer)
        fflush(stdout);

        sleep(1);
    }


    return 0;
}