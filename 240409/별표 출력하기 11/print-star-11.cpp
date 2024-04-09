#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    for(int i=0;i<2*n+1;i++){
        if(i%2==0){
            for(int j=0;j<2*n+1;j++){
                cout << "*" << " ";
            }
        }
        else{
            for(int j=0;j<2*n+1;j++){
                if(j%2==0){
                    cout << "*" << " ";
                }
                else{
                    cout << " " << " ";
                }
            }
        }
        cout << '\n';
    }
    return 0;
}