#include <iostream>
#include <string>

using namespace std;

int main() {
    string s,t;
    cin >> s >> t;

    string temp;
    temp = t;
    t = s;
    s = temp;

    cout << s << '\n' << t;
    return 0;
}