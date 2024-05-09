#include <iostream>

using namespace std;

int main() {
    double left, right;
    cin >> left >> right;

    if(left>=1.0 && right >=1.0){
        cout << "High";
    }
    else if(left < 0.5 && right < 0.5){
        cout << "Low";
    }
    else{
        cout << "Middle";
    }
    return 0;
}