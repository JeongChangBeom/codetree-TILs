#include <iostream>

using namespace std;

int main() {
    cout << fixed;
    cout.precision(1);

    float ft = 30.48;

    float n;
    cin >> n;

    cout << n*ft;
    return 0;
}