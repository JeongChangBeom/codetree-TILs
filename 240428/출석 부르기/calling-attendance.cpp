#include <iostream>

using namespace std;

int main() {
    int num;
    cin >> num;
    
    if(num == 1){
        cout << "John";
    }
    else if(num == 2){
        cout << "Tom";
    }
    else if(num == 3){
        cout << "Paul";
    }
    else{
        cout << "Vacancy";
    }
    return 0;
}