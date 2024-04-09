#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int start = 1;

    for(int i=0;i<n;i++){
        for(int j=n;j>0;j--){
            cout << j*start << " ";
        }
        start++;
        cout << '\n';
    }
    return 0;
}