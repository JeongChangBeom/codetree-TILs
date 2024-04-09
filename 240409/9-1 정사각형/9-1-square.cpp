#include <iostream>

using namespace std;

int arr[9] = {9,8,7,6,5,4,3,2,1};

int main() {
    int n;
    cin >> n;
    for(int i=0;i<n*n;i++){
        if(i!=0 && i%n==0){
            cout << '\n';
        }
        cout << arr[i%9];
    }
    return 0;
}