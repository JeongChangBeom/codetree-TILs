#include <iostream>

using namespace std;

int main() {
    int a,b,c;
    cin >> a >> b >> c;

    cout << a+b+c << '\n';
    cout << (a+b+c)/3 << '\n';
    cout << (a+b+c) - ((a+b+c)/3);
    return 0;
}