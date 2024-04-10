#include <iostream>

using namespace std;

int arr[10][10];

int main() {
    int n;
    cin >> n;

    for(int i=0;i<n;i++){
        arr[i][0] = 1;
        arr[0][i] = 1;
    }

    for(int i=1;i<n;i++){
        for(int j=1;j<n;j++){
            arr[i][j] = arr[i-1][j] + arr[i][j-1] + arr[i-1][j-1];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << arr[i][j] << " ";
        }
        cout << '\n';
    }

    return 0;
}