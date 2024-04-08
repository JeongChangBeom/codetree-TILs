#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i=0;i<2;i++){
        for(int j=0;j<n;j++){
            for(int k=0;k<n;k++){
                cout << '*';
            }
            cout << '\n';
        }
        cout << '\n';
    }
    return 0;
}