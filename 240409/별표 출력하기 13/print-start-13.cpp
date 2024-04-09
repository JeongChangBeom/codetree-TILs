#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int start = 1;
    int end = n;

    if(n==1){
        cout << "*" << '\n' << "*";
        return 0;
    }

    for(int i=0;i<n;i++){
        cout << "*" << " ";
    }
    cout << '\n';

    for(int i=0;i<n;i++){
        for(int j=0;j<start;j++){
            cout << "*" << " ";
        }
        start++;
        cout << '\n';

        for(int j=end-1;j>0;j--){
            cout << "*" << " ";
        }
        end--;
        cout << '\n';
    }
    return 0;
}