#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int start = 0;
    while(start < n){
        cout << '*' << '\n';
        start++;
    }
    return 0;
}