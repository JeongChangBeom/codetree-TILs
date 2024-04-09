#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        for(int j=n-1;j>i;j--){
            cout << " ";
        }
        for(int j=0;j<2*i+1;j++){
            if(j%2!=0){
                cout << " ";
            }
            else{
                cout << "*";
            }
        }
        cout << '\n';
    }

    for(int i=0;i<n-1;i++){
        for(int j=0;j<i;j++){
            cout << " ";
        }
        for(int j=2*n-1;j>2*i;j--){
            if(j%2!=0){
                cout << " ";
            }
            else{
                cout << "*";
            }
        }
        cout << '\n';
    }
    return 0;
}