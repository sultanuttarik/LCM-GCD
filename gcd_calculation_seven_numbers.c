#include<stdio.h>

int main() {
    int a, b, c, d, e, f, g, x;
    
    // Input seven numbers
    printf("Enter seven numbers: ");
    scanf("%d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &g);
    
    // Find the minimum of the seven numbers
    x = (a < b) ? ((a < c) ? ((a < d) ? ((a < e) ? ((a < f) ? ((a < g) ? a : g) : ((f < g) ? f : g)) : ((e < f) ? ((e < g) ? e : g) : ((f < g) ? f : g))) : ((d < e) ? ((d < f) ? ((d < g) ? d : g) : ((f < g) ? f : g)) : ((e < f) ? ((e < g) ? e : g) : ((f < g) ? f : g)))) : ((c < d) ? ((c < e) ? ((c < f) ? ((c < g) ? c : g) : ((f < g) ? f : g)) : ((e < f) ? ((e < g) ? e : g) : ((f < g) ? f : g))) : ((d < e) ? ((d < f) ? ((d < g) ? d : g) : ((f < g) ? f : g)) : ((e < f) ? ((e < g) ? e : g) : ((f < g) ? f : g)))) : ((b < c) ? ((b < d) ? ((b < e) ? ((b < f) ? ((b < g) ? b : g) : ((f < g) ? f : g)) : ((e < f) ? ((e < g) ? e : g) : ((f < g) ? f : g))) : ((d < e) ? ((d < f) ? ((d < g) ? d : g) : ((f < g) ? f : g)) : ((e < f) ? ((e < g) ? e : g) : ((f < g) ? f : g)))) : ((c < d) ? ((c < e) ? ((c < f) ? ((c < g) ? c : g) : ((f < g) ? f : g)) : ((e < f) ? ((e < g) ? e : g) : ((f < g) ? f : g))) : ((d < e) ? ((d < f) ? ((d < g) ? d : g) : ((f < g) ? f : g)) : ((e < f) ? ((e < g) ? e : g) : ((f < g) ? f : g)))));
    
    // Loop to find the GCD
    while (1) {
        if (a % x == 0 && b % x == 0 && c % x == 0 && d % x == 0 && e % x == 0 && f % x == 0 && g % x == 0) {
            printf("GCD = %d", x);
            break;
        } else {
            x--;
        }
    }
    
    return 0; 
}
