#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int count = n;

    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            cout << "*";
        }
        for(int j=count;j<n;j++){
            cout << " ";
        }
        for(int j=count;j<n;j++){
            cout << " ";
        }
        for(int j=i;j<n;j++){
            cout << "*";
        }
        count--;
        cout << "\n";
    }
    return 0;
}