#include<stdio.h>

int findLCM(int a, int b, int c, int d, int e) {
    int x = (a > b) ? a : b;
    x = (x > c) ? x : c;
    x = (x > d) ? x : d;
    x = (x > e) ? x : e;
    while (1) {
        if (x % a == 0 && x % b == 0 && x % c == 0 && x % d == 0 && x % e == 0) {
            return x;
        } else {
            x++;
        }
    }
}

int main() {
    int a, b, c, d, e;
    printf("Enter five numbers: ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    int lcm = findLCM(a, b, c, d, e);
    printf("LCM = %d", lcm);
    return 0;
}
