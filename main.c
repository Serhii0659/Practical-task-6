#include <stdio.h>
#include <conio.h>
#include <math.h>

float vectorLength (float x1,float y1,float x2,float y2) {
    float x = x2 - x1;
    float y = y2 - y1;
    float result = sqrt(pow(x,2) + pow (y,2));
    return result;
}

int main () {
    float x1, y1, x2, y2;
    printf("Enter the coordinates of the points of the vector (x1 y1 x2 y2): ");
    scanf ("%f %f %f %f", &x1, &y1, &x2, &y2);
    printf ("The length of the vector = %.6f\n", vectorLength(x1, y1, x2, y2));

    printf ("Press any key to exit the program.");
    getch();
    return 0;
}