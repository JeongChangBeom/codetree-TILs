#include <iostream>
#include <string>

using namespace std;

int main() {
    string number;
    cin >> number;

    string middle = number.substr(4,4);
    string last = number.substr(9,4);

    cout << "010-" << last << "-" << middle;
    return 0;
}