#include <iostream>
#include<string>
#include<deque>

using namespace std;

bool compare(deque<char> x, deque<char> y) {
    bool check = true;

    for (int i = 0; i < x.size(); i++) {
        if (x[i] != y[i]) {
            check = false;
        }
    }
    return check;
}

int main() {
    string A, B;
    cin >> A >> B;

    deque<char> d_A;
    deque<char> d_B;

    for (int i = 0; i < A.size(); i++) {
        d_A.push_back(A[i]);
    }
    for (int i = 0; i < B.size(); i++) {
        d_B.push_back(B[i]);
    }

    int result = 0;
    bool chk = false;

    for (int i = 0; i < d_A.size(); i++) {
        if (compare(d_A, d_B)) {
            chk = true;
            break;
        }
        else {
            d_A.push_front(d_A.back());
            d_A.pop_back();
            result++;
        }
    }

    if (chk) {
        cout << result;
    }
    else {
        cout << "-1";
    }

    return 0;
}