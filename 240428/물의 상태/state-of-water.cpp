#include <iostream>

using namespace std;

int main() {
    int tem;
    cin >> tem;

    if(tem < 0){
        cout << "ice";
    }
    else if(tem >= 100){
        cout << "vapor";
    }
    else{
        cout << "water";
    }
    return 0;
}