#include <iostream>

using namespace std;

int main() {
    int book = 3000;
    int mask = 1000;
    int pen = 500;

    int n;
    cin >> n;
    
    if(n >= book){
        cout << "book";
    }
    else if(n<book && n>=mask){
        cout << "mask";
    }
    else if(n<mask && n>=pen){
        cout << "pen";
    }
    else{
        cout << "no";
    }
    return 0;
}