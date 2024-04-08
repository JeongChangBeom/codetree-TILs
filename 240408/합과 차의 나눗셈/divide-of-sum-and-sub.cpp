#include <iostream>
#include<cmath>

using namespace std;

int main() {
    cout << fixed;
    cout.precision(2);

    float a,b;
    cin >> a >> b;
    cout << (a+b)/(a-b);
    return 0;
}