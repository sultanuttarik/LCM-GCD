#include<stdio.h>

int main() {
    int a, b, c, x;
    
    // Input three numbers
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    
    // Find the minimum of the three numbers
    x = (a < b) ? ((a < c) ? a : c) : ((b < c) ? b : c);
    
    // Loop to find the GCD
    while (1) {
        if (a % x == 0 && b % x == 0 && c % x == 0) {
            printf("GCD = %d", x);
            break;
        } else {
            x--;
        }
    }
    
    return 0; 
}
