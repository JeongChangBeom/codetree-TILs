#include <iostream>

using namespace std;

int main() {
    int a = 1;
    int b = 2;
    int c = 3;
    int sum = a+b+c;
    a = sum;
    b = sum;
    c = sum;
    cout << a << ' ' << b << ' ' << c;
    return 0;
}