#include <iostream>

using namespace std;

int main() {
    int a,b;
    cin >> a >> b;
    int temp;
    temp = b;
    b = a;
    a = temp;

    cout << a << ' ' << b;
    return 0;
}