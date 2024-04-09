#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool compare(int x, int y){
    return x>y;
}

int main() {
    int n;
    cin >> n;

    vector<int> v;

    for(int i=0;i<n;i++){
        int num;
        cin >> num;
        if(num%2==0){
            v.push_back(num);
        }
    }

    sort(v.begin(),v.end(),compare);

    for(int i=0;i<v.size();i++){
        cout << v[i] << " ";
    }

    return 0;
}