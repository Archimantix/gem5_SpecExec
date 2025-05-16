#include <stdio.h>

int main() {
    int mainChoice, lightChoice, temp;
    char room;

    // Simulate input
    mainChoice = 1;  // You can change this value to test different branches

    if (mainChoice == 1) {
        room = 'A';  // Simulated input for room

        if (room == 'A' || room == 'a') {
            lightChoice = 1;  // Simulated input
            if (lightChoice == 1) {
                // Room A lights turned ON
            } else if (lightChoice == 2) {
                // Room A lights turned OFF
            } else {
                // Invalid light choice
            }
        } else if (room == 'B' || room == 'b') {
            lightChoice = 2;
            if (lightChoice == 1) {
                // Room B lights turned ON
            } else if (lightChoice == 2) {
                // Room B lights turned OFF
            } else {
                // Invalid light choice
            }
        } else if (room == 'C' || room == 'c') {
            lightChoice = 3;
            if (lightChoice == 1) {
                // Room C lights turned ON
            } else if (lightChoice == 2) {
                // Room C lights turned OFF
            } else {
                // Invalid light choice
            }
        } else {
            // Invalid room selected
        }

    } else if (mainChoice == 2) {
        temp = 30;  // Simulated temperature

        if (temp < 10) {
            // It's very cold. Turn on heater
        } else if (temp >= 10 && temp < 25) {
            // Temperature is comfortable
        } else if (temp >= 25 && temp < 35) {
            // It's warm. Turn on fan
        } else {
            // It's hot! Turn on AC
        }

    } else if (mainChoice == 3) {
        int alarmType = 2;  // Simulated input
        switch (alarmType) {
            case 1:
                // Intrusion alarm armed
                break;
            case 2:
                // Fire alarm armed
                break;
            case 3:
                // Medical alert system armed
                break;
            default:
                // Invalid alarm type selected
                break;
        }
    } else if (mainChoice == 4) {
        // Exiting system
    } else {
        // Invalid main menu choice
    }

    return 0;
}
