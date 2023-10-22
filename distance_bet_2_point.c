#include <stdio.h>
#include <math.h>

int main() {
    double x1, y1, x2, y2;
    
    printf("Enter the coordinates of the first point (x1 y1): ");
    scanf("%lf %lf", &x1, &y1);
    
    printf("Enter the coordinates of the second point (x2 y2): ");
    scanf("%lf %lf", &x2, &y2);
    
    // Calculate the distance
    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    
    printf("The distance between (%.2lf, %.2lf) and (%.2lf, %.2lf) is %.2lf\n", x1, y1, x2, y2, distance);
    
    return 0;
}
