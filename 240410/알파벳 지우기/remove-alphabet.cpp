#include <iostream>
#include<string>

using namespace std;

int main() {
    string str1, str2;
    cin >> str1 >> str2;

    string x, y;

    for (int i = 0; i < str1.size(); i++) {
        if ((str1[i] >= 'a' && str1[i] <= 'z') || (str1[i] >= 'A' && str1[i] <= 'Z')) {
            continue;
        }
        else {
            x += str1[i];
        }
    }
    for (int i = 0; i < str2.size(); i++) {
        if ((str2[i] >= 'a' && str2[i] <= 'z') || (str2[i] >= 'A' && str2[i] <= 'Z')) {
            continue;
        }
        else {
            y += str2[i];
        }
    }

    cout << stoi(x) + stoi(y);
    return 0;
}