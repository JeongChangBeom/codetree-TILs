#include <iostream>
#include<string>

using namespace std;

int main() {
    string str;
    cin >> str;

    char first = str[0];
    char second = str[1];

    for(int i=0;i<str.size();i++){
        if(str[i] == second){
            str[i] = first;
        }
    }

    cout << str;

    return 0;
}