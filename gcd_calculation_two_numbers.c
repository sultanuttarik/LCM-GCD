#include<stdio.h>

int main() {
    int a, b, x;
    
    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    
    // Find the minimum of the two numbers
    x = (a < b) ? a : b;
    
    // Loop to find the GCD
    while (1) {
        if (a % x == 0 && b % x == 0) {
            printf("GCD = %d", x);
            break;
        } else {
            x--;
        }
    }
    
    return 0; 
}
