#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;

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

    for(int i=1;i<=v.size();i++){
        cout << v[v.size()-i] << " ";
    }

    return 0;
}