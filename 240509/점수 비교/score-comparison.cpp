#include <iostream>

using namespace std;

int main() {
    int A_M, A_E;
    cin >> A_M >> A_E;

    int B_M, B_E;
    cin >> B_M >> B_E;

    if(A_M > B_M && A_E > B_E){
        cout << 1;
    }
    else{
        cout << 0;
    }
    return 0;
}