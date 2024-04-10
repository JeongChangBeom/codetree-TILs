#include <iostream>
#include<string>
#include<vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<string> v;
    int result = 0;
    int sum = 0;

    for(int i=0;i<n;i++){
        string str;
        cin >> str;
        v.push_back(str);
    }

    char c;
    cin >> c;

    for(int i=0;i<v.size();i++){
        if(c==v[i][0]){
            result++;
            sum += v[i].size();
        }
    }

    cout << fixed;
    cout.precision(2);

    cout << result << " " << (float)sum/result;

    return 0;
}