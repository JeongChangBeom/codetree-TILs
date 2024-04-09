#include <iostream>

using namespace std;

int arr[10];

int main() {
    int a,b;
    cin >> a >> b;
    while(a>1){
        arr[a%b]++;
        a /= b; 
    }

    int result = 0;

    for(int i=0;i<10;i++){
        result += arr[i]*arr[i];
    }

    cout << result;

    return 0;
}