#include <iostream>

using namespace std;

int main() {
    cout << fixed;
    cout.precision(3);

    float a,b,c;
    cin >> a >> b >> c;
    cout << a << '\n' << b << '\n' << c;
    return 0;
}