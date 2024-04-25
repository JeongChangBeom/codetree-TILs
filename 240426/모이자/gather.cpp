#include <iostream>
#include<vector>
#include<algorithm>
#include<cmath>

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

    int standard = 0;
    vector<int> result;

    for(int i=0;i<v.size();i++){
        int sum = 0;
        for(int j=0;j<v.size();j++){
            sum += v[j]*abs(i-j);
        }
        result.push_back(sum);
    }

    cout << *min_element(result.begin(),result.end());

    return 0;
}