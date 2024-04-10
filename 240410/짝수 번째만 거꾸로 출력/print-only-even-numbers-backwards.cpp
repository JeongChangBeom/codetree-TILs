#include <iostream>
#include<string>
#include<vector>

using namespace std;

int main() {
    string str;
    cin >> str;

    vector<char> v;

    for(int i=0;i<str.size();i++){
        if(i%2!=0){
            v.push_back(str[i]);
        }
    }

    for(int i=0;i<v.size();i++){
        cout << v[v.size()-i-1];
    }

    return 0;
}