#include <iostream>

using namespace std;

int arr1[10][10];
int arr2[10][10];
int arr3[10][10];

int main() {
    int n,m;
    cin >> n >> m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> arr1[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> arr2[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr1[i][j] == arr2[i][j]){
                arr3[i][j] = 0;
            }
            else{
                arr3[i][j] = 1;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout << arr3[i][j] << " ";
        }
        cout << '\n';
    }
    return 0;
}