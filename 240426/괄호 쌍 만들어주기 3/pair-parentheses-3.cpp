#include <iostream>

using namespace std;

int main() {
    string str;
    cin >> str;

    int result = 0;

    for(int i=0;i<str.size()-1;i++){
        int count = 0;
        if(str[i] == '('){
           for(int j=i+1;j<str.size();j++){
                if(str[j] == ')'){
                    count++;
                }
           }
        }
        result += count; 
    }

    cout << result;

    return 0;
}