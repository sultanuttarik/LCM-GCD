#include<stdio.h>

int findLCM(int a, int b, int c) {
    int x = (a > b) ? a : b;
    x = (x > c) ? x : c;
    while (1) {
        if (x % a == 0 && x % b == 0 && x % c == 0) {
            return x;
        } else {
            x++;
        }
    }
}

int main() {
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    int lcm = findLCM(a, b, c);
    printf("LCM = %d", lcm);
    return 0;
}
