#include<stdio.h>

int main() {
    int a, b, c, d, e, f, x;
    
    // Input six numbers
    printf("Enter six numbers: ");
    scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);
    
    // Find the minimum of the six numbers
    x = (a < b) ? ((a < c) ? ((a < d) ? ((a < e) ? ((a < f) ? a : f) : ((e < f) ? e : f)) : ((d < e) ? ((d < f) ? d : f) : ((e < f) ? e : f))) : ((c < d) ? ((c < e) ? ((c < f) ? c : f) : ((e < f) ? e : f)) : ((d < e) ? ((d < f) ? d : f) : ((e < f) ? e : f)))) : ((b < c) ? ((b < d) ? ((b < e) ? ((b < f) ? b : f) : ((e < f) ? e : f)) : ((d < e) ? ((d < f) ? d : f) : ((e < f) ? e : f))) : ((c < d) ? ((c < e) ? ((c < f) ? c : f) : ((e < f) ? e : f)) : ((d < e) ? ((d < f) ? d : f) : ((e < f) ? e : f))));
    
    // Loop to find the GCD
    while (1) {
        if (a % x == 0 && b % x == 0 && c % x == 0 && d % x == 0 && e % x == 0 && f % x == 0) {
            printf("GCD = %d", x);
            break;
        } else {
            x--;
        }
    }
    
    return 0; 
}
