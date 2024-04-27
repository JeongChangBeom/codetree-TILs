#include <iostream>

using namespace std;

int main() {
    string str;
    cin >> str;

    string result;

    for(int i=0;i<str.size();i++){
        if(str[i] == '-'){
            continue;
        }
        else{
            result += str[i];
        }
    }

    cout << result;

    return 0;
}