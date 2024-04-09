#include <iostream>
#include<vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v;

    for(int i=0;i<n;i++){
        int num;
        cin >> num;
        v.push_back(num);
    }

    int result = 999;

    for(int i=1;i<v.size();i++){
        result = min(result, v[i]-v[i-1]);
    }
    cout << result;
    return 0;
}