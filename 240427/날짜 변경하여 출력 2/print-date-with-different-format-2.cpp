#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    cin >> str;

    int i=0;

    string year;
    string month;
    string day;

    for(i;i<str.size();i++){
        if(str[i] == '-'){
            i++;
            break;
        }
         month += str[i];
 
    }

    for(i;i<str.size();i++){
        if(str[i] == '-'){
            i++;
            break;
        } 
         day += str[i];
    }

    for(i;i<str.size();i++){
        year += str[i];
    }


    cout << year << "." << month << "." << day;

    return 0;
}