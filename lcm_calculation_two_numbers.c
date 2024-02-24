#include<stdio.h>

int findLCM(int a, int b) {
    int x = (a > b) ? a : b;
    while (1) {
        if (x % a == 0 && x % b == 0) {
            return x;
        } else {
            x++;
        }
    }
}

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    int lcm = findLCM(a, b);
    printf("LCM = %d", lcm);
    return 0;
}
