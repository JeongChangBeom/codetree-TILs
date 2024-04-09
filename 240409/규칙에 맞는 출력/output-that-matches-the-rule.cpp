#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;

    for(int i=N;i>0;i--){
        for(int j=i;j<=N;j++){
            cout << j << " ";
        }
        cout << '\n';
    }

    return 0;
}