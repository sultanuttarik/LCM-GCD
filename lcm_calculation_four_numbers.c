#include<stdio.h>

int findLCM(int a, int b, int c, int d) {
    int x = (a > b) ? a : b;
    x = (x > c) ? x : c;
    x = (x > d) ? x : d;
    while (1) {
        if (x % a == 0 && x % b == 0 && x % c == 0 && x % d == 0) {
            return x;
        } else {
            x++;
        }
    }
}

int main() {
    int a, b, c, d;
    printf("Enter four numbers: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int lcm = findLCM(a, b, c, d);
    printf("LCM = %d", lcm);
    return 0;
}
