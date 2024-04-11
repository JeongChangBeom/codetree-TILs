#include <iostream>
#include<string>
#include<deque>

using namespace std;

int main() {
    int n;
    cin >> n;

    int sum = 0;

    for(int i=0;i<n;i++){
        int num;
        cin >> num;
        sum += num;
    }

    string sum_str = to_string(sum);
    deque<char> d;

    for(int i=0;i<sum_str.size();i++){
        d.push_back(sum_str[i]);
    }

    d.push_back(d.front());
    d.pop_front();

    for(int i=0;i<d.size();i++){
        cout << d[i];
    }

    return 0;
}