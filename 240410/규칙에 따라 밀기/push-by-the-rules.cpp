#include <iostream>
#include<string>
#include<deque>

using namespace std;

int main() {
    string A;
    cin >> A;

    string cmd;
    cin >> cmd;

    deque<char> d;

    for(int i=0;i<A.size();i++){
        d.push_back(A[i]);
    }

    for(int i=0; i<cmd.size();i++){
        if(cmd[i] == 'L'){
            d.push_back(d.front());
            d.pop_front();
        }
        else if(cmd[i] == 'R'){
            d.push_front(d.back());
            d.pop_back();
        }
    }

    for(int i=0;i<d.size();i++){
        cout << d[i];
    }
    return 0;
}