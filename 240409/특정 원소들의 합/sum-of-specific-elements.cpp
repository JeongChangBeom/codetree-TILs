#include <iostream>

using namespace std;

int main() {
    int result = 0;

    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            int num;
            cin >> num;
            if(i>=j){
                result += num;
            }
        }
    }
    cout << result;
    return 0;
}