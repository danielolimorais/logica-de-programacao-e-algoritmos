#include<stdio.h>

int main() {
    float h; // Time in hours
    int m;   // Whole minutes
    float s; // Seconds

    printf("Enter time in hours: ");
    scanf("%f", &h);

    m = (int)(h * 60);        // Convert hours to whole minutes
    s = (h * 3600) - (m * 60); // Convert the remaining fractional part to seconds

    printf("Time converted is %d minutes and %.2f seconds\n", m, s);

    return 0;
}