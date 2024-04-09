#include <iostream>

using namespace std;

int arr[4] = {2,4,6,8};

int main() {
    int n;
    cin >> n;
    for(int i=0;i<n*n;i++){
        if(i!=0 && i%n==0){
            cout << '\n';
        }
        cout << arr[i%4] << " ";
    }
    return 0;
}