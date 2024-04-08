#include <iostream>

using namespace std;

int main() {
    int a = 5;
    int b = 6;
    int c = 7;
    int temp1 , temp2;
    temp1 = b;
    temp2 = c;

    b = a;
    c = temp1;
    a = temp2;

    cout << a  << '\n' << b << '\n' << c;

    return 0;
}