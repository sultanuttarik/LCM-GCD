// For 2 numbers
#include<stdio.h>

int findGCD(int a, int b) {
    int temp;
    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    int gcd = findGCD(a, b);
    printf("GCD = %d", gcd);
    return 0;
}

// For 3 numbers
#include<stdio.h>

int findGCD(int a, int b, int c) {
    int gcd = findGCD(a, b);
    gcd = findGCD(gcd, c);
    return gcd;
}

int main() {
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    int gcd = findGCD(a, b, c);
    printf("GCD = %d", gcd);
    return 0;
}

// For 4 numbers
#include<stdio.h>

int findGCD(int a, int b, int c, int d) {
    int gcd = findGCD(a, b);
    gcd = findGCD(gcd, c);
    gcd = findGCD(gcd, d);
    return gcd;
}

int main() {
    int a, b, c, d;
    printf("Enter four numbers: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int gcd = findGCD(a, b, c, d);
    printf("GCD = %d", gcd);
    return 0;
}

// For 5 numbers
#include<stdio.h>

int findGCD(int a, int b, int c, int d, int e) {
    int gcd = findGCD(a, b, c);
    gcd = findGCD(gcd, d);
    gcd = findGCD(gcd, e);
    return gcd;
}

int main() {
    int a, b, c, d, e;
    printf("Enter five numbers: ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    int gcd = findGCD(a, b, c, d, e);
    printf("GCD = %d", gcd);
    return 0;
}

// For 6 numbers
#include<stdio.h>

int findGCD(int a, int b, int c, int d, int e, int f) {
    int gcd = findGCD(a, b, c);
    gcd = findGCD(gcd, d);
    gcd = findGCD(gcd, e);
    gcd = findGCD(gcd, f);
    return gcd;
}

int main() {
    int a, b, c, d, e, f;
    printf("Enter six numbers: ");
    scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);
    int gcd = findGCD(a, b, c, d, e, f);
    printf("GCD = %d", gcd);
    return 0;
}

// For 7 numbers
#include<stdio.h>

int findGCD(int a, int b, int c, int d, int e, int f, int g) {
    int gcd = findGCD(a, b, c);
    gcd = findGCD(gcd, d);
    gcd = findGCD(gcd, e);
    gcd = findGCD(gcd, f);
    gcd = findGCD(gcd, g);
    return gcd;
}

int main() {
    int a, b, c, d, e, f, g;
    printf("Enter seven numbers: ");
    scanf("%d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &g);
    int gcd = findGCD(a, b, c, d, e, f, g);
    printf("GCD = %d", gcd);
    return 0;
}
