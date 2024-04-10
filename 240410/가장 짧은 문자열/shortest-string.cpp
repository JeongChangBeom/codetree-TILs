#include <iostream>
#include<vector>
#include<algorithm>
#include<string>

using namespace std;

int main() {
    vector<int> size;

    for(int i=0;i<3;i++){
        string str;
        cin >> str;
        size.push_back(str.size());
    }

    sort(size.begin(),size.end());

    cout << size[size.size()-1]-size[0];

    return 0;
}