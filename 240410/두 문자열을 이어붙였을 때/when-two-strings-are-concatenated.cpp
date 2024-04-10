#include <iostream>
#include<string>

using namespace std;

int main() {
    string A, B;
    cin >> A >> B;

    string C;

    int check = true;

    for (int i = 0; i < A.size(); i++) {
        C += A[i];
    }
    for (int i = 0; i < B.size(); i++) {
        C += B[i];
    }

    for (int i = 0; i < B.size(); i++) {
        if (C[i] != B[i]) {
            check = false;
        }
    }
    for (int i = B.size(); i < A.size() + B.size(); i++) {
        if (C[i] != A[i-B.size()]) {
            check = false;
        }
    }
    if (check) {
        cout << "true";
    }
    else {
        cout << "false";
    }

    return 0;
}