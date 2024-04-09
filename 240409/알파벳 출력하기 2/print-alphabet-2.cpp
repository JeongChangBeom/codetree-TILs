#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;

    char alpha = 'A';

    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(i<=j){
                cout << alpha << " ";
                alpha++;
                if(alpha > 'Z'){
                    alpha = 'A';
                }
            }
            else{
                cout << " " << " ";
            }
        }
        cout <<'\n';
    }
    return 0;
}