#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int count = 0;
    int check = 0;

    for(int i=0;i<n;i++){
        int num;
        cin >> num;
        count++;
        if(num == 2){
            check++;
        }
        if(check == 3){
            cout << count;
            break;
        }
    }
    return 0;
}