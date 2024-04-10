#include <iostream>
#include<vector>

using namespace std;

int main() {
    string str1;
    getline(cin,str1);

    string result;

    for(int i=0;i<str1.size();i++){
        if(str1[i] == ' '){
            continue;
        }
        else{
            result += str1[i];
        }
    }

    string str2;
    getline(cin,str2);

    for(int i=0;i<str2.size();i++){
        if(str2[i] == ' '){
            continue;
        }
        else{
            result += str2[i];
        }
    }

    cout << result;
    return 0;
}