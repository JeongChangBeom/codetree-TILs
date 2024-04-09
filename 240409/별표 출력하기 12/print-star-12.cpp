#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i=0;i<n;i++){
        if(i==0){
            for(int j=0;j<n;j++){
                cout << "*" << " ";
            }
        }
        else{
            for(int j=0;j<n;j++){
                if(j%2==0 && j<i){
                    cout << " " << " ";
                }
                else{
                    cout << "*" << " ";
                }
            }
        }
        cout << '\n';
    }
    return 0;
}