#include <iostream>

using namespace std;

int main() {
    char alpha;
    cin >> alpha;

    if(alpha == 'S'){
        cout << "Superior";
    }
    else if(alpha == 'A'){
        cout << "Excellent";
    }
    else if(alpha == 'B'){
        cout << "Good";
    }
    else if(alpha == 'C'){
        cout << "Usually";
    }
    else if(alpha == 'D'){
        cout << "Effort";
    }
    else{
        cout << "Failure";
    }

    return 0;
}