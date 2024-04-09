#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;

    char alpha = 'A';

    for(int i=1;i<=N;i++){
        for(int j=1;j<=N;j++){
            if(i<=j){
                cout << alpha << " ";
                alpha++;
                if(alpha > 'Z'){
                    alpha == 'A';
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