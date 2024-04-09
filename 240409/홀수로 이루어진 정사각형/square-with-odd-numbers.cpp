#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int start = 11;
    for(int i=0;i<n;i++){
        for(int j=0;j<2*n;j+=2){
            cout << start+j << " ";
        }
        start += 2;
        cout << '\n';
    }
    return 0;
}