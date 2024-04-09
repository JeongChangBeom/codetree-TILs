#include <iostream>

using namespace std;

int arr[4] = {2,4,6,8};

int main() {
    int a,b;
    cin >> a >> b;
    
    for(int i=0;i<4;i++){
        for(int j=b;j>=a;j--){
            cout << j << " * " << arr[i] << " = " << j*arr[i];
            if(j!=a){
                cout << " / ";
            }
        }
        cout << '\n';
    }
    return 0;
}