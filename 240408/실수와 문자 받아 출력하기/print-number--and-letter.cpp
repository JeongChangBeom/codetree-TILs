#include <iostream>

using namespace std;

int main() {
    cout << fixed;
    cout.precision(2);

    char c;
    double a,b;
    cin >> c >> a >> b;

    cout << c << '\n' << a << '\n' << b;
    return 0;
}