#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;
    for(int i=0;i<N;i++){
        int num;
        cin >> num;

        if(num%2!=0 && num%3 ==0){
            cout << num << '\n';
        }
    }
    return 0;
}