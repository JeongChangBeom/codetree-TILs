#include <iostream>

using namespace std;

int main() {
    int result = 0;
    for(int i=0;i<10;i++){
        int num;
        cin >> num;
        if(num%3==0){
            cout << result;
            break;
        }
        result = num;
    }
    return 0;
}