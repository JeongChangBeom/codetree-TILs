#include <iostream>

using namespace std;

int main() {
    bool check = false;

    for(int i=0;i<2;i++){
        int age;
        char sex;
        cin >> age >> sex;

        if(age >= 19 && sex == 'M'){
            check = true;
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