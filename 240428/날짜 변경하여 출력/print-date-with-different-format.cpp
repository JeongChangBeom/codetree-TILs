#include <iostream>

using namespace std;

int main() {
    string str;
    cin >> str;

    string year;
    string month;
    string day;

    int i=0;

    for(i;i<str.size();i++){
        if(str[i] == '.'){
            i++;
            break;
        }
        year += str[i];
    }
     for(i;i<str.size();i++){
        if(str[i] == '.'){
            i++;
            break;
        }
        month += str[i];
    }
     for(i;i<str.size();i++){
        day += str[i];
    }

    cout << month << "-" << day << "-" << year;

    return 0;
}