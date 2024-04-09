#include <iostream>

using namespace std;

int arr[10][10];

int main() {
    int n;
    cin >> n;

    int start = 1;

    if(n%2==0){
        for(int i=n;i>0;i--){
        if(i%2==0){
            for(int j=n;j>0;j--){
                arr[j][i] = start;
                start++;
            }
        }
        else{
            for(int j=1;j<=n;j++){
                arr[j][i] = start;
                start++;
            }
        }
    }
    }
    else{
        for(int i=n;i>0;i--){
        if(i%2==0){
            for(int j=1;j<=n;j++){
                arr[j][i] = start;
                start++;
            }
        }
        else{
            for(int j=n;j>0;j--){
                arr[j][i] = start;
                start++;
            }
        }
    }
    }
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout << arr[i][j] << " ";
        }
        cout << '\n';
    }
    return 0;
}