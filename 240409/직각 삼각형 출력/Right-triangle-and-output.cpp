#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i=1;i<=n*2;i++){
        if(i%2!=0){
            for(int j=1;j<=i;j++){
                cout << "*";
            }
        }
        else{
            cout << '\n';
        }
    }
    return 0;
}