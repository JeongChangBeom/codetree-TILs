#include <iostream>

using namespace std;

int main() {
    int a,b,c;
    cin >> a >> b >> c;

    int min = std::min(a,std::min(b,c));

    if(a == min){
        cout << 1 << " ";
    }
    else{
        cout << 0 << " ";
    }

    if(a == b && b == c && c == a){
        cout << 1;
    }
    else{
        cout << 0;
    }
    return 0;
}