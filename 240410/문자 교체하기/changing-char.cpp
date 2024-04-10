#include <iostream>
#include<string>

using namespace std;

int main() {
    string str1,str2;
    cin >> str1 >> str2;

    str2[0] = str1[0];
    str2[1] = str1[1];

    cout << str2;

    return 0;
}