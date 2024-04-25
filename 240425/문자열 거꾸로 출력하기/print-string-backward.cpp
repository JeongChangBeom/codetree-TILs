#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    while(true){
        string str;
        cin >> str;

        if(str == "END"){
            break;
        }

        reverse(str.begin(),str.end());

        cout << str << '\n';
    }
    return 0;
}