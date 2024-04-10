#include <iostream>
#include<string>

using namespace std;

int main() {
    string A,B;
    cin >> A >> B;

    int count = 0;

    for(int i=0;i<A.size()-B.size()+1;i++){
        if(A.substr(i,B.size()) == B){
            count++;
        }
    }

    cout << count;

    return 0;
}