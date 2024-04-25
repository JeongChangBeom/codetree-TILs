#include <iostream>

using namespace std;

int main() {
    int n;
    string A;
    cin >> n >> A;

    int result = 0;

    for(int i=0;i<n;i++){
        string str;
        cin >> str;

        if(A == str){
            result++;
        }
    }

    cout << result;
    
    return 0;
}