#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    cin >> str;

    int i=0;

    string hour;
    string minute;

    for(i;i<str.size();i++){
        hour += str[i];

        if(str[i] == ':'){
            i++;
            break;
        } 
    }

    for(i;i<str.size();i++){
        minute += str[i];
    }

    int h = stoi(hour);
    h++;

    cout << h << ":" << minute;

    return 0;
}