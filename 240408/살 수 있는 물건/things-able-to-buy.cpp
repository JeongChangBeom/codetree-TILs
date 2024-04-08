#include <iostream>

using namespace;

int main() {
    int book = 3000;
    int mask = 1000;

    int n;
    cin >> n;
    if(n>book){
        cout << "book";
    }
    else if(n<book && n>mask){
        cout << "mask";
    }
    else{
        cout << "no";
    }
    return 0;
}