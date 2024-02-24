#include<stdio.h>

int main() {
    int a, b, c, d, e, x;
    
    // Input five numbers
    printf("Enter five numbers: ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    
    // Find the minimum of the five numbers
    x = (a < b) ? ((a < c) ? ((a < d) ? ((a < e) ? a : e) : ((d < e) ? d : e)) : ((c < d) ? ((c < e) ? c : e) : ((d < e) ? d : e))) : ((b < c) ? ((b < d) ? ((b < e) ? b : e) : ((d < e) ? d : e)) : ((c < d) ? ((c < e) ? c : e) : ((d < e) ? d : e)));
    
    // Loop to find the GCD
    while (1) {
        if (a % x == 0 && b % x == 0 && c % x == 0 && d % x == 0 && e % x == 0) {
            printf("GCD = %d", x);
            break;
        } else {
            x--;
        }
    }
    
    return 0; 
}
