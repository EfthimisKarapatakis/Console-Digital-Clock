#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <stdlib.h>

// Platform-specific clear screen function
void clear_screen() {
    #ifdef _WIN32
        system("cls");  // Windows
    #else
        system("clear");  // Linux and macOS
    #endif
}

int main() {
    int hour, minute, second;

    hour = minute = second = 0;

    while (1) {
        clear_screen();  // Clear the screen using the platform-specific function
        printf("%02d : %02d : %02d\n", hour, minute, second);
        fflush(stdout);
        second++;

        if (second == 60) {
            minute++;
            second = 0;
        }

        if (minute == 60) {
            hour++;
            minute = 0;
        }

        if (hour == 24) {
            hour = 0;
            minute = 0;
            second = 0;
        }

        sleep(1);  // Wait for 1 second
    }

    return 0;
}
