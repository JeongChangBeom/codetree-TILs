#include <iostream>

using namespace std;

int main() {
    int a,b,c;
    cin >> a >> b >> c;

    int min = (a < b ? a : b) < c ? (a < b ? a : b) : c;

    cout << min;

    return 0;
}