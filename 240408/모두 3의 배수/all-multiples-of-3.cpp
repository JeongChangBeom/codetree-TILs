#include <iostream>

using namespace std;

int main() {
    bool check = true;
    for(int i=0;i<5;i++){
        int num;
        cin >> num;
        if(num%3 !=0){
            check = false;
        }
    }
    if(check){
        cout << 1;
    }
    else{
        cout << 0;
    }
    return 0;
}