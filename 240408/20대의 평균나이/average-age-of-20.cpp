#include <iostream>

using namespace std;

int main() {
    cout << fixed;
    cout.precision(2);

    int sum = 0;
    int count = 0;
    int age;

    while(true){
        cin >> age;
        if(age>=20 && age<30){
            sum += age;
            count++;
        }
        else{
            break;
        }
    }
    cout << (float)sum/count;
    return 0;
}