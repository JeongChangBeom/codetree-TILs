#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<string> v;
    int count = 0;

    while(true){
        string str;
        cin >> str;
        
        if(str == "0"){
            break;
        }
        count++;
        if(count%2 != 0){
            v.push_back(str);
        }
    }

    cout << count << '\n';

    for(int i=0;i<v.size();i++){
        cout << v[i] << '\n';
    }

    return 0;
}