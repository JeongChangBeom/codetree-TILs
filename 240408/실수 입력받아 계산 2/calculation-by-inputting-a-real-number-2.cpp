#include <iostream>

using namespace std;

int main() {
    cout << fixed;
    cout.precision(2);

    float a;
    cin >> a;
    cout << a*1.5;
    return 0;
}