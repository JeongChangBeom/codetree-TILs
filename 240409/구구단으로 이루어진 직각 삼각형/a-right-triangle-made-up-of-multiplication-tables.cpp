#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int num = 1;

    for(int i=1;i<=n;i++){
        num = 1;
        for(int j=i;j<=n;j++){
            cout << i << " * " << num << " = " << i*num;
            if(j!=n){
                cout << " / ";
            }
            num++;
        }
        cout << '\n';
    }
    return 0;
}