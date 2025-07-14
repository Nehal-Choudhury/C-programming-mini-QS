Question: Create a program that displays the current time and updates every second.

--- SOLUTION ---
#include <stdio.h>
#include <time.h>
#include <unistd.h> // For sleep() in Unix/Linux/macOS
// #include <windows.h> // For Sleep() in Windows

int main() {
    int hour, minute, second;
    
    while(1) {
        time_t now = time(0);
        struct tm *local = localtime(&now);
        
        hour = local->tm_hour;
        minute = local->tm_min;
        second = local->tm_sec;
        
        printf("\r%02d:%02d:%02d", hour, minute, second);
        fflush(stdout);
        
        sleep(1);
    }

    return 0;
}