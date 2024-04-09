#include <iostream>

using namespace std;

int arr[9] = {1,2,3,4,5,6,7,8,9};

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