#include <iostream>
#include<string>

using namespace std;

int main() {
    string str;
    cin >> str;

    for(int i=0;i<str.size();i++){
        if(str[i] >= 'A' && str[i] <= 'Z'){
            str[i] = tolower(str[i]);
        }
        else if(str[i] >= 'a' && str[i] <= 'z'){
            str[i] = toupper(str[i]);
        }
    }

    cout << str;

    return 0;
}