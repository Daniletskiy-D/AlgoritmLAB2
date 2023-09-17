#include <iostream>

int gcd(int a, int b) {
    if (a == 0) return b;
    if (b == 0) return a;

    if (a >= b) return gcd(a % b, b);
    if (b >= a) return gcd(a, b % a);
}

int main() {
    int a = 3918848;
    int b = 1653264;

    int result = gcd(a, b);

    std::cout << "мнд(" << a << ", " << b << ") = " << result << std::endl;

    return 0;
}