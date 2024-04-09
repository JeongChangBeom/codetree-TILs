#include <iostream>

using namespace std;

int main() {
    int a,b;
    cin >> a >> b;

    int start = 1;

    for(int i=0;i<a;i++){
        for(int j=1;j<=b;j++){
            cout << start*j << " ";
        }
        start++;
        cout << '\n';
    }
    return 0;
}