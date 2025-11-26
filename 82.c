#include <stdio.h>

// Simple traffic light enum
enum TrafficLight {RED, YELLOW, GREEN};

int main() {
    enum TrafficLight light;
    
    // Test all three lights
    light = RED;
    printf("Light: RED\n");
    printf("Action: STOP\n\n");
    
    light = YELLOW;
    printf("Light: YELLOW\n");
    printf("Action: WAIT\n\n");
    
    light = GREEN;
    printf("Light: GREEN\n");
    printf("Action: GO\n");
    
    return 0;
}