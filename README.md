# ⏰ Console Digital Clock (C)
This is a simple C program that functions as a digital clock in the terminal. The program continuously displays time in the format HH:MM:SS and updates every second. It clears the screen before printing each new time value, ensuring the appearance of a dynamic clock.

## Features:
* Displays time in HH:MM:SS format.
* Automatically updates the time every second.
* Cross-platform support for clearing the screen (compatible with Windows, Linux, and macOS).
* Resets the clock after reaching 24 hours (00:00:00).
## How It Works:
* The program uses a loop to increment the seconds, minutes, and hours as time progresses.
* A sleep(1) function is used to pause the program for 1 second between each update.
* The screen is cleared before each new time display to simulate the effect of a digital clock.
