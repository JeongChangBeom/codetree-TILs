#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int result;
    int num = 1;

    while(true){
        if(n <= 1){
            break;
        }

        n /= num;
        result++;
        num++;
    }
    cout << result;
    return 0;
}